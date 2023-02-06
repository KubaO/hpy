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
    'HPy_DelItem': 'PyObject_DelItem',
    'HPy_DelItem_i': None,
    'HPy_DelItem_s': None,
    'HPy_Contains': 'PySequence_Contains',
    'HPy_Length': 'PyObject_Length',
    'HPy_CallTupleDict': None,
    'HPy_FromPyObject': None,
    'HPy_AsPyObject': None,
    '_HPy_AsStruct_Object': None,
    '_HPy_AsStruct_Type': None,
    '_HPy_AsStruct_Long': None,
    '_HPy_AsStruct_Float': None,
    '_HPy_AsStruct_Unicode': None,
    '_HPy_AsStruct_Tuple': None,
    '_HPy_AsStruct_List': None,
    '_HPy_AsStruct_Legacy': None,
    '_HPyType_GetBuiltinShape': None,
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
    'HPyType_IsSubtype': None,
    'HPy_Is': None,
    'HPyBytes_FromStringAndSize': None,
    'HPy_LeavePythonExecution': 'PyEval_SaveThread',
    'HPy_ReenterPythonExecution': 'PyEval_RestoreThread',
    'HPyGlobal_Load': None,
    'HPyGlobal_Store': None,
    'HPyContextVar_Get': None,
    'HPyCapsule_New': None,
    'HPyCapsule_Get': None,
    'HPyCapsule_Set': None,
    'HPyLong_FromInt32_t': None,
    'HPyLong_FromUInt32_t': None,
    'HPyLong_FromInt64_t': None,
    'HPyLong_FromUInt64_t': None,
    'HPyLong_AsInt32_t': None,
    'HPyLong_AsUInt32_t': None,
    'HPyLong_AsUInt32_tMask': None,
    'HPyLong_AsInt64_t': None,
    'HPyLong_AsUInt64_t': None,
    'HPyLong_AsUInt64_tMask': None,
    'HPyBool_FromBool': 'PyBool_FromLong',
    'HPy_Compile_s': None,
    'HPy_EvalCode': 'PyEval_EvalCode',
    'HPy_MaybeGetAttr_s': None,
    'HPyDict_GetItem': None,
    'HPy_IsInstance': 'PyObject_IsInstance',
}

# Allows to provide a simple inline implementation for the context function
# and the CPython inline function. In this case the CPython trampoline will
# not delegate to the ctx_* function, but will contain this code inline.
INLINE_IMPLEMENTATION = {
    'HPy_SetType':
        # args: (obj, type)
        '''
        assert(PyType_Check(_h2py(type)));
        _h2py(obj)->ob_type = (PyTypeObject*) _h2py(type);
        return 0;
        ''',
    'HPyType_GetName':
        # args: (type)
        '''
        assert(PyType_Check(_h2py(type)));
        return ((PyTypeObject*) _h2py(type))->tp_name;
        ''',
    'HPyType_CheckSlot':
        # args: (HPy type, HPyDef *value)
        '''
        return _HPyType_CheckSlot(type, value);
        ''',
}
