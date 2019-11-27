#ifndef CLIB_BULLET_PROTOS_H
#define CLIB_BULLET_PROTOS_H

/*
    *** Automatically generated from '/home/vsts/work/1/s/workbench/libs/bullet/bullet.conf'. Edits will be lost. ***
    Copyright � 1995-2019, The AROS Development Team. All rights reserved.
*/

#include <aros/libcall.h>


#ifndef UTILITIY_TAGITEM_H
#   include <utility/tagitem.h>
#endif

#ifndef DISKFONT_GLYPH_H
#   include <diskfont/glyph.h>
#endif

__BEGIN_DECLS

ULONG SetInfo(struct GlyphEngine *glyphEngine, Tag tag1, ...);
ULONG ReleaseInfo(struct GlyphEngine *glyphEngine, Tag tag1, ...);
ULONG ObtainInfo(struct GlyphEngine *glyphEngine, Tag tag1, ...);

__END_DECLS


__BEGIN_DECLS


#if !defined(__BULLET_LIBAPI__) || (41 <= __BULLET_LIBAPI__)
AROS_LP0(struct GlyphEngine *, OpenEngine,
         LIBBASETYPEPTR, BulletBase, 5, Bullet
);

#endif /* !defined(__BULLET_LIBAPI__) || (41 <= __BULLET_LIBAPI__) */

#if !defined(__BULLET_LIBAPI__) || (41 <= __BULLET_LIBAPI__)
AROS_LP1(void, CloseEngine,
         AROS_LPA(struct GlyphEngine *, glyphEngine, A0),
         LIBBASETYPEPTR, BulletBase, 6, Bullet
);

#endif /* !defined(__BULLET_LIBAPI__) || (41 <= __BULLET_LIBAPI__) */

#if !defined(__BULLET_LIBAPI__) || (41 <= __BULLET_LIBAPI__)
AROS_LP2(ULONG, SetInfoA,
         AROS_LPA(struct GlyphEngine *, glyphEngine, A0),
         AROS_LPA(struct TagItem *, tagList, A1),
         LIBBASETYPEPTR, BulletBase, 7, Bullet
);

#endif /* !defined(__BULLET_LIBAPI__) || (41 <= __BULLET_LIBAPI__) */

#if !defined(__BULLET_LIBAPI__) || (41 <= __BULLET_LIBAPI__)
AROS_LP2(ULONG, ObtainInfoA,
         AROS_LPA(struct GlyphEngine *, glyphEngine, A0),
         AROS_LPA(struct TagItem *, tagList, A1),
         LIBBASETYPEPTR, BulletBase, 8, Bullet
);

#endif /* !defined(__BULLET_LIBAPI__) || (41 <= __BULLET_LIBAPI__) */

#if !defined(__BULLET_LIBAPI__) || (41 <= __BULLET_LIBAPI__)
AROS_LP2(ULONG, ReleaseInfoA,
         AROS_LPA(struct GlyphEngine *, glyphEngine, A0),
         AROS_LPA(struct TagItem *, tagList, A1),
         LIBBASETYPEPTR, BulletBase, 9, Bullet
);

#endif /* !defined(__BULLET_LIBAPI__) || (41 <= __BULLET_LIBAPI__) */

__END_DECLS

#endif /* CLIB_BULLET_PROTOS_H */
