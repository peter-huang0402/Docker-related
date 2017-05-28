/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: ghost-file.proto */

#ifndef PROTOBUF_C_ghost_2dfile_2eproto__INCLUDED
#define PROTOBUF_C_ghost_2dfile_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "opts.pb-c.h"
#include "time.pb-c.h"

typedef struct _GhostFileEntry GhostFileEntry;


/* --- enums --- */


/* --- messages --- */

struct  _GhostFileEntry
{
  ProtobufCMessage base;
  uint32_t uid;
  uint32_t gid;
  uint32_t mode;
  protobuf_c_boolean has_dev;
  uint32_t dev;
  protobuf_c_boolean has_ino;
  uint64_t ino;
  protobuf_c_boolean has_rdev;
  uint32_t rdev;
  Timeval *atim;
  Timeval *mtim;
};
#define GHOST_FILE_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&ghost_file_entry__descriptor) \
    , 0, 0, 0, 0,0, 0,0, 0,0, NULL, NULL }


/* GhostFileEntry methods */
void   ghost_file_entry__init
                     (GhostFileEntry         *message);
size_t ghost_file_entry__get_packed_size
                     (const GhostFileEntry   *message);
size_t ghost_file_entry__pack
                     (const GhostFileEntry   *message,
                      uint8_t             *out);
size_t ghost_file_entry__pack_to_buffer
                     (const GhostFileEntry   *message,
                      ProtobufCBuffer     *buffer);
GhostFileEntry *
       ghost_file_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   ghost_file_entry__free_unpacked
                     (GhostFileEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*GhostFileEntry_Closure)
                 (const GhostFileEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor ghost_file_entry__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_ghost_2dfile_2eproto__INCLUDED */
