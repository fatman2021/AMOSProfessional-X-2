#ifndef DEFINES_DATATYPES_H
#define DEFINES_DATATYPES_H

/*
    *** Automatically generated from '/home/vsts/work/1/s/workbench/libs/datatypes/datatypes.conf'. Edits will be lost. ***
    Copyright � 1995-2019, The AROS Development Team. All rights reserved.
*/

/*
    Desc: Defines for datatypes
*/

#include <aros/libcall.h>
#include <exec/types.h>
#include <aros/symbolsets.h>
#include <aros/preprocessor/variadic/cast2iptr.hpp>

#if !defined(__DATATYPES_LIBBASE)
#    define __DATATYPES_LIBBASE DataTypesBase
#endif

__BEGIN_DECLS


#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __ObtainDataTypeA_WB(__DataTypesBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC3(struct DataType *, ObtainDataTypeA, \
                  AROS_LCA(ULONG,(__arg1),D0), \
                  AROS_LCA(APTR,(__arg2),A0), \
                  AROS_LCA(struct TagItem *,(__arg3),A1), \
        struct Library *, (__DataTypesBase), 6, DataTypes);\
})

#define ObtainDataTypeA(arg1, arg2, arg3) \
    __ObtainDataTypeA_WB(__DATATYPES_LIBBASE, (arg1), (arg2), (arg3))

#if !defined(NO_INLINE_STDARG) && !defined(DATATYPES_NO_INLINE_STDARG)
#define ObtainDataType(arg1, arg2, ...) \
({ \
    const IPTR ObtainDataTypeA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    ObtainDataTypeA((arg1), (arg2), (struct TagItem *)(ObtainDataTypeA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __ReleaseDataType_WB(__DataTypesBase, __arg1) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC1NR(void, ReleaseDataType, \
                  AROS_LCA(struct DataType *,(__arg1),A0), \
        struct Library *, (__DataTypesBase), 7, DataTypes);\
})

#define ReleaseDataType(arg1) \
    __ReleaseDataType_WB(__DATATYPES_LIBBASE, (arg1))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __NewDTObjectA_WB(__DataTypesBase, __arg1, __arg2) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC2(Object *, NewDTObjectA, \
                  AROS_LCA(APTR,(__arg1),D0), \
                  AROS_LCA(struct TagItem *,(__arg2),A0), \
        struct Library *, (__DataTypesBase), 8, DataTypes);\
})

#define NewDTObjectA(arg1, arg2) \
    __NewDTObjectA_WB(__DATATYPES_LIBBASE, (arg1), (arg2))

#if !defined(NO_INLINE_STDARG) && !defined(DATATYPES_NO_INLINE_STDARG)
#define NewDTObject(arg1, ...) \
({ \
    const IPTR NewDTObjectA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    NewDTObjectA((arg1), (struct TagItem *)(NewDTObjectA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __DisposeDTObject_WB(__DataTypesBase, __arg1) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC1NR(void, DisposeDTObject, \
                  AROS_LCA(Object *,(__arg1),A0), \
        struct Library *, (__DataTypesBase), 9, DataTypes);\
})

#define DisposeDTObject(arg1) \
    __DisposeDTObject_WB(__DATATYPES_LIBBASE, (arg1))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __SetDTAttrsA_WB(__DataTypesBase, __arg1, __arg2, __arg3, __arg4) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC4(ULONG, SetDTAttrsA, \
                  AROS_LCA(Object *,(__arg1),A0), \
                  AROS_LCA(struct Window *,(__arg2),A1), \
                  AROS_LCA(struct Requester *,(__arg3),A2), \
                  AROS_LCA(struct TagItem *,(__arg4),A3), \
        struct Library *, (__DataTypesBase), 10, DataTypes);\
})

#define SetDTAttrsA(arg1, arg2, arg3, arg4) \
    __SetDTAttrsA_WB(__DATATYPES_LIBBASE, (arg1), (arg2), (arg3), (arg4))

#if !defined(NO_INLINE_STDARG) && !defined(DATATYPES_NO_INLINE_STDARG)
#define SetDTAttrs(arg1, arg2, arg3, ...) \
({ \
    const IPTR SetDTAttrsA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    SetDTAttrsA((arg1), (arg2), (arg3), (struct TagItem *)(SetDTAttrsA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __GetDTAttrsA_WB(__DataTypesBase, __arg1, __arg2) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC2(ULONG, GetDTAttrsA, \
                  AROS_LCA(Object *,(__arg1),A0), \
                  AROS_LCA(struct TagItem *,(__arg2),A2), \
        struct Library *, (__DataTypesBase), 11, DataTypes);\
})

#define GetDTAttrsA(arg1, arg2) \
    __GetDTAttrsA_WB(__DATATYPES_LIBBASE, (arg1), (arg2))

#if !defined(NO_INLINE_STDARG) && !defined(DATATYPES_NO_INLINE_STDARG)
#define GetDTAttrs(arg1, ...) \
({ \
    const IPTR GetDTAttrsA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    GetDTAttrsA((arg1), (struct TagItem *)(GetDTAttrsA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __AddDTObject_WB(__DataTypesBase, __arg1, __arg2, __arg3, __arg4) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC4(LONG, AddDTObject, \
                  AROS_LCA(struct Window *,(__arg1),A0), \
                  AROS_LCA(struct Requester *,(__arg2),A1), \
                  AROS_LCA(Object *,(__arg3),A2), \
                  AROS_LCA(LONG,(__arg4),D0), \
        struct Library *, (__DataTypesBase), 12, DataTypes);\
})

#define AddDTObject(arg1, arg2, arg3, arg4) \
    __AddDTObject_WB(__DATATYPES_LIBBASE, (arg1), (arg2), (arg3), (arg4))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __RefreshDTObjectA_WB(__DataTypesBase, __arg1, __arg2, __arg3, __arg4) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC4NR(void, RefreshDTObjectA, \
                  AROS_LCA(Object *,(__arg1),A0), \
                  AROS_LCA(struct Window *,(__arg2),A1), \
                  AROS_LCA(struct Requester *,(__arg3),A2), \
                  AROS_LCA(struct TagItem *,(__arg4),A3), \
        struct Library *, (__DataTypesBase), 13, DataTypes);\
})

#define RefreshDTObjectA(arg1, arg2, arg3, arg4) \
    __RefreshDTObjectA_WB(__DATATYPES_LIBBASE, (arg1), (arg2), (arg3), (arg4))

#if !defined(NO_INLINE_STDARG) && !defined(DATATYPES_NO_INLINE_STDARG)
#define RefreshDTObject(arg1, arg2, arg3, ...) \
({ \
    const IPTR RefreshDTObjectA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    RefreshDTObjectA((arg1), (arg2), (arg3), (struct TagItem *)(RefreshDTObjectA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __DoAsyncLayout_WB(__DataTypesBase, __arg1, __arg2) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC2(ULONG, DoAsyncLayout, \
                  AROS_LCA(Object *,(__arg1),A0), \
                  AROS_LCA(struct gpLayout *,(__arg2),A1), \
        struct Library *, (__DataTypesBase), 14, DataTypes);\
})

#define DoAsyncLayout(arg1, arg2) \
    __DoAsyncLayout_WB(__DATATYPES_LIBBASE, (arg1), (arg2))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __DoDTMethodA_WB(__DataTypesBase, __arg1, __arg2, __arg3, __arg4) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC4(IPTR, DoDTMethodA, \
                  AROS_LCA(Object *,(__arg1),A0), \
                  AROS_LCA(struct Window *,(__arg2),A1), \
                  AROS_LCA(struct Requester *,(__arg3),A2), \
                  AROS_LCA(Msg,(__arg4),A3), \
        struct Library *, (__DataTypesBase), 15, DataTypes);\
})

#define DoDTMethodA(arg1, arg2, arg3, arg4) \
    __DoDTMethodA_WB(__DATATYPES_LIBBASE, (arg1), (arg2), (arg3), (arg4))

#if !defined(NO_INLINE_STDARG) && !defined(DATATYPES_NO_INLINE_STDARG)
#define DoDTMethod(arg1, arg2, arg3, ...) \
({ \
    const IPTR DoDTMethodA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    DoDTMethodA((arg1), (arg2), (arg3), (Msg)(DoDTMethodA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __RemoveDTObject_WB(__DataTypesBase, __arg1, __arg2) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC2(LONG, RemoveDTObject, \
                  AROS_LCA(struct Window *,(__arg1),A0), \
                  AROS_LCA(Object *,(__arg2),A1), \
        struct Library *, (__DataTypesBase), 16, DataTypes);\
})

#define RemoveDTObject(arg1, arg2) \
    __RemoveDTObject_WB(__DATATYPES_LIBBASE, (arg1), (arg2))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __GetDTMethods_WB(__DataTypesBase, __arg1) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC1(ULONG *, GetDTMethods, \
                  AROS_LCA(Object *,(__arg1),A0), \
        struct Library *, (__DataTypesBase), 17, DataTypes);\
})

#define GetDTMethods(arg1) \
    __GetDTMethods_WB(__DATATYPES_LIBBASE, (arg1))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __GetDTTriggerMethods_WB(__DataTypesBase, __arg1) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC1(struct DTMethod *, GetDTTriggerMethods, \
                  AROS_LCA(Object *,(__arg1),A0), \
        struct Library *, (__DataTypesBase), 18, DataTypes);\
})

#define GetDTTriggerMethods(arg1) \
    __GetDTTriggerMethods_WB(__DATATYPES_LIBBASE, (arg1))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __PrintDTObjectA_WB(__DataTypesBase, __arg1, __arg2, __arg3, __arg4) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC4(ULONG, PrintDTObjectA, \
                  AROS_LCA(Object *,(__arg1),A0), \
                  AROS_LCA(struct Window *,(__arg2),A1), \
                  AROS_LCA(struct Requester *,(__arg3),A2), \
                  AROS_LCA(struct dtPrint *,(__arg4),A3), \
        struct Library *, (__DataTypesBase), 19, DataTypes);\
})

#define PrintDTObjectA(arg1, arg2, arg3, arg4) \
    __PrintDTObjectA_WB(__DATATYPES_LIBBASE, (arg1), (arg2), (arg3), (arg4))

#if !defined(NO_INLINE_STDARG) && !defined(DATATYPES_NO_INLINE_STDARG)
#define PrintDTObject(arg1, arg2, arg3, ...) \
({ \
    const IPTR PrintDTObjectA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    PrintDTObjectA((arg1), (arg2), (arg3), (struct dtPrint *)(PrintDTObjectA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __ObtainDTDrawInfoA_WB(__DataTypesBase, __arg1, __arg2) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC2(APTR, ObtainDTDrawInfoA, \
                  AROS_LCA(Object *,(__arg1),A0), \
                  AROS_LCA(struct TagItem *,(__arg2),A1), \
        struct Library *, (__DataTypesBase), 20, DataTypes);\
})

#define ObtainDTDrawInfoA(arg1, arg2) \
    __ObtainDTDrawInfoA_WB(__DATATYPES_LIBBASE, (arg1), (arg2))

#if !defined(NO_INLINE_STDARG) && !defined(DATATYPES_NO_INLINE_STDARG)
#define ObtainDTDrawInfo(arg1, ...) \
({ \
    const IPTR ObtainDTDrawInfoA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    ObtainDTDrawInfoA((arg1), (struct TagItem *)(ObtainDTDrawInfoA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __DrawDTObjectA_WB(__DataTypesBase, __arg1, __arg2, __arg3, __arg4, __arg5, __arg6, __arg7, __arg8, __arg9) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC9(LONG, DrawDTObjectA, \
                  AROS_LCA(struct RastPort *,(__arg1),A0), \
                  AROS_LCA(Object *,(__arg2),A1), \
                  AROS_LCA(LONG,(__arg3),D0), \
                  AROS_LCA(LONG,(__arg4),D1), \
                  AROS_LCA(LONG,(__arg5),D2), \
                  AROS_LCA(LONG,(__arg6),D3), \
                  AROS_LCA(LONG,(__arg7),D4), \
                  AROS_LCA(LONG,(__arg8),D5), \
                  AROS_LCA(struct TagItem *,(__arg9),A2), \
        struct Library *, (__DataTypesBase), 21, DataTypes);\
})

#define DrawDTObjectA(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9) \
    __DrawDTObjectA_WB(__DATATYPES_LIBBASE, (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), (arg8), (arg9))

#if !defined(NO_INLINE_STDARG) && !defined(DATATYPES_NO_INLINE_STDARG)
#define DrawDTObject(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, ...) \
({ \
    const IPTR DrawDTObjectA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    DrawDTObjectA((arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7), (arg8), (struct TagItem *)(DrawDTObjectA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __ReleaseDTDrawInfo_WB(__DataTypesBase, __arg1, __arg2) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC2NR(void, ReleaseDTDrawInfo, \
                  AROS_LCA(Object *,(__arg1),A0), \
                  AROS_LCA(APTR,(__arg2),A1), \
        struct Library *, (__DataTypesBase), 22, DataTypes);\
})

#define ReleaseDTDrawInfo(arg1, arg2) \
    __ReleaseDTDrawInfo_WB(__DATATYPES_LIBBASE, (arg1), (arg2))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __GetDTString_WB(__DataTypesBase, __arg1) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC1(CONST_STRPTR, GetDTString, \
                  AROS_LCA(ULONG,(__arg1),D0), \
        struct Library *, (__DataTypesBase), 23, DataTypes);\
})

#define GetDTString(arg1) \
    __GetDTString_WB(__DATATYPES_LIBBASE, (arg1))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __LockDataType_WB(__DataTypesBase, __arg1) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC1NR(void, LockDataType, \
                  AROS_LCA(struct DataType *,(__arg1),A0), \
        struct Library *, (__DataTypesBase), 40, DataTypes);\
})

#define LockDataType(arg1) \
    __LockDataType_WB(__DATATYPES_LIBBASE, (arg1))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __FindToolNodeA_WB(__DataTypesBase, __arg1, __arg2) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC2(struct ToolNode *, FindToolNodeA, \
                  AROS_LCA(struct List *,(__arg1),A0), \
                  AROS_LCA(struct TagItem *,(__arg2),A1), \
        struct Library *, (__DataTypesBase), 41, DataTypes);\
})

#define FindToolNodeA(arg1, arg2) \
    __FindToolNodeA_WB(__DATATYPES_LIBBASE, (arg1), (arg2))

#if !defined(NO_INLINE_STDARG) && !defined(DATATYPES_NO_INLINE_STDARG)
#define FindToolNode(arg1, ...) \
({ \
    const IPTR FindToolNodeA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    FindToolNodeA((arg1), (struct TagItem *)(FindToolNodeA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __LaunchToolA_WB(__DataTypesBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC3(ULONG, LaunchToolA, \
                  AROS_LCA(struct Tool *,(__arg1),A0), \
                  AROS_LCA(STRPTR,(__arg2),A1), \
                  AROS_LCA(struct TagItem *,(__arg3),A2), \
        struct Library *, (__DataTypesBase), 42, DataTypes);\
})

#define LaunchToolA(arg1, arg2, arg3) \
    __LaunchToolA_WB(__DATATYPES_LIBBASE, (arg1), (arg2), (arg3))

#if !defined(NO_INLINE_STDARG) && !defined(DATATYPES_NO_INLINE_STDARG)
#define LaunchTool(arg1, arg2, ...) \
({ \
    const IPTR LaunchToolA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    LaunchToolA((arg1), (arg2), (struct TagItem *)(LaunchToolA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __FindMethod_WB(__DataTypesBase, __arg1, __arg2) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC2(ULONG *, FindMethod, \
                  AROS_LCA(ULONG *,(__arg1),A0), \
                  AROS_LCA(ULONG,(__arg2),A1), \
        struct Library *, (__DataTypesBase), 43, DataTypes);\
})

#define FindMethod(arg1, arg2) \
    __FindMethod_WB(__DATATYPES_LIBBASE, (arg1), (arg2))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __FindTriggerMethod_WB(__DataTypesBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC3(struct DTMethod *, FindTriggerMethod, \
                  AROS_LCA(struct DTMethod *,(__arg1),A0), \
                  AROS_LCA(STRPTR,(__arg2),A1), \
                  AROS_LCA(ULONG,(__arg3),D0), \
        struct Library *, (__DataTypesBase), 44, DataTypes);\
})

#define FindTriggerMethod(arg1, arg2, arg3) \
    __FindTriggerMethod_WB(__DATATYPES_LIBBASE, (arg1), (arg2), (arg3))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __CopyDTMethods_WB(__DataTypesBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC3(ULONG *, CopyDTMethods, \
                  AROS_LCA(ULONG *,(__arg1),A0), \
                  AROS_LCA(ULONG *,(__arg2),A1), \
                  AROS_LCA(ULONG *,(__arg3),A2), \
        struct Library *, (__DataTypesBase), 45, DataTypes);\
})

#define CopyDTMethods(arg1, arg2, arg3) \
    __CopyDTMethods_WB(__DATATYPES_LIBBASE, (arg1), (arg2), (arg3))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __CopyDTTriggerMethods_WB(__DataTypesBase, __arg1, __arg2, __arg3) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC3(struct DTMethod *, CopyDTTriggerMethods, \
                  AROS_LCA(struct DTMethod *,(__arg1),A0), \
                  AROS_LCA(struct DTMethod *,(__arg2),A1), \
                  AROS_LCA(struct DTMethod *,(__arg3),A2), \
        struct Library *, (__DataTypesBase), 46, DataTypes);\
})

#define CopyDTTriggerMethods(arg1, arg2, arg3) \
    __CopyDTTriggerMethods_WB(__DATATYPES_LIBBASE, (arg1), (arg2), (arg3))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __FreeDTMethods_WB(__DataTypesBase, __arg1) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC1NR(void, FreeDTMethods, \
                  AROS_LCA(APTR,(__arg1),A0), \
        struct Library *, (__DataTypesBase), 47, DataTypes);\
})

#define FreeDTMethods(arg1) \
    __FreeDTMethods_WB(__DATATYPES_LIBBASE, (arg1))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __GetDTTriggerMethodDataFlags_WB(__DataTypesBase, __arg1) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC1(ULONG, GetDTTriggerMethodDataFlags, \
                  AROS_LCA(ULONG,(__arg1),A0), \
        struct Library *, (__DataTypesBase), 48, DataTypes);\
})

#define GetDTTriggerMethodDataFlags(arg1) \
    __GetDTTriggerMethodDataFlags_WB(__DATATYPES_LIBBASE, (arg1))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __SaveDTObjectA_WB(__DataTypesBase, __arg1, __arg2, __arg3, __arg4, __arg5, __arg6, __arg7) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC7(ULONG, SaveDTObjectA, \
                  AROS_LCA(Object *,(__arg1),A0), \
                  AROS_LCA(struct Window *,(__arg2),A1), \
                  AROS_LCA(struct Requester *,(__arg3),A2), \
                  AROS_LCA(STRPTR,(__arg4),A3), \
                  AROS_LCA(ULONG,(__arg5),D0), \
                  AROS_LCA(BOOL,(__arg6),D1), \
                  AROS_LCA(struct TagItem *,(__arg7),A4), \
        struct Library *, (__DataTypesBase), 49, DataTypes);\
})

#define SaveDTObjectA(arg1, arg2, arg3, arg4, arg5, arg6, arg7) \
    __SaveDTObjectA_WB(__DATATYPES_LIBBASE, (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7))

#if !defined(NO_INLINE_STDARG) && !defined(DATATYPES_NO_INLINE_STDARG)
#define SaveDTObject(arg1, arg2, arg3, arg4, arg5, arg6, ...) \
({ \
    const IPTR SaveDTObjectA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    SaveDTObjectA((arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (struct TagItem *)(SaveDTObjectA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __StartDragSelect_WB(__DataTypesBase, __arg1) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC1(ULONG, StartDragSelect, \
                  AROS_LCA(Object *,(__arg1),A0), \
        struct Library *, (__DataTypesBase), 50, DataTypes);\
})

#define StartDragSelect(arg1) \
    __StartDragSelect_WB(__DATATYPES_LIBBASE, (arg1))

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

#if !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__)

#define __DoDTDomainA_WB(__DataTypesBase, __arg1, __arg2, __arg3, __arg4, __arg5, __arg6, __arg7) ({\
        AROS_LIBREQ(DataTypesBase,45)\
        AROS_LC7(ULONG, DoDTDomainA, \
                  AROS_LCA(Object *,(__arg1),A0), \
                  AROS_LCA(struct Window *,(__arg2),A1), \
                  AROS_LCA(struct Requester *,(__arg3),A2), \
                  AROS_LCA(struct RastPort *,(__arg4),A3), \
                  AROS_LCA(ULONG,(__arg5),D0), \
                  AROS_LCA(struct IBox *,(__arg6),A4), \
                  AROS_LCA(struct TagItem *,(__arg7),A5), \
        struct Library *, (__DataTypesBase), 51, DataTypes);\
})

#define DoDTDomainA(arg1, arg2, arg3, arg4, arg5, arg6, arg7) \
    __DoDTDomainA_WB(__DATATYPES_LIBBASE, (arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (arg7))

#if !defined(NO_INLINE_STDARG) && !defined(DATATYPES_NO_INLINE_STDARG)
#define DoDTDomain(arg1, arg2, arg3, arg4, arg5, arg6, ...) \
({ \
    const IPTR DoDTDomainA_args[] = { AROS_PP_VARIADIC_CAST2IPTR(__VA_ARGS__) };\
    DoDTDomainA((arg1), (arg2), (arg3), (arg4), (arg5), (arg6), (struct TagItem *)(DoDTDomainA_args)); \
})
#endif /* !NO_INLINE_STDARG */

#endif /* !defined(__DATATYPES_LIBAPI__) || (45 <= __DATATYPES_LIBAPI__) */

__END_DECLS

#endif /* DEFINES_DATATYPES_H*/
