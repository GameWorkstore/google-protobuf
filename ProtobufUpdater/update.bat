@echo off
set VERSION=3.20.0
set UE_COMPILER_PATH=..\GoogleProtobufUnrealSDK\Plugins\GoogleProtobuf\Compiler\Protoc
REM powershell -command "Expand-Archive protobuf-all-%VERSION%.zip ."
REM cmake -G "Visual Studio 16 2019" -A x64 -BWin64 -Sprotobuf-%VERSION%\cmake -DCMAKE_MSVC_RUNTIME_LIBRARY="MultiThreaded$<$<CONFIG:Debug>:Debug>DLL" -Dprotobuf_BUILD_PROTOC_BINARIES=true -Dprotobuf_BUILD_TESTS=false -Dprotobuf_WITH_ZLIB=false -Dprotobuf_MSVC_STATIC_RUNTIME=false
REM cmake --build win64 --target protoc --config Release
COPY Win64\Release\protoc.exe %UE_COMPILER_PATH%\Win64\