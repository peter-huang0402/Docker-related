# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: ipc-shm.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import ipc_desc_pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='ipc-shm.proto',
  package='',
  serialized_pb=_b('\n\ripc-shm.proto\x1a\x0eipc-desc.proto\"<\n\ripc_shm_entry\x12\x1d\n\x04\x64\x65sc\x18\x01 \x02(\x0b\x32\x0f.ipc_desc_entry\x12\x0c\n\x04size\x18\x02 \x02(\x04')
  ,
  dependencies=[ipc_desc_pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_IPC_SHM_ENTRY = _descriptor.Descriptor(
  name='ipc_shm_entry',
  full_name='ipc_shm_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='desc', full_name='ipc_shm_entry.desc', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='size', full_name='ipc_shm_entry.size', index=1,
      number=2, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=33,
  serialized_end=93,
)

_IPC_SHM_ENTRY.fields_by_name['desc'].message_type = ipc_desc_pb2._IPC_DESC_ENTRY
DESCRIPTOR.message_types_by_name['ipc_shm_entry'] = _IPC_SHM_ENTRY

ipc_shm_entry = _reflection.GeneratedProtocolMessageType('ipc_shm_entry', (_message.Message,), dict(
  DESCRIPTOR = _IPC_SHM_ENTRY,
  __module__ = 'ipc_shm_pb2'
  # @@protoc_insertion_point(class_scope:ipc_shm_entry)
  ))
_sym_db.RegisterMessage(ipc_shm_entry)


# @@protoc_insertion_point(module_scope)
