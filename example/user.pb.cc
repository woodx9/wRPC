// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: user.proto

#include "user.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_user_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ResultCode_user_2eproto;
namespace userdata {
class ResultCodeDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ResultCode> _instance;
} _ResultCode_default_instance_;
class LoginRequstDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LoginRequst> _instance;
} _LoginRequst_default_instance_;
class LoginResponseDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<LoginResponse> _instance;
} _LoginResponse_default_instance_;
}  // namespace userdata
static void InitDefaultsscc_info_LoginRequst_user_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::userdata::_LoginRequst_default_instance_;
    new (ptr) ::userdata::LoginRequst();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::userdata::LoginRequst::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_LoginRequst_user_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_LoginRequst_user_2eproto}, {}};

static void InitDefaultsscc_info_LoginResponse_user_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::userdata::_LoginResponse_default_instance_;
    new (ptr) ::userdata::LoginResponse();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::userdata::LoginResponse::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_LoginResponse_user_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_LoginResponse_user_2eproto}, {
      &scc_info_ResultCode_user_2eproto.base,}};

static void InitDefaultsscc_info_ResultCode_user_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::userdata::_ResultCode_default_instance_;
    new (ptr) ::userdata::ResultCode();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::userdata::ResultCode::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ResultCode_user_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ResultCode_user_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_user_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_user_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* file_level_service_descriptors_user_2eproto[1];

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_user_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::userdata::ResultCode, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::userdata::ResultCode, errcode_),
  PROTOBUF_FIELD_OFFSET(::userdata::ResultCode, errmsg_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::userdata::LoginRequst, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::userdata::LoginRequst, name_),
  PROTOBUF_FIELD_OFFSET(::userdata::LoginRequst, pwd_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::userdata::LoginResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::userdata::LoginResponse, result_),
  PROTOBUF_FIELD_OFFSET(::userdata::LoginResponse, sucess_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::userdata::ResultCode)},
  { 7, -1, sizeof(::userdata::LoginRequst)},
  { 14, -1, sizeof(::userdata::LoginResponse)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::userdata::_ResultCode_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::userdata::_LoginRequst_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::userdata::_LoginResponse_default_instance_),
};

const char descriptor_table_protodef_user_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nuser.proto\022\010userdata\"-\n\nResultCode\022\017\n\007"
  "errcode\030\001 \001(\005\022\016\n\006errmsg\030\002 \001(\014\"(\n\013LoginRe"
  "qust\022\014\n\004name\030\001 \001(\014\022\013\n\003pwd\030\002 \001(\014\"E\n\rLogin"
  "Response\022$\n\006result\030\001 \001(\0132\024.userdata.Resu"
  "ltCode\022\016\n\006sucess\030\002 \001(\0102I\n\016UserServiceRpc"
  "\0227\n\005Login\022\025.userdata.LoginRequst\032\027.userd"
  "ata.LoginResponseB\003\200\001\001b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_user_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_user_2eproto_sccs[3] = {
  &scc_info_LoginRequst_user_2eproto.base,
  &scc_info_LoginResponse_user_2eproto.base,
  &scc_info_ResultCode_user_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_user_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_user_2eproto = {
  false, false, descriptor_table_protodef_user_2eproto, "user.proto", 270,
  &descriptor_table_user_2eproto_once, descriptor_table_user_2eproto_sccs, descriptor_table_user_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_user_2eproto::offsets,
  file_level_metadata_user_2eproto, 3, file_level_enum_descriptors_user_2eproto, file_level_service_descriptors_user_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_user_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_user_2eproto)), true);
namespace userdata {

// ===================================================================

void ResultCode::InitAsDefaultInstance() {
}
class ResultCode::_Internal {
 public:
};

ResultCode::ResultCode(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:userdata.ResultCode)
}
ResultCode::ResultCode(const ResultCode& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  errmsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_errmsg().empty()) {
    errmsg_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_errmsg(),
      GetArena());
  }
  errcode_ = from.errcode_;
  // @@protoc_insertion_point(copy_constructor:userdata.ResultCode)
}

void ResultCode::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ResultCode_user_2eproto.base);
  errmsg_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  errcode_ = 0;
}

ResultCode::~ResultCode() {
  // @@protoc_insertion_point(destructor:userdata.ResultCode)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ResultCode::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  errmsg_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ResultCode::ArenaDtor(void* object) {
  ResultCode* _this = reinterpret_cast< ResultCode* >(object);
  (void)_this;
}
void ResultCode::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ResultCode::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ResultCode& ResultCode::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ResultCode_user_2eproto.base);
  return *internal_default_instance();
}


void ResultCode::Clear() {
// @@protoc_insertion_point(message_clear_start:userdata.ResultCode)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  errmsg_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  errcode_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ResultCode::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 errcode = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          errcode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes errmsg = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_errmsg();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ResultCode::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:userdata.ResultCode)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 errcode = 1;
  if (this->errcode() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_errcode(), target);
  }

  // bytes errmsg = 2;
  if (this->errmsg().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_errmsg(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:userdata.ResultCode)
  return target;
}

size_t ResultCode::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:userdata.ResultCode)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes errmsg = 2;
  if (this->errmsg().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_errmsg());
  }

  // int32 errcode = 1;
  if (this->errcode() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_errcode());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ResultCode::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:userdata.ResultCode)
  GOOGLE_DCHECK_NE(&from, this);
  const ResultCode* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ResultCode>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:userdata.ResultCode)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:userdata.ResultCode)
    MergeFrom(*source);
  }
}

void ResultCode::MergeFrom(const ResultCode& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:userdata.ResultCode)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.errmsg().size() > 0) {
    _internal_set_errmsg(from._internal_errmsg());
  }
  if (from.errcode() != 0) {
    _internal_set_errcode(from._internal_errcode());
  }
}

void ResultCode::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:userdata.ResultCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ResultCode::CopyFrom(const ResultCode& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:userdata.ResultCode)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResultCode::IsInitialized() const {
  return true;
}

void ResultCode::InternalSwap(ResultCode* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  errmsg_.Swap(&other->errmsg_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(errcode_, other->errcode_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ResultCode::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void LoginRequst::InitAsDefaultInstance() {
}
class LoginRequst::_Internal {
 public:
};

LoginRequst::LoginRequst(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:userdata.LoginRequst)
}
LoginRequst::LoginRequst(const LoginRequst& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_name().empty()) {
    name_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_name(),
      GetArena());
  }
  pwd_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_pwd().empty()) {
    pwd_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_pwd(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:userdata.LoginRequst)
}

void LoginRequst::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LoginRequst_user_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  pwd_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

LoginRequst::~LoginRequst() {
  // @@protoc_insertion_point(destructor:userdata.LoginRequst)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void LoginRequst::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  pwd_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void LoginRequst::ArenaDtor(void* object) {
  LoginRequst* _this = reinterpret_cast< LoginRequst* >(object);
  (void)_this;
}
void LoginRequst::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LoginRequst::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LoginRequst& LoginRequst::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LoginRequst_user_2eproto.base);
  return *internal_default_instance();
}


void LoginRequst::Clear() {
// @@protoc_insertion_point(message_clear_start:userdata.LoginRequst)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  name_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  pwd_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LoginRequst::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // bytes name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes pwd = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_pwd();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LoginRequst::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:userdata.LoginRequst)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes name = 1;
  if (this->name().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_name(), target);
  }

  // bytes pwd = 2;
  if (this->pwd().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_pwd(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:userdata.LoginRequst)
  return target;
}

size_t LoginRequst::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:userdata.LoginRequst)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_name());
  }

  // bytes pwd = 2;
  if (this->pwd().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_pwd());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LoginRequst::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:userdata.LoginRequst)
  GOOGLE_DCHECK_NE(&from, this);
  const LoginRequst* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LoginRequst>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:userdata.LoginRequst)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:userdata.LoginRequst)
    MergeFrom(*source);
  }
}

void LoginRequst::MergeFrom(const LoginRequst& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:userdata.LoginRequst)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.name().size() > 0) {
    _internal_set_name(from._internal_name());
  }
  if (from.pwd().size() > 0) {
    _internal_set_pwd(from._internal_pwd());
  }
}

void LoginRequst::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:userdata.LoginRequst)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginRequst::CopyFrom(const LoginRequst& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:userdata.LoginRequst)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginRequst::IsInitialized() const {
  return true;
}

void LoginRequst::InternalSwap(LoginRequst* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  pwd_.Swap(&other->pwd_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata LoginRequst::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void LoginResponse::InitAsDefaultInstance() {
  ::userdata::_LoginResponse_default_instance_._instance.get_mutable()->result_ = const_cast< ::userdata::ResultCode*>(
      ::userdata::ResultCode::internal_default_instance());
}
class LoginResponse::_Internal {
 public:
  static const ::userdata::ResultCode& result(const LoginResponse* msg);
};

const ::userdata::ResultCode&
LoginResponse::_Internal::result(const LoginResponse* msg) {
  return *msg->result_;
}
LoginResponse::LoginResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:userdata.LoginResponse)
}
LoginResponse::LoginResponse(const LoginResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_result()) {
    result_ = new ::userdata::ResultCode(*from.result_);
  } else {
    result_ = nullptr;
  }
  sucess_ = from.sucess_;
  // @@protoc_insertion_point(copy_constructor:userdata.LoginResponse)
}

void LoginResponse::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_LoginResponse_user_2eproto.base);
  ::memset(&result_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&sucess_) -
      reinterpret_cast<char*>(&result_)) + sizeof(sucess_));
}

LoginResponse::~LoginResponse() {
  // @@protoc_insertion_point(destructor:userdata.LoginResponse)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void LoginResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  if (this != internal_default_instance()) delete result_;
}

void LoginResponse::ArenaDtor(void* object) {
  LoginResponse* _this = reinterpret_cast< LoginResponse* >(object);
  (void)_this;
}
void LoginResponse::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void LoginResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const LoginResponse& LoginResponse::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_LoginResponse_user_2eproto.base);
  return *internal_default_instance();
}


void LoginResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:userdata.LoginResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArena() == nullptr && result_ != nullptr) {
    delete result_;
  }
  result_ = nullptr;
  sucess_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LoginResponse::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .userdata.ResultCode result = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_result(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bool sucess = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          sucess_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* LoginResponse::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:userdata.LoginResponse)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .userdata.ResultCode result = 1;
  if (this->has_result()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::result(this), target, stream);
  }

  // bool sucess = 2;
  if (this->sucess() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(2, this->_internal_sucess(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:userdata.LoginResponse)
  return target;
}

size_t LoginResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:userdata.LoginResponse)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .userdata.ResultCode result = 1;
  if (this->has_result()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *result_);
  }

  // bool sucess = 2;
  if (this->sucess() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LoginResponse::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:userdata.LoginResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const LoginResponse* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<LoginResponse>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:userdata.LoginResponse)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:userdata.LoginResponse)
    MergeFrom(*source);
  }
}

void LoginResponse::MergeFrom(const LoginResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:userdata.LoginResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_result()) {
    _internal_mutable_result()->::userdata::ResultCode::MergeFrom(from._internal_result());
  }
  if (from.sucess() != 0) {
    _internal_set_sucess(from._internal_sucess());
  }
}

void LoginResponse::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:userdata.LoginResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LoginResponse::CopyFrom(const LoginResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:userdata.LoginResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LoginResponse::IsInitialized() const {
  return true;
}

void LoginResponse::InternalSwap(LoginResponse* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LoginResponse, sucess_)
      + sizeof(LoginResponse::sucess_)
      - PROTOBUF_FIELD_OFFSET(LoginResponse, result_)>(
          reinterpret_cast<char*>(&result_),
          reinterpret_cast<char*>(&other->result_));
}

::PROTOBUF_NAMESPACE_ID::Metadata LoginResponse::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

UserServiceRpc::~UserServiceRpc() {}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* UserServiceRpc::descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_user_2eproto);
  return file_level_service_descriptors_user_2eproto[0];
}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* UserServiceRpc::GetDescriptor() {
  return descriptor();
}

void UserServiceRpc::Login(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::userdata::LoginRequst*,
                         ::userdata::LoginResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Login() not implemented.");
  done->Run();
}

void UserServiceRpc::CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                             ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                             const ::PROTOBUF_NAMESPACE_ID::Message* request,
                             ::PROTOBUF_NAMESPACE_ID::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), file_level_service_descriptors_user_2eproto[0]);
  switch(method->index()) {
    case 0:
      Login(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::userdata::LoginRequst*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::userdata::LoginResponse*>(
                 response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& UserServiceRpc::GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::userdata::LoginRequst::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& UserServiceRpc::GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::userdata::LoginResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

UserServiceRpc_Stub::UserServiceRpc_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
UserServiceRpc_Stub::UserServiceRpc_Stub(
    ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
    ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::PROTOBUF_NAMESPACE_ID::Service::STUB_OWNS_CHANNEL) {}
UserServiceRpc_Stub::~UserServiceRpc_Stub() {
  if (owns_channel_) delete channel_;
}

void UserServiceRpc_Stub::Login(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::userdata::LoginRequst* request,
                              ::userdata::LoginResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace userdata
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::userdata::ResultCode* Arena::CreateMaybeMessage< ::userdata::ResultCode >(Arena* arena) {
  return Arena::CreateMessageInternal< ::userdata::ResultCode >(arena);
}
template<> PROTOBUF_NOINLINE ::userdata::LoginRequst* Arena::CreateMaybeMessage< ::userdata::LoginRequst >(Arena* arena) {
  return Arena::CreateMessageInternal< ::userdata::LoginRequst >(arena);
}
template<> PROTOBUF_NOINLINE ::userdata::LoginResponse* Arena::CreateMaybeMessage< ::userdata::LoginResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::userdata::LoginResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
