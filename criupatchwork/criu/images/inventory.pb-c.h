/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: inventory.proto */

#ifndef PROTOBUF_C_inventory_2eproto__INCLUDED
#define PROTOBUF_C_inventory_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "core.pb-c.h"

typedef struct _InventoryEntry InventoryEntry;


/* --- enums --- */

typedef enum _Lsmtype {
  LSMTYPE__NO_LSM = 0,
  LSMTYPE__SELINUX = 1,
  LSMTYPE__APPARMOR = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(LSMTYPE)
} Lsmtype;

/* --- messages --- */

struct  _InventoryEntry
{
  ProtobufCMessage base;
  uint32_t img_version;
  protobuf_c_boolean has_fdinfo_per_id;
  protobuf_c_boolean fdinfo_per_id;
  TaskKobjIdsEntry *root_ids;
  protobuf_c_boolean has_ns_per_id;
  protobuf_c_boolean ns_per_id;
  protobuf_c_boolean has_root_cg_set;
  uint32_t root_cg_set;
  protobuf_c_boolean has_lsmtype;
  Lsmtype lsmtype;
};
#define INVENTORY_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&inventory_entry__descriptor) \
    , 0, 0,0, NULL, 0,0, 0,0, 0,0 }


/* InventoryEntry methods */
void   inventory_entry__init
                     (InventoryEntry         *message);
size_t inventory_entry__get_packed_size
                     (const InventoryEntry   *message);
size_t inventory_entry__pack
                     (const InventoryEntry   *message,
                      uint8_t             *out);
size_t inventory_entry__pack_to_buffer
                     (const InventoryEntry   *message,
                      ProtobufCBuffer     *buffer);
InventoryEntry *
       inventory_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   inventory_entry__free_unpacked
                     (InventoryEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*InventoryEntry_Closure)
                 (const InventoryEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    lsmtype__descriptor;
extern const ProtobufCMessageDescriptor inventory_entry__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_inventory_2eproto__INCLUDED */
