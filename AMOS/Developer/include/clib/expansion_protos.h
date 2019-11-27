#ifndef CLIB_EXPANSION_PROTOS_H
#define CLIB_EXPANSION_PROTOS_H

/*
    *** Automatically generated from '/home/vsts/work/1/s/rom/expansion/expansion.conf'. Edits will be lost. ***
    Copyright � 1995-2019, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>

#include <dos/filehandler.h>
#include <libraries/configvars.h>

__BEGIN_DECLS


#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP1(void, AddConfigDev,
         AROS_LPA(struct ConfigDev *, configDev, A0),
         LIBBASETYPEPTR, ExpansionBase, 5, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (36 <= __EXPANSION_LIBAPI__)
AROS_LP4(BOOL, AddBootNode,
         AROS_LPA(LONG, bootPri, D0),
         AROS_LPA(ULONG, flags, D1),
         AROS_LPA(struct DeviceNode *, deviceNode, A0),
         AROS_LPA(struct ConfigDev *, configDev, A1),
         LIBBASETYPEPTR, ExpansionBase, 6, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (36 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP1(void, AllocBoardMem,
         AROS_LPA(ULONG, slotSpec, D0),
         LIBBASETYPEPTR, ExpansionBase, 7, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP0(struct ConfigDev *, AllocConfigDev,
         LIBBASETYPEPTR, ExpansionBase, 8, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP2(APTR, AllocExpansionMem,
         AROS_LPA(ULONG, numSlots, D0),
         AROS_LPA(ULONG, slotAlign, D1),
         LIBBASETYPEPTR, ExpansionBase, 9, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP2(BOOL, ConfigBoard,
         AROS_LPA(APTR, board, A0),
         AROS_LPA(struct ConfigDev *, configDev, A1),
         LIBBASETYPEPTR, ExpansionBase, 10, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP1(void, ConfigChain,
         AROS_LPA(APTR, baseAddr, A0),
         LIBBASETYPEPTR, ExpansionBase, 11, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP3(struct ConfigDev *, FindConfigDev,
         AROS_LPA(struct ConfigDev *, oldConfigDev, A0),
         AROS_LPA(LONG, manufacturer, D0),
         AROS_LPA(LONG, product, D1),
         LIBBASETYPEPTR, ExpansionBase, 12, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP2(void, FreeBoardMem,
         AROS_LPA(ULONG, startSlot, D0),
         AROS_LPA(ULONG, slotSpec, D1),
         LIBBASETYPEPTR, ExpansionBase, 13, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP1(void, FreeConfigDev,
         AROS_LPA(struct ConfigDev *, configDev, A0),
         LIBBASETYPEPTR, ExpansionBase, 14, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP2(void, FreeExpansionMem,
         AROS_LPA(ULONG, startSlot, D0),
         AROS_LPA(ULONG, numSlots, D1),
         LIBBASETYPEPTR, ExpansionBase, 15, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP2(UBYTE, ReadExpansionByte,
         AROS_LPA(APTR, board, A0),
         AROS_LPA(ULONG, offset, D0),
         LIBBASETYPEPTR, ExpansionBase, 16, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP2(BOOL, ReadExpansionRom,
         AROS_LPA(APTR, board, A0),
         AROS_LPA(struct ConfigDev *, configDev, A1),
         LIBBASETYPEPTR, ExpansionBase, 17, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP1(void, RemConfigDev,
         AROS_LPA(struct ConfigDev *, configDev, A0),
         LIBBASETYPEPTR, ExpansionBase, 18, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP3(void, WriteExpansionByte,
         AROS_LPA(APTR, board, A0),
         AROS_LPA(ULONG, offset, D0),
         AROS_LPA(ULONG, byte, D1),
         LIBBASETYPEPTR, ExpansionBase, 19, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP0(void, ObtainConfigBinding,
         LIBBASETYPEPTR, ExpansionBase, 20, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP0(void, ReleaseConfigBinding,
         LIBBASETYPEPTR, ExpansionBase, 21, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP2(void, SetCurrentBinding,
         AROS_LPA(struct CurrentBinding *, currentBinding, A0),
         AROS_LPA(ULONG, bindingSize, D0),
         LIBBASETYPEPTR, ExpansionBase, 22, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP2(ULONG, GetCurrentBinding,
         AROS_LPA(struct CurrentBinding *, currentBinding, A0),
         AROS_LPA(ULONG, bindingSize, D0),
         LIBBASETYPEPTR, ExpansionBase, 23, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP1(struct DeviceNode *, MakeDosNode,
         AROS_LPA(APTR, parmPacket, A0),
         LIBBASETYPEPTR, ExpansionBase, 24, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__)
AROS_LP3(BOOL, AddDosNode,
         AROS_LPA(LONG, bootPri, D0),
         AROS_LPA(ULONG, flags, D1),
         AROS_LPA(struct DeviceNode *, deviceNode, A0),
         LIBBASETYPEPTR, ExpansionBase, 25, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (33 <= __EXPANSION_LIBAPI__) */

#if !defined(__EXPANSION_LIBAPI__) || (36 <= __EXPANSION_LIBAPI__)
AROS_LP3(void, WriteExpansionWord,
         AROS_LPA(APTR, board, A0),
         AROS_LPA(ULONG, offset, D0),
         AROS_LPA(ULONG, word, D1),
         LIBBASETYPEPTR, ExpansionBase, 27, Expansion
);

#endif /* !defined(__EXPANSION_LIBAPI__) || (36 <= __EXPANSION_LIBAPI__) */

__END_DECLS

#endif /* CLIB_EXPANSION_PROTOS_H */
