/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: fifo.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "fifo.pb-c.h"
void   fifo_entry__init
                     (FifoEntry         *message)
{
  static FifoEntry init_value = FIFO_ENTRY__INIT;
  *message = init_value;
}
size_t fifo_entry__get_packed_size
                     (const FifoEntry *message)
{
  assert(message->base.descriptor == &fifo_entry__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t fifo_entry__pack
                     (const FifoEntry *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &fifo_entry__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t fifo_entry__pack_to_buffer
                     (const FifoEntry *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &fifo_entry__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
FifoEntry *
       fifo_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (FifoEntry *)
     protobuf_c_message_unpack (&fifo_entry__descriptor,
                                allocator, len, data);
}
void   fifo_entry__free_unpacked
                     (FifoEntry *message,
                      ProtobufCAllocator *allocator)
{
  assert(message->base.descriptor == &fifo_entry__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor fifo_entry__field_descriptors[2] =
{
  {
    "id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(FifoEntry, id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "pipe_id",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(FifoEntry, pipe_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned fifo_entry__field_indices_by_name[] = {
  0,   /* field[0] = id */
  1,   /* field[1] = pipe_id */
};
static const ProtobufCIntRange fifo_entry__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor fifo_entry__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "fifo_entry",
  "FifoEntry",
  "FifoEntry",
  "",
  sizeof(FifoEntry),
  2,
  fifo_entry__field_descriptors,
  fifo_entry__field_indices_by_name,
  1,  fifo_entry__number_ranges,
  (ProtobufCMessageInit) fifo_entry__init,
  NULL,NULL,NULL    /* reserved[123] */
};
