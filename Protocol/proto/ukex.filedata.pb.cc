// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ukex.filedata.proto

#include "ukex.filedata.pb.h"

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
namespace ukex {
class filedataDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<filedata> _instance;
} _filedata_default_instance_;
}  // namespace ukex
static void InitDefaultsscc_info_filedata_ukex_2efiledata_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ukex::_filedata_default_instance_;
    new (ptr) ::ukex::filedata();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ukex::filedata::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_filedata_ukex_2efiledata_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_filedata_ukex_2efiledata_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ukex_2efiledata_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_ukex_2efiledata_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ukex_2efiledata_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ukex_2efiledata_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::ukex::filedata, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::ukex::filedata, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ukex::filedata, name_),
  PROTOBUF_FIELD_OFFSET(::ukex::filedata, path_),
  PROTOBUF_FIELD_OFFSET(::ukex::filedata, modifytime_),
  PROTOBUF_FIELD_OFFSET(::ukex::filedata, offset_),
  PROTOBUF_FIELD_OFFSET(::ukex::filedata, length_),
  PROTOBUF_FIELD_OFFSET(::ukex::filedata, data_),
  PROTOBUF_FIELD_OFFSET(::ukex::filedata, token_),
  0,
  1,
  4,
  5,
  6,
  2,
  3,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 12, sizeof(::ukex::filedata)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ukex::_filedata_default_instance_),
};

const char descriptor_table_protodef_ukex_2efiledata_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023ukex.filedata.proto\022\004ukex\"\211\001\n\010filedata"
  "\022\014\n\004name\030\001 \002(\t\022\014\n\004path\030\002 \002(\t\022\022\n\nmodifyti"
  "me\030\003 \002(\004\022\016\n\006offset\030\004 \002(\004\022\016\n\006length\030\005 \002(\r"
  "\022\014\n\004data\030\006 \002(\014\022\r\n\005token\030\007 \002(\t\"\020\n\005CONST\022\007"
  "\n\003CMD\020q"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ukex_2efiledata_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ukex_2efiledata_2eproto_sccs[1] = {
  &scc_info_filedata_ukex_2efiledata_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ukex_2efiledata_2eproto_once;
static bool descriptor_table_ukex_2efiledata_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ukex_2efiledata_2eproto = {
  &descriptor_table_ukex_2efiledata_2eproto_initialized, descriptor_table_protodef_ukex_2efiledata_2eproto, "ukex.filedata.proto", 167,
  &descriptor_table_ukex_2efiledata_2eproto_once, descriptor_table_ukex_2efiledata_2eproto_sccs, descriptor_table_ukex_2efiledata_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_ukex_2efiledata_2eproto::offsets,
  file_level_metadata_ukex_2efiledata_2eproto, 1, file_level_enum_descriptors_ukex_2efiledata_2eproto, file_level_service_descriptors_ukex_2efiledata_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ukex_2efiledata_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ukex_2efiledata_2eproto), true);
namespace ukex {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* filedata_CONST_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ukex_2efiledata_2eproto);
  return file_level_enum_descriptors_ukex_2efiledata_2eproto[0];
}
bool filedata_CONST_IsValid(int value) {
  switch (value) {
    case 113:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr filedata_CONST filedata::CMD;
constexpr filedata_CONST filedata::CONST_MIN;
constexpr filedata_CONST filedata::CONST_MAX;
constexpr int filedata::CONST_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void filedata::InitAsDefaultInstance() {
}
class filedata::_Internal {
 public:
  using HasBits = decltype(std::declval<filedata>()._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_path(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_modifytime(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_offset(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_length(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_data(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_token(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

filedata::filedata()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ukex.filedata)
}
filedata::filedata(const filedata& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_name()) {
    name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  path_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_path()) {
    path_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.path_);
  }
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_data()) {
    data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  token_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_token()) {
    token_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.token_);
  }
  ::memcpy(&modifytime_, &from.modifytime_,
    static_cast<size_t>(reinterpret_cast<char*>(&length_) -
    reinterpret_cast<char*>(&modifytime_)) + sizeof(length_));
  // @@protoc_insertion_point(copy_constructor:ukex.filedata)
}

void filedata::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_filedata_ukex_2efiledata_2eproto.base);
  name_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  path_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  token_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(&modifytime_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&length_) -
      reinterpret_cast<char*>(&modifytime_)) + sizeof(length_));
}

filedata::~filedata() {
  // @@protoc_insertion_point(destructor:ukex.filedata)
  SharedDtor();
}

void filedata::SharedDtor() {
  name_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  path_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  data_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  token_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void filedata::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const filedata& filedata::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_filedata_ukex_2efiledata_2eproto.base);
  return *internal_default_instance();
}


void filedata::Clear() {
// @@protoc_insertion_point(message_clear_start:ukex.filedata)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      path_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      data_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000008u) {
      token_.ClearNonDefaultToEmptyNoArena();
    }
  }
  if (cached_has_bits & 0x00000070u) {
    ::memset(&modifytime_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&length_) -
        reinterpret_cast<char*>(&modifytime_)) + sizeof(length_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* filedata::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_name(), ptr, ctx, "ukex.filedata.name");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string path = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_path(), ptr, ctx, "ukex.filedata.path");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint64 modifytime = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          _Internal::set_has_modifytime(&has_bits);
          modifytime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint64 offset = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_offset(&has_bits);
          offset_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required uint32 length = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_length(&has_bits);
          length_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required bytes data = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(_internal_mutable_data(), ptr, ctx);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string token = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 58)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_token(), ptr, ctx, "ukex.filedata.token");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* filedata::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ukex.filedata)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "ukex.filedata.name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  // required string path = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_path().data(), static_cast<int>(this->_internal_path().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "ukex.filedata.path");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_path(), target);
  }

  // required uint64 modifytime = 3;
  if (cached_has_bits & 0x00000010u) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(3, this->_internal_modifytime(), target);
  }

  // required uint64 offset = 4;
  if (cached_has_bits & 0x00000020u) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt64ToArray(4, this->_internal_offset(), target);
  }

  // required uint32 length = 5;
  if (cached_has_bits & 0x00000040u) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(5, this->_internal_length(), target);
  }

  // required bytes data = 6;
  if (cached_has_bits & 0x00000004u) {
    target = stream->WriteBytesMaybeAliased(
        6, this->_internal_data(), target);
  }

  // required string token = 7;
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_token().data(), static_cast<int>(this->_internal_token().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "ukex.filedata.token");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_token(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ukex.filedata)
  return target;
}

size_t filedata::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:ukex.filedata)
  size_t total_size = 0;

  if (has_name()) {
    // required string name = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  if (has_path()) {
    // required string path = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_path());
  }

  if (has_data()) {
    // required bytes data = 6;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());
  }

  if (has_token()) {
    // required string token = 7;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_token());
  }

  if (has_modifytime()) {
    // required uint64 modifytime = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_modifytime());
  }

  if (has_offset()) {
    // required uint64 offset = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_offset());
  }

  if (has_length()) {
    // required uint32 length = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_length());
  }

  return total_size;
}
size_t filedata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ukex.filedata)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000007f) ^ 0x0000007f) == 0) {  // All required fields are present.
    // required string name = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());

    // required string path = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_path());

    // required bytes data = 6;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_data());

    // required string token = 7;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_token());

    // required uint64 modifytime = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_modifytime());

    // required uint64 offset = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt64Size(
        this->_internal_offset());

    // required uint32 length = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_length());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void filedata::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ukex.filedata)
  GOOGLE_DCHECK_NE(&from, this);
  const filedata* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<filedata>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ukex.filedata)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ukex.filedata)
    MergeFrom(*source);
  }
}

void filedata::MergeFrom(const filedata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ukex.filedata)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      name_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      path_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.path_);
    }
    if (cached_has_bits & 0x00000004u) {
      _has_bits_[0] |= 0x00000004u;
      data_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.data_);
    }
    if (cached_has_bits & 0x00000008u) {
      _has_bits_[0] |= 0x00000008u;
      token_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.token_);
    }
    if (cached_has_bits & 0x00000010u) {
      modifytime_ = from.modifytime_;
    }
    if (cached_has_bits & 0x00000020u) {
      offset_ = from.offset_;
    }
    if (cached_has_bits & 0x00000040u) {
      length_ = from.length_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void filedata::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ukex.filedata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void filedata::CopyFrom(const filedata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ukex.filedata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool filedata::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;
  return true;
}

void filedata::InternalSwap(filedata* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  name_.Swap(&other->name_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  path_.Swap(&other->path_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  data_.Swap(&other->data_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  token_.Swap(&other->token_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(modifytime_, other->modifytime_);
  swap(offset_, other->offset_);
  swap(length_, other->length_);
}

::PROTOBUF_NAMESPACE_ID::Metadata filedata::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace ukex
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ukex::filedata* Arena::CreateMaybeMessage< ::ukex::filedata >(Arena* arena) {
  return Arena::CreateInternal< ::ukex::filedata >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
