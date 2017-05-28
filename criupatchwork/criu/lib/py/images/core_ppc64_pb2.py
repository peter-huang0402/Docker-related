# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: core-ppc64.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='core-ppc64.proto',
  package='',
  serialized_pb=_b('\n\x10\x63ore-ppc64.proto\"\xc2\x01\n\x15user_ppc64_regs_entry\x12\x0b\n\x03gpr\x18\x01 \x03(\x04\x12\x0b\n\x03nip\x18\x02 \x02(\x04\x12\x0b\n\x03msr\x18\x03 \x02(\x04\x12\x11\n\torig_gpr3\x18\x04 \x02(\x04\x12\x0b\n\x03\x63tr\x18\x05 \x02(\x04\x12\x0c\n\x04link\x18\x06 \x02(\x04\x12\x0b\n\x03xer\x18\x07 \x02(\x04\x12\x0b\n\x03\x63\x63r\x18\x08 \x02(\x04\x12\x0c\n\x04trap\x18\t \x02(\x04\x12\x0e\n\x06texasr\x18\n \x01(\x04\x12\r\n\x05tfhar\x18\x0b \x01(\x04\x12\r\n\x05tfiar\x18\x0c \x01(\x04\"*\n\x18user_ppc64_fpstate_entry\x12\x0e\n\x06\x66pregs\x18\x01 \x03(\x04\":\n\x18user_ppc64_vrstate_entry\x12\x0e\n\x06vrregs\x18\x01 \x03(\x04\x12\x0e\n\x06vrsave\x18\x02 \x02(\r\",\n\x19user_ppc64_vsxstate_entry\x12\x0f\n\x07vsxregs\x18\x01 \x03(\x04\"\xc8\x01\n\x18user_ppc64_tm_regs_entry\x12&\n\x06gpregs\x18\x01 \x02(\x0b\x32\x16.user_ppc64_regs_entry\x12*\n\x07\x66pstate\x18\x02 \x01(\x0b\x32\x19.user_ppc64_fpstate_entry\x12*\n\x07vrstate\x18\x03 \x01(\x0b\x32\x19.user_ppc64_vrstate_entry\x12,\n\x08vsxstate\x18\x04 \x01(\x0b\x32\x1a.user_ppc64_vsxstate_entry\"\x85\x02\n\x11thread_info_ppc64\x12\x16\n\x0e\x63lear_tid_addr\x18\x01 \x02(\x04\x12&\n\x06gpregs\x18\x02 \x02(\x0b\x32\x16.user_ppc64_regs_entry\x12*\n\x07\x66pstate\x18\x03 \x01(\x0b\x32\x19.user_ppc64_fpstate_entry\x12*\n\x07vrstate\x18\x04 \x01(\x0b\x32\x19.user_ppc64_vrstate_entry\x12,\n\x08vsxstate\x18\x05 \x01(\x0b\x32\x1a.user_ppc64_vsxstate_entry\x12*\n\x07tmstate\x18\x06 \x01(\x0b\x32\x19.user_ppc64_tm_regs_entry')
)
_sym_db.RegisterFileDescriptor(DESCRIPTOR)




_USER_PPC64_REGS_ENTRY = _descriptor.Descriptor(
  name='user_ppc64_regs_entry',
  full_name='user_ppc64_regs_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='gpr', full_name='user_ppc64_regs_entry.gpr', index=0,
      number=1, type=4, cpp_type=4, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='nip', full_name='user_ppc64_regs_entry.nip', index=1,
      number=2, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='msr', full_name='user_ppc64_regs_entry.msr', index=2,
      number=3, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='orig_gpr3', full_name='user_ppc64_regs_entry.orig_gpr3', index=3,
      number=4, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ctr', full_name='user_ppc64_regs_entry.ctr', index=4,
      number=5, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='link', full_name='user_ppc64_regs_entry.link', index=5,
      number=6, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='xer', full_name='user_ppc64_regs_entry.xer', index=6,
      number=7, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ccr', full_name='user_ppc64_regs_entry.ccr', index=7,
      number=8, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='trap', full_name='user_ppc64_regs_entry.trap', index=8,
      number=9, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='texasr', full_name='user_ppc64_regs_entry.texasr', index=9,
      number=10, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tfhar', full_name='user_ppc64_regs_entry.tfhar', index=10,
      number=11, type=4, cpp_type=4, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tfiar', full_name='user_ppc64_regs_entry.tfiar', index=11,
      number=12, type=4, cpp_type=4, label=1,
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
  serialized_start=21,
  serialized_end=215,
)


_USER_PPC64_FPSTATE_ENTRY = _descriptor.Descriptor(
  name='user_ppc64_fpstate_entry',
  full_name='user_ppc64_fpstate_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='fpregs', full_name='user_ppc64_fpstate_entry.fpregs', index=0,
      number=1, type=4, cpp_type=4, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=217,
  serialized_end=259,
)


_USER_PPC64_VRSTATE_ENTRY = _descriptor.Descriptor(
  name='user_ppc64_vrstate_entry',
  full_name='user_ppc64_vrstate_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='vrregs', full_name='user_ppc64_vrstate_entry.vrregs', index=0,
      number=1, type=4, cpp_type=4, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='vrsave', full_name='user_ppc64_vrstate_entry.vrsave', index=1,
      number=2, type=13, cpp_type=3, label=2,
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
  serialized_start=261,
  serialized_end=319,
)


_USER_PPC64_VSXSTATE_ENTRY = _descriptor.Descriptor(
  name='user_ppc64_vsxstate_entry',
  full_name='user_ppc64_vsxstate_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='vsxregs', full_name='user_ppc64_vsxstate_entry.vsxregs', index=0,
      number=1, type=4, cpp_type=4, label=3,
      has_default_value=False, default_value=[],
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
  serialized_start=321,
  serialized_end=365,
)


_USER_PPC64_TM_REGS_ENTRY = _descriptor.Descriptor(
  name='user_ppc64_tm_regs_entry',
  full_name='user_ppc64_tm_regs_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='gpregs', full_name='user_ppc64_tm_regs_entry.gpregs', index=0,
      number=1, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='fpstate', full_name='user_ppc64_tm_regs_entry.fpstate', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='vrstate', full_name='user_ppc64_tm_regs_entry.vrstate', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='vsxstate', full_name='user_ppc64_tm_regs_entry.vsxstate', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=368,
  serialized_end=568,
)


_THREAD_INFO_PPC64 = _descriptor.Descriptor(
  name='thread_info_ppc64',
  full_name='thread_info_ppc64',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='clear_tid_addr', full_name='thread_info_ppc64.clear_tid_addr', index=0,
      number=1, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='gpregs', full_name='thread_info_ppc64.gpregs', index=1,
      number=2, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='fpstate', full_name='thread_info_ppc64.fpstate', index=2,
      number=3, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='vrstate', full_name='thread_info_ppc64.vrstate', index=3,
      number=4, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='vsxstate', full_name='thread_info_ppc64.vsxstate', index=4,
      number=5, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='tmstate', full_name='thread_info_ppc64.tmstate', index=5,
      number=6, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
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
  serialized_start=571,
  serialized_end=832,
)

_USER_PPC64_TM_REGS_ENTRY.fields_by_name['gpregs'].message_type = _USER_PPC64_REGS_ENTRY
_USER_PPC64_TM_REGS_ENTRY.fields_by_name['fpstate'].message_type = _USER_PPC64_FPSTATE_ENTRY
_USER_PPC64_TM_REGS_ENTRY.fields_by_name['vrstate'].message_type = _USER_PPC64_VRSTATE_ENTRY
_USER_PPC64_TM_REGS_ENTRY.fields_by_name['vsxstate'].message_type = _USER_PPC64_VSXSTATE_ENTRY
_THREAD_INFO_PPC64.fields_by_name['gpregs'].message_type = _USER_PPC64_REGS_ENTRY
_THREAD_INFO_PPC64.fields_by_name['fpstate'].message_type = _USER_PPC64_FPSTATE_ENTRY
_THREAD_INFO_PPC64.fields_by_name['vrstate'].message_type = _USER_PPC64_VRSTATE_ENTRY
_THREAD_INFO_PPC64.fields_by_name['vsxstate'].message_type = _USER_PPC64_VSXSTATE_ENTRY
_THREAD_INFO_PPC64.fields_by_name['tmstate'].message_type = _USER_PPC64_TM_REGS_ENTRY
DESCRIPTOR.message_types_by_name['user_ppc64_regs_entry'] = _USER_PPC64_REGS_ENTRY
DESCRIPTOR.message_types_by_name['user_ppc64_fpstate_entry'] = _USER_PPC64_FPSTATE_ENTRY
DESCRIPTOR.message_types_by_name['user_ppc64_vrstate_entry'] = _USER_PPC64_VRSTATE_ENTRY
DESCRIPTOR.message_types_by_name['user_ppc64_vsxstate_entry'] = _USER_PPC64_VSXSTATE_ENTRY
DESCRIPTOR.message_types_by_name['user_ppc64_tm_regs_entry'] = _USER_PPC64_TM_REGS_ENTRY
DESCRIPTOR.message_types_by_name['thread_info_ppc64'] = _THREAD_INFO_PPC64

user_ppc64_regs_entry = _reflection.GeneratedProtocolMessageType('user_ppc64_regs_entry', (_message.Message,), dict(
  DESCRIPTOR = _USER_PPC64_REGS_ENTRY,
  __module__ = 'core_ppc64_pb2'
  # @@protoc_insertion_point(class_scope:user_ppc64_regs_entry)
  ))
_sym_db.RegisterMessage(user_ppc64_regs_entry)

user_ppc64_fpstate_entry = _reflection.GeneratedProtocolMessageType('user_ppc64_fpstate_entry', (_message.Message,), dict(
  DESCRIPTOR = _USER_PPC64_FPSTATE_ENTRY,
  __module__ = 'core_ppc64_pb2'
  # @@protoc_insertion_point(class_scope:user_ppc64_fpstate_entry)
  ))
_sym_db.RegisterMessage(user_ppc64_fpstate_entry)

user_ppc64_vrstate_entry = _reflection.GeneratedProtocolMessageType('user_ppc64_vrstate_entry', (_message.Message,), dict(
  DESCRIPTOR = _USER_PPC64_VRSTATE_ENTRY,
  __module__ = 'core_ppc64_pb2'
  # @@protoc_insertion_point(class_scope:user_ppc64_vrstate_entry)
  ))
_sym_db.RegisterMessage(user_ppc64_vrstate_entry)

user_ppc64_vsxstate_entry = _reflection.GeneratedProtocolMessageType('user_ppc64_vsxstate_entry', (_message.Message,), dict(
  DESCRIPTOR = _USER_PPC64_VSXSTATE_ENTRY,
  __module__ = 'core_ppc64_pb2'
  # @@protoc_insertion_point(class_scope:user_ppc64_vsxstate_entry)
  ))
_sym_db.RegisterMessage(user_ppc64_vsxstate_entry)

user_ppc64_tm_regs_entry = _reflection.GeneratedProtocolMessageType('user_ppc64_tm_regs_entry', (_message.Message,), dict(
  DESCRIPTOR = _USER_PPC64_TM_REGS_ENTRY,
  __module__ = 'core_ppc64_pb2'
  # @@protoc_insertion_point(class_scope:user_ppc64_tm_regs_entry)
  ))
_sym_db.RegisterMessage(user_ppc64_tm_regs_entry)

thread_info_ppc64 = _reflection.GeneratedProtocolMessageType('thread_info_ppc64', (_message.Message,), dict(
  DESCRIPTOR = _THREAD_INFO_PPC64,
  __module__ = 'core_ppc64_pb2'
  # @@protoc_insertion_point(class_scope:thread_info_ppc64)
  ))
_sym_db.RegisterMessage(thread_info_ppc64)


# @@protoc_insertion_point(module_scope)