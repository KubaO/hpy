# Defines parameters for the code generation

# Handwritten trampolines:
NO_TRAMPOLINES = {
    '_HPy_New',
    'HPy_FatalError',
}

# Generated trampoline returns given constant,
# but the context function is void
RETURN_CONSTANT = {
    'HPyErr_SetString': 'HPy_NULL',
    'HPyErr_SetObject': 'HPy_NULL',
    'HPyErr_SetFromErrnoWithFilenameObjects': 'HPy_NULL',
    'HPyErr_NoMemory': 'HPy_NULL'
}

# If the HPy function delegates to C Python API of a different name or, in the
# case of None, if the HPy function is implemented by hand
SPECIAL_CASES = {
    'HPy_Dup': None,
    'HPy_Close': None,
    'HPyField_Load': None,
    'HPyField_Store': None,
    'HPyModule_Create': None,
    'HPy_GetAttr': 'PyObject_GetAttr',
    'HPy_GetAttr_s': 'PyObject_GetAttrString',
    'HPy_HasAttr': 'PyObject_HasAttr',
    'HPy_HasAttr_s': 'PyObject_HasAttrString',
    'HPy_SetAttr': 'PyObject_SetAttr',
    'HPy_SetAttr_s': 'PyObject_SetAttrString',
    'HPy_GetItem': 'PyObject_GetItem',
    'HPy_GetItem_i': None,
    'HPy_GetItem_s': None,
    'HPy_SetItem': 'PyObject_SetItem',
    'HPy_SetItem_i': None,
    'HPy_SetItem_s': None,
    'HPy_Contains': 'PySequence_Contains',
    'HPy_Length': 'PyObject_Length',
    'HPy_CallTupleDict': None,
    'HPy_FromPyObject': None,
    'HPy_AsPyObject': None,
    'HPy_AsStruct': None,
    'HPy_AsStructLegacy': None,
    '_HPy_CallRealFunctionFromTrampoline': None,
    '_HPy_CallDestroyAndThenDealloc': None,
    'HPyErr_Occurred': None,
    'HPy_FatalError': None,
    'HPy_Add': 'PyNumber_Add',
    'HPy_Subtract': 'PyNumber_Subtract',
    'HPy_Multiply': 'PyNumber_Multiply',
    'HPy_MatrixMultiply': 'PyNumber_MatrixMultiply',
    'HPy_FloorDivide': 'PyNumber_FloorDivide',
    'HPy_TrueDivide': 'PyNumber_TrueDivide',
    'HPy_Remainder': 'PyNumber_Remainder',
    'HPy_Divmod': 'PyNumber_Divmod',
    'HPy_Power': 'PyNumber_Power',
    'HPy_Negative': 'PyNumber_Negative',
    'HPy_Positive': 'PyNumber_Positive',
    'HPy_Absolute': 'PyNumber_Absolute',
    'HPy_Invert': 'PyNumber_Invert',
    'HPy_Lshift': 'PyNumber_Lshift',
    'HPy_Rshift': 'PyNumber_Rshift',
    'HPy_And': 'PyNumber_And',
    'HPy_Xor': 'PyNumber_Xor',
    'HPy_Or': 'PyNumber_Or',
    'HPy_Index': 'PyNumber_Index',
    'HPy_Long': 'PyNumber_Long',
    'HPy_Float': 'PyNumber_Float',
    'HPy_InPlaceAdd': 'PyNumber_InPlaceAdd',
    'HPy_InPlaceSubtract': 'PyNumber_InPlaceSubtract',
    'HPy_InPlaceMultiply': 'PyNumber_InPlaceMultiply',
    'HPy_InPlaceMatrixMultiply': 'PyNumber_InPlaceMatrixMultiply',
    'HPy_InPlaceFloorDivide': 'PyNumber_InPlaceFloorDivide',
    'HPy_InPlaceTrueDivide': 'PyNumber_InPlaceTrueDivide',
    'HPy_InPlaceRemainder': 'PyNumber_InPlaceRemainder',
    'HPy_InPlacePower': 'PyNumber_InPlacePower',
    'HPy_InPlaceLshift': 'PyNumber_InPlaceLshift',
    'HPy_InPlaceRshift': 'PyNumber_InPlaceRshift',
    'HPy_InPlaceAnd': 'PyNumber_InPlaceAnd',
    'HPy_InPlaceXor': 'PyNumber_InPlaceXor',
    'HPy_InPlaceOr': 'PyNumber_InPlaceOr',
    '_HPy_New': None,
    'HPyType_FromSpec': None,
    'HPyType_GenericNew': None,
    'HPy_Repr': 'PyObject_Repr',
    'HPy_Str': 'PyObject_Str',
    'HPy_ASCII': 'PyObject_ASCII',
    'HPy_Bytes': 'PyObject_Bytes',
    'HPy_IsTrue': 'PyObject_IsTrue',
    'HPy_RichCompare': 'PyObject_RichCompare',
    'HPy_RichCompareBool': 'PyObject_RichCompareBool',
    'HPy_Hash': 'PyObject_Hash',
    'HPyListBuilder_New': None,
    'HPyListBuilder_Set': None,
    'HPyListBuilder_Build': None,
    'HPyListBuilder_Cancel': None,
    'HPyTuple_FromArray': None,
    'HPyTupleBuilder_New': None,
    'HPyTupleBuilder_Set': None,
    'HPyTupleBuilder_Build': None,
    'HPyTupleBuilder_Cancel': None,
    'HPyTracker_New': None,
    'HPyTracker_Add': None,
    'HPyTracker_ForgetAll': None,
    'HPyTracker_Close': None,
    '_HPy_Dump': None,
    'HPy_Type': 'PyObject_Type',
    'HPy_TypeCheck': None,
    'HPy_Is': None,
    'HPyBytes_FromStringAndSize': None,
}