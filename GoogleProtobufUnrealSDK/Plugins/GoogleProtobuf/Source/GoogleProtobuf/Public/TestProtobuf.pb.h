// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TestProtobuf.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_TestProtobuf_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_TestProtobuf_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_TestProtobuf_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_TestProtobuf_2eproto {
  static const uint32_t offsets[];
};
namespace main {
class NewMessege;
struct NewMessegeDefaultTypeInternal;
extern NewMessegeDefaultTypeInternal _NewMessege_default_instance_;
}  // namespace main
PROTOBUF_NAMESPACE_OPEN
template<> ::main::NewMessege* Arena::CreateMaybeMessage<::main::NewMessege>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace main {

// ===================================================================

class NewMessege final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:main.NewMessege) */ {
 public:
  inline NewMessege() : NewMessege(nullptr) {}
  ~NewMessege() override;
  explicit PROTOBUF_CONSTEXPR NewMessege(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NewMessege(const NewMessege& from);
  NewMessege(NewMessege&& from) noexcept
    : NewMessege() {
    *this = ::std::move(from);
  }

  inline NewMessege& operator=(const NewMessege& from) {
    CopyFrom(from);
    return *this;
  }
  inline NewMessege& operator=(NewMessege&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const NewMessege& default_instance() {
    return *internal_default_instance();
  }
  static inline const NewMessege* internal_default_instance() {
    return reinterpret_cast<const NewMessege*>(
               &_NewMessege_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NewMessege& a, NewMessege& b) {
    a.Swap(&b);
  }
  inline void Swap(NewMessege* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(NewMessege* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NewMessege* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NewMessege>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const NewMessege& from);
  void MergeFrom(const NewMessege& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(NewMessege* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "main.NewMessege";
  }
  protected:
  explicit NewMessege(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBoolsFieldNumber = 3,
    kOneStringFieldNumber = 1,
    kOneIntFieldNumber = 2,
  };
  // repeated bool Bools = 3;
  int bools_size() const;
  private:
  int _internal_bools_size() const;
  public:
  void clear_bools();
  private:
  bool _internal_bools(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
      _internal_bools() const;
  void _internal_add_bools(bool value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
      _internal_mutable_bools();
  public:
  bool bools(int index) const;
  void set_bools(int index, bool value);
  void add_bools(bool value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
      bools() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
      mutable_bools();

  // string OneString = 1;
  void clear_onestring();
  const std::string& onestring() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_onestring(ArgT0&& arg0, ArgT... args);
  std::string* mutable_onestring();
  PROTOBUF_NODISCARD std::string* release_onestring();
  void set_allocated_onestring(std::string* onestring);
  private:
  const std::string& _internal_onestring() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_onestring(const std::string& value);
  std::string* _internal_mutable_onestring();
  public:

  // int32 OneInt = 2;
  void clear_oneint();
  int32_t oneint() const;
  void set_oneint(int32_t value);
  private:
  int32_t _internal_oneint() const;
  void _internal_set_oneint(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:main.NewMessege)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool > bools_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr onestring_;
  int32_t oneint_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_TestProtobuf_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NewMessege

// string OneString = 1;
inline void NewMessege::clear_onestring() {
  onestring_.ClearToEmpty();
}
inline const std::string& NewMessege::onestring() const {
  // @@protoc_insertion_point(field_get:main.NewMessege.OneString)
  return _internal_onestring();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void NewMessege::set_onestring(ArgT0&& arg0, ArgT... args) {
 
 onestring_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:main.NewMessege.OneString)
}
inline std::string* NewMessege::mutable_onestring() {
  std::string* _s = _internal_mutable_onestring();
  // @@protoc_insertion_point(field_mutable:main.NewMessege.OneString)
  return _s;
}
inline const std::string& NewMessege::_internal_onestring() const {
  return onestring_.Get();
}
inline void NewMessege::_internal_set_onestring(const std::string& value) {
  
  onestring_.Set(value, GetArenaForAllocation());
}
inline std::string* NewMessege::_internal_mutable_onestring() {
  
  return onestring_.Mutable(GetArenaForAllocation());
}
inline std::string* NewMessege::release_onestring() {
  // @@protoc_insertion_point(field_release:main.NewMessege.OneString)
  return onestring_.Release();
}
inline void NewMessege::set_allocated_onestring(std::string* onestring) {
  if (onestring != nullptr) {
    
  } else {
    
  }
  onestring_.SetAllocated(onestring, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (onestring_.IsDefault()) {
    onestring_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:main.NewMessege.OneString)
}

// int32 OneInt = 2;
inline void NewMessege::clear_oneint() {
  oneint_ = 0;
}
inline int32_t NewMessege::_internal_oneint() const {
  return oneint_;
}
inline int32_t NewMessege::oneint() const {
  // @@protoc_insertion_point(field_get:main.NewMessege.OneInt)
  return _internal_oneint();
}
inline void NewMessege::_internal_set_oneint(int32_t value) {
  
  oneint_ = value;
}
inline void NewMessege::set_oneint(int32_t value) {
  _internal_set_oneint(value);
  // @@protoc_insertion_point(field_set:main.NewMessege.OneInt)
}

// repeated bool Bools = 3;
inline int NewMessege::_internal_bools_size() const {
  return bools_.size();
}
inline int NewMessege::bools_size() const {
  return _internal_bools_size();
}
inline void NewMessege::clear_bools() {
  bools_.Clear();
}
inline bool NewMessege::_internal_bools(int index) const {
  return bools_.Get(index);
}
inline bool NewMessege::bools(int index) const {
  // @@protoc_insertion_point(field_get:main.NewMessege.Bools)
  return _internal_bools(index);
}
inline void NewMessege::set_bools(int index, bool value) {
  bools_.Set(index, value);
  // @@protoc_insertion_point(field_set:main.NewMessege.Bools)
}
inline void NewMessege::_internal_add_bools(bool value) {
  bools_.Add(value);
}
inline void NewMessege::add_bools(bool value) {
  _internal_add_bools(value);
  // @@protoc_insertion_point(field_add:main.NewMessege.Bools)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
NewMessege::_internal_bools() const {
  return bools_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >&
NewMessege::bools() const {
  // @@protoc_insertion_point(field_list:main.NewMessege.Bools)
  return _internal_bools();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
NewMessege::_internal_mutable_bools() {
  return &bools_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< bool >*
NewMessege::mutable_bools() {
  // @@protoc_insertion_point(field_mutable_list:main.NewMessege.Bools)
  return _internal_mutable_bools();
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace main

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_TestProtobuf_2eproto
