// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ukex.klinehistoricaldata.proto

#include "ukex.klinehistoricaldata.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_ukex_2eklinehistoricaldata_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_klinehistoricaldata_Data_ukex_2eklinehistoricaldata_2eproto;
namespace ukex {
class klinehistoricaldata_DataDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<klinehistoricaldata_Data> _instance;
} _klinehistoricaldata_Data_default_instance_;
class klinehistoricaldataDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<klinehistoricaldata> _instance;
} _klinehistoricaldata_default_instance_;
}  // namespace ukex
static void InitDefaultsscc_info_klinehistoricaldata_ukex_2eklinehistoricaldata_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ukex::_klinehistoricaldata_default_instance_;
    new (ptr) ::ukex::klinehistoricaldata();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ukex::klinehistoricaldata::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_klinehistoricaldata_ukex_2eklinehistoricaldata_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_klinehistoricaldata_ukex_2eklinehistoricaldata_2eproto}, {
      &scc_info_klinehistoricaldata_Data_ukex_2eklinehistoricaldata_2eproto.base,}};

static void InitDefaultsscc_info_klinehistoricaldata_Data_ukex_2eklinehistoricaldata_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::ukex::_klinehistoricaldata_Data_default_instance_;
    new (ptr) ::ukex::klinehistoricaldata_Data();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::ukex::klinehistoricaldata_Data::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_klinehistoricaldata_Data_ukex_2eklinehistoricaldata_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_klinehistoricaldata_Data_ukex_2eklinehistoricaldata_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ukex_2eklinehistoricaldata_2eproto[2];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_ukex_2eklinehistoricaldata_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ukex_2eklinehistoricaldata_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ukex_2eklinehistoricaldata_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::ukex::klinehistoricaldata_Data, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::ukex::klinehistoricaldata_Data, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ukex::klinehistoricaldata_Data, k0_),
  PROTOBUF_FIELD_OFFSET(::ukex::klinehistoricaldata_Data, k1_),
  PROTOBUF_FIELD_OFFSET(::ukex::klinehistoricaldata_Data, k2_),
  PROTOBUF_FIELD_OFFSET(::ukex::klinehistoricaldata_Data, k3_),
  PROTOBUF_FIELD_OFFSET(::ukex::klinehistoricaldata_Data, k4_),
  PROTOBUF_FIELD_OFFSET(::ukex::klinehistoricaldata_Data, k5_),
  0,
  1,
  2,
  3,
  4,
  5,
  PROTOBUF_FIELD_OFFSET(::ukex::klinehistoricaldata, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::ukex::klinehistoricaldata, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::ukex::klinehistoricaldata, data_),
  PROTOBUF_FIELD_OFFSET(::ukex::klinehistoricaldata, token_),
  ~0u,
  0,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(::ukex::klinehistoricaldata_Data)},
  { 17, 24, sizeof(::ukex::klinehistoricaldata)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ukex::_klinehistoricaldata_Data_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::ukex::_klinehistoricaldata_default_instance_),
};

const char descriptor_table_protodef_ukex_2eklinehistoricaldata_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036ukex.klinehistoricaldata.proto\022\004ukex\"\264"
  "\001\n\023klinehistoricaldata\022,\n\004data\030\001 \003(\0132\036.u"
  "kex.klinehistoricaldata.Data\022\r\n\005token\030\002 "
  "\002(\t\032N\n\004Data\022\n\n\002k0\030\001 \002(\t\022\n\n\002k1\030\002 \002(\t\022\n\n\002k"
  "2\030\003 \002(\t\022\n\n\002k3\030\004 \002(\t\022\n\n\002k4\030\005 \002(\t\022\n\n\002k5\030\006 "
  "\002(\t\"\020\n\005CONST\022\007\n\003CMD\020n"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ukex_2eklinehistoricaldata_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ukex_2eklinehistoricaldata_2eproto_sccs[2] = {
  &scc_info_klinehistoricaldata_ukex_2eklinehistoricaldata_2eproto.base,
  &scc_info_klinehistoricaldata_Data_ukex_2eklinehistoricaldata_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ukex_2eklinehistoricaldata_2eproto_once;
static bool descriptor_table_ukex_2eklinehistoricaldata_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ukex_2eklinehistoricaldata_2eproto = {
  &descriptor_table_ukex_2eklinehistoricaldata_2eproto_initialized, descriptor_table_protodef_ukex_2eklinehistoricaldata_2eproto, "ukex.klinehistoricaldata.proto", 221,
  &descriptor_table_ukex_2eklinehistoricaldata_2eproto_once, descriptor_table_ukex_2eklinehistoricaldata_2eproto_sccs, descriptor_table_ukex_2eklinehistoricaldata_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_ukex_2eklinehistoricaldata_2eproto::offsets,
  file_level_metadata_ukex_2eklinehistoricaldata_2eproto, 2, file_level_enum_descriptors_ukex_2eklinehistoricaldata_2eproto, file_level_service_descriptors_ukex_2eklinehistoricaldata_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ukex_2eklinehistoricaldata_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ukex_2eklinehistoricaldata_2eproto), true);
namespace ukex {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* klinehistoricaldata_CONST_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ukex_2eklinehistoricaldata_2eproto);
  return file_level_enum_descriptors_ukex_2eklinehistoricaldata_2eproto[0];
}
bool klinehistoricaldata_CONST_IsValid(int value) {
  switch (value) {
    case 110:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr klinehistoricaldata_CONST klinehistoricaldata::CMD;
constexpr klinehistoricaldata_CONST klinehistoricaldata::CONST_MIN;
constexpr klinehistoricaldata_CONST klinehistoricaldata::CONST_MAX;
constexpr int klinehistoricaldata::CONST_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

void klinehistoricaldata_Data::InitAsDefaultInstance() {
}
class klinehistoricaldata_Data::_Internal {
 public:
  using HasBits = decltype(std::declval<klinehistoricaldata_Data>()._has_bits_);
  static void set_has_k0(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_k1(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_k2(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_k3(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_k4(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_k5(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

klinehistoricaldata_Data::klinehistoricaldata_Data()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ukex.klinehistoricaldata.Data)
}
klinehistoricaldata_Data::klinehistoricaldata_Data(const klinehistoricaldata_Data& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  k0_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_k0()) {
    k0_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.k0_);
  }
  k1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_k1()) {
    k1_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.k1_);
  }
  k2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_k2()) {
    k2_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.k2_);
  }
  k3_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_k3()) {
    k3_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.k3_);
  }
  k4_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_k4()) {
    k4_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.k4_);
  }
  k5_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_k5()) {
    k5_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.k5_);
  }
  // @@protoc_insertion_point(copy_constructor:ukex.klinehistoricaldata.Data)
}

void klinehistoricaldata_Data::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_klinehistoricaldata_Data_ukex_2eklinehistoricaldata_2eproto.base);
  k0_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  k1_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  k2_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  k3_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  k4_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  k5_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

klinehistoricaldata_Data::~klinehistoricaldata_Data() {
  // @@protoc_insertion_point(destructor:ukex.klinehistoricaldata.Data)
  SharedDtor();
}

void klinehistoricaldata_Data::SharedDtor() {
  k0_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  k1_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  k2_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  k3_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  k4_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  k5_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void klinehistoricaldata_Data::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const klinehistoricaldata_Data& klinehistoricaldata_Data::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_klinehistoricaldata_Data_ukex_2eklinehistoricaldata_2eproto.base);
  return *internal_default_instance();
}


void klinehistoricaldata_Data::Clear() {
// @@protoc_insertion_point(message_clear_start:ukex.klinehistoricaldata.Data)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      k0_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000002u) {
      k1_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000004u) {
      k2_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000008u) {
      k3_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000010u) {
      k4_.ClearNonDefaultToEmptyNoArena();
    }
    if (cached_has_bits & 0x00000020u) {
      k5_.ClearNonDefaultToEmptyNoArena();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* klinehistoricaldata_Data::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required string k0 = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_k0(), ptr, ctx, "ukex.klinehistoricaldata.Data.k0");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string k1 = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_k1(), ptr, ctx, "ukex.klinehistoricaldata.Data.k1");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string k2 = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_k2(), ptr, ctx, "ukex.klinehistoricaldata.Data.k2");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string k3 = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_k3(), ptr, ctx, "ukex.klinehistoricaldata.Data.k3");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string k4 = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 42)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_k4(), ptr, ctx, "ukex.klinehistoricaldata.Data.k4");
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required string k5 = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 50)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_k5(), ptr, ctx, "ukex.klinehistoricaldata.Data.k5");
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

::PROTOBUF_NAMESPACE_ID::uint8* klinehistoricaldata_Data::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ukex.klinehistoricaldata.Data)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string k0 = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_k0().data(), static_cast<int>(this->_internal_k0().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "ukex.klinehistoricaldata.Data.k0");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_k0(), target);
  }

  // required string k1 = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_k1().data(), static_cast<int>(this->_internal_k1().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "ukex.klinehistoricaldata.Data.k1");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_k1(), target);
  }

  // required string k2 = 3;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_k2().data(), static_cast<int>(this->_internal_k2().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "ukex.klinehistoricaldata.Data.k2");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_k2(), target);
  }

  // required string k3 = 4;
  if (cached_has_bits & 0x00000008u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_k3().data(), static_cast<int>(this->_internal_k3().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "ukex.klinehistoricaldata.Data.k3");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_k3(), target);
  }

  // required string k4 = 5;
  if (cached_has_bits & 0x00000010u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_k4().data(), static_cast<int>(this->_internal_k4().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "ukex.klinehistoricaldata.Data.k4");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_k4(), target);
  }

  // required string k5 = 6;
  if (cached_has_bits & 0x00000020u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_k5().data(), static_cast<int>(this->_internal_k5().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "ukex.klinehistoricaldata.Data.k5");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_k5(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ukex.klinehistoricaldata.Data)
  return target;
}

size_t klinehistoricaldata_Data::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:ukex.klinehistoricaldata.Data)
  size_t total_size = 0;

  if (has_k0()) {
    // required string k0 = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_k0());
  }

  if (has_k1()) {
    // required string k1 = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_k1());
  }

  if (has_k2()) {
    // required string k2 = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_k2());
  }

  if (has_k3()) {
    // required string k3 = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_k3());
  }

  if (has_k4()) {
    // required string k4 = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_k4());
  }

  if (has_k5()) {
    // required string k5 = 6;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_k5());
  }

  return total_size;
}
size_t klinehistoricaldata_Data::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ukex.klinehistoricaldata.Data)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000003f) ^ 0x0000003f) == 0) {  // All required fields are present.
    // required string k0 = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_k0());

    // required string k1 = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_k1());

    // required string k2 = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_k2());

    // required string k3 = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_k3());

    // required string k4 = 5;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_k4());

    // required string k5 = 6;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_k5());

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

void klinehistoricaldata_Data::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ukex.klinehistoricaldata.Data)
  GOOGLE_DCHECK_NE(&from, this);
  const klinehistoricaldata_Data* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<klinehistoricaldata_Data>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ukex.klinehistoricaldata.Data)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ukex.klinehistoricaldata.Data)
    MergeFrom(*source);
  }
}

void klinehistoricaldata_Data::MergeFrom(const klinehistoricaldata_Data& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ukex.klinehistoricaldata.Data)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      k0_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.k0_);
    }
    if (cached_has_bits & 0x00000002u) {
      _has_bits_[0] |= 0x00000002u;
      k1_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.k1_);
    }
    if (cached_has_bits & 0x00000004u) {
      _has_bits_[0] |= 0x00000004u;
      k2_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.k2_);
    }
    if (cached_has_bits & 0x00000008u) {
      _has_bits_[0] |= 0x00000008u;
      k3_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.k3_);
    }
    if (cached_has_bits & 0x00000010u) {
      _has_bits_[0] |= 0x00000010u;
      k4_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.k4_);
    }
    if (cached_has_bits & 0x00000020u) {
      _has_bits_[0] |= 0x00000020u;
      k5_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.k5_);
    }
  }
}

void klinehistoricaldata_Data::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ukex.klinehistoricaldata.Data)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void klinehistoricaldata_Data::CopyFrom(const klinehistoricaldata_Data& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ukex.klinehistoricaldata.Data)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool klinehistoricaldata_Data::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000003f) != 0x0000003f) return false;
  return true;
}

void klinehistoricaldata_Data::InternalSwap(klinehistoricaldata_Data* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  k0_.Swap(&other->k0_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  k1_.Swap(&other->k1_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  k2_.Swap(&other->k2_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  k3_.Swap(&other->k3_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  k4_.Swap(&other->k4_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  k5_.Swap(&other->k5_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata klinehistoricaldata_Data::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void klinehistoricaldata::InitAsDefaultInstance() {
}
class klinehistoricaldata::_Internal {
 public:
  using HasBits = decltype(std::declval<klinehistoricaldata>()._has_bits_);
  static void set_has_token(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

klinehistoricaldata::klinehistoricaldata()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ukex.klinehistoricaldata)
}
klinehistoricaldata::klinehistoricaldata(const klinehistoricaldata& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      data_(from.data_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  token_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (from._internal_has_token()) {
    token_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.token_);
  }
  // @@protoc_insertion_point(copy_constructor:ukex.klinehistoricaldata)
}

void klinehistoricaldata::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_klinehistoricaldata_ukex_2eklinehistoricaldata_2eproto.base);
  token_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

klinehistoricaldata::~klinehistoricaldata() {
  // @@protoc_insertion_point(destructor:ukex.klinehistoricaldata)
  SharedDtor();
}

void klinehistoricaldata::SharedDtor() {
  token_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void klinehistoricaldata::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const klinehistoricaldata& klinehistoricaldata::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_klinehistoricaldata_ukex_2eklinehistoricaldata_2eproto.base);
  return *internal_default_instance();
}


void klinehistoricaldata::Clear() {
// @@protoc_insertion_point(message_clear_start:ukex.klinehistoricaldata)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    token_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* klinehistoricaldata::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // repeated .ukex.klinehistoricaldata.Data data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_data(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else goto handle_unusual;
        continue;
      // required string token = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParserUTF8Verify(_internal_mutable_token(), ptr, ctx, "ukex.klinehistoricaldata.token");
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

::PROTOBUF_NAMESPACE_ID::uint8* klinehistoricaldata::InternalSerializeWithCachedSizesToArray(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ukex.klinehistoricaldata)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .ukex.klinehistoricaldata.Data data = 1;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_data_size()); i < n; i++) {
    stream->EnsureSpace(&target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessageToArray(1, this->_internal_data(i), target, stream);
  }

  cached_has_bits = _has_bits_[0];
  // required string token = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_token().data(), static_cast<int>(this->_internal_token().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "ukex.klinehistoricaldata.token");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_token(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ukex.klinehistoricaldata)
  return target;
}

size_t klinehistoricaldata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ukex.klinehistoricaldata)
  size_t total_size = 0;

  // required string token = 2;
  if (has_token()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_token());
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .ukex.klinehistoricaldata.Data data = 1;
  total_size += 1UL * this->_internal_data_size();
  for (const auto& msg : this->data_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void klinehistoricaldata::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ukex.klinehistoricaldata)
  GOOGLE_DCHECK_NE(&from, this);
  const klinehistoricaldata* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<klinehistoricaldata>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ukex.klinehistoricaldata)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ukex.klinehistoricaldata)
    MergeFrom(*source);
  }
}

void klinehistoricaldata::MergeFrom(const klinehistoricaldata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ukex.klinehistoricaldata)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  data_.MergeFrom(from.data_);
  if (from._internal_has_token()) {
    _has_bits_[0] |= 0x00000001u;
    token_.AssignWithDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from.token_);
  }
}

void klinehistoricaldata::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ukex.klinehistoricaldata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void klinehistoricaldata::CopyFrom(const klinehistoricaldata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ukex.klinehistoricaldata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool klinehistoricaldata::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(this->data())) return false;
  return true;
}

void klinehistoricaldata::InternalSwap(klinehistoricaldata* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  data_.InternalSwap(&other->data_);
  token_.Swap(&other->token_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::PROTOBUF_NAMESPACE_ID::Metadata klinehistoricaldata::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace ukex
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ukex::klinehistoricaldata_Data* Arena::CreateMaybeMessage< ::ukex::klinehistoricaldata_Data >(Arena* arena) {
  return Arena::CreateInternal< ::ukex::klinehistoricaldata_Data >(arena);
}
template<> PROTOBUF_NOINLINE ::ukex::klinehistoricaldata* Arena::CreateMaybeMessage< ::ukex::klinehistoricaldata >(Arena* arena) {
  return Arena::CreateInternal< ::ukex::klinehistoricaldata >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
