package main

import (
	"fmt"
	"io/fs"
	"io/ioutil"
	"log"
	"os"
	"path/filepath"
	"strconv"
	"strings"
)

func main() {

	src, err := filepath.Abs(os.Args[2])
	if err != nil {
		panic("UnrealProtoc failed:" + err.Error())
	}
	dst, err := filepath.Abs(os.Args[4])
	if err != nil {
		panic("UnrealProtoc failed:" + err.Error())
	}
	public, err := strconv.ParseBool(os.Args[6])
	if err != nil {
		panic("UnrealProtoc failed:" + err.Error())
	}

	if public {
		err = os.MkdirAll(filepath.Join(dst, "Public"), os.ModePerm)
		if err != nil {
			panic("UnrealProtoc failed:" + err.Error())
		}
		err = os.MkdirAll(filepath.Join(dst, "Private"), os.ModePerm)
		if err != nil {
			panic("UnrealProtoc failed:" + err.Error())
		}
	} else {
		err = os.MkdirAll(dst, os.ModePerm)
		if err != nil {
			panic("UnrealProtoc failed:" + err.Error())
		}
	}

	files, err := ioutil.ReadDir(src)
	if err != nil {
		log.Fatal(err)
	}

	var protocPath = getProtocPath(src)

	recursiveCompile(protocPath, src, dst, public, files)
}

func getProtocPath(src string) string {
	/*ex, err := os.Executable()
	if err != nil {
		panic(err)
	}*/
	dir := filepath.Dir(src)
	if strings.HasSuffix(src, "/") || strings.HasSuffix(src, "\\") {
		dir = filepath.Dir(dir)
	}
	return filepath.Join(dir, "Plugins", "GoogleProtobuf", "Compiler", "Protoc", "Win64", "protoc.exe")
}

func recursiveCompile(protocPath string, src string, dst string, public bool, files []fs.FileInfo) {

	for _, f := range files {
		if f.IsDir() {
			continue
		}
		include := "--proto_path=" + src
		//self_include := "--proto_path=."
		self_include := ""
		cppout := "--cpp_out=dllexport_decl=MY_EXPORT_MACRO:" + dst
		fp := filepath.Join(src, f.Name())
		//$SRC_DIR --cpp_out=$DST_DIR $SRC_DIR/addressbook.proto
		fmt.Println(protocPath, self_include, include, cppout, fp)
		var procAttr os.ProcAttr
		procAttr.Files = []*os.File{os.Stdin, os.Stdout, os.Stderr}

		if public {
			pb := filepath.Join(dst, "Public")
			cppout = "--cpp_out=" + pb
			proc, err := os.StartProcess(protocPath, []string{self_include, include, cppout, fp}, &procAttr)
			if err != nil {
				panic("UnrealProtoc failed to compile " + fp + " error:" + err.Error())
			}
			proc.Wait()
			pvn := strings.Split(f.Name(), ".")[0] + ".pb.cc"
			pbf := filepath.Join(dst, "Public", pvn)
			pvf := filepath.Join(dst, "Private", pvn)
			err = os.Rename(pbf, pvf)
			if err != nil {
				panic("UnrealProtoc failed to compile " + fp + " error:" + err.Error())
			}
		} else {
			proc, err := os.StartProcess(protocPath, []string{self_include, include, cppout, fp}, &procAttr)
			if err != nil {
				panic("UnrealProtoc failed to compile " + fp + " error:" + err.Error())
			}
			proc.Wait()
		}
	}
}
