# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: test.proto
"""Generated protocol buffer code."""
from . google.protobuf import descriptor as _descriptor
from . google.protobuf import message as _message
from . google.protobuf import reflection as _reflection
from . google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='test.proto',
  package='main',
  syntax='proto3',
  serialized_options=b'H\003Z\020example.com;main',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\ntest.proto\x12\x04main\"\x1e\n\nNewMessege\x12\x10\n\x08NewField\x18\x01 \x01(\tB\x14H\x03Z\x10\x65xample.com;mainb\x06proto3'
)




_NEWMESSEGE = _descriptor.Descriptor(
  name='NewMessege',
  full_name='main.NewMessege',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='NewField', full_name='main.NewMessege.NewField', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=b"".decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR,  create_key=_descriptor._internal_create_key),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=20,
  serialized_end=50,
)

DESCRIPTOR.message_types_by_name['NewMessege'] = _NEWMESSEGE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

NewMessege = _reflection.GeneratedProtocolMessageType('NewMessege', (_message.Message,), {
  'DESCRIPTOR' : _NEWMESSEGE,
  '__module__' : 'test_pb2'
  # @@protoc_insertion_point(class_scope:main.NewMessege)
  })
_sym_db.RegisterMessage(NewMessege)


DESCRIPTOR._options = None
# @@protoc_insertion_point(module_scope)

