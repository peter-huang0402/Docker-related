/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: remap-file-path.proto */

#ifndef PROTOBUF_C_remap_2dfile_2dpath_2eproto__INCLUDED
#define PROTOBUF_C_remap_2dfile_2dpath_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif


typedef struct _RemapFilePathEntry RemapFilePathEntry;


/* --- enums --- */

typedef enum _RemapType {
  REMAP_TYPE__LINKED = 0,
  REMAP_TYPE__GHOST = 1,
  REMAP_TYPE__PROCFS = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(REMAP_TYPE)
} RemapType;

/* --- messages --- */

struct  _RemapFilePathEntry
{
  ProtobufCMessage base;
  uint32_t orig_id;
  uint32_t remap_id;
  protobuf_c_boolean has_remap_type;
  RemapType remap_type;
};
#define REMAP_FILE_PATH_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&remap_file_path_entry__descriptor) \
    , 0, 0, 0,0 }


/* RemapFilePathEntry methods */
void   remap_file_path_entry__init
                     (RemapFilePathEntry         *message);
size_t remap_file_path_entry__get_packed_size
                     (const RemapFilePathEntry   *message);
size_t remap_file_path_entry__pack
                     (const RemapFilePathEntry   *message,
                      uint8_t             *out);
size_t remap_file_path_entry__pack_to_buffer
                     (const RemapFilePathEntry   *message,
                      ProtobufCBuffer     *buffer);
RemapFilePathEntry *
       remap_file_path_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   remap_file_path_entry__free_unpacked
                     (RemapFilePathEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*RemapFilePathEntry_Closure)
                 (const RemapFilePathEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    remap_type__descriptor;
extern const ProtobufCMessageDescriptor remap_file_path_entry__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_remap_2dfile_2dpath_2eproto__INCLUDED */