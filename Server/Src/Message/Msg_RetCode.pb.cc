// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Msg_RetCode.proto

#include "Msg_RetCode.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
namespace protobuf_Msg_5fRetCode_2eproto {
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "Msg_RetCode.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\021Msg_RetCode.proto*\330\004\n\016MessageRetCode\022\021"
      "\n\rMRC_SUCCESSED\020\000\022\024\n\020MRC_UNKNOW_ERROR\020\001\022"
      "\022\n\016MRC_DISCONNECT\020\002\022\025\n\021MRC_ACCOUNT_EXIST"
      "\020\003\022\022\n\016MRC_NAME_EXIST\020\004\022\026\n\022MRC_ACCOUNT_SE"
      "ALED\020\005\022\027\n\023MRC_INVALID_ACCNAME\020d\022\025\n\021MRC_I"
      "NVALID_ACCID\020e\022\030\n\024MRC_INVALID_PASSWORD\020f"
      "\022\024\n\020MRC_INVALID_NAME\020g\022\026\n\022MRC_INVALID_RO"
      "LEID\020h\022\026\n\022MRC_INVALID_ITEMID\020i\022\026\n\022MRC_IN"
      "VALID_COPYID\020j\022\025\n\021MRC_INVALID_PETID\020k\022\031\n"
      "\025MRC_INVALID_PARTNERID\020l\022\030\n\024MRC_INVALID_"
      "EQUIP_ID\020m\022\030\n\024MRC_INVALID_CARRERID\020n\022\030\n\024"
      "MRC_INVALID_SKILL_ID\020o\022\031\n\025MRC_INVALID_TA"
      "RGET_ID\020p\022\032\n\025MRC_NOT_ENOUGH_ACTOIN\020\310\001\022\031\n"
      "\024MRC_NOT_ENOUGH_MONEY\020\311\001\022\030\n\023MRC_NOT_ENOU"
      "GH_ITEM\020\312\001\022\031\n\024MRC_NOT_ENOUGH_TIMES\020\313\001\022\027\n"
      "\022MRC_SKILL_CD_ERROR\020\254\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 630);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Msg_RetCode.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_Msg_5fRetCode_2eproto
const ::google::protobuf::EnumDescriptor* MessageRetCode_descriptor() {
  protobuf_Msg_5fRetCode_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_Msg_5fRetCode_2eproto::file_level_enum_descriptors[0];
}
bool MessageRetCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 100:
    case 101:
    case 102:
    case 103:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 110:
    case 111:
    case 112:
    case 200:
    case 201:
    case 202:
    case 203:
    case 300:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
