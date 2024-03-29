// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ukex.canceltradebatch.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ukex_2ecanceltradebatch_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ukex_2ecanceltradebatch_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ukex_2ecanceltradebatch_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ukex_2ecanceltradebatch_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ukex_2ecanceltradebatch_2eproto;
namespace ukex {
class canceltradebatch;
class canceltradebatchDefaultTypeInternal;
extern canceltradebatchDefaultTypeInternal _canceltradebatch_default_instance_;
class canceltradebatch_Orders;
class canceltradebatch_OrdersDefaultTypeInternal;
extern canceltradebatch_OrdersDefaultTypeInternal _canceltradebatch_Orders_default_instance_;
}  // namespace ukex
PROTOBUF_NAMESPACE_OPEN
template<> ::ukex::canceltradebatch* Arena::CreateMaybeMessage<::ukex::canceltradebatch>(Arena*);
template<> ::ukex::canceltradebatch_Orders* Arena::CreateMaybeMessage<::ukex::canceltradebatch_Orders>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ukex {

enum canceltradebatch_CONST : int {
  canceltradebatch_CONST_CMD = 103
};
bool canceltradebatch_CONST_IsValid(int value);
constexpr canceltradebatch_CONST canceltradebatch_CONST_CONST_MIN = canceltradebatch_CONST_CMD;
constexpr canceltradebatch_CONST canceltradebatch_CONST_CONST_MAX = canceltradebatch_CONST_CMD;
constexpr int canceltradebatch_CONST_CONST_ARRAYSIZE = canceltradebatch_CONST_CONST_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* canceltradebatch_CONST_descriptor();
template<typename T>
inline const std::string& canceltradebatch_CONST_Name(T enum_t_value) {
  static_assert(::std::is_same<T, canceltradebatch_CONST>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function canceltradebatch_CONST_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    canceltradebatch_CONST_descriptor(), enum_t_value);
}
inline bool canceltradebatch_CONST_Parse(
    const std::string& name, canceltradebatch_CONST* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<canceltradebatch_CONST>(
    canceltradebatch_CONST_descriptor(), name, value);
}
// ===================================================================

class canceltradebatch_Orders :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ukex.canceltradebatch.Orders) */ {
 public:
  canceltradebatch_Orders();
  virtual ~canceltradebatch_Orders();

  canceltradebatch_Orders(const canceltradebatch_Orders& from);
  canceltradebatch_Orders(canceltradebatch_Orders&& from) noexcept
    : canceltradebatch_Orders() {
    *this = ::std::move(from);
  }

  inline canceltradebatch_Orders& operator=(const canceltradebatch_Orders& from) {
    CopyFrom(from);
    return *this;
  }
  inline canceltradebatch_Orders& operator=(canceltradebatch_Orders&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const canceltradebatch_Orders& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const canceltradebatch_Orders* internal_default_instance() {
    return reinterpret_cast<const canceltradebatch_Orders*>(
               &_canceltradebatch_Orders_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(canceltradebatch_Orders& a, canceltradebatch_Orders& b) {
    a.Swap(&b);
  }
  inline void Swap(canceltradebatch_Orders* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline canceltradebatch_Orders* New() const final {
    return CreateMaybeMessage<canceltradebatch_Orders>(nullptr);
  }

  canceltradebatch_Orders* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<canceltradebatch_Orders>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const canceltradebatch_Orders& from);
  void MergeFrom(const canceltradebatch_Orders& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(canceltradebatch_Orders* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ukex.canceltradebatch.Orders";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ukex_2ecanceltradebatch_2eproto);
    return ::descriptor_table_ukex_2ecanceltradebatch_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kPriceFieldNumber = 4,
    kNumberFieldNumber = 5,
    kOrderidFieldNumber = 1,
    kMarketidFieldNumber = 2,
    kTypeFieldNumber = 3,
  };
  // optional string price = 4;
  bool has_price() const;
  private:
  bool _internal_has_price() const;
  public:
  void clear_price();
  const std::string& price() const;
  void set_price(const std::string& value);
  void set_price(std::string&& value);
  void set_price(const char* value);
  void set_price(const char* value, size_t size);
  std::string* mutable_price();
  std::string* release_price();
  void set_allocated_price(std::string* price);
  private:
  const std::string& _internal_price() const;
  void _internal_set_price(const std::string& value);
  std::string* _internal_mutable_price();
  public:

  // optional string number = 5;
  bool has_number() const;
  private:
  bool _internal_has_number() const;
  public:
  void clear_number();
  const std::string& number() const;
  void set_number(const std::string& value);
  void set_number(std::string&& value);
  void set_number(const char* value);
  void set_number(const char* value, size_t size);
  std::string* mutable_number();
  std::string* release_number();
  void set_allocated_number(std::string* number);
  private:
  const std::string& _internal_number() const;
  void _internal_set_number(const std::string& value);
  std::string* _internal_mutable_number();
  public:

  // required uint64 orderid = 1;
  bool has_orderid() const;
  private:
  bool _internal_has_orderid() const;
  public:
  void clear_orderid();
  ::PROTOBUF_NAMESPACE_ID::uint64 orderid() const;
  void set_orderid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_orderid() const;
  void _internal_set_orderid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // required uint64 marketid = 2;
  bool has_marketid() const;
  private:
  bool _internal_has_marketid() const;
  public:
  void clear_marketid();
  ::PROTOBUF_NAMESPACE_ID::uint64 marketid() const;
  void set_marketid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_marketid() const;
  void _internal_set_marketid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // required uint32 type = 3;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  ::PROTOBUF_NAMESPACE_ID::uint32 type() const;
  void set_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_type() const;
  void _internal_set_type(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:ukex.canceltradebatch.Orders)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr price_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr number_;
  ::PROTOBUF_NAMESPACE_ID::uint64 orderid_;
  ::PROTOBUF_NAMESPACE_ID::uint64 marketid_;
  ::PROTOBUF_NAMESPACE_ID::uint32 type_;
  friend struct ::TableStruct_ukex_2ecanceltradebatch_2eproto;
};
// -------------------------------------------------------------------

class canceltradebatch :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:ukex.canceltradebatch) */ {
 public:
  canceltradebatch();
  virtual ~canceltradebatch();

  canceltradebatch(const canceltradebatch& from);
  canceltradebatch(canceltradebatch&& from) noexcept
    : canceltradebatch() {
    *this = ::std::move(from);
  }

  inline canceltradebatch& operator=(const canceltradebatch& from) {
    CopyFrom(from);
    return *this;
  }
  inline canceltradebatch& operator=(canceltradebatch&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const canceltradebatch& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const canceltradebatch* internal_default_instance() {
    return reinterpret_cast<const canceltradebatch*>(
               &_canceltradebatch_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(canceltradebatch& a, canceltradebatch& b) {
    a.Swap(&b);
  }
  inline void Swap(canceltradebatch* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline canceltradebatch* New() const final {
    return CreateMaybeMessage<canceltradebatch>(nullptr);
  }

  canceltradebatch* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<canceltradebatch>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const canceltradebatch& from);
  void MergeFrom(const canceltradebatch& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(canceltradebatch* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ukex.canceltradebatch";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ukex_2ecanceltradebatch_2eproto);
    return ::descriptor_table_ukex_2ecanceltradebatch_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef canceltradebatch_Orders Orders;

  typedef canceltradebatch_CONST CONST;
  static constexpr CONST CMD =
    canceltradebatch_CONST_CMD;
  static inline bool CONST_IsValid(int value) {
    return canceltradebatch_CONST_IsValid(value);
  }
  static constexpr CONST CONST_MIN =
    canceltradebatch_CONST_CONST_MIN;
  static constexpr CONST CONST_MAX =
    canceltradebatch_CONST_CONST_MAX;
  static constexpr int CONST_ARRAYSIZE =
    canceltradebatch_CONST_CONST_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CONST_descriptor() {
    return canceltradebatch_CONST_descriptor();
  }
  template<typename T>
  static inline const std::string& CONST_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CONST>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CONST_Name.");
    return canceltradebatch_CONST_Name(enum_t_value);
  }
  static inline bool CONST_Parse(const std::string& name,
      CONST* value) {
    return canceltradebatch_CONST_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kOrdersFieldNumber = 3,
    kTokenFieldNumber = 2,
    kUidFieldNumber = 1,
    kCanceltradebatchidFieldNumber = 4,
  };
  // repeated .ukex.canceltradebatch.Orders orders = 3;
  int orders_size() const;
  private:
  int _internal_orders_size() const;
  public:
  void clear_orders();
  ::ukex::canceltradebatch_Orders* mutable_orders(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ukex::canceltradebatch_Orders >*
      mutable_orders();
  private:
  const ::ukex::canceltradebatch_Orders& _internal_orders(int index) const;
  ::ukex::canceltradebatch_Orders* _internal_add_orders();
  public:
  const ::ukex::canceltradebatch_Orders& orders(int index) const;
  ::ukex::canceltradebatch_Orders* add_orders();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ukex::canceltradebatch_Orders >&
      orders() const;

  // required string token = 2;
  bool has_token() const;
  private:
  bool _internal_has_token() const;
  public:
  void clear_token();
  const std::string& token() const;
  void set_token(const std::string& value);
  void set_token(std::string&& value);
  void set_token(const char* value);
  void set_token(const char* value, size_t size);
  std::string* mutable_token();
  std::string* release_token();
  void set_allocated_token(std::string* token);
  private:
  const std::string& _internal_token() const;
  void _internal_set_token(const std::string& value);
  std::string* _internal_mutable_token();
  public:

  // required uint64 uid = 1;
  bool has_uid() const;
  private:
  bool _internal_has_uid() const;
  public:
  void clear_uid();
  ::PROTOBUF_NAMESPACE_ID::uint64 uid() const;
  void set_uid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_uid() const;
  void _internal_set_uid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // required uint64 canceltradebatchid = 4;
  bool has_canceltradebatchid() const;
  private:
  bool _internal_has_canceltradebatchid() const;
  public:
  void clear_canceltradebatchid();
  ::PROTOBUF_NAMESPACE_ID::uint64 canceltradebatchid() const;
  void set_canceltradebatchid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint64 _internal_canceltradebatchid() const;
  void _internal_set_canceltradebatchid(::PROTOBUF_NAMESPACE_ID::uint64 value);
  public:

  // @@protoc_insertion_point(class_scope:ukex.canceltradebatch)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ukex::canceltradebatch_Orders > orders_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr token_;
  ::PROTOBUF_NAMESPACE_ID::uint64 uid_;
  ::PROTOBUF_NAMESPACE_ID::uint64 canceltradebatchid_;
  friend struct ::TableStruct_ukex_2ecanceltradebatch_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// canceltradebatch_Orders

// required uint64 orderid = 1;
inline bool canceltradebatch_Orders::_internal_has_orderid() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool canceltradebatch_Orders::has_orderid() const {
  return _internal_has_orderid();
}
inline void canceltradebatch_Orders::clear_orderid() {
  orderid_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 canceltradebatch_Orders::_internal_orderid() const {
  return orderid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 canceltradebatch_Orders::orderid() const {
  // @@protoc_insertion_point(field_get:ukex.canceltradebatch.Orders.orderid)
  return _internal_orderid();
}
inline void canceltradebatch_Orders::_internal_set_orderid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000004u;
  orderid_ = value;
}
inline void canceltradebatch_Orders::set_orderid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_orderid(value);
  // @@protoc_insertion_point(field_set:ukex.canceltradebatch.Orders.orderid)
}

// required uint64 marketid = 2;
inline bool canceltradebatch_Orders::_internal_has_marketid() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool canceltradebatch_Orders::has_marketid() const {
  return _internal_has_marketid();
}
inline void canceltradebatch_Orders::clear_marketid() {
  marketid_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 canceltradebatch_Orders::_internal_marketid() const {
  return marketid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 canceltradebatch_Orders::marketid() const {
  // @@protoc_insertion_point(field_get:ukex.canceltradebatch.Orders.marketid)
  return _internal_marketid();
}
inline void canceltradebatch_Orders::_internal_set_marketid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000008u;
  marketid_ = value;
}
inline void canceltradebatch_Orders::set_marketid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_marketid(value);
  // @@protoc_insertion_point(field_set:ukex.canceltradebatch.Orders.marketid)
}

// required uint32 type = 3;
inline bool canceltradebatch_Orders::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool canceltradebatch_Orders::has_type() const {
  return _internal_has_type();
}
inline void canceltradebatch_Orders::clear_type() {
  type_ = 0u;
  _has_bits_[0] &= ~0x00000010u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 canceltradebatch_Orders::_internal_type() const {
  return type_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 canceltradebatch_Orders::type() const {
  // @@protoc_insertion_point(field_get:ukex.canceltradebatch.Orders.type)
  return _internal_type();
}
inline void canceltradebatch_Orders::_internal_set_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000010u;
  type_ = value;
}
inline void canceltradebatch_Orders::set_type(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:ukex.canceltradebatch.Orders.type)
}

// optional string price = 4;
inline bool canceltradebatch_Orders::_internal_has_price() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool canceltradebatch_Orders::has_price() const {
  return _internal_has_price();
}
inline void canceltradebatch_Orders::clear_price() {
  price_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& canceltradebatch_Orders::price() const {
  // @@protoc_insertion_point(field_get:ukex.canceltradebatch.Orders.price)
  return _internal_price();
}
inline void canceltradebatch_Orders::set_price(const std::string& value) {
  _internal_set_price(value);
  // @@protoc_insertion_point(field_set:ukex.canceltradebatch.Orders.price)
}
inline std::string* canceltradebatch_Orders::mutable_price() {
  // @@protoc_insertion_point(field_mutable:ukex.canceltradebatch.Orders.price)
  return _internal_mutable_price();
}
inline const std::string& canceltradebatch_Orders::_internal_price() const {
  return price_.GetNoArena();
}
inline void canceltradebatch_Orders::_internal_set_price(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  price_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void canceltradebatch_Orders::set_price(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  price_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ukex.canceltradebatch.Orders.price)
}
inline void canceltradebatch_Orders::set_price(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  price_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ukex.canceltradebatch.Orders.price)
}
inline void canceltradebatch_Orders::set_price(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  price_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ukex.canceltradebatch.Orders.price)
}
inline std::string* canceltradebatch_Orders::_internal_mutable_price() {
  _has_bits_[0] |= 0x00000001u;
  return price_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* canceltradebatch_Orders::release_price() {
  // @@protoc_insertion_point(field_release:ukex.canceltradebatch.Orders.price)
  if (!has_price()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return price_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void canceltradebatch_Orders::set_allocated_price(std::string* price) {
  if (price != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  price_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), price);
  // @@protoc_insertion_point(field_set_allocated:ukex.canceltradebatch.Orders.price)
}

// optional string number = 5;
inline bool canceltradebatch_Orders::_internal_has_number() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool canceltradebatch_Orders::has_number() const {
  return _internal_has_number();
}
inline void canceltradebatch_Orders::clear_number() {
  number_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& canceltradebatch_Orders::number() const {
  // @@protoc_insertion_point(field_get:ukex.canceltradebatch.Orders.number)
  return _internal_number();
}
inline void canceltradebatch_Orders::set_number(const std::string& value) {
  _internal_set_number(value);
  // @@protoc_insertion_point(field_set:ukex.canceltradebatch.Orders.number)
}
inline std::string* canceltradebatch_Orders::mutable_number() {
  // @@protoc_insertion_point(field_mutable:ukex.canceltradebatch.Orders.number)
  return _internal_mutable_number();
}
inline const std::string& canceltradebatch_Orders::_internal_number() const {
  return number_.GetNoArena();
}
inline void canceltradebatch_Orders::_internal_set_number(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  number_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void canceltradebatch_Orders::set_number(std::string&& value) {
  _has_bits_[0] |= 0x00000002u;
  number_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ukex.canceltradebatch.Orders.number)
}
inline void canceltradebatch_Orders::set_number(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000002u;
  number_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ukex.canceltradebatch.Orders.number)
}
inline void canceltradebatch_Orders::set_number(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000002u;
  number_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ukex.canceltradebatch.Orders.number)
}
inline std::string* canceltradebatch_Orders::_internal_mutable_number() {
  _has_bits_[0] |= 0x00000002u;
  return number_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* canceltradebatch_Orders::release_number() {
  // @@protoc_insertion_point(field_release:ukex.canceltradebatch.Orders.number)
  if (!has_number()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  return number_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void canceltradebatch_Orders::set_allocated_number(std::string* number) {
  if (number != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  number_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), number);
  // @@protoc_insertion_point(field_set_allocated:ukex.canceltradebatch.Orders.number)
}

// -------------------------------------------------------------------

// canceltradebatch

// required uint64 uid = 1;
inline bool canceltradebatch::_internal_has_uid() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool canceltradebatch::has_uid() const {
  return _internal_has_uid();
}
inline void canceltradebatch::clear_uid() {
  uid_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000002u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 canceltradebatch::_internal_uid() const {
  return uid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 canceltradebatch::uid() const {
  // @@protoc_insertion_point(field_get:ukex.canceltradebatch.uid)
  return _internal_uid();
}
inline void canceltradebatch::_internal_set_uid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000002u;
  uid_ = value;
}
inline void canceltradebatch::set_uid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_uid(value);
  // @@protoc_insertion_point(field_set:ukex.canceltradebatch.uid)
}

// required string token = 2;
inline bool canceltradebatch::_internal_has_token() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool canceltradebatch::has_token() const {
  return _internal_has_token();
}
inline void canceltradebatch::clear_token() {
  token_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& canceltradebatch::token() const {
  // @@protoc_insertion_point(field_get:ukex.canceltradebatch.token)
  return _internal_token();
}
inline void canceltradebatch::set_token(const std::string& value) {
  _internal_set_token(value);
  // @@protoc_insertion_point(field_set:ukex.canceltradebatch.token)
}
inline std::string* canceltradebatch::mutable_token() {
  // @@protoc_insertion_point(field_mutable:ukex.canceltradebatch.token)
  return _internal_mutable_token();
}
inline const std::string& canceltradebatch::_internal_token() const {
  return token_.GetNoArena();
}
inline void canceltradebatch::_internal_set_token(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  token_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void canceltradebatch::set_token(std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  token_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ukex.canceltradebatch.token)
}
inline void canceltradebatch::set_token(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  token_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ukex.canceltradebatch.token)
}
inline void canceltradebatch::set_token(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  token_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ukex.canceltradebatch.token)
}
inline std::string* canceltradebatch::_internal_mutable_token() {
  _has_bits_[0] |= 0x00000001u;
  return token_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* canceltradebatch::release_token() {
  // @@protoc_insertion_point(field_release:ukex.canceltradebatch.token)
  if (!has_token()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return token_.ReleaseNonDefaultNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void canceltradebatch::set_allocated_token(std::string* token) {
  if (token != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  token_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), token);
  // @@protoc_insertion_point(field_set_allocated:ukex.canceltradebatch.token)
}

// repeated .ukex.canceltradebatch.Orders orders = 3;
inline int canceltradebatch::_internal_orders_size() const {
  return orders_.size();
}
inline int canceltradebatch::orders_size() const {
  return _internal_orders_size();
}
inline void canceltradebatch::clear_orders() {
  orders_.Clear();
}
inline ::ukex::canceltradebatch_Orders* canceltradebatch::mutable_orders(int index) {
  // @@protoc_insertion_point(field_mutable:ukex.canceltradebatch.orders)
  return orders_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ukex::canceltradebatch_Orders >*
canceltradebatch::mutable_orders() {
  // @@protoc_insertion_point(field_mutable_list:ukex.canceltradebatch.orders)
  return &orders_;
}
inline const ::ukex::canceltradebatch_Orders& canceltradebatch::_internal_orders(int index) const {
  return orders_.Get(index);
}
inline const ::ukex::canceltradebatch_Orders& canceltradebatch::orders(int index) const {
  // @@protoc_insertion_point(field_get:ukex.canceltradebatch.orders)
  return _internal_orders(index);
}
inline ::ukex::canceltradebatch_Orders* canceltradebatch::_internal_add_orders() {
  return orders_.Add();
}
inline ::ukex::canceltradebatch_Orders* canceltradebatch::add_orders() {
  // @@protoc_insertion_point(field_add:ukex.canceltradebatch.orders)
  return _internal_add_orders();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ukex::canceltradebatch_Orders >&
canceltradebatch::orders() const {
  // @@protoc_insertion_point(field_list:ukex.canceltradebatch.orders)
  return orders_;
}

// required uint64 canceltradebatchid = 4;
inline bool canceltradebatch::_internal_has_canceltradebatchid() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool canceltradebatch::has_canceltradebatchid() const {
  return _internal_has_canceltradebatchid();
}
inline void canceltradebatch::clear_canceltradebatchid() {
  canceltradebatchid_ = PROTOBUF_ULONGLONG(0);
  _has_bits_[0] &= ~0x00000004u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 canceltradebatch::_internal_canceltradebatchid() const {
  return canceltradebatchid_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint64 canceltradebatch::canceltradebatchid() const {
  // @@protoc_insertion_point(field_get:ukex.canceltradebatch.canceltradebatchid)
  return _internal_canceltradebatchid();
}
inline void canceltradebatch::_internal_set_canceltradebatchid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _has_bits_[0] |= 0x00000004u;
  canceltradebatchid_ = value;
}
inline void canceltradebatch::set_canceltradebatchid(::PROTOBUF_NAMESPACE_ID::uint64 value) {
  _internal_set_canceltradebatchid(value);
  // @@protoc_insertion_point(field_set:ukex.canceltradebatch.canceltradebatchid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ukex

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::ukex::canceltradebatch_CONST> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::ukex::canceltradebatch_CONST>() {
  return ::ukex::canceltradebatch_CONST_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ukex_2ecanceltradebatch_2eproto
