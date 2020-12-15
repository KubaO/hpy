
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by tools/autogen.py from tools/public_api.h.
   Run this to regenerate:
       make autogen

*/

struct _HPyContext_s global_ctx = {
    .name = "HPy Universal ABI (CPython backend)",
    ._private = NULL,
    .ctx_version = 1,
    .h_None = {CONSTANT_H_NONE},
    .h_True = {CONSTANT_H_TRUE},
    .h_False = {CONSTANT_H_FALSE},
    .h_BaseException = {CONSTANT_H_BASEEXCEPTION},
    .h_Exception = {CONSTANT_H_EXCEPTION},
    .h_StopAsyncIteration = {CONSTANT_H_STOPASYNCITERATION},
    .h_StopIteration = {CONSTANT_H_STOPITERATION},
    .h_GeneratorExit = {CONSTANT_H_GENERATOREXIT},
    .h_ArithmeticError = {CONSTANT_H_ARITHMETICERROR},
    .h_LookupError = {CONSTANT_H_LOOKUPERROR},
    .h_AssertionError = {CONSTANT_H_ASSERTIONERROR},
    .h_AttributeError = {CONSTANT_H_ATTRIBUTEERROR},
    .h_BufferError = {CONSTANT_H_BUFFERERROR},
    .h_EOFError = {CONSTANT_H_EOFERROR},
    .h_FloatingPointError = {CONSTANT_H_FLOATINGPOINTERROR},
    .h_OSError = {CONSTANT_H_OSERROR},
    .h_ImportError = {CONSTANT_H_IMPORTERROR},
    .h_ModuleNotFoundError = {CONSTANT_H_MODULENOTFOUNDERROR},
    .h_IndexError = {CONSTANT_H_INDEXERROR},
    .h_KeyError = {CONSTANT_H_KEYERROR},
    .h_KeyboardInterrupt = {CONSTANT_H_KEYBOARDINTERRUPT},
    .h_MemoryError = {CONSTANT_H_MEMORYERROR},
    .h_NameError = {CONSTANT_H_NAMEERROR},
    .h_OverflowError = {CONSTANT_H_OVERFLOWERROR},
    .h_RuntimeError = {CONSTANT_H_RUNTIMEERROR},
    .h_RecursionError = {CONSTANT_H_RECURSIONERROR},
    .h_NotImplementedError = {CONSTANT_H_NOTIMPLEMENTEDERROR},
    .h_SyntaxError = {CONSTANT_H_SYNTAXERROR},
    .h_IndentationError = {CONSTANT_H_INDENTATIONERROR},
    .h_TabError = {CONSTANT_H_TABERROR},
    .h_ReferenceError = {CONSTANT_H_REFERENCEERROR},
    .h_SystemError = {CONSTANT_H_SYSTEMERROR},
    .h_SystemExit = {CONSTANT_H_SYSTEMEXIT},
    .h_TypeError = {CONSTANT_H_TYPEERROR},
    .h_UnboundLocalError = {CONSTANT_H_UNBOUNDLOCALERROR},
    .h_UnicodeError = {CONSTANT_H_UNICODEERROR},
    .h_UnicodeEncodeError = {CONSTANT_H_UNICODEENCODEERROR},
    .h_UnicodeDecodeError = {CONSTANT_H_UNICODEDECODEERROR},
    .h_UnicodeTranslateError = {CONSTANT_H_UNICODETRANSLATEERROR},
    .h_ValueError = {CONSTANT_H_VALUEERROR},
    .h_ZeroDivisionError = {CONSTANT_H_ZERODIVISIONERROR},
    .h_BlockingIOError = {CONSTANT_H_BLOCKINGIOERROR},
    .h_BrokenPipeError = {CONSTANT_H_BROKENPIPEERROR},
    .h_ChildProcessError = {CONSTANT_H_CHILDPROCESSERROR},
    .h_ConnectionError = {CONSTANT_H_CONNECTIONERROR},
    .h_ConnectionAbortedError = {CONSTANT_H_CONNECTIONABORTEDERROR},
    .h_ConnectionRefusedError = {CONSTANT_H_CONNECTIONREFUSEDERROR},
    .h_ConnectionResetError = {CONSTANT_H_CONNECTIONRESETERROR},
    .h_FileExistsError = {CONSTANT_H_FILEEXISTSERROR},
    .h_FileNotFoundError = {CONSTANT_H_FILENOTFOUNDERROR},
    .h_InterruptedError = {CONSTANT_H_INTERRUPTEDERROR},
    .h_IsADirectoryError = {CONSTANT_H_ISADIRECTORYERROR},
    .h_NotADirectoryError = {CONSTANT_H_NOTADIRECTORYERROR},
    .h_PermissionError = {CONSTANT_H_PERMISSIONERROR},
    .h_ProcessLookupError = {CONSTANT_H_PROCESSLOOKUPERROR},
    .h_TimeoutError = {CONSTANT_H_TIMEOUTERROR},
    .h_Warning = {CONSTANT_H_WARNING},
    .h_UserWarning = {CONSTANT_H_USERWARNING},
    .h_DeprecationWarning = {CONSTANT_H_DEPRECATIONWARNING},
    .h_PendingDeprecationWarning = {CONSTANT_H_PENDINGDEPRECATIONWARNING},
    .h_SyntaxWarning = {CONSTANT_H_SYNTAXWARNING},
    .h_RuntimeWarning = {CONSTANT_H_RUNTIMEWARNING},
    .h_FutureWarning = {CONSTANT_H_FUTUREWARNING},
    .h_ImportWarning = {CONSTANT_H_IMPORTWARNING},
    .h_UnicodeWarning = {CONSTANT_H_UNICODEWARNING},
    .h_BytesWarning = {CONSTANT_H_BYTESWARNING},
    .h_ResourceWarning = {CONSTANT_H_RESOURCEWARNING},
    .h_BaseObjectType = {CONSTANT_H_BASEOBJECTTYPE},
    .h_TypeType = {CONSTANT_H_TYPETYPE},
    .h_LongType = {CONSTANT_H_LONGTYPE},
    .h_UnicodeType = {CONSTANT_H_UNICODETYPE},
    .h_TupleType = {CONSTANT_H_TUPLETYPE},
    .h_ListType = {CONSTANT_H_LISTTYPE},
    .ctx_Module_Create = &ctx_Module_Create,
    .ctx_Dup = &ctx_Dup,
    .ctx_Close = &ctx_Close,
    .ctx_Long_FromLong = &ctx_Long_FromLong,
    .ctx_Long_FromUnsignedLong = &ctx_Long_FromUnsignedLong,
    .ctx_Long_FromLongLong = &ctx_Long_FromLongLong,
    .ctx_Long_FromUnsignedLongLong = &ctx_Long_FromUnsignedLongLong,
    .ctx_Long_FromSize_t = &ctx_Long_FromSize_t,
    .ctx_Long_FromSsize_t = &ctx_Long_FromSsize_t,
    .ctx_Long_AsLong = &ctx_Long_AsLong,
    .ctx_Long_AsUnsignedLong = &ctx_Long_AsUnsignedLong,
    .ctx_Long_AsUnsignedLongMask = &ctx_Long_AsUnsignedLongMask,
    .ctx_Long_AsLongLong = &ctx_Long_AsLongLong,
    .ctx_Long_AsUnsignedLongLong = &ctx_Long_AsUnsignedLongLong,
    .ctx_Long_AsUnsignedLongLongMask = &ctx_Long_AsUnsignedLongLongMask,
    .ctx_Long_AsSize_t = &ctx_Long_AsSize_t,
    .ctx_Long_AsSsize_t = &ctx_Long_AsSsize_t,
    .ctx_Float_FromDouble = &ctx_Float_FromDouble,
    .ctx_Float_AsDouble = &ctx_Float_AsDouble,
    .ctx_Length = &ctx_Length,
    .ctx_Number_Check = &ctx_Number_Check,
    .ctx_Add = &ctx_Add,
    .ctx_Subtract = &ctx_Subtract,
    .ctx_Multiply = &ctx_Multiply,
    .ctx_MatrixMultiply = &ctx_MatrixMultiply,
    .ctx_FloorDivide = &ctx_FloorDivide,
    .ctx_TrueDivide = &ctx_TrueDivide,
    .ctx_Remainder = &ctx_Remainder,
    .ctx_Divmod = &ctx_Divmod,
    .ctx_Power = &ctx_Power,
    .ctx_Negative = &ctx_Negative,
    .ctx_Positive = &ctx_Positive,
    .ctx_Absolute = &ctx_Absolute,
    .ctx_Invert = &ctx_Invert,
    .ctx_Lshift = &ctx_Lshift,
    .ctx_Rshift = &ctx_Rshift,
    .ctx_And = &ctx_And,
    .ctx_Xor = &ctx_Xor,
    .ctx_Or = &ctx_Or,
    .ctx_Index = &ctx_Index,
    .ctx_Long = &ctx_Long,
    .ctx_Float = &ctx_Float,
    .ctx_InPlaceAdd = &ctx_InPlaceAdd,
    .ctx_InPlaceSubtract = &ctx_InPlaceSubtract,
    .ctx_InPlaceMultiply = &ctx_InPlaceMultiply,
    .ctx_InPlaceMatrixMultiply = &ctx_InPlaceMatrixMultiply,
    .ctx_InPlaceFloorDivide = &ctx_InPlaceFloorDivide,
    .ctx_InPlaceTrueDivide = &ctx_InPlaceTrueDivide,
    .ctx_InPlaceRemainder = &ctx_InPlaceRemainder,
    .ctx_InPlacePower = &ctx_InPlacePower,
    .ctx_InPlaceLshift = &ctx_InPlaceLshift,
    .ctx_InPlaceRshift = &ctx_InPlaceRshift,
    .ctx_InPlaceAnd = &ctx_InPlaceAnd,
    .ctx_InPlaceXor = &ctx_InPlaceXor,
    .ctx_InPlaceOr = &ctx_InPlaceOr,
    .ctx_Err_SetString = &ctx_Err_SetString,
    .ctx_Err_SetObject = &ctx_Err_SetObject,
    .ctx_Err_Occurred = &ctx_Err_Occurred,
    .ctx_Err_NoMemory = &ctx_Err_NoMemory,
    .ctx_Err_Clear = &ctx_Err_Clear,
    .ctx_IsTrue = &ctx_IsTrue,
    .ctx_Type_FromSpec = &ctx_Type_FromSpec,
    .ctx_Type_GenericNew = &ctx_Type_GenericNew,
    .ctx_GetAttr = &ctx_GetAttr,
    .ctx_GetAttr_s = &ctx_GetAttr_s,
    .ctx_HasAttr = &ctx_HasAttr,
    .ctx_HasAttr_s = &ctx_HasAttr_s,
    .ctx_SetAttr = &ctx_SetAttr,
    .ctx_SetAttr_s = &ctx_SetAttr_s,
    .ctx_GetItem = &ctx_GetItem,
    .ctx_GetItem_i = &ctx_GetItem_i,
    .ctx_GetItem_s = &ctx_GetItem_s,
    .ctx_SetItem = &ctx_SetItem,
    .ctx_SetItem_i = &ctx_SetItem_i,
    .ctx_SetItem_s = &ctx_SetItem_s,
    .ctx_Cast = &ctx_Cast,
    .ctx_New = &ctx_New,
    .ctx_Repr = &ctx_Repr,
    .ctx_Str = &ctx_Str,
    .ctx_ASCII = &ctx_ASCII,
    .ctx_Bytes = &ctx_Bytes,
    .ctx_RichCompare = &ctx_RichCompare,
    .ctx_RichCompareBool = &ctx_RichCompareBool,
    .ctx_Hash = &ctx_Hash,
    .ctx_Bytes_Check = &ctx_Bytes_Check,
    .ctx_Bytes_Size = &ctx_Bytes_Size,
    .ctx_Bytes_GET_SIZE = &ctx_Bytes_GET_SIZE,
    .ctx_Bytes_AsString = &ctx_Bytes_AsString,
    .ctx_Bytes_AS_STRING = &ctx_Bytes_AS_STRING,
    .ctx_Bytes_FromString = &ctx_Bytes_FromString,
    .ctx_Bytes_FromStringAndSize = &ctx_Bytes_FromStringAndSize,
    .ctx_Unicode_FromString = &ctx_Unicode_FromString,
    .ctx_Unicode_Check = &ctx_Unicode_Check,
    .ctx_Unicode_AsUTF8String = &ctx_Unicode_AsUTF8String,
    .ctx_Unicode_FromWideChar = &ctx_Unicode_FromWideChar,
    .ctx_List_Check = &ctx_List_Check,
    .ctx_List_New = &ctx_List_New,
    .ctx_List_Append = &ctx_List_Append,
    .ctx_Dict_Check = &ctx_Dict_Check,
    .ctx_Dict_New = &ctx_Dict_New,
    .ctx_FatalError = &ctx_FatalError,
    .ctx_Tuple_FromArray = &ctx_Tuple_FromArray,
    .ctx_FromPyObject = &ctx_FromPyObject,
    .ctx_AsPyObject = &ctx_AsPyObject,
    .ctx_CallRealFunctionFromTrampoline = &ctx_CallRealFunctionFromTrampoline,
    .ctx_CallDestroyAndThenDealloc = &ctx_CallDestroyAndThenDealloc,
    .ctx_ListBuilder_New = &ctx_ListBuilder_New,
    .ctx_ListBuilder_Set = &ctx_ListBuilder_Set,
    .ctx_ListBuilder_Build = &ctx_ListBuilder_Build,
    .ctx_ListBuilder_Cancel = &ctx_ListBuilder_Cancel,
    .ctx_TupleBuilder_New = &ctx_TupleBuilder_New,
    .ctx_TupleBuilder_Set = &ctx_TupleBuilder_Set,
    .ctx_TupleBuilder_Build = &ctx_TupleBuilder_Build,
    .ctx_TupleBuilder_Cancel = &ctx_TupleBuilder_Cancel,
    .ctx_Tracker_New = &ctx_Tracker_New,
    .ctx_Tracker_Add = &ctx_Tracker_Add,
    .ctx_Tracker_ForgetAll = &ctx_Tracker_ForgetAll,
    .ctx_Tracker_Close = &ctx_Tracker_Close,
};
