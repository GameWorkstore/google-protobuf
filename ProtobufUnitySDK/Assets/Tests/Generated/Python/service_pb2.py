# -*- coding: utf-8 -*-
# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: service.proto
"""Generated protocol buffer code."""
from . google.protobuf import descriptor as _descriptor
from . google.protobuf import message as _message
from . google.protobuf import reflection as _reflection
from . google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='service.proto',
  package='main',
  syntax='proto3',
  serialized_options=b'H\003Z\030com.example.package;main',
  create_key=_descriptor._internal_create_key,
  serialized_pb=b'\n\rservice.proto\x12\x04main\" \n\x08\x41Request\x12\x14\n\x0cRequestValue\x18\x01 \x01(\t\"\"\n\tAResponse\x12\x15\n\rResponseValue\x18\x01 \x01(\t2;\n\x08\x41Service\x12/\n\nMyEndpoint\x12\x0e.main.ARequest\x1a\x0f.main.AResponse\"\x00\x42\x1cH\x03Z\x18\x63om.example.package;mainb\x06proto3'
)




_AREQUEST = _descriptor.Descriptor(
  name='ARequest',
  full_name='main.ARequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='RequestValue', full_name='main.ARequest.RequestValue', index=0,
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
  serialized_start=23,
  serialized_end=55,
)


_ARESPONSE = _descriptor.Descriptor(
  name='AResponse',
  full_name='main.AResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  create_key=_descriptor._internal_create_key,
  fields=[
    _descriptor.FieldDescriptor(
      name='ResponseValue', full_name='main.AResponse.ResponseValue', index=0,
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
  serialized_start=57,
  serialized_end=91,
)

DESCRIPTOR.message_types_by_name['ARequest'] = _AREQUEST
DESCRIPTOR.message_types_by_name['AResponse'] = _ARESPONSE
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

ARequest = _reflection.GeneratedProtocolMessageType('ARequest', (_message.Message,), {
  'DESCRIPTOR' : _AREQUEST,
  '__module__' : 'service_pb2'
  # @@protoc_insertion_point(class_scope:main.ARequest)
  })
_sym_db.RegisterMessage(ARequest)

AResponse = _reflection.GeneratedProtocolMessageType('AResponse', (_message.Message,), {
  'DESCRIPTOR' : _ARESPONSE,
  '__module__' : 'service_pb2'
  # @@protoc_insertion_point(class_scope:main.AResponse)
  })
_sym_db.RegisterMessage(AResponse)


DESCRIPTOR._options = None

_ASERVICE = _descriptor.ServiceDescriptor(
  name='AService',
  full_name='main.AService',
  file=DESCRIPTOR,
  index=0,
  serialized_options=None,
  create_key=_descriptor._internal_create_key,
  serialized_start=93,
  serialized_end=152,
  methods=[
  _descriptor.MethodDescriptor(
    name='MyEndpoint',
    full_name='main.AService.MyEndpoint',
    index=0,
    containing_service=None,
    input_type=_AREQUEST,
    output_type=_ARESPONSE,
    serialized_options=None,
    create_key=_descriptor._internal_create_key,
  ),
])
_sym_db.RegisterServiceDescriptor(_ASERVICE)

DESCRIPTOR.services_by_name['AService'] = _ASERVICE

# @@protoc_insertion_point(module_scope)

