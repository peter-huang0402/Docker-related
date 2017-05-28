# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: fsnotify.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf.internal import enum_type_wrapper
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()


import opts_pb2
import fh_pb2
import fown_pb2


DESCRIPTOR = _descriptor.FileDescriptor(
  name='fsnotify.proto',
  package='',
  serialized_pb=_b('\n\x0e\x66snotify.proto\x1a\nopts.proto\x1a\x08\x66h.proto\x1a\nfown.proto\"\x9e\x01\n\x10inotify_wd_entry\x12\n\n\x02id\x18\x01 \x02(\r\x12\r\n\x05i_ino\x18\x02 \x02(\x04\x12\x13\n\x04mask\x18\x03 \x02(\rB\x05\xd2?\x02\x08\x01\x12\x1b\n\x0cignored_mask\x18\x04 \x02(\rB\x05\xd2?\x02\x08\x01\x12\x14\n\x05s_dev\x18\x05 \x02(\rB\x05\xd2?\x02 \x01\x12\n\n\x02wd\x18\x06 \x02(\r\x12\x1b\n\x08\x66_handle\x18\x07 \x02(\x0b\x32\t.fh_entry\"p\n\x12inotify_file_entry\x12\n\n\x02id\x18\x01 \x02(\r\x12\x14\n\x05\x66lags\x18\x02 \x02(\rB\x05\xd2?\x02\x08\x01\x12\x19\n\x04\x66own\x18\x04 \x02(\x0b\x32\x0b.fown_entry\x12\x1d\n\x02wd\x18\x05 \x03(\x0b\x32\x11.inotify_wd_entry\"G\n\x19\x66\x61notify_inode_mark_entry\x12\r\n\x05i_ino\x18\x01 \x02(\x04\x12\x1b\n\x08\x66_handle\x18\x02 \x02(\x0b\x32\t.fh_entry\"+\n\x19\x66\x61notify_mount_mark_entry\x12\x0e\n\x06mnt_id\x18\x01 \x02(\r\"\xea\x01\n\x13\x66\x61notify_mark_entry\x12\n\n\x02id\x18\x01 \x02(\r\x12\x18\n\x04type\x18\x02 \x02(\x0e\x32\n.mark_type\x12\x15\n\x06mflags\x18\x03 \x02(\rB\x05\xd2?\x02\x08\x01\x12\x13\n\x04mask\x18\x04 \x02(\rB\x05\xd2?\x02\x08\x01\x12\x1b\n\x0cignored_mask\x18\x05 \x02(\rB\x05\xd2?\x02\x08\x01\x12\x14\n\x05s_dev\x18\x06 \x02(\rB\x05\xd2?\x02 \x01\x12&\n\x02ie\x18\x07 \x01(\x0b\x32\x1a.fanotify_inode_mark_entry\x12&\n\x02me\x18\x08 \x01(\x0b\x32\x1a.fanotify_mount_mark_entry\"\xa6\x01\n\x13\x66\x61notify_file_entry\x12\n\n\x02id\x18\x01 \x02(\r\x12\x14\n\x05\x66lags\x18\x02 \x02(\rB\x05\xd2?\x02\x08\x01\x12\x19\n\x04\x66own\x18\x03 \x02(\x0b\x32\x0b.fown_entry\x12\x16\n\x07\x66\x61\x66lags\x18\x04 \x02(\rB\x05\xd2?\x02\x08\x01\x12\x16\n\x07\x65vflags\x18\x05 \x02(\rB\x05\xd2?\x02\x08\x01\x12\"\n\x04mark\x18\x06 \x03(\x0b\x32\x14.fanotify_mark_entry*!\n\tmark_type\x12\t\n\x05INODE\x10\x01\x12\t\n\x05MOUNT\x10\x02')
  ,
  dependencies=[opts_pb2.DESCRIPTOR,fh_pb2.DESCRIPTOR,fown_pb2.DESCRIPTOR,])
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

_MARK_TYPE = _descriptor.EnumDescriptor(
  name='mark_type',
  full_name='mark_type',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='INODE', index=0, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='MOUNT', index=1, number=2,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=851,
  serialized_end=884,
)
_sym_db.RegisterEnumDescriptor(_MARK_TYPE)

mark_type = enum_type_wrapper.EnumTypeWrapper(_MARK_TYPE)
INODE = 1
MOUNT = 2



_INOTIFY_WD_ENTRY = _descriptor.Descriptor(
  name='inotify_wd_entry',
  full_name='inotify_wd_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='inotify_wd_entry.id', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='i_ino', full_name='inotify_wd_entry.i_ino', index=1,
      number=2, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='mask', full_name='inotify_wd_entry.mask', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))),
    _descriptor.FieldDescriptor(
      name='ignored_mask', full_name='inotify_wd_entry.ignored_mask', index=3,
      number=4, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))),
    _descriptor.FieldDescriptor(
      name='s_dev', full_name='inotify_wd_entry.s_dev', index=4,
      number=5, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002 \001'))),
    _descriptor.FieldDescriptor(
      name='wd', full_name='inotify_wd_entry.wd', index=5,
      number=6, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='f_handle', full_name='inotify_wd_entry.f_handle', index=6,
      number=7, type=11, cpp_type=10, label=2,
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
  serialized_start=53,
  serialized_end=211,
)


_INOTIFY_FILE_ENTRY = _descriptor.Descriptor(
  name='inotify_file_entry',
  full_name='inotify_file_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='inotify_file_entry.id', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='flags', full_name='inotify_file_entry.flags', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))),
    _descriptor.FieldDescriptor(
      name='fown', full_name='inotify_file_entry.fown', index=2,
      number=4, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='wd', full_name='inotify_file_entry.wd', index=3,
      number=5, type=11, cpp_type=10, label=3,
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
  serialized_start=213,
  serialized_end=325,
)


_FANOTIFY_INODE_MARK_ENTRY = _descriptor.Descriptor(
  name='fanotify_inode_mark_entry',
  full_name='fanotify_inode_mark_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='i_ino', full_name='fanotify_inode_mark_entry.i_ino', index=0,
      number=1, type=4, cpp_type=4, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='f_handle', full_name='fanotify_inode_mark_entry.f_handle', index=1,
      number=2, type=11, cpp_type=10, label=2,
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
  serialized_start=327,
  serialized_end=398,
)


_FANOTIFY_MOUNT_MARK_ENTRY = _descriptor.Descriptor(
  name='fanotify_mount_mark_entry',
  full_name='fanotify_mount_mark_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='mnt_id', full_name='fanotify_mount_mark_entry.mnt_id', index=0,
      number=1, type=13, cpp_type=3, label=2,
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
  serialized_start=400,
  serialized_end=443,
)


_FANOTIFY_MARK_ENTRY = _descriptor.Descriptor(
  name='fanotify_mark_entry',
  full_name='fanotify_mark_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='fanotify_mark_entry.id', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='type', full_name='fanotify_mark_entry.type', index=1,
      number=2, type=14, cpp_type=8, label=2,
      has_default_value=False, default_value=1,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='mflags', full_name='fanotify_mark_entry.mflags', index=2,
      number=3, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))),
    _descriptor.FieldDescriptor(
      name='mask', full_name='fanotify_mark_entry.mask', index=3,
      number=4, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))),
    _descriptor.FieldDescriptor(
      name='ignored_mask', full_name='fanotify_mark_entry.ignored_mask', index=4,
      number=5, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))),
    _descriptor.FieldDescriptor(
      name='s_dev', full_name='fanotify_mark_entry.s_dev', index=5,
      number=6, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002 \001'))),
    _descriptor.FieldDescriptor(
      name='ie', full_name='fanotify_mark_entry.ie', index=6,
      number=7, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='me', full_name='fanotify_mark_entry.me', index=7,
      number=8, type=11, cpp_type=10, label=1,
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
  serialized_start=446,
  serialized_end=680,
)


_FANOTIFY_FILE_ENTRY = _descriptor.Descriptor(
  name='fanotify_file_entry',
  full_name='fanotify_file_entry',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='fanotify_file_entry.id', index=0,
      number=1, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='flags', full_name='fanotify_file_entry.flags', index=1,
      number=2, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))),
    _descriptor.FieldDescriptor(
      name='fown', full_name='fanotify_file_entry.fown', index=2,
      number=3, type=11, cpp_type=10, label=2,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='faflags', full_name='fanotify_file_entry.faflags', index=3,
      number=4, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))),
    _descriptor.FieldDescriptor(
      name='evflags', full_name='fanotify_file_entry.evflags', index=4,
      number=5, type=13, cpp_type=3, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=_descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))),
    _descriptor.FieldDescriptor(
      name='mark', full_name='fanotify_file_entry.mark', index=5,
      number=6, type=11, cpp_type=10, label=3,
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
  serialized_start=683,
  serialized_end=849,
)

_INOTIFY_WD_ENTRY.fields_by_name['f_handle'].message_type = fh_pb2._FH_ENTRY
_INOTIFY_FILE_ENTRY.fields_by_name['fown'].message_type = fown_pb2._FOWN_ENTRY
_INOTIFY_FILE_ENTRY.fields_by_name['wd'].message_type = _INOTIFY_WD_ENTRY
_FANOTIFY_INODE_MARK_ENTRY.fields_by_name['f_handle'].message_type = fh_pb2._FH_ENTRY
_FANOTIFY_MARK_ENTRY.fields_by_name['type'].enum_type = _MARK_TYPE
_FANOTIFY_MARK_ENTRY.fields_by_name['ie'].message_type = _FANOTIFY_INODE_MARK_ENTRY
_FANOTIFY_MARK_ENTRY.fields_by_name['me'].message_type = _FANOTIFY_MOUNT_MARK_ENTRY
_FANOTIFY_FILE_ENTRY.fields_by_name['fown'].message_type = fown_pb2._FOWN_ENTRY
_FANOTIFY_FILE_ENTRY.fields_by_name['mark'].message_type = _FANOTIFY_MARK_ENTRY
DESCRIPTOR.message_types_by_name['inotify_wd_entry'] = _INOTIFY_WD_ENTRY
DESCRIPTOR.message_types_by_name['inotify_file_entry'] = _INOTIFY_FILE_ENTRY
DESCRIPTOR.message_types_by_name['fanotify_inode_mark_entry'] = _FANOTIFY_INODE_MARK_ENTRY
DESCRIPTOR.message_types_by_name['fanotify_mount_mark_entry'] = _FANOTIFY_MOUNT_MARK_ENTRY
DESCRIPTOR.message_types_by_name['fanotify_mark_entry'] = _FANOTIFY_MARK_ENTRY
DESCRIPTOR.message_types_by_name['fanotify_file_entry'] = _FANOTIFY_FILE_ENTRY
DESCRIPTOR.enum_types_by_name['mark_type'] = _MARK_TYPE

inotify_wd_entry = _reflection.GeneratedProtocolMessageType('inotify_wd_entry', (_message.Message,), dict(
  DESCRIPTOR = _INOTIFY_WD_ENTRY,
  __module__ = 'fsnotify_pb2'
  # @@protoc_insertion_point(class_scope:inotify_wd_entry)
  ))
_sym_db.RegisterMessage(inotify_wd_entry)

inotify_file_entry = _reflection.GeneratedProtocolMessageType('inotify_file_entry', (_message.Message,), dict(
  DESCRIPTOR = _INOTIFY_FILE_ENTRY,
  __module__ = 'fsnotify_pb2'
  # @@protoc_insertion_point(class_scope:inotify_file_entry)
  ))
_sym_db.RegisterMessage(inotify_file_entry)

fanotify_inode_mark_entry = _reflection.GeneratedProtocolMessageType('fanotify_inode_mark_entry', (_message.Message,), dict(
  DESCRIPTOR = _FANOTIFY_INODE_MARK_ENTRY,
  __module__ = 'fsnotify_pb2'
  # @@protoc_insertion_point(class_scope:fanotify_inode_mark_entry)
  ))
_sym_db.RegisterMessage(fanotify_inode_mark_entry)

fanotify_mount_mark_entry = _reflection.GeneratedProtocolMessageType('fanotify_mount_mark_entry', (_message.Message,), dict(
  DESCRIPTOR = _FANOTIFY_MOUNT_MARK_ENTRY,
  __module__ = 'fsnotify_pb2'
  # @@protoc_insertion_point(class_scope:fanotify_mount_mark_entry)
  ))
_sym_db.RegisterMessage(fanotify_mount_mark_entry)

fanotify_mark_entry = _reflection.GeneratedProtocolMessageType('fanotify_mark_entry', (_message.Message,), dict(
  DESCRIPTOR = _FANOTIFY_MARK_ENTRY,
  __module__ = 'fsnotify_pb2'
  # @@protoc_insertion_point(class_scope:fanotify_mark_entry)
  ))
_sym_db.RegisterMessage(fanotify_mark_entry)

fanotify_file_entry = _reflection.GeneratedProtocolMessageType('fanotify_file_entry', (_message.Message,), dict(
  DESCRIPTOR = _FANOTIFY_FILE_ENTRY,
  __module__ = 'fsnotify_pb2'
  # @@protoc_insertion_point(class_scope:fanotify_file_entry)
  ))
_sym_db.RegisterMessage(fanotify_file_entry)


_INOTIFY_WD_ENTRY.fields_by_name['mask'].has_options = True
_INOTIFY_WD_ENTRY.fields_by_name['mask']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))
_INOTIFY_WD_ENTRY.fields_by_name['ignored_mask'].has_options = True
_INOTIFY_WD_ENTRY.fields_by_name['ignored_mask']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))
_INOTIFY_WD_ENTRY.fields_by_name['s_dev'].has_options = True
_INOTIFY_WD_ENTRY.fields_by_name['s_dev']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002 \001'))
_INOTIFY_FILE_ENTRY.fields_by_name['flags'].has_options = True
_INOTIFY_FILE_ENTRY.fields_by_name['flags']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))
_FANOTIFY_MARK_ENTRY.fields_by_name['mflags'].has_options = True
_FANOTIFY_MARK_ENTRY.fields_by_name['mflags']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))
_FANOTIFY_MARK_ENTRY.fields_by_name['mask'].has_options = True
_FANOTIFY_MARK_ENTRY.fields_by_name['mask']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))
_FANOTIFY_MARK_ENTRY.fields_by_name['ignored_mask'].has_options = True
_FANOTIFY_MARK_ENTRY.fields_by_name['ignored_mask']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))
_FANOTIFY_MARK_ENTRY.fields_by_name['s_dev'].has_options = True
_FANOTIFY_MARK_ENTRY.fields_by_name['s_dev']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002 \001'))
_FANOTIFY_FILE_ENTRY.fields_by_name['flags'].has_options = True
_FANOTIFY_FILE_ENTRY.fields_by_name['flags']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))
_FANOTIFY_FILE_ENTRY.fields_by_name['faflags'].has_options = True
_FANOTIFY_FILE_ENTRY.fields_by_name['faflags']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))
_FANOTIFY_FILE_ENTRY.fields_by_name['evflags'].has_options = True
_FANOTIFY_FILE_ENTRY.fields_by_name['evflags']._options = _descriptor._ParseOptions(descriptor_pb2.FieldOptions(), _b('\322?\002\010\001'))
# @@protoc_insertion_point(module_scope)
