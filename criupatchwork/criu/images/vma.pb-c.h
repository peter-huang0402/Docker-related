/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: vma.proto */

#ifndef PROTOBUF_C_vma_2eproto__INCLUDED
#define PROTOBUF_C_vma_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1002001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "opts.pb-c.h"

typedef struct _VmaEntry VmaEntry;


/* --- enums --- */


/* --- messages --- */

struct  _VmaEntry
{
  ProtobufCMessage base;
  uint64_t start;
  uint64_t end;
  uint64_t pgoff;
  uint64_t shmid;
  uint32_t prot;
  uint32_t flags;
  uint32_t status;
  /*
   * This fd thing is unused in the image, it was lost
   * while switching from execve restore model. It is
   * -1 by default.
   */
  int64_t fd;
  /*
   * madvise flags bitmap 
   */
  protobuf_c_boolean has_madv;
  uint64_t madv;
  /*
   * file status flags 
   */
  protobuf_c_boolean has_fdflags;
  uint32_t fdflags;
};
#define VMA_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&vma_entry__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0, 0, 0,0, 0,0 }


/* VmaEntry methods */
void   vma_entry__init
                     (VmaEntry         *message);
size_t vma_entry__get_packed_size
                     (const VmaEntry   *message);
size_t vma_entry__pack
                     (const VmaEntry   *message,
                      uint8_t             *out);
size_t vma_entry__pack_to_buffer
                     (const VmaEntry   *message,
                      ProtobufCBuffer     *buffer);
VmaEntry *
       vma_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   vma_entry__free_unpacked
                     (VmaEntry *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*VmaEntry_Closure)
                 (const VmaEntry *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor vma_entry__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_vma_2eproto__INCLUDED */