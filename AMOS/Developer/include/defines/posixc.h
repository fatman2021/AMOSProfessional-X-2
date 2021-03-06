#ifndef DEFINES_POSIXC_H
#define DEFINES_POSIXC_H

/*
    *** Automatically generated from '/home/vsts/work/1/s/compiler/posixc/posixc.conf'. Edits will be lost. ***
    Copyright � 1995-2019, The AROS Development Team. All rights reserved.
*/

/*
    Desc: Defines for posixc
*/

#include <aros/libcall.h>
#include <exec/types.h>
#include <aros/symbolsets.h>
#include <aros/preprocessor/variadic/cast2iptr.hpp>

#if !defined(__POSIXC_LIBBASE)
#  if !defined(__NOLIBBASE__) && !defined(__POSIXC_NOLIBBASE__)
#    define __POSIXC_LIBBASE __aros_getbase_PosixCBase()
#  else
#    define __POSIXC_LIBBASE PosixCBase
#  endif
#endif

__BEGIN_DECLS


__END_DECLS

#endif /* DEFINES_POSIXC_H*/
