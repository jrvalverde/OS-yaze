# 1 "monitor.c"
/* System monitor.
   Copyright (C) 1995  Frank D. Cringle.

This file is part of yaze - yet another Z80 emulator.

Yaze is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2 of the License, or (at your
option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA. */

# 1 "/usr/include/stdio.h" 1 3
/* Define ISO C stdio on top of C++ iostreams.
   Copyright (C) 1991, 94, 95, 96, 97, 98, 99 Free Software Foundation, Inc.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	ISO C Standard: 4.9 INPUT/OUTPUT	<stdio.h>
 */





# 1 "/usr/include/features.h" 1 3
/* Copyright (C) 1991, 92, 93, 95, 96, 97, 98 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */




/* These are defined by the user (or the compiler)
   to specify the desired environment:

   __STRICT_ANSI__	ISO Standard C.
   _ISOC9X_SOURCE	Extensions to ISO C 89 from ISO C 9x.
   _POSIX_SOURCE	IEEE Std 1003.1.
   _POSIX_C_SOURCE	If ==1, like _POSIX_SOURCE; if >=2 add IEEE Std 1003.2;
			if >=199309L, add IEEE Std 1003.1b-1993;
			if >=199506L, add IEEE Std 1003.1c-1995
   _XOPEN_SOURCE	Includes POSIX and XPG things.  Set to 500 if
			Single Unix conformance is wanted.
   _XOPEN_SOURCE_EXTENDED XPG things and X/Open Unix extensions.
   _LARGEFILE_SOURCE	Some more functions for correct standard I/O.
   _LARGEFILE64_SOURCE	Additional functionality from LFS for large files.
   _FILE_OFFSET_BITS=N	Select default filesystem interface.
   _BSD_SOURCE		ISO C, POSIX, and 4.3BSD things.
   _SVID_SOURCE		ISO C, POSIX, and SVID things.
   _GNU_SOURCE		All of the above, plus GNU extensions.
   _REENTRANT		Select additionally reentrant object.
   _THREAD_SAFE		Same as _REENTRANT, often used by other systems.

   The `-ansi' switch to the GNU C compiler defines __STRICT_ANSI__.
   If none of these are defined, the default is all but _GNU_SOURCE.
   If more than one of these are defined, they accumulate.
   For example __STRICT_ANSI__, _POSIX_SOURCE and _POSIX_C_SOURCE
   together give you ISO C, 1003.1, and 1003.2, but nothing else.

   These are defined by this file and are used by the
   header files to decide what to declare or define:

   __USE_ISOC9X		Define ISO C 9X things.
   __USE_POSIX		Define IEEE Std 1003.1 things.
   __USE_POSIX2		Define IEEE Std 1003.2 things.
   __USE_POSIX199309	Define IEEE Std 1003.1, and .1b things.
   __USE_POSIX199506	Define IEEE Std 1003.1, .1b, .1c and .1i things.
   __USE_XOPEN		Define XPG things.
   __USE_XOPEN_EXTENDED	Define X/Open Unix things.
   __USE_UNIX98		Define Single Unix V2 things.
   __USE_LARGEFILE64	Define LFS things with separate names.
   __USE_FILE_OFFSET64	Define 64bit interface as default.
   __USE_BSD		Define 4.3BSD things.
   __USE_SVID		Define SVID things.
   __USE_MISC		Define things common to BSD and System V Unix.
   __USE_GNU		Define GNU extensions.
   __USE_REENTRANT	Define reentrant/thread-safe *_r functions.
   __FAVOR_BSD		Favor 4.3BSD things in cases of conflict.

   The macros `__GNU_LIBRARY__', `__GLIBC__', and `__GLIBC_MINOR__' are
   defined by this file unconditionally.  `__GNU_LIBRARY__' is provided
   only for compatibility.  All new code should use the other symbols
   to test for features.

   All macros listed above as possibly being defined by this file are
   explicitly undefined if they are not explicitly defined.
   Feature-test macros that are not defined by the user or compiler
   but are implied by the other feature-test macros defined (or by the
   lack of any definitions) are defined by the file.  */


/* Undefine everything, so we get a clean slate.  */



















/* Suppress kernel-name space pollution unless user expressedly asks
   for it.  */




/* Always use ISO C things.  */



/* If _BSD_SOURCE was defined by the user, favor BSD over POSIX.  */







/* If _GNU_SOURCE was defined by the user, turn on all the other features.  */
# 137 "/usr/include/features.h" 3


/* If nothing (other than _GNU_SOURCE) is defined,
   define _BSD_SOURCE and _SVID_SOURCE.  */








/* This is to enable the ISO C 9x extension.  It will go away as soon
   as this standard is officially released.  */




/* If none of the ANSI/POSIX macros are defined, use POSIX.1 and POSIX.2
   (and IEEE Std 1003.1b-1993 unless _XOPEN_SOURCE is defined).  */
# 165 "/usr/include/features.h" 3


















# 195 "/usr/include/features.h" 3


































/* We do support the IEC 559 math functionality, real and complex.  */



/* This macro indicates that the installed library is the GNU C Library.
   For historic reasons the value now is 6 and this will stay from now
   on.  The use of this variable is deprecated.  Use __GLIBC__ and
   __GLIBC_MINOR__ now (see below) when you want to test for a specific
   GNU C library version and use the values in <gnu/lib-names.h> to get
   the sonames of the shared libraries.  */



/* Major and minor version number of the GNU C library package.  Use
   these macros to test for features in specific releases.  */



/* This is here only because every header file already includes this one.  */

# 1 "/usr/include/sys/cdefs.h" 1 3
/* Copyright (C) 1992,93,94,95,96,97,98,99 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */




/* We are almost always included from features.h. */




/* Some user header file might have defined this before.  */





/* GCC can always grok prototypes.  For C++ programs we add throw()
   to help it optimize the function calls.  But this works only with
   gcc 2.8.x and egcs.  */






/* This macro will be used for functions which might take C++ callback
   functions.  */



/* Not GCC.  *//* GCC.  */
# 71 "/usr/include/sys/cdefs.h" 3


/* For these things, GCC behaves the ANSI way normally,
   and the non-ANSI way under -traditional.  */






/* This is not a typedef so `const __ptr_t' does the right thing.  */



/* __STDC__ */
# 103 "/usr/include/sys/cdefs.h" 3



/* C++ needs to know that types and declarations are C, not C++.  */








/* __asm__ ("xyz") is used throughout the headers to rename functions
   at the assembly language level.  This is wrapped by the __REDIRECT
   macro, in order to support compilers that can do this some other
   way.  When compilers don't support asm-names at all, we have to do
   preprocessor tricks instead (which don't have exactly the right
   semantics, but it's the best we can do).

   Example:
   int __REDIRECT(setpgrp, __P((__pid_t pid, __pid_t pgrp)), setpgid); */







/*
#elif __SOME_OTHER_COMPILER__

# define __attribute__(xyz)
# define __REDIRECT(name, proto, alias) name proto; \
	_Pragma("let " #name " = " #alias)
*/


/* GCC has various useful declarations that can be made with the
   `__attribute__' syntax.  All of the ways we use this do fine if
   they are omitted for compilers that don't understand it. */






/* It is possible to compile containing GCC extensions even if GCC is
   run in pedantic mode if the uses are carefully marked using the
   `__extension__' keyword.  But this is not generally available before
   version 2.8.  */






/* __restrict is known in EGCS 1.2 and above. */


/* Ignore */



/* sys/cdefs.h */
# 249 "/usr/include/features.h" 2 3


/* If we don't have __REDIRECT, prototypes will be missing if
   __USE_FILE_OFFSET64 but not __USE_LARGEFILE[64]. */





/* !ASSEMBLER */

/* Decide whether we can define 'extern inline' functions in headers.  */





/* This is here only because every header file already includes this one.  */

/* Get the definitions of all the appropriate `__stub_FUNCTION' symbols.
   <gnu/stubs.h> contains `#define __stub_FUNCTION' when FUNCTION is a stub
   which will always return failure (and set errno to ENOSYS).

   We avoid including <gnu/stubs.h> when compiling the C library itself to
   avoid a dependency loop.  stubs.h depends on every object file.  If
   this #include were done for the library source code, then every object
   file would depend on stubs.h.  */

# 1 "/usr/include/gnu/stubs.h" 1 3
/* This file is automatically generated.
   It defines a symbol `__stub_FUNCTION' for each function
   in the C library which is a stub, meaning it will fail
   every time called, usually setting errno to ENOSYS.  */

































# 277 "/usr/include/features.h" 2 3



/* features.h  */
# 27 "/usr/include/stdio.h" 2 3


 



# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 1 3






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 19 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3



/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_ */
/* defined(_ANSI_H_) || defined(_MACHINE_ANSI_H_) */
# 61 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */













/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE__TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_ptrdiff_t.  */
# 131 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */

/* BeOS */
/* in case <sys/types.h> has defined it. */












/* BeOS */

















typedef unsigned int size_t;
/* __BEOS__ */


/* !(defined (__GNUG__) && defined (size_t)) */
/* __size_t */
/* _SIZET_ */
/* _GCC_SIZE_T */
/* ___int_size_t_h */
/* _SIZE_T_DEFINED */
/* _SIZE_T_DEFINED_ */
/* _BSD_SIZE_T_ */
/* _SIZE_T_ */
/* __SIZE_T */
/* _T_SIZE */
/* _T_SIZE_ */
/* _SYS_SIZE_T_H */
/* _SIZE_T */
/* __size_t__ */

/* _STDDEF_H or __need_size_t.  */


/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_wchar_t.  */
# 271 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


# 283 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 requires the MACHINE_ANSI_H check here.  FreeBSD 2.x apparently
    does not, even though there is a check for MACHINE_ANSI_H above.  */
/* _ANSI_H_ || ( __bsdi__ && _MACHINE_ANSI_H_ ) */
# 317 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* __sys_stdtypes_h */

/* A null pointer constant.  */


/* in case <stdio.h> has defined it. */
/* G++ */



/* G++ */
/* NULL not defined and <stddef.h> or need NULL.  */


/* _STDDEF_H was defined this time */







/* !_STDDEF_H && !_STDDEF_H_ && !_ANSI_STDDEF_H && !__STDDEF_H__
	  || __need_XXX was not defined before */
# 33 "/usr/include/stdio.h" 2 3





# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h" 1 3
/* stdarg.h for GNU.
   Note that the type used in va_arg is supposed to match the
   actual type **after default promotions**.
   Thus, va_arg (..., short) is not valid.  */



/* not __need___va_list */






















































/* Define __gnuc_va_list.  */






typedef void *__gnuc_va_list;



/* Define the standard macros for the user,
   if this invocation was from the user program.  */
/* _STDARG_H */
# 116 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h" 3


/* not v850 */
/* not mn10200 */
/* not mn10300 */
/* not sh */
/* not m32r */
/* not arc */
/* not powerpc with V.4 calling sequence */
/* not h8300 */
/* not alpha */
/* not i960 */
/* not sparc */
/* not mips */
/* not hppa */
/* not i860 */
/* not m88k */
/* not clipper */

/* _STDARG_H */
# 202 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h" 3


/* not _ANSI_STDARG_H_ */
/* not _STDARG_H */
# 38 "/usr/include/stdio.h" 2 3


# 1 "/usr/include/bits/types.h" 1 3
/* Copyright (C) 1991, 92, 94, 95, 96, 97, 98 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 * Never include this file directly; use <sys/types.h> instead.
 */







# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 1 3






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 19 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3



/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_ */
/* defined(_ANSI_H_) || defined(_MACHINE_ANSI_H_) */
# 61 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */













/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE__TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_ptrdiff_t.  */
# 131 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */

/* BeOS *//* __size_t__ */
# 188 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* _STDDEF_H or __need_size_t.  */


/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_wchar_t.  */
# 271 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


# 283 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 requires the MACHINE_ANSI_H check here.  FreeBSD 2.x apparently
    does not, even though there is a check for MACHINE_ANSI_H above.  */
/* _ANSI_H_ || ( __bsdi__ && _MACHINE_ANSI_H_ ) */
# 317 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* __sys_stdtypes_h */

/* A null pointer constant.  */

/* NULL not defined and <stddef.h> or need NULL.  */









/* _STDDEF_H was defined this time */







/* !_STDDEF_H && !_STDDEF_H_ && !_ANSI_STDDEF_H && !__STDDEF_H__
	  || __need_XXX was not defined before */
# 29 "/usr/include/bits/types.h" 2 3


/* Convenience types.  */
typedef unsigned char __u_char;
typedef unsigned short __u_short;
typedef unsigned int __u_int;
typedef unsigned long __u_long;

__extension__ typedef unsigned long long int __u_quad_t;
__extension__ typedef long long int __quad_t;
# 48 "/usr/include/bits/types.h" 3

typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;

typedef __quad_t *__qaddr_t;

typedef __u_quad_t __dev_t;		/* Type of device numbers.  */
typedef __u_int __uid_t;		/* Type of user identifications.  */
typedef __u_int __gid_t;		/* Type of group identifications.  */
typedef __u_long __ino_t;		/* Type of file serial numbers.  */
typedef __u_int __mode_t;		/* Type of file attribute bitmasks.  */
typedef __u_int __nlink_t; 		/* Type of file link counts.  */
typedef long int __off_t;		/* Type of file sizes and offsets.  */
typedef __quad_t __loff_t;		/* Type of file sizes and offsets.  */
typedef int __pid_t;			/* Type of process identifications.  */
typedef int __ssize_t;			/* Type of a byte count, or error.  */
typedef long int __rlim_t;		/* Type of resource counts.  */
typedef __quad_t __rlim64_t;		/* Type of resource counts (LFS).  */
typedef __u_int __id_t;			/* General type for ID.  */

typedef struct
  {
    int __val[2];
  } __fsid_t;				/* Type of file system IDs.  */

/* Everythin' else.  */
typedef int __daddr_t;			/* The type of a disk address.  */
typedef char *__caddr_t;
typedef long int __time_t;
typedef long int __swblk_t;		/* Type of a swap block maybe?  */

typedef long int __clock_t;

/* One element in the file descriptor mask array.  */
typedef unsigned long int __fd_mask;

/* Number of descriptors that can fit in an `fd_set'.  */


/* It's easier to assume 8-bit bytes than to get CHAR_BIT.  */




/* fd_set for select and pselect.  */
typedef struct
  {
    /* XPG4.2 requires this member name.  Otherwise avoid the name
       from the global namespace.  */




    __fd_mask __fds_bits[1024  / (8 * sizeof (__fd_mask)) ];


  } __fd_set;


typedef int __key_t;

/* Used in `struct shmid_ds'.  */
typedef unsigned short int __ipc_pid_t;


/* Types from the Large File Support interface.  */

/* Type to count number os disk blocks.  */
typedef __u_long __blkcnt_t;
typedef __u_quad_t __blkcnt64_t;

/* Type to count file system blocks.  */
typedef long int __fsblkcnt_t;
typedef __quad_t __fsblkcnt64_t;

/* Type to count file system inodes.  */
typedef __u_long __fsfilcnt_t;
typedef __u_quad_t __fsfilcnt64_t;

/* Type of file serial numbers.  */
typedef __u_long __ino64_t;

/* Type of file sizes and offsets.  */
typedef __loff_t __off64_t;

/* Used in XTI.  */
typedef int __t_scalar_t;
typedef unsigned int __t_uscalar_t;

/* Duplicates info from stdint.h but this is used in unistd.h.  */
typedef int __intptr_t;


/* Now add the thread types.  */




/* bits/types.h */
# 40 "/usr/include/stdio.h" 2 3

/* Don't need FILE.  */





/* The opaque type of streams.  */
typedef struct _IO_FILE FILE;


/* FILE not defined.  */





# 1 "/usr/include/libio.h" 1 3
/* Copyright (C) 1991, 92, 93, 94, 95, 97, 98 Free Software Foundation, Inc.
   This file is part of the GNU IO Library.
   Written by Per Bothner <bothner@cygnus.com>.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License as
   published by the Free Software Foundation; either version 2, or (at
   your option) any later version.

   This library is distributed in the hope that it will be useful, but
   WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this library; see the file COPYING.  If not, write to
   the Free Software Foundation, 59 Temple Place - Suite 330, Boston,
   MA 02111-1307, USA.

   As a special exception, if you link this library with files
   compiled with a GNU compiler to produce an executable, this does
   not cause the resulting executable to be covered by the GNU General
   Public License.  This exception does not however invalidate any
   other reasons why the executable file might be covered by the GNU
   General Public License.  */




# 1 "/usr/include/_G_config.h" 1 3
/* This file is needed by libio to define various configuration parameters.
   These are always the same in the GNU C library.  */




/* Define types for libio in terms of the standard internal type names.  */






# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 1 3






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 19 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3



/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_ */
/* defined(_ANSI_H_) || defined(_MACHINE_ANSI_H_) */
# 61 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */













/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE__TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_ptrdiff_t.  */
# 131 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */

/* BeOS *//* __size_t__ */
# 188 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* _STDDEF_H or __need_size_t.  */


/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */

/* BeOS */












/* BeOS */













/* On BSD/386 1.1, at least, machine/ansi.h defines _BSD_WCHAR_T_
   instead of _WCHAR_T_, and _BSD_RUNE_T_ (which, unlike the other
   symbols in the _FOO_T_ family, stays defined even after its
   corresponding type is defined).  If we define wchar_t, then we
   must undef _WCHAR_T_; for BSD/386 1.1 (and perhaps others), if
   we undef _WCHAR_T_, then we must also define rune_t, since 
   headers like runetype.h assume that if machine/ansi.h is included,
   and _BSD_WCHAR_T_ is not defined, then rune_t is available.
   machine/ansi.h says, "Note that _WCHAR_T_ and _RUNE_T_ must be of
   the same type." */

















typedef long int wchar_t;













/* __wchar_t__ */

/* _STDDEF_H or __need_wchar_t.  */








typedef unsigned int  wint_t;




/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 requires the MACHINE_ANSI_H check here.  FreeBSD 2.x apparently
    does not, even though there is a check for MACHINE_ANSI_H above.  */
/* _ANSI_H_ || ( __bsdi__ && _MACHINE_ANSI_H_ ) */
# 317 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* __sys_stdtypes_h */

/* A null pointer constant.  */


/* in case <stdio.h> has defined it. */
/* G++ */



/* G++ */
/* NULL not defined and <stddef.h> or need NULL.  */


/* _STDDEF_H was defined this time */







/* !_STDDEF_H && !_STDDEF_H_ && !_ANSI_STDDEF_H && !__STDDEF_H__
	  || __need_XXX was not defined before */
# 14 "/usr/include/_G_config.h" 2 3





















typedef int _G_int16_t __attribute__ ((__mode__ (__HI__)));
typedef int _G_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int _G_uint16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int _G_uint32_t __attribute__ ((__mode__ (__SI__)));




/* These library features are always available in the GNU C library.  */


















/* This is defined by <bits/stat.h> if `st_blksize' exists.  */




/* These are the vtbl details for ELF.  */













/* _G_config.h */
# 30 "/usr/include/libio.h" 2 3

/* obsolete */














/* This define avoids name pollution if we're using GNU stdarg.h */

# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h" 1 3
/* stdarg.h for GNU.
   Note that the type used in va_arg is supposed to match the
   actual type **after default promotions**.
   Thus, va_arg (..., short) is not valid.  */



/* not __need___va_list */






















































/* Define __gnuc_va_list.  */










/* Define the standard macros for the user,
   if this invocation was from the user program.  */
/* _STDARG_H */
# 116 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h" 3


/* not v850 */
/* not mn10200 */
/* not mn10300 */
/* not sh */
/* not m32r */
/* not arc */
/* not powerpc with V.4 calling sequence */
/* not h8300 */
/* not alpha */
/* not i960 */
/* not sparc */
/* not mips */
/* not hppa */
/* not i860 */
/* not m88k */
/* not clipper */

/* _STDARG_H */
# 202 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stdarg.h" 3


/* not _ANSI_STDARG_H_ */
/* not _STDARG_H */
# 48 "/usr/include/libio.h" 2 3




/* __GNUC_VA_LIST */


/*!__P*/
# 67 "/usr/include/libio.h" 3


/* For backward compatibility */


/*!_PARAMS*/














# 98 "/usr/include/libio.h" 3











/* Magic numbers and bits for the _flags field.
   The magic numbers use the high-order bits of _flags;
   the remaining bits are available for variable flags.
   Note: The magic numbers must all be negative if stdio
   emulation is desired. */

/* Magic number */
/* Emulate old stdio. */

/* User owns buffer; don't delete it on close. */

/* Reading not allowed */
/* Writing not allowd */


/* Don't call close(_fileno) on cleanup. */
/* Set if linked (using _chain) to streambuf::_list_all.*/


/* Set if put and get pointer logicly tied. */





/* These are "formatting flags" matching the iostream fmtflags enum values. */



















struct _IO_jump_t;  struct _IO_FILE;

/* Handle lock.  */







typedef void _IO_lock_t;



/* A streammarker remembers a position in a buffer. */

struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;
  /* If _pos >= 0
 it points to _buf->Gbase()+_pos. FIXME comment */
  /* if _pos < 0, it points to _buf->eBptr()+_pos. FIXME comment */
  int _pos;
# 186 "/usr/include/libio.h" 3

};

struct _IO_FILE {
  int _flags;		/* High-order word is _IO_MAGIC; rest is flags. */


  /* The following pointers correspond to the C++ streambuf protocol. */
  /* Note:  Tk uses the _IO_read_ptr and _IO_read_end fields directly. */
  char* _IO_read_ptr;	/* Current read pointer */
  char* _IO_read_end;	/* End of get area. */
  char* _IO_read_base;	/* Start of putback+get area. */
  char* _IO_write_base;	/* Start of put area. */
  char* _IO_write_ptr;	/* Current put pointer. */
  char* _IO_write_end;	/* End of put area. */
  char* _IO_buf_base;	/* Start of reserve area. */
  char* _IO_buf_end;	/* End of reserve area. */
  /* The following fields are used to support backing up and undo. */
  char *_IO_save_base; /* Pointer to start of non-current get area. */
  char *_IO_backup_base;  /* Pointer to first valid character of backup area */
  char *_IO_save_end; /* Pointer to end of non-current get area. */

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _blksize;
  __off_t   _old_offset; /* This used to be _offset but it's too small.  */

/* temporary */
  /* 1+column number of pbase(); 0 is unknown. */
  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  /*  char* _save_gptr;  char* _save_egptr; */

  _IO_lock_t *_lock;








  __off64_t   _offset;
  /* Make sure we don't get into trouble again.  */
  int _unused2[16];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;
extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;











# 276 "/usr/include/libio.h" 3







extern int __underflow  (_IO_FILE *)    ;
extern int __uflow  (_IO_FILE *)    ;
extern int __overflow  (_IO_FILE *, int)    ;
















extern int _IO_getc  (_IO_FILE *__fp)    ;
extern int _IO_putc  (int __c, _IO_FILE *__fp)    ;
extern int _IO_feof  (_IO_FILE *__fp)    ;
extern int _IO_ferror  (_IO_FILE *__fp)    ;

extern int _IO_peekc_locked  (_IO_FILE *__fp)    ;

/* This one is for Emacs. */



extern void _IO_flockfile  (_IO_FILE *)    ;
extern void _IO_funlockfile  (_IO_FILE *)    ;
extern int _IO_ftrylockfile  (_IO_FILE *)    ;





/**/
/**/
/**/
/**/
/**/
/* !_IO_MTSAFE_IO */

extern int _IO_vfscanf  (_IO_FILE *  , const char *  ,
			     __gnuc_va_list , int *  )    ;
extern int _IO_vfprintf  (_IO_FILE *  , const char *  ,
			      __gnuc_va_list )    ;
extern __ssize_t   _IO_padn  (_IO_FILE *, int, __ssize_t  )    ;
extern size_t   _IO_sgetn  (_IO_FILE *, void *, size_t  )    ;

extern __off64_t   _IO_seekoff  (_IO_FILE *, __off64_t  , int, int)    ;
extern __off64_t   _IO_seekpos  (_IO_FILE *, __off64_t  , int)    ;

extern void _IO_free_backup_area  (_IO_FILE *)    ;





/* _IO_STDIO_H */
# 57 "/usr/include/stdio.h" 2 3


/* The type of the second argument to `fgetpos' and `fsetpos'.  */

typedef __off_t  fpos_t;







/* The possibilities for the third argument to `setvbuf'.  */
/* Fully buffered.  */
/* Line buffered.  */
/* No buffering.  */


/* Default buffer size.  */





/* End of file character.
   Some things throughout the library rely on this being -1.  */





/* The possibilities for the third argument to `fseek'.
   These values should not be changed.  */
/* Seek from beginning of file.  */
/* Seek from current position.  */
/* Seek from end of file.  */








/* Get the values:
   L_tmpnam	How long an array of chars must be to be passed to `tmpnam'.
   TMP_MAX	The minimum number of unique filenames generated by tmpnam
   		(and tempnam when it uses tmpnam's name space),
		or tempnam (the two are separate).
   L_ctermid	How long an array to pass to `ctermid'.
   L_cuserid	How long an array to pass to `cuserid'.
   FOPEN_MAX	Minimum number of files that can be open at once.
   FILENAME_MAX	Maximum length of a filename.  */
# 1 "/usr/include/bits/stdio_lim.h" 1 3
/* Copyright (C) 1994, 1997, 1998 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */




















# 110 "/usr/include/stdio.h" 2 3



/* Standard streams.  */
extern FILE *stdin;		/* Standard input stream.  */
extern FILE *stdout;		/* Standard output stream.  */
extern FILE *stderr;		/* Standard error output stream.  */


/* Remove file FILENAME.  */
extern int remove  (__const char *__filename)    ;
/* Rename file OLD to NEW.  */
extern int rename  (__const char *__old, __const char *__new)    ;


/* Create a temporary file and open it read/write.  */

extern FILE *tmpfile  (void)    ;










/* Generate a temporary filename.  */
extern char *tmpnam  (char *__s)    ;








# 157 "/usr/include/stdio.h" 3



/* Close STREAM.  */
extern int fclose  (FILE *__stream)    ;
/* Flush STREAM, or all streams if STREAM is NULL.  */
extern int fflush  (FILE *__stream)    ;













/* Open a file and create a new stream for it.  */
extern FILE *fopen  (__const char *   __filename,
			 __const char *   __modes)    ;
/* Open a file, replacing an existing stream with it. */
extern FILE *freopen  (__const char *   __filename,
			   __const char *   __modes,
			   FILE *   __stream)    ;
# 197 "/usr/include/stdio.h" 3














# 223 "/usr/include/stdio.h" 3



/* If BUF is NULL, make STREAM unbuffered.
   Else make it use buffer BUF, of size BUFSIZ.  */
extern void setbuf  (FILE *   __stream, char *   __buf)    ;
/* Make STREAM use buffering mode MODE.
   If BUF is not NULL, use N bytes of it for buffering;
   else allocate an internal buffer N bytes long.  */
extern int setvbuf  (FILE *   __stream, char *   __buf,
			 int __modes, size_t __n)    ;

# 243 "/usr/include/stdio.h" 3



/* Write formatted output to STREAM.  */
extern int fprintf  (FILE *   __stream,
			 __const char *   __format, ...)    ;
/* Write formatted output to stdout.  */
extern int printf  (__const char *   __format, ...)    ;
/* Write formatted output to S.  */
extern int sprintf  (char *   __s,
			 __const char *   __format, ...)    ;

/* Write formatted output to S from argument list ARG.  */
extern int vfprintf  (FILE *   __s,
			  __const char *   __format,
			  __gnuc_va_list  __arg)    ;
/* Write formatted output to stdout from argument list ARG.  */
extern int vprintf  (__const char *   __format,
			 __gnuc_va_list  __arg)    ;
/* Write formatted output to S from argument list ARG.  */
extern int vsprintf  (char *   __s,
			  __const char *   __format,
			  __gnuc_va_list  __arg)    ;

# 281 "/usr/include/stdio.h" 3


# 302 "/usr/include/stdio.h" 3



/* Read formatted input from STREAM.  */
extern int fscanf  (FILE *   __stream,
			__const char *   __format, ...)    ;
/* Read formatted input from stdin.  */
extern int scanf  (__const char *   __format, ...)    ;
/* Read formatted input from S.  */
extern int sscanf  (__const char *   __s,
			__const char *   __format, ...)    ;

/* Use ISO C9x.  */
# 330 "/usr/include/stdio.h" 3



/* Read a character from STREAM.  */
extern int fgetc  (FILE *__stream)    ;
extern int getc  (FILE *__stream)    ;

/* Read a character from stdin.  */
extern int getchar  (void)    ;

/* The C standard explicitly says this is a macro, so we always do the
   optimization for it.  */


/* Use POSIX or MISC.  */





/* Use MISC.  */





/* Write a character to STREAM.  */
extern int fputc  (int __c, FILE *__stream)    ;
extern int putc  (int __c, FILE *__stream)    ;

/* Write a character to stdout.  */
extern int putchar  (int __c)    ;

/* The C standard explicitly says this can be a macro,
   so we always do the optimization for it.  */


/* Use MISC.  */




/* Use POSIX or MISC.  */















/* Get a newline-terminated string of finite length from STREAM.  */
extern char *fgets  (char *   __s, int __n,
			 FILE *   __stream)    ;







/* Get a newline-terminated string from stdin, removing the newline.
   DO NOT USE THIS FUNCTION!!  There is no limit on how much it will read.  */
extern char *gets  (char *__s)    ;


# 420 "/usr/include/stdio.h" 3



/* Write a string to STREAM.  */
extern int fputs  (__const char *   __s,
		       FILE *   __stream)    ;







/* Write a string, followed by a newline, to stdout.  */
extern int puts  (__const char *__s)    ;


/* Push a character back onto the input buffer of STREAM.  */
extern int ungetc  (int __c, FILE *__stream)    ;


/* Read chunks of generic data from STREAM.  */
extern size_t fread  (void *   __ptr, size_t __size,
			  size_t __n, FILE *   __stream)    ;
/* Write chunks of generic data to STREAM.  */
extern size_t fwrite  (__const void *   __ptr, size_t __size,
			   size_t __n, FILE *   __s)    ;











/* Seek to a certain position on STREAM.  */
extern int fseek  (FILE *__stream, long int __off, int __whence)    ;
/* Return the current position of STREAM.  */
extern long int ftell  (FILE *__stream)    ;
/* Rewind to the beginning of STREAM.  */
extern void rewind  (FILE *__stream)    ;

/* The Single Unix Specification, Version 2, specifies an alternative,
   more adequate interface for the two functions above which deal with
   file offset.  `long int' is not the right type.  These definitions
   are originally defined in the Large File Support API.  */

/* Types needed in these functions.  */


typedef __off_t off_t;




















/* Get STREAM's position.  */
extern int fgetpos  (FILE *   __stream,
			 fpos_t *   __pos)    ;
/* Set STREAM's position.  */
extern int fsetpos  (FILE *__stream, __const fpos_t *__pos)    ;
# 519 "/usr/include/stdio.h" 3


# 529 "/usr/include/stdio.h" 3


/* Clear the error and EOF indicators for STREAM.  */
extern void clearerr  (FILE *__stream)    ;
/* Return the EOF indicator for STREAM.  */
extern int feof  (FILE *__stream)    ;
/* Return the error indicator for STREAM.  */
extern int ferror  (FILE *__stream)    ;









/* Print a message describing the meaning of the value of errno.  */
extern void perror  (__const char *__s)    ;

/* These variables normally should not be used directly.  The `strerror'
   function provides all the needed functionality.  */










/* Use POSIX.  */




















/* Use POSIX.  */





/* Use X/Open.  */





/* Use GNU.  */
# 603 "/usr/include/stdio.h" 3



/* POSIX || misc */
# 618 "/usr/include/stdio.h" 3










/* If we are compiling with optimizing read this file.  It contains
   several optizing inline functions and macros.  */

# 1 "/usr/include/bits/stdio.h" 1 3
/* Optimizing macros and inline functions for stdio functions.
   Copyright (C) 198 Free Software Foundation, Inc.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */













/* Write formatted output to stdout from argument list ARG.  */
extern __inline  int
vprintf (__const char *   __fmt, __gnuc_va_list  __arg)  
{
  return vfprintf (stdout, __fmt, __arg);
}

/* Read a character from stdin.  */
extern __inline  int
getchar (void)  
{
  return _IO_getc (stdin);
}


/* POSIX || misc */
# 60 "/usr/include/bits/stdio.h" 3



/* Write a character to stdout.  */
extern __inline  int
putchar (int __c)  
{
  return _IO_putc (__c, stdout);
}


/* misc */









/* POSIX || misc */
# 95 "/usr/include/bits/stdio.h" 3



/* GNU */









/* misc */
# 122 "/usr/include/bits/stdio.h" 3


/* Use extern inlines.  */


# 165 "/usr/include/bits/stdio.h" 3


/* Define helper macro.  */

# 631 "/usr/include/stdio.h" 2 3



 

/* <stdio.h> included.  */

/* !_STDIO_H */
# 20 "monitor.c" 2

# 1 "/usr/include/stdlib.h" 1 3
/* Copyright (C) 1991,92,93,94,95,96,97,98,99 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	ISO C Standard: 4.10 GENERAL UTILITIES	<stdlib.h>
 */





/* Get size_t, wchar_t and NULL from <stddef.h>.  */





# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 1 3






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 19 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3



/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_ */
/* defined(_ANSI_H_) || defined(_MACHINE_ANSI_H_) */
# 61 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */













/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE__TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_ptrdiff_t.  */
# 131 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */

/* BeOS *//* __size_t__ */
# 188 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* _STDDEF_H or __need_size_t.  */


/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */

/* BeOS *//* __wchar_t__ */
# 269 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* _STDDEF_H or __need_wchar_t.  */

# 283 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 requires the MACHINE_ANSI_H check here.  FreeBSD 2.x apparently
    does not, even though there is a check for MACHINE_ANSI_H above.  */
/* _ANSI_H_ || ( __bsdi__ && _MACHINE_ANSI_H_ ) */
# 317 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* __sys_stdtypes_h */

/* A null pointer constant.  */


/* in case <stdio.h> has defined it. */
/* G++ */



/* G++ */
/* NULL not defined and <stddef.h> or need NULL.  */


/* _STDDEF_H was defined this time */







/* !_STDDEF_H && !_STDDEF_H_ && !_ANSI_STDDEF_H && !__STDDEF_H__
	  || __need_XXX was not defined before */
# 33 "/usr/include/stdlib.h" 2 3


 




/* Returned by `div'.  */
typedef struct
  {
    int quot;			/* Quotient.  */
    int rem;			/* Remainder.  */
  } div_t;

/* Returned by `ldiv'.  */

typedef struct
  {
    long int quot;		/* Quotient.  */
    long int rem;		/* Remainder.  */
  } ldiv_t;



# 65 "/usr/include/stdlib.h" 3



/* The largest number rand will return (same as INT_MAX).  */



/* We define these the same for all machines.
   Changes from this to the outside world should be done in `_exit'.  */
/* Failing exit status.  */
/* Successful exit status.  */


/* Maximum length of a multibyte character in the current locale.  */

extern size_t __ctype_get_mb_cur_max  (void)    ;


/* Convert a string to a floating-point number.  */
extern double atof  (__const char *__nptr)    ;
/* Convert a string to an integer.  */
extern int atoi  (__const char *__nptr)    ;
/* Convert a string to a long integer.  */
extern long int atol  (__const char *__nptr)    ;






/* Convert a string to a floating-point number.  */
extern double strtod  (__const char *   __nptr,
			   char **   __endptr)    ;










/* Convert a string to a long integer.  */
extern long int strtol  (__const char *   __nptr,
			     char **   __endptr, int __base)    ;
/* Convert a string to an unsigned long integer.  */
extern unsigned long int strtoul  (__const char *   __nptr,
				       char **   __endptr,
				       int __base)    ;

/* GCC and use BSD.  */
# 126 "/usr/include/stdlib.h" 3


/* ISO C 9X or GCC and use MISC.  */
# 140 "/usr/include/stdlib.h" 3



/* GNU */
# 190 "/usr/include/stdlib.h" 3



/* The internal entry points for `strtoX' take an extra flag argument
   saying whether or not to parse locale-dependent number grouping.  */

extern double __strtod_internal  (__const char *   __nptr,
				      char **   __endptr,
				      int __group)    ;
extern float __strtof_internal  (__const char *   __nptr,
				     char **   __endptr, int __group)    ;
extern long double  __strtold_internal  (__const char *
						  __nptr,
						char **   __endptr,
						int __group)    ;

extern long int __strtol_internal  (__const char *   __nptr,
					char **   __endptr,
					int __base, int __group)    ;



extern unsigned long int __strtoul_internal  (__const char *
						    __nptr,
						  char **   __endptr,
						  int __base, int __group)    ;




__extension__
extern long long int __strtoll_internal  (__const char *   __nptr,
					      char **   __endptr,
					      int __base, int __group)    ;



__extension__
extern unsigned long long int __strtoull_internal  (__const char *
							  __nptr,
							char **
							  __endptr,
							int __base,
							int __group)    ;


/* GCC */



/* Define inline functions which call the internal entry points.  */

extern __inline double
strtod (__const char *   __nptr, char **   __endptr)  
{
  return __strtod_internal (__nptr, __endptr, 0);
}
extern __inline long int
strtol (__const char *   __nptr, char **   __endptr,
	int __base)  
{
  return __strtol_internal (__nptr, __endptr, __base, 0);
}
extern __inline unsigned long int
strtoul (__const char *   __nptr, char **   __endptr,
	 int __base)  
{
  return __strtoul_internal (__nptr, __endptr, __base, 0);
}

# 271 "/usr/include/stdlib.h" 3


# 286 "/usr/include/stdlib.h" 3


# 301 "/usr/include/stdlib.h" 3


extern __inline double
atof (__const char *__nptr)  
{
  return strtod (__nptr, (char **) ((void *)0) );
}
extern __inline int
atoi (__const char *__nptr)  
{
  return (int) strtol (__nptr, (char **) ((void *)0) , 10);
}
extern __inline long int
atol (__const char *__nptr)  
{
  return strtol (__nptr, (char **) ((void *)0) , 10);
}








/* Optimizing and Inlining.  */


/* Use SVID || extended X/Open.  */
# 392 "/usr/include/stdlib.h" 3



/* Return a random integer between 0 and RAND_MAX inclusive.  */
extern int rand  (void)    ;
/* Seed the random number generator with the given number.  */
extern void srand  (unsigned int __seed)    ;







/* Use SVID or X/Open.  */
# 467 "/usr/include/stdlib.h" 3


/* don't just need malloc and calloc */



/* Allocate SIZE bytes of memory.  */
extern void *  malloc  (size_t __size)    ;
/* Allocate NMEMB elements of SIZE bytes each, all initialized to 0.  */
extern void *  calloc  (size_t __nmemb, size_t __size)    ;



/* Re-allocate the previously allocated block
   in __ptr_t, making the new block SIZE bytes long.  */
extern void *  realloc  (void *  __ptr, size_t __size)    ;
/* Free a block allocated by `malloc', `realloc' or `calloc'.  */
extern void free  (void *  __ptr)    ;

/* Use misc.  */




/* Use GNU, BSD, or misc.  */









/* Abort execution and generate a core-dump.  */
extern void abort  (void)     __attribute__ ((__noreturn__));


/* Register a function to be called when `exit' is called.  */
extern int atexit  (void (*__func) (void))    ;










/* Call all functions registered with `atexit' and `on_exit',
   in the reverse of the order in which they were registered
   perform stdio cleanup, and terminate program execution with STATUS.  */
extern void exit  (int __status)     __attribute__ ((__noreturn__));








/* Return the value of envariable NAME, or NULL if it doesn't exist.  */
extern char *getenv  (__const char *__name)    ;

/* This function is similar to the above but returns NULL if the
   programs is running with SUID or SGID enabled.  */
extern char *__secure_getenv  (__const char *__name)    ;








# 551 "/usr/include/stdlib.h" 3










# 574 "/usr/include/stdlib.h" 3



/* Execute the given line as a shell command.  */
extern int system  (__const char *__command)    ;









# 597 "/usr/include/stdlib.h" 3



/* Shorthand for type of comparison functions.  */


typedef int (*__compar_fn_t)  (__const void * , __const void * )  ;






/* Do a binary search for KEY in BASE, which consists of NMEMB elements
   of SIZE bytes each, using COMPAR to perform the comparisons.  */
extern void *  bsearch  (__const void *  __key, __const void *  __base,
			       size_t __nmemb, size_t __size,
			       __compar_fn_t __compar)  ;

/* Sort NMEMB elements of BASE, of SIZE bytes each,
   using COMPAR to perform the comparisons.  */
extern void qsort  (void *  __base, size_t __nmemb, size_t __size,
			  __compar_fn_t __compar)  ;


/* Return the absolute value of X.  */
extern int abs  (int __x)     __attribute__ ((__const__));
extern long int labs  (long int __x)     __attribute__ ((__const__));






/* Return the `div_t', `ldiv_t' or `lldiv_t' representation
   of the value of NUMER over DENOM. */
/* GCC may have built-ins for these someday.  */
extern div_t div  (int __numer, int __denom)     __attribute__ ((__const__));
extern ldiv_t ldiv  (long int __numer, long int __denom)    
     __attribute__ ((__const__));







/* use MISC || use X/Open Unix */
# 690 "/usr/include/stdlib.h" 3



/* Return the length of the multibyte character
   in S, which is no longer than N.  */
extern int mblen  (__const char *__s, size_t __n)    ;
/* Return the length of the given multibyte character,
   putting its `wchar_t' representation in *PWC.  */
extern int mbtowc  (wchar_t *   __pwc,
			__const char *   __s, size_t __n)    ;
/* Put the multibyte character represented
   by WCHAR in S, returning its length.  */
extern int wctomb  (char *__s, wchar_t __wchar)    ;


/* Convert a multibyte string to a wide char string.  */
extern size_t mbstowcs  (wchar_t *    __pwcs,
			     __const char *   __s, size_t __n)    ;
/* Convert a wide char string to multibyte string.  */
extern size_t wcstombs  (char *   __s,
			     __const wchar_t *   __pwcs, size_t __n)    ;











# 732 "/usr/include/stdlib.h" 3



# 756 "/usr/include/stdlib.h" 3


# 766 "/usr/include/stdlib.h" 3


/* don't just need malloc and calloc */


 

/* stdlib.h  */
# 21 "monitor.c" 2

# 1 "/usr/include/unistd.h" 1 3
/* Copyright (C) 1991,92,93,94,95,96,97,98 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	POSIX Standard: 2.10 Symbolic Constants		<unistd.h>
 */






 

/* These may be used to determine what facilities are present at compile time.
   Their values can be obtained at run time from `sysconf'.  */

/* POSIX Standard approved as ISO/IEC 9945-1 as of August, 1988 and
   extended by POSIX-1b (aka POSIX-4) and POSIX-1c (aka POSIX threads).  */


/* These are not #ifdef __USE_POSIX2 because they are
   in the theoretically application-owned namespace.  */

/* POSIX Standard approved as ISO/IEC 9945-2 as of December, 1993.  */


/* The utilities on GNU systems also correspond to this version.  */


/* If defined, the implementation supports the
   C Language Bindings Option.  */


/* If defined, the implementation supports the
   C Language Development Utilities Option.  */


/* If defined, the implementation supports the
   Software Development Utilities Option.  */


/* If defined, the implementation supports the
   creation of locales with the localedef utility.  */


/* X/Open version number to which the library conforms.  It is selectable.  */






/* Commands and utilities from XPG4 are available.  */


/* We are compatible with the old published standards as well.  */




/* The X/Open Unix extensions are available.  */


/* Encryption is present.  */


/* The enhanced internationalization capabilities according to XPG4.2
   are present.  */


/* The legacy interfaces are also available.  */



/* Get values of POSIX options:

   If these symbols are defined, the corresponding features are
   always available.  If not, they may be available sometimes.
   The current values can be obtained with `sysconf'.

   _POSIX_JOB_CONTROL		Job control is supported.
   _POSIX_SAVED_IDS		Processes have a saved set-user-ID
   				and a saved set-group-ID.
   _POSIX_REALTIME_SIGNALS	Real-time, queued signals are supported.
   _POSIX_PRIORITY_SCHEDULING	Priority scheduling is supported.
   _POSIX_TIMERS		POSIX.4 clocks and timers are supported.
   _POSIX_ASYNCHRONOUS_IO	Asynchronous I/O is supported.
   _POSIX_PRIORITIZED_IO	Prioritized asynchronous I/O is supported.
   _POSIX_SYNCHRONIZED_IO	Synchronizing file data is supported.
   _POSIX_FSYNC			The fsync function is present.
   _POSIX_MAPPED_FILES		Mapping of files to memory is supported.
   _POSIX_MEMLOCK		Locking of all memory is supported.
   _POSIX_MEMLOCK_RANGE		Locking of ranges of memory is supported.
   _POSIX_MEMORY_PROTECTION	Setting of memory protections is supported.
   _POSIX_MESSAGE_PASSING	POSIX.4 message queues are supported.
   _POSIX_SEMAPHORES		POSIX.4 counting semaphores are supported.
   _POSIX_SHARED_MEMORY_OBJECTS	POSIX.4 shared memory objects are supported.
   _POSIX_THREADS		POSIX.1c pthreads are supported.
   _POSIX_THREAD_ATTR_STACKADDR	Thread stack address attribute option supported.
   _POSIX_THREAD_ATTR_STACKSIZE	Thread stack size attribute option supported.
   _POSIX_THREAD_SAFE_FUNCTIONS	Thread-safe functions are supported.
   _POSIX_THREAD_PRIORITY_SCHEDULING
				POSIX.1c thread execution scheduling supported.
   _POSIX_THREAD_PRIO_INHERIT	Thread priority inheritance option supported.
   _POSIX_THREAD_PRIO_PROTECT	Thread priority protection option supported.
   _POSIX_THREAD_PROCESS_SHARED	Process-shared synchronization supported.
   _POSIX_PII			Protocol-independent interfaces are supported.
   _POSIX_PII_XTI		XTI protocol-indep. interfaces are supported.
   _POSIX_PII_SOCKET		Socket protocol-indep. interfaces are supported.
   _POSIX_PII_INTERNET		Internet family of protocols supported.
   _POSIX_PII_INTERNET_STREAM	Connection-mode Internet protocol supported.
   _POSIX_PII_INTERNET_DGRAM	Connectionless Internet protocol supported.
   _POSIX_PII_OSI		ISO/OSI family of protocols supported.
   _POSIX_PII_OSI_COTS		Connection-mode ISO/OSI service supported.
   _POSIX_PII_OSI_CLTS		Connectionless ISO/OSI service supported.
   _POSIX_POLL			Implementation supports `poll' function.
   _POSIX_SELECT		Implementation supports `select' and `pselect'.

   _XOPEN_REALTIME		X/Open realtime support is available.
   _XOPEN_REALTIME_THREADS	X/Open realtime thread support is available.
   _XOPEN_SHM			Shared memory interface according to XPG4.2.

   _XBS5_ILP32_OFF32		Implementation provides environment with 32-bit
				int, long, pointer, and off_t types.
   _XBS5_ILP32_OFFBIG		Implementation provides environment with 32-bit
				int, long, and pointer and off_t with at least
				64 bits.
   _XBS5_LP64_OFF64		Implementation provides environment with 32-bit
				int, and 64-bit long, pointer, and off_t types.
   _XBS5_LPBIG_OFFBIG		Implementation provides environment with at
				least 32 bits int and long, pointer, and off_t
				with at least 64 bits.

   If any of these symbols is defined as -1, the corresponding option is not
   true for any file.  If any is defined as other than -1, the corresponding
   option is true for all files.  If a symbol is not defined at all, the value
   for a specific file can be obtained from `pathconf' and `fpathconf'.

   _POSIX_CHOWN_RESTRICTED	Only the super user can use `chown' to change
   				the owner of a file.  `chown' can only be used
				to change the group ID of a file to a group of
				which the calling process is a member.
   _POSIX_NO_TRUNC		Pathname components longer than
   				NAME_MAX generate an error.
   _POSIX_VDISABLE		If defined, if the value of an element of the
				`c_cc' member of `struct termios' is
				_POSIX_VDISABLE, no character will have the
				effect associated with that element.
   _POSIX_SYNC_IO		Synchronous I/O may be performed.
   _POSIX_ASYNC_IO		Asynchronous I/O may be performed.
   _POSIX_PRIO_IO		Prioritized Asynchronous I/O may be performed.

   Support for the Large File Support interface is not generally available.
   If it is available the following constants are defined to one.
   _LFS64_LARGEFILE		Low-level I/O supports large files.
   _LFS64_STDIO			Standard I/O supports large files.
   */

# 1 "/usr/include/bits/posix_opt.h" 1 3
/* Define POSIX options for Linux.
   Copyright (C) 1996, 1997, 1998, 1999 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */




/* Job control is supported.  */


/* Processes have a saved set-user-ID and a saved set-group-ID.  */


/* Priority scheduling is supported.  */


/* Synchronizing file data is supported.  */


/* The fsync function is present.  */


/* Mapping of files to memory is supported.  */


/* Locking of all memory is supported.  */


/* Locking of ranges of memory is supported.  */


/* Setting of memory protections is supported.  */


/* Implementation supports `poll' function.  */


/* Implementation supports `select' and `pselect' functions.  */


/* Only root can change owner of file.  */


/* `c_cc' member of 'struct termios' structure can be disabled by
   using the value _POSIX_VDISABLE.  */


/* Filenames are not silently truncated.  */


/* X/Open realtime support is available.  */


/* X/Open realtime thread support is available.  */


/* XPG4.2 shared memory is supported.  */


/* Tell we have POSIX threads.  */


/* We have the reentrant functions described in POSIX.  */



/* We provide priority scheduling for threads.  */


/* We support user-defined stack sizes.  */


/* We support user-defined stacks.  */


/* We support POSIX.1b semaphores, but only the non-shared form for now.  */
/*#define _POSIX_SEMAPHORES	1	XXX We are not quite there now.  */

/* Real-time signals are supported.  */


/* We support asynchronous I/O.  */

/* Alternative name for Unix98.  */


/* The LFS support in asynchronous I/O is also available.  */


/* The rest of the LFS is also available.  */




/* posix_opt.h */
# 175 "/usr/include/unistd.h" 2 3


/* Get the environment definitions from Unix98.  */




/* Standard file descriptors.  */
/* Standard input.  */
/* Standard output.  */
/* Standard error output.  */


/* All functions that are not declared anywhere else.  */




typedef __ssize_t ssize_t;





# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 1 3






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 19 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3



/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_ */
/* defined(_ANSI_H_) || defined(_MACHINE_ANSI_H_) */
# 61 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */













/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE__TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_ptrdiff_t.  */
# 131 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */

/* BeOS *//* __size_t__ */
# 188 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* _STDDEF_H or __need_size_t.  */


/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_wchar_t.  */
# 271 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


# 283 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 requires the MACHINE_ANSI_H check here.  FreeBSD 2.x apparently
    does not, even though there is a check for MACHINE_ANSI_H above.  */
/* _ANSI_H_ || ( __bsdi__ && _MACHINE_ANSI_H_ ) */
# 317 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* __sys_stdtypes_h */

/* A null pointer constant.  */


/* in case <stdio.h> has defined it. */
/* G++ */



/* G++ */
/* NULL not defined and <stddef.h> or need NULL.  */


/* _STDDEF_H was defined this time */







/* !_STDDEF_H && !_STDDEF_H_ && !_ANSI_STDDEF_H && !__STDDEF_H__
	  || __need_XXX was not defined before */
# 199 "/usr/include/unistd.h" 2 3


/* X/Open */
# 231 "/usr/include/unistd.h" 3


/* Unix98 */






/* Values for the second argument to access.
   These may be OR'd together.  */
/* Test for read permission.  */
/* Test for write permission.  */
/* Test for execute permission.  */
/* Test for existence.  */

/* Test for access to NAME using the real UID and real GID.  */
extern int access  (__const char *__name, int __type)    ;








/* Values for the WHENCE argument to lseek.  */
/* <stdio.h> has the same definitions.  */













/* Move FD's file position to OFFSET bytes from the
   beginning of the file (if WHENCE is SEEK_SET),
   the current position (if WHENCE is SEEK_CUR),
   or the end of the file (if WHENCE is SEEK_END).
   Return the new file position.  */
extern __off_t __lseek  (int __fd, __off_t __offset, int __whence)    ;

extern __off_t lseek  (int __fd, __off_t __offset, int __whence)    ;
# 289 "/usr/include/unistd.h" 3





/* Close the file descriptor FD.  */
extern int __close  (int __fd)    ;
extern int close  (int __fd)    ;

/* Read NBYTES into BUF from FD.  Return the
   number read, -1 for errors or 0 for EOF.  */
extern ssize_t  __read  (int __fd, void *  __buf, size_t __nbytes)    ;
extern ssize_t  read  (int __fd, void *  __buf, size_t __nbytes)    ;

/* Write N bytes of BUF to FD.  Return the number written, or -1.  */
extern ssize_t  __write  (int __fd, __const void *  __buf, size_t __n)    ;
extern ssize_t  write  (int __fd, __const void *  __buf, size_t __n)    ;

# 343 "/usr/include/unistd.h" 3


/* Create a one-way communication channel (pipe).
   If successful, two file descriptors are stored in PIPEDES;
   bytes written on PIPEDES[1] can be read from PIPEDES[0].
   Returns 0 if successful, -1 if not.  */
extern int pipe  (int __pipedes[2])    ;

/* Schedule an alarm.  In SECONDS seconds, the process will get a SIGALRM.
   If SECONDS is zero, any currently scheduled alarm will be cancelled.
   The function returns the number of seconds remaining until the last
   alarm scheduled would have signaled, or zero if there wasn't one.
   There is no return value to indicate an error, but you can set `errno'
   to 0 and check its value after calling `alarm', and this might tell you.
   The signal may come late due to processor scheduling.  */
extern unsigned int alarm  (unsigned int __seconds)    ;

/* Make the process sleep for SECONDS seconds, or until a signal arrives
   and is not ignored.  The function returns the number of seconds less
   than SECONDS which it actually slept (thus zero if it slept the full time).
   If a signal handler does a `longjmp' or modifies the handling of the
   SIGALRM signal while inside `sleep' call, the handling of the SIGALRM
   signal afterwards is undefined.  There is no return value to indicate
   error, but if `sleep' returns SECONDS, it probably didn't work.  */
extern unsigned int sleep  (unsigned int __seconds)    ;

# 380 "/usr/include/unistd.h" 3



/* Suspend the process until a signal arrives.
   This always returns -1 and sets `errno' to EINTR.  */
extern int pause  (void)    ;


/* Change the owner and group of FILE.  */
extern int chown  (__const char *__file, __uid_t __owner,
		       __gid_t __group)    ;

/* Use BSD || X/Open Unix.  */
# 402 "/usr/include/unistd.h" 3


/* Change the process's working directory to PATH.  */
extern int chdir  (__const char *__path)    ;






/* Get the pathname of the current working directory,
   and put it in SIZE bytes of BUF.  Returns NULL if the
   directory couldn't be determined or SIZE was too small.
   If successful, returns BUF.  In GNU, if BUF is NULL,
   an array is allocated with `malloc'; the array is SIZE
   bytes long, unless SIZE == 0, in which case it is as
   big as necessary.  */
extern char *getcwd  (char *__buf, size_t __size)    ;
















/* Duplicate FD, returning a new file descriptor on the same file.  */
extern int dup  (int __fd)    ;

/* Duplicate FD to FD2, closing FD2 and making it open on the same file.  */
extern int dup2  (int __fd, int __fd2)    ;

/* NULL-terminated array of "NAME=VALUE" environment variables.  */
extern char **__environ;





/* Replace the current process, executing PATH with arguments ARGV and
   environment ENVP.  ARGV and ENVP are terminated by NULL pointers.  */
extern int execve  (__const char *__path, char *__const __argv[],
			char *__const __envp[])    ;










/* Execute PATH with arguments ARGV and environment from `environ'.  */
extern int execv  (__const char *__path, char *__const __argv[])    ;

/* Execute PATH with all arguments after PATH until a NULL pointer,
   and the argument after that for environment.  */
extern int execle  (__const char *__path, __const char *__arg, ...)    ;

/* Execute PATH with all arguments after PATH until
   a NULL pointer and environment from `environ'.  */
extern int execl  (__const char *__path, __const char *__arg, ...)    ;

/* Execute FILE, searching in the `PATH' environment variable if it contains
   no slashes, with arguments ARGV and environment from `environ'.  */
extern int execvp  (__const char *__file, char *__const __argv[])    ;

/* Execute FILE, searching in the `PATH' environment variable if
   it contains no slashes, with all arguments after FILE until a
   NULL pointer and environment from `environ'.  */
extern int execlp  (__const char *__file, __const char *__arg, ...)    ;








/* Terminate program execution with the low-order 8 bits of STATUS.  */
extern void _exit  (int __status)     __attribute__ ((__noreturn__));


/* Get the `_PC_*' symbols for the NAME argument to `pathconf' and `fpathconf';
   the `_SC_*' symbols for the NAME argument to `sysconf';
   and the `_CS_*' symbols for the NAME argument to `confstr'.  */
# 1 "/usr/include/bits/confname.h" 1 3
/* `sysconf', `pathconf', and `confstr' NAME values.  Generic version.
   Copyright (C) 1993, 1995, 1996, 1997, 1998 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */





/* Values for the NAME argument to `pathconf' and `fpathconf'.  */
enum
  {
    _PC_LINK_MAX,

    _PC_MAX_CANON,

    _PC_MAX_INPUT,

    _PC_NAME_MAX,

    _PC_PATH_MAX,

    _PC_PIPE_BUF,

    _PC_CHOWN_RESTRICTED,

    _PC_NO_TRUNC,

    _PC_VDISABLE,

    _PC_SYNC_IO,

    _PC_ASYNC_IO,

    _PC_PRIO_IO,

    _PC_SOCK_MAXBUF,

    _PC_FILESIZEBITS

  };

/* Values for the argument to `sysconf'.  */
enum
  {
    _SC_ARG_MAX,

    _SC_CHILD_MAX,

    _SC_CLK_TCK,

    _SC_NGROUPS_MAX,

    _SC_OPEN_MAX,

    _SC_STREAM_MAX,

    _SC_TZNAME_MAX,

    _SC_JOB_CONTROL,

    _SC_SAVED_IDS,

    _SC_REALTIME_SIGNALS,

    _SC_PRIORITY_SCHEDULING,

    _SC_TIMERS,

    _SC_ASYNCHRONOUS_IO,

    _SC_PRIORITIZED_IO,

    _SC_SYNCHRONIZED_IO,

    _SC_FSYNC,

    _SC_MAPPED_FILES,

    _SC_MEMLOCK,

    _SC_MEMLOCK_RANGE,

    _SC_MEMORY_PROTECTION,

    _SC_MESSAGE_PASSING,

    _SC_SEMAPHORES,

    _SC_SHARED_MEMORY_OBJECTS,

    _SC_AIO_LISTIO_MAX,

    _SC_AIO_MAX,

    _SC_AIO_PRIO_DELTA_MAX,

    _SC_DELAYTIMER_MAX,

    _SC_MQ_OPEN_MAX,

    _SC_MQ_PRIO_MAX,

    _SC_VERSION,

    _SC_PAGESIZE,


    _SC_RTSIG_MAX,

    _SC_SEM_NSEMS_MAX,

    _SC_SEM_VALUE_MAX,

    _SC_SIGQUEUE_MAX,

    _SC_TIMER_MAX,


    /* Values for the argument to `sysconf'
       corresponding to _POSIX2_* symbols.  */
    _SC_BC_BASE_MAX,

    _SC_BC_DIM_MAX,

    _SC_BC_SCALE_MAX,

    _SC_BC_STRING_MAX,

    _SC_COLL_WEIGHTS_MAX,

    _SC_EQUIV_CLASS_MAX,

    _SC_EXPR_NEST_MAX,

    _SC_LINE_MAX,

    _SC_RE_DUP_MAX,

    _SC_CHARCLASS_NAME_MAX,


    _SC_2_VERSION,

    _SC_2_C_BIND,

    _SC_2_C_DEV,

    _SC_2_FORT_DEV,

    _SC_2_FORT_RUN,

    _SC_2_SW_DEV,

    _SC_2_LOCALEDEF,


    _SC_PII,

    _SC_PII_XTI,

    _SC_PII_SOCKET,

    _SC_PII_INTERNET,

    _SC_PII_OSI,

    _SC_POLL,

    _SC_SELECT,

    _SC_UIO_MAXIOV,

    _SC_PII_INTERNET_STREAM,

    _SC_PII_INTERNET_DGRAM,

    _SC_PII_OSI_COTS,

    _SC_PII_OSI_CLTS,

    _SC_PII_OSI_M,

    _SC_T_IOV_MAX,


    /* Values according to POSIX 1003.1c (POSIX threads).  */
    _SC_THREADS,

    _SC_THREAD_SAFE_FUNCTIONS,

    _SC_GETGR_R_SIZE_MAX,

    _SC_GETPW_R_SIZE_MAX,

    _SC_LOGIN_NAME_MAX,

    _SC_TTY_NAME_MAX,

    _SC_THREAD_DESTRUCTOR_ITERATIONS,

    _SC_THREAD_KEYS_MAX,

    _SC_THREAD_STACK_MIN,

    _SC_THREAD_THREADS_MAX,

    _SC_THREAD_ATTR_STACKADDR,

    _SC_THREAD_ATTR_STACKSIZE,

    _SC_THREAD_PRIORITY_SCHEDULING,

    _SC_THREAD_PRIO_INHERIT,

    _SC_THREAD_PRIO_PROTECT,

    _SC_THREAD_PROCESS_SHARED,


    _SC_NPROCESSORS_CONF,

    _SC_NPROCESSORS_ONLN,

    _SC_PHYS_PAGES,

    _SC_AVPHYS_PAGES,

    _SC_ATEXIT_MAX,

    _SC_PASS_MAX,


    _SC_XOPEN_VERSION,

    _SC_XOPEN_XCU_VERSION,

    _SC_XOPEN_UNIX,

    _SC_XOPEN_CRYPT,

    _SC_XOPEN_ENH_I18N,

    _SC_XOPEN_SHM,


    _SC_2_CHAR_TERM,

    _SC_2_C_VERSION,

    _SC_2_UPE,


    _SC_XOPEN_XPG2,

    _SC_XOPEN_XPG3,

    _SC_XOPEN_XPG4,


    _SC_CHAR_BIT,

    _SC_CHAR_MAX,

    _SC_CHAR_MIN,

    _SC_INT_MAX,

    _SC_INT_MIN,

    _SC_LONG_BIT,

    _SC_WORD_BIT,

    _SC_MB_LEN_MAX,

    _SC_NZERO,

    _SC_SSIZE_MAX,

    _SC_SCHAR_MAX,

    _SC_SCHAR_MIN,

    _SC_SHRT_MAX,

    _SC_SHRT_MIN,

    _SC_UCHAR_MAX,

    _SC_UINT_MAX,

    _SC_ULONG_MAX,

    _SC_USHRT_MAX,


    _SC_NL_ARGMAX,

    _SC_NL_LANGMAX,

    _SC_NL_MSGMAX,

    _SC_NL_NMAX,

    _SC_NL_SETMAX,

    _SC_NL_TEXTMAX,


    _SC_XBS5_ILP32_OFF32,

    _SC_XBS5_ILP32_OFFBIG,

    _SC_XBS5_LP64_OFF64,

    _SC_XBS5_LPBIG_OFFBIG,


    _SC_XOPEN_LEGACY,

    _SC_XOPEN_REALTIME,

    _SC_XOPEN_REALTIME_THREADS

  };

# 408 "/usr/include/bits/confname.h" 3

# 497 "/usr/include/unistd.h" 2 3


/* Get file-specific configuration information about PATH.  */
extern long int pathconf  (__const char *__path, int __name)    ;

/* Get file-specific configuration about descriptor FD.  */
extern long int fpathconf  (int __fd, int __name)    ;

/* Get the value of the system variable NAME.  */
extern long int sysconf  (int __name)    ;







/* Get the process ID of the calling process.  */
extern __pid_t __getpid  (void)    ;
extern __pid_t getpid  (void)    ;

/* Get the process ID of the calling process's parent.  */
extern __pid_t getppid  (void)    ;

/* Get the process group ID of the calling process.
   This function is different on old BSD. */

extern __pid_t getpgrp  (void)    ;








/* Get the process group ID of process PID.  */
extern __pid_t __getpgid  (__pid_t __pid)    ;





/* Set the process group ID of the process matching PID to PGID.
   If PID is zero, the current process's process group ID is set.
   If PGID is zero, the process ID of the process is used.  */
extern int __setpgid  (__pid_t __pid, __pid_t __pgid)    ;
extern int setpgid  (__pid_t __pid, __pid_t __pgid)    ;

/* Use SVID or BSD.  */
# 574 "/usr/include/unistd.h" 3


/* Create a new session with the calling process as its leader.
   The process group IDs of the session and the calling process
   are set to the process ID of the calling process, which is returned.  */
extern __pid_t setsid  (void)    ;






/* Get the real user ID of the calling process.  */
extern __uid_t getuid  (void)    ;

/* Get the effective user ID of the calling process.  */
extern __uid_t geteuid  (void)    ;

/* Get the real group ID of the calling process.  */
extern __gid_t getgid  (void)    ;

/* Get the effective group ID of the calling process.  */
extern __gid_t getegid  (void)    ;

/* If SIZE is zero, return the number of supplementary groups
   the calling process is in.  Otherwise, fill in the group IDs
   of its supplementary groups in LIST and return the number written.  */
extern int getgroups  (int __size, __gid_t __list[])    ;






/* Set the user ID of the calling process to UID.
   If the calling process is the super-user, set the real
   and effective user IDs, and the saved set-user-ID to UID;
   if not, the effective user ID is set to UID.  */
extern int setuid  (__uid_t __uid)    ;







/* Use BSD.  */




/* Set the group ID of the calling process to GID.
   If the calling process is the super-user, set the real
   and effective group IDs, and the saved set-group-ID to GID;
   if not, the effective group ID is set to GID.  */
extern int setgid  (__gid_t __gid)    ;







/* Use BSD.  */





/* Clone the calling process, creating an exact copy.
   Return -1 for errors, 0 to the new process,
   and the process ID of the new process to the old process.  */
extern __pid_t __fork  (void)    ;
extern __pid_t fork  (void)    ;

/* Use BSD. */








/* Return the pathname of the terminal FD is open on, or NULL on errors.
   The returned storage is good only until the next call to this function.  */
extern char *ttyname  (int __fd)    ;

/* Store at most BUFLEN characters of the pathname of the terminal FD is
   open on in BUF.  Return 0 on success, otherwise an error number.  */
extern int ttyname_r  (int __fd, char *__buf, size_t __buflen)    ;

/* Return 1 if FD is a valid descriptor associated
   with a terminal, zero if not.  */
extern int isatty  (int __fd)    ;








/* Make a link to FROM named TO.  */
extern int link  (__const char *__from, __const char *__to)    ;

/* Use BSD.  */
# 688 "/usr/include/unistd.h" 3


/* Remove the link NAME.  */
extern int unlink  (__const char *__name)    ;

/* Remove the directory PATH.  */
extern int rmdir  (__const char *__path)    ;


/* Return the foreground process group ID of FD.  */
extern __pid_t tcgetpgrp  (int __fd)    ;

/* Set the foreground process group ID of FD set PGRP_ID.  */
extern int tcsetpgrp  (int __fd, __pid_t __pgrp_id)    ;


/* Return the login name of the user.  */
extern char *getlogin  (void)    ;






















/* Use BSD || X/Open.  */
# 798 "/usr/include/unistd.h" 3



/* Use BSD || X/Open Unix.  */
# 853 "/usr/include/unistd.h" 3



# 871 "/usr/include/unistd.h" 3



/* Use misc.  */
# 887 "/usr/include/unistd.h" 3



/* Use misc and F_LOCK not already defined.  */
# 917 "/usr/include/unistd.h" 3



# 940 "/usr/include/unistd.h" 3


/* Use POSIX199309 */






/* XPG4.2 specifies that prototypes for the encryption functions must
   be defined here.  */
# 968 "/usr/include/unistd.h" 3



/* The Single Unix specification, version 2, demands these prototypes
   to be here.  They are also found in <stdio.h>.  */
# 983 "/usr/include/unistd.h" 3



# 1002 "/usr/include/unistd.h" 3


 

/* unistd.h  */
# 22 "monitor.c" 2

# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/limits.h" 1 3
/* This administrivia gets added to the beginning of limits.h
   if the system has its own version of limits.h.  */

/* We use _GCC_LIMITS_H_ because we want this not to match
   any macros that the system's limits.h uses for its own purposes.  */
/* Terminated in limity.h.  */



/* Use "..." so that we find syslimits.h only in this same directory.  */
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/syslimits.h" 1 3
/* syslimits.h stands for the system's own limits.h file.
   If we can use it ok unmodified, then we install this text.
   If fixincludes fixes it, then the fixed version is installed
   instead of this text.  */

/* tell gcc's limits.h to recurse */
# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/limits.h" 1 3
/* This administrivia gets added to the beginning of limits.h
   if the system has its own version of limits.h.  */

/* We use _GCC_LIMITS_H_ because we want this not to match
   any macros that the system's limits.h uses for its own purposes.  */
/* Terminated in limity.h.  *//* not _GCC_LIMITS_H_ */
# 114 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/limits.h" 3



/* recurse down to the real one */
# 1 "/usr/include/limits.h" 1 3
/* Copyright (C) 1991, 1992, 1996, 1997, 1998 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	ISO C Standard: 4.14/2.2.4.2 Limits of integral types	<limits.h>
 */




















/* Maximum length of any multibyte character in any locale.
   We define this value here since the gcc header does not define
   the correct value.  */



/* If we are not using GNU CC we have to define all the symbols ourself.
   Otherwise use gcc's definitions (see below).  */
/* GCC 2.  */
# 121 "/usr/include/limits.h" 3


/* !_LIBC_LIMITS_H_ */

 /* Get the compiler's limits.h, which defines almost all the ISO constants.

    We put this #include_next outside the double inclusion check because
    it should be possible to include this file more than once and still get
    the definitions from gcc's header.  */




# 117 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/limits.h" 2 3



/* not _GCC_LIMITS_H_ */
# 7 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/syslimits.h" 2 3


# 11 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/limits.h" 2 3





/* _MACH_MACHLIMITS_H_ is used on OSF/1.  */



/* Number of bits in a `char'.  */



/* Maximum length of a multibyte character.  */




/* Minimum and maximum values a `signed char' can hold.  */





/* Maximum value an `unsigned char' can hold.  (Minimum is 0).  */



/* Minimum and maximum values a `char' can hold.  */












/* Minimum and maximum values a `signed short int' can hold.  */

/* For the sake of 16 bit hosts, we may not use -32768 */




/* Maximum value an `unsigned short int' can hold.  (Minimum is 0).  */



/* Minimum and maximum values a `signed int' can hold.  */








/* Maximum value an `unsigned int' can hold.  (Minimum is 0).  */



/* Minimum and maximum values a `signed long int' can hold.
   (Same as `int').  */





/* __alpha__ || sparc64 */






/* Maximum value an `unsigned long int' can hold.  (Minimum is 0).  */



# 107 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/limits.h" 3


/* _MACH_MACHLIMITS_H_ */
/* _LIMITS_H___ */
/* This administrivia gets added to the end of limits.h
   if the system has its own version of limits.h.  */

/* not _GCC_LIMITS_H_ *//* not _GCC_LIMITS_H_ */






# 23 "monitor.c" 2

# 1 "/usr/include/fcntl.h" 1 3
/* Copyright (C) 1991, 92, 94, 95, 96, 97, 98 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	POSIX Standard: 6.5 File Control Operations	<fcntl.h>
 */






/* This must be early so <bits/fcntl.h> can define types winningly.  */
 

/* Get the definitions of O_*, F_*, FD_*: all the
   numbers and flag bits for `open', `fcntl', et al.  */
# 1 "/usr/include/bits/fcntl.h" 1 3
/* O_*, F_*, FD_* bit values for Linux.
   Copyright (C) 1995, 1996, 1997, 1998 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */






# 1 "/usr/include/sys/types.h" 1 3
/* Copyright (C) 1991,92,94,95,96,97,98,99 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	POSIX Standard: 2.6 Primitive System Data Types	<sys/types.h>
 */






 



# 40 "/usr/include/sys/types.h" 3


typedef __loff_t loff_t;



typedef __ino_t ino_t;










typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;

















typedef __pid_t pid_t;

























# 1 "/usr/include/time.h" 1 3
/* Copyright (C) 1991,92,93,94,95,96,97,98,99 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	ISO C Standard: 4.12 DATE and TIME	<time.h>
 */












/* <time.h> included.  */
# 51 "/usr/include/time.h" 3



/* clock_t not defined and <time.h> or need clock_t.  */
# 62 "/usr/include/time.h" 3








/* Returned by `time'.  */
typedef __time_t time_t;

/* time_t not defined and <time.h> or need time_t.  */



/* timespec not defined and <time.h> or need timespec.  */
# 89 "/usr/include/time.h" 3




/* <time.h> included.  */
# 279 "/usr/include/time.h" 3


/* <time.h> not already included.  */
# 121 "/usr/include/sys/types.h" 2 3



# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 1 3






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 19 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3



/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_ */
/* defined(_ANSI_H_) || defined(_MACHINE_ANSI_H_) */
# 61 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */













/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE__TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_ptrdiff_t.  */
# 131 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */

/* BeOS *//* __size_t__ */
# 188 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* _STDDEF_H or __need_size_t.  */


/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_wchar_t.  */
# 271 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


# 283 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 requires the MACHINE_ANSI_H check here.  FreeBSD 2.x apparently
    does not, even though there is a check for MACHINE_ANSI_H above.  */
/* _ANSI_H_ || ( __bsdi__ && _MACHINE_ANSI_H_ ) */
# 317 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* __sys_stdtypes_h */

/* A null pointer constant.  */

/* NULL not defined and <stddef.h> or need NULL.  */









/* _STDDEF_H was defined this time */







/* !_STDDEF_H && !_STDDEF_H_ && !_ANSI_STDDEF_H && !__STDDEF_H__
	  || __need_XXX was not defined before */
# 124 "/usr/include/sys/types.h" 2 3









/* These size-specific names are used by some of the inet code.  */

# 158 "/usr/include/sys/types.h" 3


/* For GCC 2.7 and later, we can use specific type-size attributes.  */







typedef int int8_t __attribute__ ((__mode__ (  __QI__ ))) ;
typedef int int16_t __attribute__ ((__mode__ (  __HI__ ))) ;
typedef int int32_t __attribute__ ((__mode__ (  __SI__ ))) ;
typedef int int64_t __attribute__ ((__mode__ (  __DI__ ))) ;


typedef unsigned int u_int8_t __attribute__ ((__mode__ (  __QI__ ))) ;
typedef unsigned int u_int16_t __attribute__ ((__mode__ (  __HI__ ))) ;
typedef unsigned int u_int32_t __attribute__ ((__mode__ (  __SI__ ))) ;
typedef unsigned int u_int64_t __attribute__ ((__mode__ (  __DI__ ))) ;

typedef int register_t __attribute__ ((__mode__ (__word__)));


/* Some code from BIND tests this macro to see if the types above are
   defined.  */




/* Use BSD.  */
# 197 "/usr/include/sys/types.h" 3



/* Types from the Large File Support interface.  */

typedef __blkcnt_t blkcnt_t;	 /* Type to count number of disk blocks.  */
typedef __fsblkcnt_t fsblkcnt_t; /* Type to count file system blocks.  */
typedef __fsfilcnt_t fsfilcnt_t; /* Type to count file system inodes.  */












 

/* sys/types.h */
# 25 "/usr/include/bits/fcntl.h" 2 3


/* open/fcntl - O_SYNC is only implemented on blocks devices and on files
   located on an ext2 file system */




/* not fcntl */
/* not fcntl */
/* not fcntl */
/* not fcntl */













/* For now Linux has synchronisity options for data and read operations.
   We define the symbols here but let them do the same as O_SYNC since
   this is a superset.  */









/* Values for the second argument to `fcntl'.  */
/* Duplicate file descriptor.  */
/* Get file descriptor flags.  */
/* Set file descriptor flags.  */
/* Get file status flags.  */
/* Set file status flags.  */
/* Get record locking info.  */
/* Set record locking info (non-blocking).  */
/* Set record locking info (blocking).  */

/* XXX missing */
/* Get record locking info.  */
/* Set record locking info (non-blocking).  */
/* Set record locking info (blocking).  */











/* For F_[GET|SET]FL.  */
/* actually anything with low bit set goes */

/* For posix fcntl() and `l_type' field of a `struct flock' for lockf().  */
/* Read lock.  */
/* Write lock.  */
/* Remove lock.  */

/* for old implementation of bsd flock () */
/* or 3 */
/* or 4 */










struct flock
  {
    short int l_type;	/* Type of lock: F_RDLCK, F_WRLCK, or F_UNLCK.  */
    short int l_whence;	/* Where `l_start' is relative to (like `lseek').  */

    __off_t l_start;	/* Offset where the lock begins.  */
    __off_t l_len;	/* Size of the locked area; zero means until EOF.  */




    __pid_t l_pid;	/* Process holding the lock.  */
  };

# 131 "/usr/include/bits/fcntl.h" 3


/* Define some more compatibility macros to be backward compatible with
   BSD systems which did not managed to hide these kernel macros.  */
/* Use BSD.  */






# 33 "/usr/include/fcntl.h" 2 3


/* For XPG all symbols from <sys/stat.h> should also be available.  */




/* Use misc.  */
# 49 "/usr/include/fcntl.h" 3


/* XPG wants the following symbols.  */
/* <stdio.h> has the same definitions.  *//* XPG */





/* Do the file control operation described by CMD on FD.
   The remaining arguments are interpreted depending on CMD.  */
extern int __fcntl  (int __fd, int __cmd, ...)    ;
extern int fcntl  (int __fd, int __cmd, ...)    ;

/* Open FILE and return a new file descriptor for it, or -1 on error.
   OFLAG determines the type of access used.  If O_CREAT is on OFLAG,
   the third argument is taken as a `mode_t', the mode of the created file.  */
extern int __open  (__const char *__file, int __oflag, ...)    ;

extern int open  (__const char *__file, int __oflag, ...)    ;












/* Create and open FILE, with mode MODE.
   This takes an `int' MODE argument because that is
   what `mode_t' will be widened to.  */

extern int creat  (__const char *__file, __mode_t __mode)    ;












# 126 "/usr/include/fcntl.h" 3


 

/* fcntl.h  */
# 24 "monitor.c" 2

# 1 "/usr/include/termios.h" 1 3
/* Copyright (C) 1991, 92, 93, 94, 96, 97, 98 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	POSIX Standard: 7.1-2 General Terminal Interface	<termios.h>
 */














 

/* Get the system-dependent definitions of `struct termios', `tcflag_t',
   `cc_t', `speed_t', and all the macros specifying the flag bits.  */
# 1 "/usr/include/bits/termios.h" 1 3
/* termios type and macro definitions.  Linux version.
   Copyright (C) 1993, 94, 95, 96, 97, 98, 99 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */





typedef unsigned char	cc_t;
typedef unsigned int	speed_t;
typedef unsigned int	tcflag_t;


struct termios
  {
    tcflag_t c_iflag;		/* input mode flags */
    tcflag_t c_oflag;		/* output mode flags */
    tcflag_t c_cflag;		/* control mode flags */
    tcflag_t c_lflag;		/* local mode flags */
    cc_t c_line;			/* line discipline */
    cc_t c_cc[32 ];		/* control characters */
    speed_t c_ispeed;		/* input speed */
    speed_t c_ospeed;		/* output speed */
  };

/* c_cc characters */


















/* c_iflag bits */















/* c_oflag bits */








# 105 "/usr/include/bits/termios.h" 3










/* c_cflag bit meaning */



/* hang up */





















































/* c_lflag bits */




















/* tcflow() and TCXONC use these */





/* tcflush() and TCFLSH use these */




/* tcsetattr uses these */





/* Hurd ioctl type field.  */

# 40 "/usr/include/termios.h" 2 3








/* Return the output baud rate stored in *TERMIOS_P.  */
extern speed_t cfgetospeed  (__const struct termios *__termios_p)    ;

/* Return the input baud rate stored in *TERMIOS_P.  */
extern speed_t cfgetispeed  (__const struct termios *__termios_p)    ;

/* Set the output baud rate stored in *TERMIOS_P to SPEED.  */
extern int cfsetospeed  (struct termios *__termios_p, speed_t __speed)    ;

/* Set the input baud rate stored in *TERMIOS_P to SPEED.  */
extern int cfsetispeed  (struct termios *__termios_p, speed_t __speed)    ;







/* Put the state of FD into *TERMIOS_P.  */
extern int tcgetattr  (int __fd, struct termios *__termios_p)    ;

/* Set the state of FD to *TERMIOS_P.
   Values for OPTIONAL_ACTIONS (TCSA*) are in <bits/termios.h>.  */
extern int tcsetattr  (int __fd, int __optional_actions,
			   __const struct termios *__termios_p)    ;







/* Send zero bits on FD.  */
extern int tcsendbreak  (int __fd, int __duration)    ;

/* Wait for pending output to be written on FD.  */
extern int tcdrain  (int __fd)    ;

/* Flush pending data on FD.
   Values for QUEUE_SELECTOR (TC{I,O,IO}FLUSH) are in <bits/termios.h>.  */
extern int tcflush  (int __fd, int __queue_selector)    ;

/* Suspend or restart transmission on FD.
   Values for ACTION (TC[IO]{OFF,ON}) are in <bits/termios.h>.  */
extern int tcflow  (int __fd, int __action)    ;












 

/* termios.h  */
# 25 "monitor.c" 2

# 1 "/usr/include/ctype.h" 1 3
/* Copyright (C) 1991,92,93,95,96,97,98,99 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	ISO C Standard 4.3: CHARACTER HANDLING	<ctype.h>
 */







 


/* These are all the characteristics of characters.
   If there get to be more than 16 distinct characteristics,
   many things must be changed that use `unsigned short int's.

   The characteristics are stored always in network byte order (big
   endian).  We define the bit value interpretations here dependent on the
   machine's byte order.  */

# 1 "/usr/include/endian.h" 1 3
/* Copyright (C) 1992, 1996, 1997 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */






/* Definitions for byte order, according to significance of bytes, from low
   addresses to high addresses.  The value is what you get by putting '4'
   in the most significant byte, '3' in the second most significant byte,
   '2' in the second least significant byte, and '1' in the least
   significant byte.  */





/* This file defines `__BYTE_ORDER' for the particular machine.  */
# 1 "/usr/include/bits/endian.h" 1 3
/* i386 is little-endian.  */






# 35 "/usr/include/endian.h" 2 3


/* Some machines may need to use a different endianness for floating point
   values.  */











/* endian.h */
# 40 "/usr/include/ctype.h" 2 3

/* __BYTE_ORDER == __LITTLE_ENDIAN */





enum
{
  _ISupper = (( 0 ) < 8 ? ((1 << ( 0 )) << 8) : ((1 << ( 0 )) >> 8)) ,	/* UPPERCASE.  */
  _ISlower = (( 1 ) < 8 ? ((1 << ( 1 )) << 8) : ((1 << ( 1 )) >> 8)) ,	/* lowercase.  */
  _ISalpha = (( 2 ) < 8 ? ((1 << ( 2 )) << 8) : ((1 << ( 2 )) >> 8)) ,	/* Alphabetic.  */
  _ISdigit = (( 3 ) < 8 ? ((1 << ( 3 )) << 8) : ((1 << ( 3 )) >> 8)) ,	/* Numeric.  */
  _ISxdigit = (( 4 ) < 8 ? ((1 << ( 4 )) << 8) : ((1 << ( 4 )) >> 8)) ,	/* Hexadecimal numeric.  */
  _ISspace = (( 5 ) < 8 ? ((1 << ( 5 )) << 8) : ((1 << ( 5 )) >> 8)) ,	/* Whitespace.  */
  _ISprint = (( 6 ) < 8 ? ((1 << ( 6 )) << 8) : ((1 << ( 6 )) >> 8)) ,	/* Printing.  */
  _ISgraph = (( 7 ) < 8 ? ((1 << ( 7 )) << 8) : ((1 << ( 7 )) >> 8)) ,	/* Graphical.  */
  _ISblank = (( 8 ) < 8 ? ((1 << ( 8 )) << 8) : ((1 << ( 8 )) >> 8)) ,	/* Blank (usually SPC and TAB).  */
  _IScntrl = (( 9 ) < 8 ? ((1 << ( 9 )) << 8) : ((1 << ( 9 )) >> 8)) ,	/* Control character.  */
  _ISpunct = (( 10 ) < 8 ? ((1 << ( 10 )) << 8) : ((1 << ( 10 )) >> 8)) ,	/* Punctuation.  */
  _ISalnum = (( 11 ) < 8 ? ((1 << ( 11 )) << 8) : ((1 << ( 11 )) >> 8)) 	/* Alphanumeric.  */
};
/* ! _ISbit  */

/* These are defined in ctype-info.c.
   The declarations here must match those in localeinfo.h.

   These point into arrays of 384, so they can be indexed by any `unsigned
   char' value [0,255]; by EOF (-1); or by any `signed char' value
   [-128,-1).  ISO C requires that the ctype functions work for `unsigned
   char' values and for EOF; we also support negative `signed char' values
   for broken old programs.  The case conversion arrays are of `int's
   rather than `unsigned char's because tolower (EOF) must be EOF, which
   doesn't fit into an `unsigned char'.  But today more important is that
   the arrays are also used for multi-byte character sets.  */
extern __const unsigned short int *__ctype_b;	/* Characteristics.  */
extern __const __int32_t *__ctype_tolower; /* Case conversions.  */
extern __const __int32_t *__ctype_toupper; /* Case conversions.  */




/* If C is a 7 bit value.  */
/* Mask off high bits.  */



/* The following names are all functions:
     int isCHARACTERISTIC(int c);
   which return nonzero iff C has CHARACTERISTIC.
   For the meaning of the characteristic names, see the `enum' above.  */
extern int  isalnum   (int)     ;
extern int  isalpha   (int)     ;
extern int  iscntrl   (int)     ;
extern int  isdigit   (int)     ;
extern int  islower   (int)     ;
extern int  isgraph   (int)     ;
extern int  isprint   (int)     ;
extern int  ispunct   (int)     ;
extern int  isspace   (int)     ;
extern int  isupper   (int)     ;
extern int  isxdigit   (int)     ;






/* Return the lowercase version of C.  */
extern int tolower  (int __c)    ;

/* Return the uppercase version of C.  */
extern int toupper  (int __c)    ;


/* Use SVID or use misc.  */
# 125 "/usr/include/ctype.h" 3




























extern __inline int
tolower (int __c)  
{
  return __c >= -128 && __c < 256 ? __ctype_tolower[__c] : __c;
}

extern __inline int
toupper (int __c)  
{
  return __c >= -128 && __c < 256 ? __ctype_toupper[__c] : __c;
}




# 182 "/usr/include/ctype.h" 3



/* Optimizing gcc */









/* Not __NO_CTYPE.  */


/* Use GNU.  */
# 272 "/usr/include/ctype.h" 3


 

/* ctype.h  */
# 26 "monitor.c" 2

# 1 "/usr/include/signal.h" 1 3
/* Copyright (C) 1991,92,93,94,95,96,97,98,99 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	ISO C Standard: 4.7 SIGNAL HANDLING <signal.h>
 */









 

/* __sigset_t, __sig_atomic_t.  */
# 1 "/usr/include/bits/sigset.h" 1 3
/* __sig_atomic_t, __sigset_t, and related definitions.  Linux version.
   Copyright (C) 1991, 1992, 1994, 1996, 1997 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */




typedef int __sig_atomic_t;

/* A `sigset_t' has a bit for each signal.  */


typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int))) ];
  } __sigset_t;




/* We only want to define these functions if <signal.h> was actually
   included; otherwise we were included just to define the types.  Since we
   are namespace-clean, it wouldn't hurt to define extra macros.  But
   trouble can be caused by functions being defined (e.g., any global
   register vars declared later will cause compilation errors).  */








/* Return a mask that includes the bit for SIG only.  */



/* Return the word index for SIG.  */














# 97 "/usr/include/bits/sigset.h" 3



/* These functions needn't check for a bogus signal number -- error
   checking is done in the non __ versions.  */

extern int __sigismember (__const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);











extern __inline  int	 __sigismember  (  __const  __sigset_t *__set, int __sig)	{	unsigned long int __mask = (((unsigned long int) 1) << ((( __sig ) - 1) % (8 * sizeof (unsigned long int)))) ;	unsigned long int __word = ((( __sig ) - 1) / (8 * sizeof (unsigned long int))) ;	return   (__set->__val[__word] & __mask) ? 1 : 0 ;	} 
extern __inline  int	 __sigaddset  (    __sigset_t *__set, int __sig)	{	unsigned long int __mask = (((unsigned long int) 1) << ((( __sig ) - 1) % (8 * sizeof (unsigned long int)))) ;	unsigned long int __word = ((( __sig ) - 1) / (8 * sizeof (unsigned long int))) ;	return   ((__set->__val[__word] |= __mask), 0) ;	} 
extern __inline  int	 __sigdelset  (    __sigset_t *__set, int __sig)	{	unsigned long int __mask = (((unsigned long int) 1) << ((( __sig ) - 1) % (8 * sizeof (unsigned long int)))) ;	unsigned long int __word = ((( __sig ) - 1) / (8 * sizeof (unsigned long int))) ;	return   ((__set->__val[__word] &= ~__mask), 0) ;	} 





/* ! _SIGSET_H_fns.  */
# 33 "/usr/include/signal.h" 2 3


/* An integral type that can be modified atomically, without the
   possibility of a signal arriving in the middle of the operation.  */




typedef __sig_atomic_t sig_atomic_t;














# 1 "/usr/include/bits/signum.h" 1 3
/* Signal number definitions.  Linux version.
   Copyright (C) 1995, 1996, 1997, 1998 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */



/* Fake signal functions.  */
/* Error return.  */
/* Default action.  */
/* Ignore signal.  */






/* Signals.  */
/* Hangup (POSIX).  */
/* Interrupt (ANSI).  */
/* Quit (POSIX).  */
/* Illegal instruction (ANSI).  */
/* Trace trap (POSIX).  */
/* Abort (ANSI).  */
/* IOT trap (4.2 BSD).  */
/* BUS error (4.2 BSD).  */
/* Floating-point exception (ANSI).  */
/* Kill, unblockable (POSIX).  */
/* User-defined signal 1 (POSIX).  */
/* Segmentation violation (ANSI).  */
/* User-defined signal 2 (POSIX).  */
/* Broken pipe (POSIX).  */
/* Alarm clock (POSIX).  */
/* Termination (ANSI).  */
/* Stack fault.  */
/* Same as SIGCHLD (System V).  */
/* Child status has changed (POSIX).  */
/* Continue (POSIX).  */
/* Stop, unblockable (POSIX).  */
/* Keyboard stop (POSIX).  */
/* Background read from tty (POSIX).  */
/* Background write to tty (POSIX).  */
/* Urgent condition on socket (4.2 BSD).  */
/* CPU limit exceeded (4.2 BSD).  */
/* File size limit exceeded (4.2 BSD).  */
/* Virtual alarm clock (4.2 BSD).  */
/* Profiling alarm clock (4.2 BSD).  */
/* Window size change (4.3 BSD, Sun).  */
/* Pollable event occurred (System V).  */
/* I/O now possible (4.2 BSD).  */
/* Power failure restart (System V).  */


/* Biggest signal number + 1
				   (including real-time signals).  */




/* These are the hard limits of the kernel.  These values should not be
   used directly at user level.  */



/* <signal.h> included.  */
# 56 "/usr/include/signal.h" 2 3


/* Unix98 */





/* Type of a signal handler.  */
typedef void (*__sighandler_t)  (int)  ;

/* The X/Open definition of `signal' specifies the SVID semantic.  Use
   the additional function `sysv_signal' when X/Open compatibility is
   requested.  */
extern __sighandler_t __sysv_signal  (int __sig,
					  __sighandler_t __handler)    ;




/* Set the handler for the signal SIG to HANDLER, returning the old
   handler, or SIG_ERR on error.
   By default `signal' has the BSD semantic.  */



/* Make sure the used `signal' implementation is the SVID version. */

extern __sighandler_t  signal   
				   (int __sig, __sighandler_t __handler)      __asm__ (""     "__sysv_signal"    ) ;












/* Send signal SIG to process number PID.  If PID is zero,
   send SIG to all processes in the current process's process group.
   If PID is < -1, send SIG to all processes in process group - PID.  */
/* Use POSIX.  */



/* Use BSD || X/Open Unix.  */






/* Raise signal SIG, i.e., send SIG to yourself.  */
extern int raise  (int __sig)    ;

/* Use SVID.  */





/* Use misc.  */





/* The `sigpause' function has two different interfaces.  The original
   BSD definition defines the argument as a mask of the signal, while
   the more modern interface in X/Open defines it as the signal
   number.  We go with the BSD version unless the user explicitly
   selects the X/Open version.  */
extern int __sigpause  (int __sig_or_mask, int __is_sig)    ;














/* Use BSD.  */
# 164 "/usr/include/signal.h" 3











/* 4.4 BSD uses the name `sig_t' for this.  */




/* Use POSIX.  */
# 259 "/usr/include/signal.h" 3


/*  use BSD.  */
# 299 "/usr/include/signal.h" 3



/* use BSD or X/Open Unix.  */
# 322 "/usr/include/signal.h" 3


/* use Unix98 */
# 342 "/usr/include/signal.h" 3


/* The following functions are used internally in the C library and in
   other code which need deep insights.  */

/* Return number of available real-time signal with highest priority.  */
extern int __libc_current_sigrtmin  (void)    ;
/* Return number of available real-time signal with lowest priority.  */
extern int __libc_current_sigrtmax  (void)    ;

/* signal.h  */

 

/* not signal.h */
# 27 "monitor.c" 2

# 1 "/usr/include/sys/times.h" 1 3
/* Copyright (C) 1991, 1992, 1996, 1998 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	POSIX Standard: 4.5.2 Process Times	<sys/times.h>
 */







# 1 "/usr/include/time.h" 1 3
/* Copyright (C) 1991,92,93,94,95,96,97,98,99 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	ISO C Standard: 4.12 DATE and TIME	<time.h>
 */












/* <time.h> included.  */
# 51 "/usr/include/time.h" 3








/* Returned by `clock'.  */
typedef __clock_t clock_t;

/* clock_t not defined and <time.h> or need clock_t.  */


/* time_t not defined and <time.h> or need time_t.  */
# 73 "/usr/include/time.h" 3




/* timespec not defined and <time.h> or need timespec.  */
# 89 "/usr/include/time.h" 3




/* <time.h> included.  */
# 279 "/usr/include/time.h" 3


/* <time.h> not already included.  */
# 29 "/usr/include/sys/times.h" 2 3



 

/* Structure describing CPU time used by a process and its children.  */
struct tms
  {
    clock_t tms_utime;		/* User CPU time.  */
    clock_t tms_stime;		/* System CPU time.  */

    clock_t tms_cutime;		/* User CPU time of dead children.  */
    clock_t tms_cstime;		/* System CPU time of dead children.  */
  };


/* Store the CPU time used by this process and all its
   dead children (and their dead children) in BUFFER.
   Return the elapsed real time, or (clock_t) -1 for errors.
   All times are in CLK_TCKths of a second.  */
extern clock_t times  (struct tms *__buffer)    ;

 

/* sys/times.h	*/
# 28 "monitor.c" 2


# 1 "/usr/include/sys/stat.h" 1 3
/* Copyright (C) 1991, 92, 95, 96, 97, 98 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	POSIX Standard: 5.6 File Characteristics	<sys/stat.h>
 */






/* For __mode_t and __dev_t.  */

/* X/Open */
# 78 "/usr/include/sys/stat.h" 3


/* Unix98 */






 

# 1 "/usr/include/bits/stat.h" 1 3
/* Copyright (C) 1992, 1995, 1996, 1997, 1998 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */





/* Versions of the `struct stat' data structure.  */




/* The one defined below.  */

/* Versions of the `xmknod' interface.  */


/* The bits defined below.  */


struct stat
  {
    __dev_t st_dev;			/* Device.  */
    unsigned short int __pad1;

    __ino_t st_ino;			/* File serial number.	*/



    __mode_t st_mode;			/* File mode.  */
    __nlink_t st_nlink;			/* Link count.  */
    __uid_t st_uid;			/* User ID of the file's owner.	*/
    __gid_t st_gid;			/* Group ID of the file's group.*/
    __dev_t st_rdev;			/* Device number, if device.  */
    unsigned short int __pad2;

    __off_t st_size;			/* Size of file, in bytes.  */



    unsigned long int st_blksize;	/* Optimal block size for I/O.  */


    __blkcnt_t st_blocks;		/* Number 512-byte blocks allocated. */



    __time_t st_atime;			/* Time of last access.  */
    unsigned long int __unused1;
    __time_t st_mtime;			/* Time of last modification.  */
    unsigned long int __unused2;
    __time_t st_ctime;			/* Time of last status change.  */
    unsigned long int __unused3;
    unsigned long int __unused4;
    unsigned long int __unused5;
  };

# 99 "/usr/include/bits/stat.h" 3


/* Tell code we have these members.  */



/* Encoding of the file mode.  */

/* These bits determine file type.  */

/* File types.  */
/* Directory.  */
/* Character device.  */
/* Block device.  */
/* Regular file.  */
/* FIFO.  */

/* These don't actually exist on System V, but having them doesn't hurt.  */
/* Symbolic link.  */
/* Socket.  */

/* Protection bits.  */

/* Set user ID on execution.  */
/* Set group ID on execution.  */
/* Save swapped text after use (sticky).  */
/* Read by owner.  */
/* Write by owner.  */
/* Execute by owner.  */
# 89 "/usr/include/sys/stat.h" 2 3


# 108 "/usr/include/sys/stat.h" 3


/* Test macros for file types.	*/











# 131 "/usr/include/sys/stat.h" 3



/* Protection bits.  */

/* Set user ID on execution.  */
/* Set group ID on execution.  */






/* Read by owner.  */
/* Write by owner.  */
/* Execute by owner.  */
/* Read, write, and execute by owner.  */








/* Read by group.  */
/* Write by group.  */
/* Execute by group.  */
/* Read, write, and execute by group.  */


/* Read by others.  */
/* Write by others.  */
/* Execute by others.  */
/* Read, write, and execute by others.  */














/* Get file attributes for FILE and put them in BUF.  */
extern int stat  (__const char *__file, struct stat *__buf)    ;

/* Get file attributes for the file, device, pipe, or socket
   that file descriptor FD is open on and put them in BUF.  */
extern int fstat  (int __fd, struct stat *__buf)    ;
# 195 "/usr/include/sys/stat.h" 3






# 217 "/usr/include/sys/stat.h" 3


/* Set file access permissions for FILE to MODE.
   This takes an `int' MODE argument because that
   is what `mode_t's get widened to.  */
extern int chmod  (__const char *__file, __mode_t __mode)    ;

/* Set file access permissions of the file FD is open on to MODE.  */





/* Set the file creation mask of the current process to MASK,
   and return the old creation mask.  */
extern __mode_t umask  (__mode_t __mask)    ;







/* Create a new directory named PATH, with permission bits MODE.  */
extern int mkdir  (__const char *__path, __mode_t __mode)    ;

/* Create a device file named PATH, with permission and special bits MODE
   and device number DEV (which can be constructed from major and minor
   device numbers with the `makedev' macro above).  */






/* Create a new FIFO named PATH, with permission bits MODE.  */
extern int mkfifo  (__const char *__path, __mode_t __mode)    ;

/* To allow the `struct stat' structure and the file type `mode_t'
   bits to vary without changing shared library major version number,
   the `stat' family of functions and `mknod' are in fact inline
   wrappers around calls to `xstat', `fxstat', `lxstat', and `xmknod',
   which all take a leading version-number argument designating the
   data structure and bits used.  <bits/stat.h> defines _STAT_VER with
   the version number corresponding to `struct stat' as defined in
   that file; and _MKNOD_VER with the version number corresponding to
   the S_IF* macros defined therein.  It is arranged that when not
   inlined these function are always statically linked; that way a
   dynamically-linked executable always encodes the version number
   corresponding to the data structures it uses, so the `x' functions
   in the shared library can adapt without needing to recompile all
   callers.  */








/* Wrappers for stat and mknod system calls.  */

extern int __fxstat  (int __ver, int __fildes,
			  struct stat *__stat_buf)    ;
extern int __xstat  (int __ver, __const char *__filename,
			 struct stat *__stat_buf)    ;
extern int __lxstat  (int __ver, __const char *__filename,
			  struct stat *__stat_buf)    ;
# 299 "/usr/include/sys/stat.h" 3










extern int __xmknod  (int __ver, __const char *__path,
			  __mode_t __mode, __dev_t *__dev)    ;


/* Inlined versions of the real stat and mknod functions.  */

extern __inline__ int stat (__const char *__path,
			    struct stat *__statbuf)  
{
  return __xstat (3  , __path, __statbuf);
}









extern __inline__ int fstat (int __fd, struct stat *__statbuf)  
{
  return __fxstat (3  , __fd, __statbuf);
}









# 361 "/usr/include/sys/stat.h" 3




 


/* sys/stat.h  */
# 30 "monitor.c" 2

# 1 "/usr/include/dirent.h" 1 3
/* Copyright (C) 1991,92,93,94,95,96,97,98 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	POSIX Standard: 5.1.2 Directory Operations	<dirent.h>
 */






 



/* This file defines `struct dirent'.

   It defines the macro `_DIRENT_HAVE_D_NAMLEN' iff there is a `d_namlen'
   member that gives the length of `d_name'.

   It defines the macro `_DIRENT_HAVE_D_RECLEN' iff there is a `d_reclen'
   member that gives the size of the entire directory entry.

   It defines the macro `_DIRENT_HAVE_D_OFF' iff there is a `d_off'
   member that gives the file offset of the next directory entry.

   It defines the macro `_DIRENT_HAVE_D_TYPE' iff there is a `d_type'
   member that gives the type of the file.
 */

# 1 "/usr/include/bits/dirent.h" 1 3
/* Copyright (C) 1996, 1997 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */





struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];		/* We must not include limits.h! */
  };

# 46 "/usr/include/bits/dirent.h" 3


/* Backwards compatibility.  */





# 47 "/usr/include/dirent.h" 2 3






/* These macros extract size information from a `struct dirent *'.
   They may evaluate their argument multiple times, so it must not
   have side effects.  Each of these may involve a relatively costly
   call to `strlen' on some systems, so these values should be cached.

   _D_EXACT_NAMLEN (DP)	returns the length of DP->d_name, not including
   its terminating null character.

   _D_ALLOC_NAMLEN (DP)	returns a size at least (_D_EXACT_NAMLEN (DP) + 1);
   that is, the allocation size needed to hold the DP->d_name string.
   Use this macro when you don't need the exact length, just an upper bound.
   This macro is less likely to require calling `strlen' than _D_EXACT_NAMLEN.
   */















# 106 "/usr/include/dirent.h" 3



/* This is the data type of directory stream objects.
   The actual structure is opaque to users.  */
typedef struct __dirstream DIR;

/* Open a directory stream on NAME.
   Return a DIR stream on the directory, or NULL if it could not be opened.  */
extern DIR *opendir  (__const char *__name)    ;

/* Close the directory stream DIRP.
   Return 0 if successful, -1 if not.  */
extern int closedir  (DIR *__dirp)    ;

/* Read a directory entry from DIRP.  Return a pointer to a `struct
   dirent' describing the entry, or NULL for EOF or error.  The
   storage returned may be overwritten by a later readdir call on the
   same DIR stream.

   If the Large File Support API is selected we have to use the
   appropriate interface.  */

extern struct dirent *readdir  (DIR *__dirp)    ;












/* POSIX or misc */
# 165 "/usr/include/dirent.h" 3


/* Rewind DIRP to the beginning of the directory.  */
extern void rewinddir  (DIR *__dirp)    ;

# 178 "/usr/include/dirent.h" 3


/* Use BSD or misc.  */
# 280 "/usr/include/dirent.h" 3


 

/* dirent.h  */
# 31 "monitor.c" 2

# 1 "/usr/include/sys/mman.h" 1 3
/* Definitions for BSD-style memory management.
   Copyright (C) 1994, 1995, 1996, 1997, 1998 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */







# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 1 3






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 19 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3



/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_ */
/* defined(_ANSI_H_) || defined(_MACHINE_ANSI_H_) */
# 61 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */













/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE__TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_ptrdiff_t.  */
# 131 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */

/* BeOS *//* __size_t__ */
# 188 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* _STDDEF_H or __need_size_t.  */


/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_wchar_t.  */
# 271 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


# 283 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 requires the MACHINE_ANSI_H check here.  FreeBSD 2.x apparently
    does not, even though there is a check for MACHINE_ANSI_H above.  */
/* _ANSI_H_ || ( __bsdi__ && _MACHINE_ANSI_H_ ) */
# 317 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* __sys_stdtypes_h */

/* A null pointer constant.  */

/* NULL not defined and <stddef.h> or need NULL.  */









/* _STDDEF_H was defined this time */







/* !_STDDEF_H && !_STDDEF_H_ && !_ANSI_STDDEF_H && !__STDDEF_H__
	  || __need_XXX was not defined before */
# 26 "/usr/include/sys/mman.h" 2 3


# 1 "/usr/include/bits/mman.h" 1 3
/* Definitions for POSIX memory map interface.  Linux/i386 version.
   Copyright (C) 1997 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */





/* The following definitions basically come from the kernel headers.
   But the kernel header is not namespace clean.  */


/* Protections are chosen from these bits, OR'd together.  The
   implementation does not necessarily support PROT_EXEC or PROT_WRITE
   without PROT_READ.  The only guarantees are that no writing will be
   allowed without PROT_WRITE and no access will be allowed for PROT_NONE. */

/* Page can be read.  */
/* Page can be written.  */
/* Page can be executed.  */
/* Page can not be accessed.  */

/* Sharing types (must choose one and only one of these).  */
/* Share changes.  */
/* Changes are private.  */




/* Other flags.  */
/* Interpret addr exactly.  */






/* These are Linux-specific.  */








/* Flags to `msync'.  */
/* Sync memory asynchronously.  */
/* Synchronous memory sync.  */
/* Invalidate the caches.  */

/* Flags for `mlockall'.  */
/* Lock all currently mapped pages.  */
/* Lock all additions to address
					   space.  */

/* Flags for `mremap'.  */



# 28 "/usr/include/sys/mman.h" 2 3


/* Return value of `mmap' in case of an error.  */


 
/* Map addresses starting near ADDR and extending for LEN bytes.  from
   OFFSET into the file FD describes according to PROT and FLAGS.  If ADDR
   is nonzero, it is the desired mapping address.  If the MAP_FIXED bit is
   set in FLAGS, the mapping will be at ADDR exactly (which must be
   page-aligned); otherwise the system chooses a convenient nearby address.
   The return value is the actual mapping address chosen or MAP_FAILED
   for errors (in which case `errno' is set).  A successful `mmap' call
   deallocates any previous mapping for the affected region.  */


extern void *  mmap  (void *  __addr, size_t __len, int __prot,
			  int __flags, int __fd, __off_t __offset)    ;










/* Deallocate any mapping for the region starting at ADDR and extending LEN
   bytes.  Returns 0 if successful, -1 for errors (and sets errno).  */
extern int munmap  (void *  __addr, size_t __len)    ;

/* Change the memory protection of the region starting at ADDR and
   extending LEN bytes to PROT.  Returns 0 if successful, -1 for errors
   (and sets errno).  */
extern int mprotect  (void *  __addr, size_t __len, int __prot)    ;

/* Synchronize the region starting at ADDR and extending LEN bytes with the
   file it maps.  Filesystem operations on a file being mapped are
   unpredictable before this is done.  Flags are from the MS_* set.  */
extern int msync  (void *  __addr, size_t __len, int __flags)    ;







/* Guarantee all whole pages mapped by the range [ADDR,ADDR+LEN) to
   be memory resident.  */
extern int mlock  (__const void *  __addr, size_t __len)    ;

/* Unlock whole pages previously mapped by the range [ADDR,ADDR+LEN).  */
extern int munlock  (__const void *  __addr, size_t __len)    ;

/* Cause all currently mapped pages of the process to be memory resident
   until unlocked by a call to the `munlockall', until the process exits,
   or until the process calls `execve'.  */
extern int mlockall  (int __flags)    ;

/* All currently mapped pages of the process' address space become
   unlocked.  */
extern int munlockall  (void)    ;









 

/* sys/mman.h */
# 32 "monitor.c" 2


# 1 "simz80.h" 1
/* Header file for the instruction set simulator.
   Copyright (C) 1995  Frank D. Cringle.

This file is part of yaze - yet another Z80 emulator.

Yaze is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2 of the License, or (at your
option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA. */

# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/limits.h" 1 3
/* This administrivia gets added to the beginning of limits.h
   if the system has its own version of limits.h.  */

/* We use _GCC_LIMITS_H_ because we want this not to match
   any macros that the system's limits.h uses for its own purposes.  */
/* Terminated in limity.h.  *//* not _GCC_LIMITS_H_ */
# 114 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/limits.h" 3






/* not _GCC_LIMITS_H_ */
# 20 "simz80.h" 2



typedef unsigned char	BYTE;





typedef unsigned short	WORD;




/* FASTREG needs to be at least 16 bits wide and efficient for the
   host architecture */

typedef unsigned int	FASTREG;




/* FASTWORK needs to be wider than 16 bits and efficient for the host
   architecture */

typedef unsigned int	FASTWORK;




/* two sets of accumulator / flags */
extern WORD af[2];
extern int af_sel;

/* two sets of 16-bit registers */
extern struct ddregs {
	WORD bc;
	WORD de;
	WORD hl;
} regs[2];
extern int regs_sel;

extern WORD ir;
extern WORD ix;
extern WORD iy;
extern WORD sp;
extern WORD pc;
extern WORD IFF;




extern BYTE ram[64 *1024];








extern FASTWORK simz80(FASTREG PC);






































/* Define these as macros or functions if you really want to simulate I/O */



# 34 "monitor.c" 2

# 1 "yaze.h" 1
/* Header file for the main program.
   Copyright (C) 1995  Frank D. Cringle.

This file is part of yaze - yet another Z80 emulator.

Yaze is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2 of the License, or (at your
option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA. */





extern WORD	ccp_base;		/* base address of ccp */
extern WORD	bdos_base;		/* base address of bdos */
extern WORD	bios_base;		/* base address of bios */
extern WORD	bios_top;		/* end of bios, start of
					   global work area */

extern WORD	dirbuff;		/* common directory buffer for
					   all disks */
extern WORD	dptable;		/* base of disk parameter
					   headers table */
extern BYTE	*global_alv;		/* global allocation vector */

extern long	z3env;			/* z-system environment (none if z3env==0) */

extern void bios(int func);
extern int  bios_init(const char *initfile);
extern int  docmd(char *cmd);
extern void  monitor(FASTWORK adr);
extern void *xmalloc(size_t size);
extern char *newstr(const char *str);








# 71 "yaze.h"

# 1 "/usr/include/string.h" 1 3
/* Copyright (C) 1991,92,93,95,96,97,98,99 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/*
 *	ISO C Standard: 4.11 STRING HANDLING	<string.h>
 */






 

/* Get size_t and NULL from <stddef.h>.  */


# 1 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 1 3






/* Any one of these symbols __need_* means that GNU libc
   wants us just to define one data type.  So don't define
   the symbols that indicate this file's entire job has been done.  */
# 19 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3



/* This avoids lossage on SunOS but only if stdtypes.h comes first.
   There's no way to win with the other order!  Sun lossage.  */

/* On 4.3bsd-net2, make sure ansi.h is included, so we have
   one less case to deal with in the following.  */




/* In 4.3bsd-net2, machine/ansi.h defines these symbols, which are
   defined if the corresponding type is *not* defined.
   FreeBSD-2.1 defines _MACHINE_ANSI_H_ instead of _ANSI_H_ */
/* defined(_ANSI_H_) || defined(_MACHINE_ANSI_H_) */
# 61 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Sequent's header files use _PTRDIFF_T_ in some conflicting way.
   Just ignore it.  */




/* On VxWorks, <type/vxTypesBase.h> may have defined macros like
   _TYPE_size_t which will typedef size_t.  fixincludes patched the
   vxTypesBase.h so that this macro is only defined if _GCC_SIZE_T is
   not defined, and so that defining this macro defines _GCC_SIZE_T.
   If we find that the macros are still defined at this point, we must
   invoke them so that the type is defined as expected.  */













/* In case nobody has defined these types, but we aren't running under
   GCC 2.00, make sure that __PTRDIFF_TYPE__, __SIZE__TYPE__, and
   __WCHAR_TYPE__ have reasonable values.  This can happen if the
   parts of GCC is compiled by an older compiler, that actually
   include gstddef.h, such as collect2.  */

/* Signed type of difference of two pointers.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_ptrdiff_t.  */
# 131 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* Unsigned type of `sizeof' something.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */

/* BeOS *//* __size_t__ */
# 188 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* _STDDEF_H or __need_size_t.  */


/* Wide character type.
   Locale-writers should change this as necessary to
   be big enough to hold unique values not between 0 and 127,
   and not (wchar_t) -1, for each defined multibyte character.  */

/* Define this type if we are doing the whole job,
   or if we want this type in particular.  */
/* _STDDEF_H or __need_wchar_t.  */
# 271 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


# 283 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/*  In 4.3bsd-net2, leave these undefined to indicate that size_t, etc.
    are already defined.  */
/*  BSD/OS 3.1 requires the MACHINE_ANSI_H check here.  FreeBSD 2.x apparently
    does not, even though there is a check for MACHINE_ANSI_H above.  */
/* _ANSI_H_ || ( __bsdi__ && _MACHINE_ANSI_H_ ) */
# 317 "/usr/lib/gcc-lib/i386-redhat-linux/egcs-2.91.66/include/stddef.h" 3


/* __sys_stdtypes_h */

/* A null pointer constant.  */


/* in case <stdio.h> has defined it. */
/* G++ */



/* G++ */
/* NULL not defined and <stddef.h> or need NULL.  */


/* _STDDEF_H was defined this time */







/* !_STDDEF_H && !_STDDEF_H_ && !_ANSI_STDDEF_H && !__STDDEF_H__
	  || __need_XXX was not defined before */
# 33 "/usr/include/string.h" 2 3



/* Copy N bytes of SRC to DEST.  */
extern void *  memcpy  (void *    __dest,
			    __const void *    __src, size_t __n)    ;
/* Copy N bytes of SRC to DEST, guaranteeing
   correct behavior for overlapping strings.  */
extern void *  memmove  (void *  __dest, __const void *  __src,
			     size_t __n)    ;

/* Copy no more than N bytes of SRC to DEST, stopping when C is found.
   Return the position in DEST one byte past where C was copied,
   or NULL if C was not found in the first N bytes of SRC.  */
/* SVID.  */





/* Set N bytes of S to C.  */
extern void *  memset  (void *  __s, int __c, size_t __n)    ;

/* Compare N bytes of S1 and S2.  */
extern int memcmp  (__const void *  __s1, __const void *  __s2,
			size_t __n)    ;

/* Search N bytes of S for C.  */
extern void *  memchr  (__const void *  __s, int __c, size_t __n)    ;








/* Copy SRC to DEST.  */
extern char *strcpy  (char *   __dest,
			  __const char *   __src)    ;
/* Copy no more than N characters of SRC to DEST.  */
extern char *strncpy  (char *   __dest,
			   __const char *   __src, size_t __n)    ;

/* Append SRC onto DEST.  */
extern char *strcat  (char *   __dest,
			  __const char *   __src)    ;
/* Append no more than N characters from SRC onto DEST.  */
extern char *strncat  (char *   __dest,
			   __const char *   __src, size_t __n)    ;

/* Compare S1 and S2.  */
extern int strcmp  (__const char *__s1, __const char *__s2)    ;
/* Compare N characters of S1 and S2.  */
extern int strncmp  (__const char *__s1, __const char *__s2, size_t __n)    ;

/* Compare the collated forms of S1 and S2.  */
extern int strcoll  (__const char *__s1, __const char *__s2)    ;
/* Put a transformation of SRC into no more than N bytes of DEST.  */
extern size_t strxfrm  (char *   __dest,
			    __const char *   __src, size_t __n)    ;

# 107 "/usr/include/string.h" 3








/* Return a malloc'd copy of at most N bytes of STRING.  The
   resultant string is terminated even if no null terminator
   appears before STRING[N].  */




# 143 "/usr/include/string.h" 3


/* Find the first occurrence of C in S.  */
extern char *strchr  (__const char *__s, int __c)    ;
/* Find the last occurrence of C in S.  */
extern char *strrchr  (__const char *__s, int __c)    ;

/* Return the length of the initial segment of S which
   consists entirely of characters not in REJECT.  */
extern size_t strcspn  (__const char *__s, __const char *__reject)    ;
/* Return the length of the initial segment of S which
   consists entirely of characters in ACCEPT.  */
extern size_t strspn  (__const char *__s, __const char *__accept)    ;
/* Find the first occurrence in S of any character in ACCEPT.  */
extern char *strpbrk  (__const char *__s, __const char *__accept)    ;
/* Find the first occurrence of NEEDLE in HAYSTACK.  */
extern char *strstr  (__const char *__haystack, __const char *__needle)    ;









/* Divide S into tokens separated by characters in DELIM.  */
extern char *strtok  (char *   __s,
			  __const char *   __delim)    ;

/* Divide S into tokens separated by characters in DELIM.  Information
   passed between calls are stored in SAVE_PTR.  */
extern char *__strtok_r  (char *   __s,
			      __const char *   __delim,
			      char **   __save_ptr)    ;






# 197 "/usr/include/string.h" 3



/* Return the length of S.  */
extern size_t strlen  (__const char *__s)    ;








/* Return a string describing the meaning of the `errno' code in ERRNUM.  */
extern char *strerror  (int __errnum)    ;







/* We define this function always since `bzero' is sometimes needed when
   the namespace rules does not allow this.  */
extern void __bzero  (void *  __s, size_t __n)    ;

/* Use BSD or X/Open Unix.  */
# 261 "/usr/include/string.h" 3


# 271 "/usr/include/string.h" 3









# 313 "/usr/include/string.h" 3





/* When using GNU CC we provide some optimized versions of selected
   functions from this header.  There are two kinds of optimizations:

   - machine-dependent optimizations, most probably using inline
     assembler code; these might be quite expensive since the code
     size can increase significantly.
     These optimizations are not used unless the symbol
	__USE_STRING_INLINES
     is defined before including this header.

   - machine-independent optimizations which do not increase the
     code size significantly and which optimize mainly situations
     where one or more arguments are compile-time constants.
     These optimizations are used always when the compiler is
     taught to optimize.

   One can inhibit all optimizations by defining __NO_STRING_INLINES.  */

/* Get the machine-dependent optimizations (if any).  */
# 1 "/usr/include/bits/string.h" 1 3
/* Optimized, inlined string functions.  i386 version.
   Copyright (C) 1997, 1998, 1999 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */





/* The ix86 processors can access unaligned multi-byte variables.  */



/* We only provide optimizations if the user selects them and if
   GNU CC is used.  */
/* use string inlines && GNU CC */
# 782 "/usr/include/bits/string.h" 3

# 337 "/usr/include/string.h" 2 3


/* These are generic optimizations which do not add too much inline code.  */
# 1 "/usr/include/bits/string2.h" 1 3
/* Machine-independant string function optimizations.
   Copyright (C) 1997, 1998, 1999 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Ulrich Drepper <drepper@cygnus.com>, 1997.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public License as
   published by the Free Software Foundation; either version 2 of the
   License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Library General Public
   License along with the GNU C Library; see the file COPYING.LIB.  If not,
   write to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */







/* Unlike the definitions in the header <bits/string.h> the
   definitions contained here are not optimized down to assembler
   level.  Those optimizations are not always a good idea since this
   means the code size increases a lot.  Instead the definitions here
   optimize some functions in a way which do not dramatically
   increase the code size and which do not use assembler.  The main
   trick is to use GNU CC's `__builtin_constant_p' function.

   Every function XXX which has a defined version in
   <bits/string.h> must be accompanied by a symbol _HAVE_STRING_ARCH_XXX
   to make sure we don't get redefinitions.

   We must use here macros instead of inline functions since the
   trick won't work with the later.  */








/* If we can do unaligned memory accesses we must know the endianess.  */












# 71 "/usr/include/bits/string2.h" 3

# 86 "/usr/include/bits/string2.h" 3


/* Dereferencing a pointer arg to run sizeof on it fails for the void
   pointer case, so we use this instead.
   Note that __x is evaluated twice. */



/* Set N bytes of S to C.  */








/* Copy N bytes from SRC to DEST, returning pointer to byte following the
   last copied.  */
# 252 "/usr/include/bits/string2.h" 3



/* Return pointer to C in S.  */

extern void *  __rawmemchr (const void *  __s, int __c);







/* Copy SRC to DEST.  */















extern __inline  char *__strcpy_small (char *, __uint16_t, __uint16_t,
				      __uint32_t, __uint32_t, size_t);
extern __inline  char *
__strcpy_small (char *__dest,
		__uint16_t __src0_2, __uint16_t __src4_2,
		__uint32_t __src0_4, __uint32_t __src4_4,
		size_t __srclen)
{
  switch (__srclen)
    {
    case 1:
      *__dest = '\0';
      break;
    case 2:
      *((__uint16_t *) __dest) = __src0_2;
      break;
    case 3:
      *((__uint16_t *) __dest) = __src0_2;
      *(__dest + 2) = '\0';
      break;
    case 4:
      *((__uint32_t *) __dest) = __src0_4;
      break;
    case 5:
      *((__uint32_t *) __dest) = __src0_4;
      *(__dest + 4) = '\0';
      break;
    case 6:
      *((__uint32_t *) __dest) = __src0_4;
      *((__uint16_t *) (__dest + 4)) = __src4_2;
      break;
    case 7:
      *((__uint32_t *) __dest) = __src0_4;
      *((__uint16_t *) (__dest + 4)) = __src4_2;
      *(__dest + 6) = '\0';
      break;
    case 8:
      *((__uint32_t *) __dest) = __src0_4;
      *((__uint32_t *) (__dest + 4)) = __src4_4;
      break;
    }
  return __dest;
}
# 395 "/usr/include/bits/string2.h" 3




/* Copy SRC to DEST, returning pointer to final NUL byte.  */
# 542 "/usr/include/bits/string2.h" 3



/* Copy no more than N characters of SRC to DEST.  */

# 557 "/usr/include/bits/string2.h" 3











/* Append no more than N characters from SRC onto DEST.  */

# 578 "/usr/include/bits/string2.h" 3











/* Compare characters of S1 and S2.  */


# 611 "/usr/include/bits/string2.h" 3


# 638 "/usr/include/bits/string2.h" 3


# 660 "/usr/include/bits/string2.h" 3


# 685 "/usr/include/bits/string2.h" 3



/* Compare N characters of S1 and S2.  */











/* Return the length of the initial segment of S which
   consists entirely of characters not in REJECT.  */


# 717 "/usr/include/bits/string2.h" 3

extern __inline  size_t __strcspn_c1 (__const char *__s, char __reject);
extern __inline  size_t
__strcspn_c1 (__const char *__s, char __reject)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject)
    ++__result;
  return __result;
}

extern __inline  size_t __strcspn_c2 (__const char *__s, char __reject1,
				     char __reject2);
extern __inline  size_t
__strcspn_c2 (__const char *__s, char __reject1, char __reject2)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
	 && __s[__result] != __reject2)
    ++__result;
  return __result;
}

extern __inline  size_t __strcspn_c3 (__const char *__s, char __reject1,
				     char __reject2, char __reject3);
extern __inline  size_t
__strcspn_c3 (__const char *__s, char __reject1, char __reject2,
	      char __reject3)
{
  register size_t __result = 0;
  while (__s[__result] != '\0' && __s[__result] != __reject1
	 && __s[__result] != __reject2 && __s[__result] != __reject3)
    ++__result;
  return __result;
}



/* Return the length of the initial segment of S which
   consists entirely of characters in ACCEPT.  */


# 772 "/usr/include/bits/string2.h" 3

extern __inline  size_t __strspn_c1 (__const char *__s, char __accept);
extern __inline  size_t
__strspn_c1 (__const char *__s, char __accept)
{
  register size_t __result = 0;
  /* Please note that __accept never can be '\0'.  */
  while (__s[__result] == __accept)
    ++__result;
  return __result;
}

extern __inline  size_t __strspn_c2 (__const char *__s, char __accept1,
				    char __accept2);
extern __inline  size_t
__strspn_c2 (__const char *__s, char __accept1, char __accept2)
{
  register size_t __result = 0;
  /* Please note that __accept1 and __accept2 never can be '\0'.  */
  while (__s[__result] == __accept1 || __s[__result] == __accept2)
    ++__result;
  return __result;
}

extern __inline  size_t __strspn_c3 (__const char *__s, char __accept1,
				    char __accept2, char __accept3);
extern __inline  size_t
__strspn_c3 (__const char *__s, char __accept1, char __accept2, char __accept3)
{
  register size_t __result = 0;
  /* Please note that __accept1 to __accept3 never can be '\0'.  */
  while (__s[__result] == __accept1 || __s[__result] == __accept2
	 || __s[__result] == __accept3)
    ++__result;
  return __result;
}



/* Find the first occurrence in S of any character in ACCEPT.  */


# 827 "/usr/include/bits/string2.h" 3

extern __inline  char *__strpbrk_c2 (__const char *__s, char __accept1,
				     char __accept2);
extern __inline  char *
__strpbrk_c2 (__const char *__s, char __accept1, char __accept2)
{
  /* Please note that __accept1 and __accept2 never can be '\0'.  */
  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2)
    ++__s;
  return *__s == '\0' ? ((void *)0)  : (char *) (size_t) __s;
}

extern __inline  char *__strpbrk_c3 (__const char *__s, char __accept1,
				     char __accept2, char __accept3);
extern __inline  char *
__strpbrk_c3 (__const char *__s, char __accept1, char __accept2,
	      char __accept3)
{
  /* Please note that __accept1 to __accept3 never can be '\0'.  */
  while (*__s != '\0' && *__s != __accept1 && *__s != __accept2
	 && *__s != __accept3)
    ++__s;
  return *__s == '\0' ? ((void *)0)  : (char *) (size_t) __s;
}



/* Find the first occurrence of NEEDLE in HAYSTACK.  */


# 865 "/usr/include/bits/string2.h" 3



# 878 "/usr/include/bits/string2.h" 3












extern __inline  char *__strtok_r_1c (char *__s, char __sep, char **__nextp);
extern __inline  char *
__strtok_r_1c (char *__s, char __sep, char **__nextp)
{
  char *__result;
  if (__s == ((void *)0) )
    __s = *__nextp;
  while (*__s == __sep)
    ++__s;
  if (*__s == '\0')
    __result = ((void *)0) ;
  else
    {
      __result = __s;
      while (*__s != '\0' && *__s != __sep)
	++__s;
      if (*__s == '\0')
	*__nextp = __s;
      else
	{
	  *__s = '\0';
	  *__nextp = __s + 1;
	}
    }
  return __result;
}









# 937 "/usr/include/bits/string2.h" 3

extern __inline  char *__strsep_1c (char **__s, char __reject);
extern __inline  char *
__strsep_1c (char **__s, char __reject)
{
  register char *__retval = *__s;
  if (__retval == ((void *)0) )
    return *__s = ((void *)0) ;
  if (*__retval == __reject)
    *(*__s)++ = '\0';
  else
    if ((*__s = (__extension__ (__builtin_constant_p (  __reject ) && (  __reject ) == '\0'	? (char *) __rawmemchr ( __retval ,   __reject )	: strchr ( __retval ,   __reject ))) ) != ((void *)0) )
      *(*__s)++ = '\0';
    else
      *__s = ((void *)0) ;
  return __retval;
}

extern __inline  char *__strsep_2c (char **__s, char __reject1, char __reject2);
extern __inline  char *
__strsep_2c (char **__s, char __reject1, char __reject2)
{
  register char *__retval = *__s;
  if (__retval == ((void *)0) )
    return *__s = ((void *)0) ;
  if (*__retval == __reject1 || *__retval == __reject2)
    *(*__s)++ = '\0';
  else
    {
      register char *__cp = __retval;
      while (*__cp != '\0' && *__cp != __reject1 && *__cp != __reject2)
	++__cp;
      if (*__cp != '\0')
	{
	  *__s = __cp;
	  *(*__s)++ = '\0';
	}
      else
	*__s = ((void *)0) ;
    }
  return __retval;
}

extern __inline  char *__strsep_3c (char **__s, char __reject1, char __reject2,
				   char __reject3);
extern __inline  char *
__strsep_3c (char **__s, char __reject1, char __reject2, char __reject3)
{
  register char *__retval = *__s;
  if (__retval == ((void *)0) )
    return *__s = ((void *)0) ;
  if (*__retval == __reject1 || *__retval == __reject2
      || *__retval == __reject3)
    *(*__s)++ = '\0';
  else
    {
      register char *__cp = __retval;
      while (*__cp != '\0' && *__cp != __reject1 && *__cp != __reject2
	     && *__cp != __reject3)
	++__cp;
      if (*__cp != '\0')
	{
	  *__s = __cp;
	  *(*__s)++ = '\0';
	}
      else
	*__s = ((void *)0) ;
    }
  return __retval;
}

extern __inline  char *__strsep_g (char **__s, __const char *__reject);
extern __inline  char *
__strsep_g (char **__s, __const char *__reject)
{
  register char *__retval = *__s;
  if (__retval == ((void *)0)  || *__retval == '\0')
    return ((void *)0) ;
  if ((*__s = __extension__	({ char __a0, __a1, __a2;	(__builtin_constant_p (  __reject ) && ((size_t)(const void *)((   __reject  ) + 1) - (size_t)(const void *)(   __reject  ) == 1) 	? ((__a0 = ((__const char  *) (  __reject ))[0], __a0 == '\0')	? ((void *)0) 	: ((__a1 = ((__const char *) (  __reject ))[1], __a1 == '\0')	? (__extension__ (__builtin_constant_p (  __a0 ) && (  __a0 ) == '\0'	? (char *) __rawmemchr (  __retval  ,   __a0 )	: strchr (  __retval  ,   __a0 ))) 	: ((__a2 = ((__const char *) (  __reject ))[2], __a2 == '\0')	? __strpbrk_c2 ( __retval , __a0, __a1)	: (((__const char *) (  __reject ))[3] == '\0'	? __strpbrk_c3 ( __retval , __a0, __a1, __a2)	: strpbrk ( __retval ,   __reject )))))	: strpbrk ( __retval ,   __reject )); }) ) != ((void *)0) )
    *(*__s)++ = '\0';
  return __retval;
}





/* We need the memory allocation functions for inline strdup().
   Referring to stdlib.h (even minimally) is not allowed
   in any of the tight standards compliant modes.  */
/* Use misc. or use GNU.  */
# 1078 "/usr/include/bits/string2.h" 3




/* No string inlines.  */
# 340 "/usr/include/string.h" 2 3




 

/* string.h  */
# 72 "yaze.h" 2



# 35 "monitor.c" 2

# 1 "bios.h" 1
/* Header file for the basic i/o system.
   Copyright (C) 1995  Frank D. Cringle.

This file is part of yaze - yet another Z80 emulator.

Yaze is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free
Software Foundation; either version 2 of the License, or (at your
option) any later version.

This program is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA. */


/* TTY management */
extern struct termios cookedtio, rawtio;


extern int ttyflags;
extern int interrupt;
extern void ttyraw(void), ttycook(void);


/* Table of logical streams */
extern int chn[5];







/* Table of physical streams */






















extern struct sio {
    FILE *fp;
    char *filename;
    char *streamname;
    char tty;
    const char strtype;
} siotab[];


/* Disk management */

/* There are two kinds of simulated disk:
   a unix file containing an image of a cp/m disk and
   a unix directory which is made to look like a cp/m disk on the fly */




extern struct mnt {		/* mount table (simulated drives A..P) */
    WORD flags;
    WORD dph;			/* address of disk parameter header in
				   cp/m ram */
    BYTE *data;			/* disk image */
    char *filename;		/* filename of disk image or unix directory */
    union {
	struct {		/* details of disk image */
	    char *header;	/* header if it's a disk image */
	    size_t isize;	/* size of disk image */
	    int ifd;		/* file descriptor of disk image */
	} image;
	struct {		/* details of unix directory */
	    int nde;		/* number of entries in cp/m directory */
	    int nfds;		/* number of files */
	    struct fdesc {	/* descriptor for each file */
		char *fullname;
		unsigned long firstblock;
		unsigned long lastblock;
		unsigned long serial;	/* unique id to aid caching */
	    } *fds;
	} udir;
    } m;
} mnttab[], *curdisk;







/* We always use a block size of 4k for simulated disks constructed from unix
   directories.  The maximum possible number of cp/m directory entries on such a
   disk is 2032. */




void clearfc(struct mnt *dp);




# 36 "monitor.c" 2


/* TTY management */

struct termios cookedtio, rawtio;
int ttyflags;
int interrupt;

void
ttyraw(void)
{
    if ((ttyflags & (1 | 2 )) == 1 ) {
	tcsetattr(fileno(stdin), 2 , &rawtio);
	ttyflags |= 2 ;
    }
}

void
ttycook(void)
{
    if (ttyflags & 2 ) {
	tcsetattr(fileno(stdin), 2 , &cookedtio);
	_IO_putc ( '\n' ,   stdout ) ;
	ttyflags &= ~2 ;
    }
}


/* memory management routines for disk descriptors
   (we need to allocate chunks of cp/m ram for these) */

/* inefficient but robust bit-wise algorithm (we're not doing this all day) */



static WORD
cpmalloc(WORD len)
{
    WORD p = bios_top;

    while (p < dptable - len)
	if (! (!(global_alv[( p -bios_top) >> 3] &	(0x80 >> (( p -bios_top) & 7)))) )
	    p++;
	else {
	    int i;
	    for (i = 1; i < len; i++)
		if (! (!(global_alv[( p + i -bios_top) >> 3] &	(0x80 >> (( p + i -bios_top) & 7)))) )
		    break;
	    if (i == len) {
		WORD p1 = p - bios_top;
		while (len--) {
		    global_alv[p1>>3] |= (0x80 >> (p1&7));
		    p1++;
		}
		return p;
	    }
	    p += i;
	}
    return 0;
}


static void
cpmfree(WORD adr, WORD len)
{
    WORD p = adr - bios_top;

    while (len--) {
	global_alv[p>>3] &= ~(0x80 >> (p&7));
	p++;
    }
}


/* Disk management */

/* There are two kinds of simulated disk:
   a unix file containing an image of a cp/m disk and
   a unix directory which is made to look like a cp/m disk on the fly */





struct mnt mnttab[16], *curdisk; 	/* mount table (simulated drives A..P) */

/* display a mount table entry */
static void
showdisk(int disk, int verbose)
{
    struct mnt *dp = mnttab + disk;

    printf("%c: ", disk+'A');
    if (!(dp->flags & 1 )) {
	puts("not mounted");
	return;
    }
    printf(dp->flags & 4  ? "%s %s/\n": "%s %s\n",
	   dp->flags & 2  ? "r/o " : "r/w ", dp->filename);
    if (!verbose)
	return;
    printf("  dph=%04X, xlt=%04X, dirbuf=%04X, dpb=%04X, csv=%04X, alv=%04X, spt=%04X\n",
	   dp->dph, (ram[(  dp->dph  )&0xffff]  | (ram[( ( dp->dph )+1 )&0xffff]  << 8)) , (ram[(  dp->dph+8  )&0xffff]  | (ram[( ( dp->dph+8 )+1 )&0xffff]  << 8)) , (ram[(  dp->dph+10  )&0xffff]  | (ram[( ( dp->dph+10 )+1 )&0xffff]  << 8)) ,
	   (ram[(  dp->dph+12  )&0xffff]  | (ram[( ( dp->dph+12 )+1 )&0xffff]  << 8)) , (ram[(  dp->dph+14  )&0xffff]  | (ram[( ( dp->dph+14 )+1 )&0xffff]  << 8)) , (ram[(  dp->dph+16  )&0xffff]  | (ram[( ( dp->dph+16 )+1 )&0xffff]  << 8)) );
    printf("  bsh=%02X, blm=%02X, exm=%02X, dsm=%04X, drm=%04X, al=%04X, cks=%04X, off=%04X\n",
	   ram[(  dp->dph+18  )&0xffff]  , ram[(  dp->dph+19  )&0xffff]  , ram[(  dp->dph+20  )&0xffff]  , (ram[(  dp->dph+21  )&0xffff]  | (ram[( ( dp->dph+21 )+1 )&0xffff]  << 8)) ,
	   (ram[(  dp->dph+23  )&0xffff]  | (ram[( ( dp->dph+23 )+1 )&0xffff]  << 8)) , (ram[(  dp->dph+25  )&0xffff]  | (ram[( ( dp->dph+25 )+1 )&0xffff]  << 8)) , (ram[(  dp->dph+27  )&0xffff]  | (ram[( ( dp->dph+27 )+1 )&0xffff]  << 8)) , (ram[(  dp->dph+29  )&0xffff]  | (ram[( ( dp->dph+29 )+1 )&0xffff]  << 8)) );
}

/* unmount a disk */
static int
umount(int disk)
{
    struct mnt *dp = mnttab + disk;
    WORD xlt;

    if (!(dp->flags & 1 ))
	return 0;
    if (dp->flags & 4 ) {
	int i;
	clearfc(dp);			/* clear the bios's file cache */
	for (i = 0; i < dp-> m.udir.nfds ; i++)
	    free(dp-> m.udir.fds [i].fullname);
	free(dp->data);
	free(dp-> m.udir.fds );
    }
    else if (munmap(dp-> m.image.header , dp-> m.image.isize ) == -1 ||
	     close(dp-> m.image.ifd ) == -1)
	perror(dp->filename);
    dp->flags = 0;
    free(dp->filename);
    if ((xlt = (ram[(  dp->dph  )&0xffff]  | (ram[( ( dp->dph )+1 )&0xffff]  << 8)) ) != 0)
	cpmfree(xlt, (ram[(  dp->dph+16  )&0xffff]  | (ram[( ( dp->dph+16 )+1 )&0xffff]  << 8)) );
    cpmfree((ram[(  dp->dph+14  )&0xffff]  | (ram[( ( dp->dph+14 )+1 )&0xffff]  << 8)) , ((ram[(  dp->dph+16+5  )&0xffff]  | (ram[( ( dp->dph+16+5 )+1 )&0xffff]  << 8))  >> 3) + 1);
    return 0;
}

/* stash a string away on the heap */
char *
newstr(const char *str)
{
	char *p = xmalloc(strlen(str) + 1);
	(void) (__extension__ (__builtin_constant_p (  str )	? (((size_t)(const void *)((   str  ) + 1) - (size_t)(const void *)(   str  ) == 1)  && strlen (  str ) + 1 <= 8	? __strcpy_small ( p , __extension__ (((__const unsigned char *) (__const char *) (    str   ))[  0  + 1] << 8	| ((__const unsigned char *) (__const char *) (    str   ))[  0 ]) ,	__extension__ (((__const unsigned char *) (__const char *) (    str   ))[  4  + 1] << 8	| ((__const unsigned char *) (__const char *) (    str   ))[  4 ]) ,	__extension__ (((((__const unsigned char *) (__const char *) (    str   ))[  0  + 3] << 8 | ((__const unsigned char *) (__const char *) (    str   ))[  0  + 2]) << 8 | ((__const unsigned char *) (__const char *) (    str   ))[  0  + 1]) << 8 | ((__const unsigned char *) (__const char *) (    str   ))[  0 ]) ,	__extension__ (((((__const unsigned char *) (__const char *) (    str   ))[  4  + 3] << 8 | ((__const unsigned char *) (__const char *) (    str   ))[  4  + 2]) << 8 | ((__const unsigned char *) (__const char *) (    str   ))[  4  + 1]) << 8 | ((__const unsigned char *) (__const char *) (    str   ))[  4 ])  ,	strlen (  str ) + 1)	: (char *) memcpy ( p ,   str , strlen (  str ) + 1))	: strcpy ( p ,   str ))) ;
	return p;
}

/* Decide if a unix file is eligible to be included as a cp/m file in a
   simulated disk constructed from a unix directory.  Return the filesize in
   bytes if so, 0 if not. */
static off_t 
cpmsize(const char *dirname, const char *filename, unsigned char *cpmname, char **unixname)
{
    int i, fd;
    const char *p = filename;
    unsigned char *p1 = cpmname;
    struct stat st;
    char *path;

    /* construct cpm filename, rejecting any that dont fit */
    for (i = 0; i < 8; i++) {
	if (*p == 0 || *p == '.')
	    break;
	if (*p <= ' ' || *p >= '{' || (__extension__ (__builtin_constant_p (  *p ) && (  *p ) == '\0'	? (char *) __rawmemchr ( "=_:,;<>" ,   *p )	: strchr ( "=_:,;<>" ,   *p ))) )
	    return 0;
	*p1++ = ({ int __res;	if (sizeof (  *p  ) > 1)	{	if (__builtin_constant_p (  *p  ))	{	int __c = (  *p  );	__res = __c < -128 || __c > 255 ? __c :   __ctype_toupper [__c];	}	else	__res =   toupper  (  *p  );	}	else	__res =   __ctype_toupper [(int) (  *p  )];	__res; })  ;
	p++;
    }
    for (; i < 8; i++)
	*p1++ = ' ';
    if (*p) {
	if (*p == '.')
	    p++;
	else
	    return 0;
    }
    for (; i < 11; i++) {
	if (*p == 0)
	    break;
	if (*p <= ' ' || *p >= '{' || (__extension__ (__builtin_constant_p (  *p ) && (  *p ) == '\0'	? (char *) __rawmemchr ( ".=_:,;<>" ,   *p )	: strchr ( ".=_:,;<>" ,   *p ))) )
	    return 0;
	*p1++ = ({ int __res;	if (sizeof (  *p  ) > 1)	{	if (__builtin_constant_p (  *p  ))	{	int __c = (  *p  );	__res = __c < -128 || __c > 255 ? __c :   __ctype_toupper [__c];	}	else	__res =   toupper  (  *p  );	}	else	__res =   __ctype_toupper [(int) (  *p  )];	__res; })  ;
	p++;
    }
    if (*p)
	return 0;
    for (; i < 11; i++)
	*p1++ = ' ';

    /* construct unix filename */
    path = xmalloc(strlen(dirname) + strlen(filename) + 2);
    sprintf(path, "%s/%s", dirname, filename);

    /* check that file is readable, regular and non-empty */
    if ((fd = open(path, 00 )) < 0) {
	free(path);
	return 0;
    }
    if (fstat(fd, &st) < 0) {
	close(fd);
	free(path);
	return 0;
    }
    close (fd);
    if (((st.st_mode & S_IFMT) != S_IFREG) || st.st_size == 0) {
	free(path);
	return 0;
    }

    *unixname = path;
    return st.st_size;
}

/* mount a unix directory as a simulated cpm disk */
static int
mountdir(struct mnt *dp, const char *filename)
{
    DIR *dirp;
    struct dirent *direntp;
    unsigned char *cpmdir = xmalloc(2032 *32);
    unsigned long blockno = ((( (2032 *32) )-1)/(  4096  )+1) ;
    int direno = 0;
    int nfiles = 0;
    WORD alv;
    static unsigned long serialno = 0;

    dp-> m.udir.fds  = xmalloc(2032 *sizeof(struct fdesc));
    if ((dirp = opendir(filename)) == ((void *)0) ) {
	perror(filename);
	free(cpmdir);
	free(dp-> m.udir.fds );
	return 0;
    }
    while ((direntp = readdir(dirp)) != ((void *)0) ) {
	char *fullname;
	off_t  size;		/* file size in bytes */
	int ndirents;		/* number of directory entries required for file */
	int nlogexts;		/* number of full logical extents occupied by */
				/* file */
	int i;
	unsigned long nblocks;	/* number of blocks occupied by file */
	if ((size = cpmsize(filename, direntp->d_name, cpmdir+32*direno+1,
			    &fullname)) == 0)
	    continue;
	for (i = 0; i < direno; i++)
	    if (memcmp(cpmdir+32*i+1, cpmdir+32*direno+1, 11) == 0) {
		free(fullname);		/* discard case-collapsed duplicates */
		continue;
	    }
	ndirents = ((( size )-1)/(  8* 4096  )+1) ;
	nlogexts = size/(16*1024);
	nblocks = ((( size )-1)/(  4096  )+1) ;
	if ((direno + ndirents > 2032 ) ||
	    ((blockno + nblocks) * 4096  > 0xffff * 128)) {
	    fprintf(stderr, "not all files in %s will fit on disk\n", filename);
	    free(fullname);
	    break;
	}
	dp-> m.udir.fds [nfiles].fullname = fullname;
	dp-> m.udir.fds [nfiles].firstblock = blockno;
	dp-> m.udir.fds [nfiles].lastblock = blockno + nblocks - 1;
	dp-> m.udir.fds [nfiles++].serial = serialno++;
	for (i = 0; i < ndirents; i++) {
	    unsigned char *cp = cpmdir + (direno+i)*32;
	    int ex = nlogexts < 2*i+1 ? nlogexts : 2*i+1;
	    int j;
	    *cp = 0;
	    if (i)
		memcpy(cp+1, cpmdir+direno*32+1, 11);
	    cp[12] = ex & 0x1f;
	    cp[13] = 0;
	    cp[14] = ex >> 5;
	    cp[15] = nblocks <= 8 ?
		((( (size-16*1024*nlogexts) )-1)/(  128 )+1)  : 128;
	    cp += 16;
	    for (j = 0; j < 8; j++) {
		if (nblocks > 0) {
		    *cp++ = blockno;
		    *cp++ = blockno >> 8;
		    ++blockno;
		    --nblocks;
		}
		else {
		    *cp++ = 0;
		    *cp++ = 0;
		}
	    }
	}
	direno += ndirents;
    }
    closedir(dirp);
    if (nfiles == 0) {
	fprintf(stderr, "no suitable files in %s\n", filename);
	free(cpmdir);
	free(dp-> m.udir.fds );
	return 0;
    }
    dp-> m.udir.nde  = direno;
    while (direno & 3) {
	(__extension__ (__builtin_constant_p (  0xe5 ) && (  0xe5 ) == '\0'	? ({ void *__s = ( cpmdir+direno*32 ); __bzero (__s,   32 ); __s; })	: memset ( cpmdir+direno*32 ,   0xe5 ,   32 ))) ;
	++direno;
    }
    dp-> m.udir.nfds  = nfiles;
    dp-> m.udir.fds  = realloc(dp-> m.udir.fds , nfiles*sizeof(struct fdesc));
    dp->data = realloc(cpmdir, direno*32);

    /* set up disk parameter header */
    dp->dph = dptable + (16+15)*(dp-mnttab);
    (void) (__extension__ (__builtin_constant_p ( 0 ) && ( 0 ) == '\0'	? ({ void *__s = (  ram + dp->dph  ); __bzero (__s,    16+15  ); __s; })	: memset (  ram + dp->dph  ,  0 ,    16+15  )))  ;
    do { ram[(  dp->dph+8  )&0xffff]  = (BYTE)(  dirbuff );	ram[( ( dp->dph+8 )+1 )&0xffff]  = (  dirbuff ) >> 8;	} while (0) ;	/* pointer to directory buffer */
    do { ram[(  dp->dph+10  )&0xffff]  = (BYTE)(  dp->dph+16 );	ram[( ( dp->dph+10 )+1 )&0xffff]  = (  dp->dph+16 ) >> 8;	} while (0) ;	/* pointer to dpb  */
    do { ram[(  dp->dph+16  )&0xffff]  = (BYTE)(  256 );	ram[( ( dp->dph+16 )+1 )&0xffff]  = (  256 ) >> 8;	} while (0) ;		/* sectors per track */
    ram[(  dp->dph+18  )&0xffff]  =   5  ;		/* block shift factor */
    ram[(  dp->dph+19  )&0xffff]  =   31  ;		/* block mask */
    ram[(  dp->dph+20  )&0xffff]  =   1  ;		/* extent mask */
    do { ram[(  dp->dph+21  )&0xffff]  = (BYTE)(  blockno > 256 ? blockno-1 : 256 );	ram[( ( dp->dph+21 )+1 )&0xffff]  = (  blockno > 256 ? blockno-1 : 256 ) >> 8;	} while (0) ; /* DSM */
    do { ram[(  dp->dph+23  )&0xffff]  = (BYTE)(  2032 -1 );	ram[( ( dp->dph+23 )+1 )&0xffff]  = (  2032 -1 ) >> 8;	} while (0) ;	/* DRM */
    do { ram[(  dp->dph+25  )&0xffff]  = (BYTE)(  0xffff );	ram[( ( dp->dph+25 )+1 )&0xffff]  = (  0xffff ) >> 8;	} while (0) ;	/* AL0,AL1 */

    alv = cpmalloc(((ram[(  dp->dph+16+5  )&0xffff]  | (ram[( ( dp->dph+16+5 )+1 )&0xffff]  << 8))  >> 3) + 1);
    if (alv == 0) {
	int i;
	fprintf(stderr, "insufficient space to mount %s\n", filename);
	for (i = 0; i < dp-> m.udir.nfds ; i++)
	    free(dp-> m.udir.fds ->fullname);
	free(dp->data);
	free(dp-> m.udir.fds );
	return 0;
    }
    do { ram[(  dp->dph+14  )&0xffff]  = (BYTE)(  alv );	ram[( ( dp->dph+14 )+1 )&0xffff]  = (  alv ) >> 8;	} while (0) ;		/* pointer to allocation vector  */
    dp->filename = newstr(filename);
    dp->flags = 1 | 2 | 4 ;

    return 1;
}

static struct {
    char magic[32];
    char dpb[15];
} sssd = {
    "<CPM_Disk>  Drive x",
    "\x1a\x00\x03\x07\x00\xf2\x00\x3f\x00\xc0\x00\x00\x00\x02\x00"
};

static char *xlt26 =
"\x00\x06\x0c\x12\x18\x04\x0a\x10\x16\x02\x08\x0e\x14"
"\x01\x07\x0d\x13\x19\x05\x0b\x11\x17\x03\x09\x0f\x15";

static int
mount(int disk, const char *filename, int readonly)
{
    struct mnt *dp = mnttab + disk;
    int prot = 0x1 | 0x2 ;
    int doffs;
    WORD alv;
    BYTE buf[128];
    struct stat st;

    if (dp->flags & 1 )
	umount(disk);

    dp->flags = 0;
    if (stat(filename, &st) < 0) {
	perror(filename);
	return 0;
    }

    if ((st.st_mode & S_IFMT) == S_IFDIR)
	return mountdir(dp, filename);

    if ((st.st_mode & S_IFMT) != S_IFREG) {
	fprintf(stderr, "%s is neither a regular file nor a directory\n", filename);
	return 0;
    }

    if (readonly || (dp-> m.image.ifd  = open(filename, 02 )) < 0) {
	prot = 0x1 ;
	dp->flags |= 2 ;
	if ((dp-> m.image.ifd  = open(filename, 00 )) < 0) {
	    perror(filename);
	    return 0;
	}
    }

    /* peek at descriptor page */
    if (read(dp-> m.image.ifd , buf, 128) != 128) {
	perror(filename);
	close(dp-> m.image.ifd );
	return 0;
    }
    if (memcmp(buf, "<CPM_Disk>", 10) != 0) {
	WORD xlt;
	if (st.st_size != 256256) {
	    fprintf(stderr, "%s is not a valid <CPM_Disk> file\n", filename);
	    close(dp-> m.image.ifd );
	    return 0;
	}
	/* assume this is an image of a sssd floppy */
	memcpy(buf, &sssd, sizeof(sssd));
	dp->dph = dptable + (16+15)*disk;
	(void) (__extension__ (__builtin_constant_p ( 0 ) && ( 0 ) == '\0'	? ({ void *__s = (  ram + dp->dph  ); __bzero (__s,    16+15  ); __s; })	: memset (  ram + dp->dph  ,  0 ,    16+15  )))  ;
	xlt = cpmalloc(26);		/* space for sector translation table */
	memcpy(ram+xlt, xlt26, 26);
	do { ram[(  dp->dph  )&0xffff]  = (BYTE)(  xlt );	ram[( ( dp->dph )+1 )&0xffff]  = (  xlt ) >> 8;	} while (0) ;
	doffs = 0;
    }
    else {
	dp->dph = dptable + (16+15)*disk;
	(void) (__extension__ (__builtin_constant_p ( 0 ) && ( 0 ) == '\0'	? ({ void *__s = (  ram + dp->dph  ); __bzero (__s,    16+15  ); __s; })	: memset (  ram + dp->dph  ,  0 ,    16+15  )))  ;
	doffs = 128;
    }
    do { ram[(  dp->dph+8  )&0xffff]  = (BYTE)(  dirbuff );	ram[( ( dp->dph+8 )+1 )&0xffff]  = (  dirbuff ) >> 8;	} while (0) ;	/* pointer to directory buffer */
    do { ram[(  dp->dph+10  )&0xffff]  = (BYTE)(  dp->dph+16 );	ram[( ( dp->dph+10 )+1 )&0xffff]  = (  dp->dph+16 ) >> 8;	} while (0) ;	/* pointer to dpb  */
    memcpy(ram + dp->dph+16, buf + 32, 15); /* copy dpb into cp/m ram */
    do { ram[(  dp->dph+16+11  )&0xffff]  = (BYTE)(  0 );	ram[( ( dp->dph+16+11 )+1 )&0xffff]  = (  0 ) >> 8;	} while (0) ;		/* check vector size = 0 (fixed disk) */

    /* calculate memory requirement */
    /* (((DSM+1)<<BSH) + OFFS*SPT + 1)*128 */
    dp-> m.image.isize  = ((((ram[(  dp->dph+16+5  )&0xffff]  | (ram[( ( dp->dph+16+5 )+1 )&0xffff]  << 8))  + 1) << ram[(  dp->dph+16+2  )&0xffff]  ) +
		(ram[(  dp->dph+16+13  )&0xffff]  | (ram[( ( dp->dph+16+13 )+1 )&0xffff]  << 8))  * (ram[(  dp->dph+16+0  )&0xffff]  | (ram[( ( dp->dph+16+0 )+1 )&0xffff]  << 8))  + 1) * 128;

    alv = cpmalloc(((ram[(  dp->dph+16+5  )&0xffff]  | (ram[( ( dp->dph+16+5 )+1 )&0xffff]  << 8))  >> 3) + 1);
    if (alv == 0) {
	fprintf(stderr, "insufficient space to mount %s\n", filename);
	close(dp-> m.image.ifd );
	return 0;
    }
    do { ram[(  dp->dph+14  )&0xffff]  = (BYTE)(  alv );	ram[( ( dp->dph+14 )+1 )&0xffff]  = (  alv ) >> 8;	} while (0) ;		/* pointer to allocation vector  */









    if ((dp-> m.image.header  = mmap(((void *)0) , dp-> m.image.isize , prot, 0 | 0x01 ,
			   dp-> m.image.ifd , 0)) == (char *)-1) {
	perror(filename);
	close(dp-> m.image.ifd );
	return 0;
    }

    dp->filename = newstr(filename);
    dp->data = (BYTE *) dp-> m.image.header  + doffs;
    dp->flags |= 1 ;
    return 1;
}


static const char *white = " \t";

static int
domount(char *cmd)
{
    int d, v, r;
    char *tok = strtok(((void *)0) , white);

    if ((v = tok && (__extension__	({ size_t __s1_len, __s2_len;	(__builtin_constant_p ( tok ) && __builtin_constant_p (  "-v" )	&& (__s1_len = strlen ( tok ), __s2_len = strlen (  "-v" ),	(! ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1)  || __s1_len >= 4)	&& (! ((size_t)(const void *)((   "-v"  ) + 1) - (size_t)(const void *)(   "-v"  ) == 1)  || __s2_len >= 4))	? memcmp ((__const char *) ( tok ), (__const char *) (  "-v" ),	(__s1_len < __s2_len ? __s1_len : __s2_len) + 1)	: (__builtin_constant_p ( tok ) && ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1) 	&& (__s1_len = strlen ( tok ), __s1_len < 4)	? (__builtin_constant_p (  "-v" ) && ((size_t)(const void *)((   "-v"  ) + 1) - (size_t)(const void *)(   "-v"  ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - ((__const unsigned char *) (__const char *)(    "-v"  ))[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1]	- ((__const unsigned char *)	(__const char *) (    "-v"  ))[1]);	if (  __s1_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[2]	- ((__const unsigned char *)	(__const char *) (    "-v"  ))[2]);	if (  __s1_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[3]	- ((__const unsigned char *)	(__const char *) (    "-v"  ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s2 =	(__const unsigned char *) (__const char *) (    "-v"  );	register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - __s2[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1] - __s2[1]); if (  __s1_len  > 1 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[2] - __s2[2]);	if (  __s1_len  > 2 && __result == 0)	__result = (((__const unsigned char *)	(__const char *)  (  tok  ))[3]	- __s2[3]);	}	}	__result; })) )	: (__builtin_constant_p (  "-v" ) && ((size_t)(const void *)((   "-v"  ) + 1) - (size_t)(const void *)(   "-v"  ) == 1) 	&& (__s2_len = strlen (  "-v" ), __s2_len < 4)	? (__builtin_constant_p ( tok ) && ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - ((__const unsigned char *) (__const char *)(    "-v"  ))[0]);	if (  __s2_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1]	- ((__const unsigned char *)	(__const char *) (    "-v"  ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[2]	- ((__const unsigned char *)	(__const char *) (    "-v"  ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[3]	- ((__const unsigned char *)	(__const char *) (    "-v"  ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s1 =	(__const unsigned char *) (__const char *) (  tok  );	register int __result =	__s1[0] - ((__const unsigned char *)	(__const char *) (    "-v"  ))[0];	if (  __s2_len  > 0 && __result == 0)	{	__result = (__s1[1]	- ((__const unsigned char *)	(__const char *) (    "-v"  ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(__s1[2] - ((__const unsigned char *)	(__const char *) (    "-v"  ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(__s1[3]	- ((__const unsigned char *)	(__const char *) (    "-v"  ))[3]);	}	}	__result; })) )	: strcmp ( tok ,   "-v" )))); })  == 0)))
	tok = strtok(((void *)0) , white);
    if ((r = tok && (__extension__	({ size_t __s1_len, __s2_len;	(__builtin_constant_p ( tok ) && __builtin_constant_p (  "-r" )	&& (__s1_len = strlen ( tok ), __s2_len = strlen (  "-r" ),	(! ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1)  || __s1_len >= 4)	&& (! ((size_t)(const void *)((   "-r"  ) + 1) - (size_t)(const void *)(   "-r"  ) == 1)  || __s2_len >= 4))	? memcmp ((__const char *) ( tok ), (__const char *) (  "-r" ),	(__s1_len < __s2_len ? __s1_len : __s2_len) + 1)	: (__builtin_constant_p ( tok ) && ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1) 	&& (__s1_len = strlen ( tok ), __s1_len < 4)	? (__builtin_constant_p (  "-r" ) && ((size_t)(const void *)((   "-r"  ) + 1) - (size_t)(const void *)(   "-r"  ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - ((__const unsigned char *) (__const char *)(    "-r"  ))[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1]	- ((__const unsigned char *)	(__const char *) (    "-r"  ))[1]);	if (  __s1_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[2]	- ((__const unsigned char *)	(__const char *) (    "-r"  ))[2]);	if (  __s1_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[3]	- ((__const unsigned char *)	(__const char *) (    "-r"  ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s2 =	(__const unsigned char *) (__const char *) (    "-r"  );	register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - __s2[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1] - __s2[1]); if (  __s1_len  > 1 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[2] - __s2[2]);	if (  __s1_len  > 2 && __result == 0)	__result = (((__const unsigned char *)	(__const char *)  (  tok  ))[3]	- __s2[3]);	}	}	__result; })) )	: (__builtin_constant_p (  "-r" ) && ((size_t)(const void *)((   "-r"  ) + 1) - (size_t)(const void *)(   "-r"  ) == 1) 	&& (__s2_len = strlen (  "-r" ), __s2_len < 4)	? (__builtin_constant_p ( tok ) && ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - ((__const unsigned char *) (__const char *)(    "-r"  ))[0]);	if (  __s2_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1]	- ((__const unsigned char *)	(__const char *) (    "-r"  ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[2]	- ((__const unsigned char *)	(__const char *) (    "-r"  ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[3]	- ((__const unsigned char *)	(__const char *) (    "-r"  ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s1 =	(__const unsigned char *) (__const char *) (  tok  );	register int __result =	__s1[0] - ((__const unsigned char *)	(__const char *) (    "-r"  ))[0];	if (  __s2_len  > 0 && __result == 0)	{	__result = (__s1[1]	- ((__const unsigned char *)	(__const char *) (    "-r"  ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(__s1[2] - ((__const unsigned char *)	(__const char *) (    "-r"  ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(__s1[3]	- ((__const unsigned char *)	(__const char *) (    "-r"  ))[3]);	}	}	__result; })) )	: strcmp ( tok ,   "-r" )))); })  == 0)))
	tok = strtok(((void *)0) , white);
    if (tok && !v) {
	d = *tok - 'A';
	if (d < 0 || d > 15)
	    d = *tok - 'a';
	if (d < 0 || d > 15 || tok[1]) {
	    fprintf(stderr, "illegal disk specifier: %s\n", tok);
	    return 0;
	}
	tok = strtok(((void *)0) , white);
	mount(d, tok, r);
    }
    else for (d = 0; d < 16; d++)
	if (mnttab[d].flags & 1 )
	    showdisk(d, v);
    return 0;
}

static int
doumount(char *cmd)
{
    int d;
    char *tok = strtok(((void *)0) , white);

    if (tok) {
	d = *tok - 'a';
	if (d < 0 || d > 15 || tok[1]) {
	    fprintf(stderr, "illegal disk specifier: %s\n", tok);
	    return 0;
	}
	umount(d);
    }
    return 0;
}

struct sio siotab[14 ] = {
{ ((void *)0) , ((void *)0) , "ttyin", 0, 2  },
{ ((void *)0) , ((void *)0) , "ttyout", 0, 3  },
{ ((void *)0) , ((void *)0) , "crtin", 0, 2  },
{ ((void *)0) , ((void *)0) , "crtout", 0, 3  },
{ ((void *)0) , ((void *)0) , "uc1in", 0, 2  },
{ ((void *)0) , ((void *)0) , "uc1out", 0, 3  },
{ ((void *)0) , ((void *)0) , "rdr", 0, 0  },
{ ((void *)0) , ((void *)0) , "ur1", 0, 0  },
{ ((void *)0) , ((void *)0) , "ur2", 0, 0  },
{ ((void *)0) , ((void *)0) , "pun", 0, 1  },
{ ((void *)0) , ((void *)0) , "up1", 0, 1  },
{ ((void *)0) , ((void *)0) , "up2", 0, 1  },
{ ((void *)0) , ((void *)0) , "lpt", 0, 1  },
{ ((void *)0) , ((void *)0) , "ul1", 0, 1  } };


/* Table of logical streams */
int chn[5];

static int
doattach(char *cmd)
{
    int fd, i, opflags;
    struct sio *s;
    char *tok = strtok(((void *)0) , white);

    if (tok) {
	char *p = tok + strlen(tok);
	if (p > tok && *--p == ':')
	    *p = 0;
	for (i = 0; i < 14 ; i++) {
	    s = siotab + i;
	    if ((__extension__ (__builtin_constant_p (  3 )	&& ((__builtin_constant_p ( tok )	&& strlen ( tok ) < ((size_t) (  3 )))	|| (__builtin_constant_p (  s->streamname )	&& strlen (  s->streamname ) < ((size_t) (  3 ))))	? __extension__	({ size_t __s1_len, __s2_len;	(__builtin_constant_p (  tok  ) && __builtin_constant_p (    s->streamname  )	&& (__s1_len = strlen (  tok  ), __s2_len = strlen (    s->streamname  ),	(! ((size_t)(const void *)((   tok   ) + 1) - (size_t)(const void *)(   tok   ) == 1)  || __s1_len >= 4)	&& (! ((size_t)(const void *)((     s->streamname   ) + 1) - (size_t)(const void *)(     s->streamname   ) == 1)  || __s2_len >= 4))	? memcmp ((__const char *) (  tok  ), (__const char *) (    s->streamname  ),	(__s1_len < __s2_len ? __s1_len : __s2_len) + 1)	: (__builtin_constant_p (  tok  ) && ((size_t)(const void *)((   tok   ) + 1) - (size_t)(const void *)(   tok   ) == 1) 	&& (__s1_len = strlen (  tok  ), __s1_len < 4)	? (__builtin_constant_p (    s->streamname  ) && ((size_t)(const void *)((     s->streamname   ) + 1) - (size_t)(const void *)(     s->streamname   ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (   tok   ))[0] - ((__const unsigned char *) (__const char *)(      s->streamname   ))[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[1]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[1]);	if (  __s1_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[2]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[2]);	if (  __s1_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[3]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s2 =	(__const unsigned char *) (__const char *) (      s->streamname   );	register int __result =	(((__const unsigned char *) (__const char *) (   tok   ))[0] - __s2[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[1] - __s2[1]); if (  __s1_len  > 1 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[2] - __s2[2]);	if (  __s1_len  > 2 && __result == 0)	__result = (((__const unsigned char *)	(__const char *)  (   tok   ))[3]	- __s2[3]);	}	}	__result; })) )	: (__builtin_constant_p (    s->streamname  ) && ((size_t)(const void *)((     s->streamname   ) + 1) - (size_t)(const void *)(     s->streamname   ) == 1) 	&& (__s2_len = strlen (    s->streamname  ), __s2_len < 4)	? (__builtin_constant_p (  tok  ) && ((size_t)(const void *)((   tok   ) + 1) - (size_t)(const void *)(   tok   ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (   tok   ))[0] - ((__const unsigned char *) (__const char *)(      s->streamname   ))[0]);	if (  __s2_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[1]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[2]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[3]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s1 =	(__const unsigned char *) (__const char *) (   tok   );	register int __result =	__s1[0] - ((__const unsigned char *)	(__const char *) (      s->streamname   ))[0];	if (  __s2_len  > 0 && __result == 0)	{	__result = (__s1[1]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(__s1[2] - ((__const unsigned char *)	(__const char *) (      s->streamname   ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(__s1[3]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[3]);	}	}	__result; })) )	: strcmp (  tok  ,     s->streamname  )))); })  : strncmp ( tok ,   s->streamname ,   3 )))  == 0)
		break;
	}
	if (i == 14 ) {
	    fprintf(stderr, "stream not recognized: %s\n", tok);
	    return 0;
	}
	if (s->strtype == 2 ) {
	    if (__extension__	({ size_t __s1_len, __s2_len;	(__builtin_constant_p ( tok ) && __builtin_constant_p (  (s+1)->streamname )	&& (__s1_len = strlen ( tok ), __s2_len = strlen (  (s+1)->streamname ),	(! ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1)  || __s1_len >= 4)	&& (! ((size_t)(const void *)((   (s+1)->streamname  ) + 1) - (size_t)(const void *)(   (s+1)->streamname  ) == 1)  || __s2_len >= 4))	? memcmp ((__const char *) ( tok ), (__const char *) (  (s+1)->streamname ),	(__s1_len < __s2_len ? __s1_len : __s2_len) + 1)	: (__builtin_constant_p ( tok ) && ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1) 	&& (__s1_len = strlen ( tok ), __s1_len < 4)	? (__builtin_constant_p (  (s+1)->streamname ) && ((size_t)(const void *)((   (s+1)->streamname  ) + 1) - (size_t)(const void *)(   (s+1)->streamname  ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - ((__const unsigned char *) (__const char *)(    (s+1)->streamname  ))[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1]	- ((__const unsigned char *)	(__const char *) (    (s+1)->streamname  ))[1]);	if (  __s1_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[2]	- ((__const unsigned char *)	(__const char *) (    (s+1)->streamname  ))[2]);	if (  __s1_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[3]	- ((__const unsigned char *)	(__const char *) (    (s+1)->streamname  ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s2 =	(__const unsigned char *) (__const char *) (    (s+1)->streamname  );	register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - __s2[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1] - __s2[1]); if (  __s1_len  > 1 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[2] - __s2[2]);	if (  __s1_len  > 2 && __result == 0)	__result = (((__const unsigned char *)	(__const char *)  (  tok  ))[3]	- __s2[3]);	}	}	__result; })) )	: (__builtin_constant_p (  (s+1)->streamname ) && ((size_t)(const void *)((   (s+1)->streamname  ) + 1) - (size_t)(const void *)(   (s+1)->streamname  ) == 1) 	&& (__s2_len = strlen (  (s+1)->streamname ), __s2_len < 4)	? (__builtin_constant_p ( tok ) && ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - ((__const unsigned char *) (__const char *)(    (s+1)->streamname  ))[0]);	if (  __s2_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1]	- ((__const unsigned char *)	(__const char *) (    (s+1)->streamname  ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[2]	- ((__const unsigned char *)	(__const char *) (    (s+1)->streamname  ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[3]	- ((__const unsigned char *)	(__const char *) (    (s+1)->streamname  ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s1 =	(__const unsigned char *) (__const char *) (  tok  );	register int __result =	__s1[0] - ((__const unsigned char *)	(__const char *) (    (s+1)->streamname  ))[0];	if (  __s2_len  > 0 && __result == 0)	{	__result = (__s1[1]	- ((__const unsigned char *)	(__const char *) (    (s+1)->streamname  ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(__s1[2] - ((__const unsigned char *)	(__const char *) (    (s+1)->streamname  ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(__s1[3]	- ((__const unsigned char *)	(__const char *) (    (s+1)->streamname  ))[3]);	}	}	__result; })) )	: strcmp ( tok ,   (s+1)->streamname )))); })  == 0) {
		s++;
		opflags = 01 | 0100 | 01000 ;
	    }
	    else if (__extension__	({ size_t __s1_len, __s2_len;	(__builtin_constant_p ( tok ) && __builtin_constant_p (  s->streamname )	&& (__s1_len = strlen ( tok ), __s2_len = strlen (  s->streamname ),	(! ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1)  || __s1_len >= 4)	&& (! ((size_t)(const void *)((   s->streamname  ) + 1) - (size_t)(const void *)(   s->streamname  ) == 1)  || __s2_len >= 4))	? memcmp ((__const char *) ( tok ), (__const char *) (  s->streamname ),	(__s1_len < __s2_len ? __s1_len : __s2_len) + 1)	: (__builtin_constant_p ( tok ) && ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1) 	&& (__s1_len = strlen ( tok ), __s1_len < 4)	? (__builtin_constant_p (  s->streamname ) && ((size_t)(const void *)((   s->streamname  ) + 1) - (size_t)(const void *)(   s->streamname  ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - ((__const unsigned char *) (__const char *)(    s->streamname  ))[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1]	- ((__const unsigned char *)	(__const char *) (    s->streamname  ))[1]);	if (  __s1_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[2]	- ((__const unsigned char *)	(__const char *) (    s->streamname  ))[2]);	if (  __s1_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[3]	- ((__const unsigned char *)	(__const char *) (    s->streamname  ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s2 =	(__const unsigned char *) (__const char *) (    s->streamname  );	register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - __s2[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1] - __s2[1]); if (  __s1_len  > 1 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[2] - __s2[2]);	if (  __s1_len  > 2 && __result == 0)	__result = (((__const unsigned char *)	(__const char *)  (  tok  ))[3]	- __s2[3]);	}	}	__result; })) )	: (__builtin_constant_p (  s->streamname ) && ((size_t)(const void *)((   s->streamname  ) + 1) - (size_t)(const void *)(   s->streamname  ) == 1) 	&& (__s2_len = strlen (  s->streamname ), __s2_len < 4)	? (__builtin_constant_p ( tok ) && ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - ((__const unsigned char *) (__const char *)(    s->streamname  ))[0]);	if (  __s2_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1]	- ((__const unsigned char *)	(__const char *) (    s->streamname  ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[2]	- ((__const unsigned char *)	(__const char *) (    s->streamname  ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[3]	- ((__const unsigned char *)	(__const char *) (    s->streamname  ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s1 =	(__const unsigned char *) (__const char *) (  tok  );	register int __result =	__s1[0] - ((__const unsigned char *)	(__const char *) (    s->streamname  ))[0];	if (  __s2_len  > 0 && __result == 0)	{	__result = (__s1[1]	- ((__const unsigned char *)	(__const char *) (    s->streamname  ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(__s1[2] - ((__const unsigned char *)	(__const char *) (    s->streamname  ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(__s1[3]	- ((__const unsigned char *)	(__const char *) (    s->streamname  ))[3]);	}	}	__result; })) )	: strcmp ( tok ,   s->streamname )))); })  == 0)
		opflags = 00 ;
	    else
		opflags = 02 | 0100 ;
	}
	else
	    opflags = s->strtype == 0  ? 00  : 01 | 0100 | 01000 ;
	tok = strtok(((void *)0) , white);
	if (!tok || !*tok) {
	    fputs("need a filename\n", stderr);
	    return 0;
	}
	if (s->fp) {
	    fclose(s->fp);
	    s->fp = ((void *)0) ;
	    free(s->filename);
	}
	if ((fd = open(tok, opflags, 0666)) < 0)
	    perror(tok);
	else {
	    char *mode = "rb";
	    if (opflags & 01 )
		mode = "wb";
	    else if (opflags & 02 )
		mode = "r+b";
	    s->filename = newstr(tok);
	    s->fp = fdopen(fd, mode);
	    s->tty = isatty(fd);
	}
    }
    else for (i = 0; i < 14 ; i++) {
	s = siotab + i;
	if (s->fp)
	    printf("%s:\t%s\n", s->streamname, s->filename);
    }
    return 0;
}

static int
dodetach(char *cmd)
{
    int i;
    struct sio *s;
    char *tok = strtok(((void *)0) , white);

    if (tok) {
	char *p = tok + strlen(tok);
	if (p > tok && *--p == ':')
	    *p = 0;
	for (i = 0; i < 14 ; i++) {
	    s = siotab + i;
	    if ((__extension__ (__builtin_constant_p (  3 )	&& ((__builtin_constant_p ( tok )	&& strlen ( tok ) < ((size_t) (  3 )))	|| (__builtin_constant_p (  s->streamname )	&& strlen (  s->streamname ) < ((size_t) (  3 ))))	? __extension__	({ size_t __s1_len, __s2_len;	(__builtin_constant_p (  tok  ) && __builtin_constant_p (    s->streamname  )	&& (__s1_len = strlen (  tok  ), __s2_len = strlen (    s->streamname  ),	(! ((size_t)(const void *)((   tok   ) + 1) - (size_t)(const void *)(   tok   ) == 1)  || __s1_len >= 4)	&& (! ((size_t)(const void *)((     s->streamname   ) + 1) - (size_t)(const void *)(     s->streamname   ) == 1)  || __s2_len >= 4))	? memcmp ((__const char *) (  tok  ), (__const char *) (    s->streamname  ),	(__s1_len < __s2_len ? __s1_len : __s2_len) + 1)	: (__builtin_constant_p (  tok  ) && ((size_t)(const void *)((   tok   ) + 1) - (size_t)(const void *)(   tok   ) == 1) 	&& (__s1_len = strlen (  tok  ), __s1_len < 4)	? (__builtin_constant_p (    s->streamname  ) && ((size_t)(const void *)((     s->streamname   ) + 1) - (size_t)(const void *)(     s->streamname   ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (   tok   ))[0] - ((__const unsigned char *) (__const char *)(      s->streamname   ))[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[1]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[1]);	if (  __s1_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[2]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[2]);	if (  __s1_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[3]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s2 =	(__const unsigned char *) (__const char *) (      s->streamname   );	register int __result =	(((__const unsigned char *) (__const char *) (   tok   ))[0] - __s2[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[1] - __s2[1]); if (  __s1_len  > 1 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[2] - __s2[2]);	if (  __s1_len  > 2 && __result == 0)	__result = (((__const unsigned char *)	(__const char *)  (   tok   ))[3]	- __s2[3]);	}	}	__result; })) )	: (__builtin_constant_p (    s->streamname  ) && ((size_t)(const void *)((     s->streamname   ) + 1) - (size_t)(const void *)(     s->streamname   ) == 1) 	&& (__s2_len = strlen (    s->streamname  ), __s2_len < 4)	? (__builtin_constant_p (  tok  ) && ((size_t)(const void *)((   tok   ) + 1) - (size_t)(const void *)(   tok   ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (   tok   ))[0] - ((__const unsigned char *) (__const char *)(      s->streamname   ))[0]);	if (  __s2_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[1]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[2]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[3]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s1 =	(__const unsigned char *) (__const char *) (   tok   );	register int __result =	__s1[0] - ((__const unsigned char *)	(__const char *) (      s->streamname   ))[0];	if (  __s2_len  > 0 && __result == 0)	{	__result = (__s1[1]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(__s1[2] - ((__const unsigned char *)	(__const char *) (      s->streamname   ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(__s1[3]	- ((__const unsigned char *)	(__const char *) (      s->streamname   ))[3]);	}	}	__result; })) )	: strcmp (  tok  ,     s->streamname  )))); })  : strncmp ( tok ,   s->streamname ,   3 )))  == 0)
		break;
	}
	if (i == 14 ) {
	    fprintf(stderr, "stream not recognized: %s\n", tok);
	    return 0;
	}
	if (s->fp) {
	    fclose(s->fp);
	    s->fp = ((void *)0) ;
	    free(s->filename);
	}
    }
    return 0;
}


static long
getval(char *s)
{
    char *tok = s+2;

    if (*tok == 0)
	tok = strtok(((void *)0) , white);
    if (tok && *tok) {
	long unit = 1;
	char u = tok[strlen(tok)-1];
	switch (({ int __res;	if (sizeof (  u  ) > 1)	{	if (__builtin_constant_p (  u  ))	{	int __c = (  u  );	__res = __c < -128 || __c > 255 ? __c :   __ctype_toupper [__c];	}	else	__res =   toupper  (  u  );	}	else	__res =   __ctype_toupper [(int) (  u  )];	__res; })  ) {
	case 'K':
	    unit = 1024;
	    break;
	case 'M':
	    unit = 1024*1024;
	    break;
	}
	return unit*strtol(tok, ((void *)0) , 10);
    }
    else {
	fprintf(stderr, "option needs a value: %s\n", s);
	return -1;
    }
}

static void
checkval(int ok, long val, char *msg)
{
    if (!ok)
	fprintf(stderr, "bad %s value: %ld\n", msg, val);
}

/* count ones in a 16-bit value */
static int
popcount(long v)
{
    int total;

    total = ((v>>1) & 0x5555) + (v & 0x5555);
    total = ((total>>2) & 0x3333) + (total & 0x3333);
    total = ((total>>4) & 0x0f0f) + (total & 0x0f0f);
    return (total & 0xff) + (total>>8);
}

static void
makedisk(FILE *f, char *fn, long diroffs, long dirsize, long fullsize)
{
    long n;
    BYTE sector[128];

    (__extension__ (__builtin_constant_p (  0xe5 ) && (  0xe5 ) == '\0'	? ({ void *__s = ( sector ); __bzero (__s,   sizeof sector ); __s; })	: memset ( sector ,   0xe5 ,   sizeof sector ))) ;

    /* skip offset tracks */
    if (fseek(f, diroffs, 1 ) < 0) {
	fclose(f);
	perror(fn);
	return;
    }
    /* write empty directory */
    for (n = 0; n < dirsize; n += sizeof sector)
	if (fwrite(sector, sizeof sector, 1, f) == 0) {
	    fclose(f);
	    perror(fn);
	    return;
	}
    /* seek to end of disk and write last sector to define size */
    if (fseek(f, fullsize - sizeof sector, 0 ) < 0 ||
	fwrite(sector, sizeof sector, 1, f) == 0 ||
	fclose(f) != 0)
	perror(fn);
}

/* create a new CP/M disk */
static int
docreate(char *tok)
{
    char *fn = ((void *)0) ;
    FILE *f;
    long size = 1024*1024;
    char head[128];
    long dsm, spt = -1, bsize = -1, drm = -1, offs = -1;
    int dblocks;
    WORD al01;

    while ((tok = strtok(((void *)0) , white)) != ((void *)0) ) {
	if (*tok == '-')
	    switch (tok[1]) {
	    case 'b':
		bsize = getval(tok);
		break;
	    case 'd':
		drm = getval(tok);
		break;
	    case 'o':
		offs = getval(tok);
		break;
	    case 's':
		spt = getval(tok);
		break;
	    default:
		fprintf(stderr, "unrecognized option: %s\n", tok);
	    }
	else {
	    fn = tok;
	    break;
	}
    }

    if (fn == ((void *)0) ) {
	fputs("need a filename\n", stderr);
	return 0;
    }
    if ((tok = strtok(((void *)0) , white)) != ((void *)0) ) {
	char unit = 'b';
	int n = sscanf(tok, "%ld%c", &size, &unit);
	if (n == 2)
	    switch (({ int __res;	if (sizeof (  unit  ) > 1)	{	if (__builtin_constant_p (  unit  ))	{	int __c = (  unit  );	__res = __c < -128 || __c > 255 ? __c :   __ctype_toupper [__c];	}	else	__res =   toupper  (  unit  );	}	else	__res =   __ctype_toupper [(int) (  unit  )];	__res; })  ) {
	    case 'B':
		break;
	    case 'K':
		size *= 1024;
		break;
	    case 'M':
		size *= 1024*1024;
		break;
	    default:
		fprintf(stderr, "units not recognized: %s\n", tok);
		return 0;
	    }
	else if (n != 1) {
	    fprintf(stderr, "need numeric size: %s\n", tok);
	    return 0;
	}
    }
    if ((f = fopen(fn, "w")) == ((void *)0) ) {
	perror(fn);
	return 0;
    }
    if (size == 256256 && (spt == -1 || spt == 26) &&
	(bsize == -1 || bsize == 1024) &&
	(drm == -1 || drm == 63) &&
	(offs == -1 || offs == 2)) {
	/* raw standard sssd floppy format */
	spt = 26;
	drm = 63;
	offs = 2;
	/* we clear all tracks that might contain directory sectors,
	   thus avoiding messing with the sector translation table */
	makedisk(f, fn, 128*spt*offs, 128*(((drm+4)/4+spt-1)/spt)*spt, size);
	return 0;
    }
    else if (size < 256*1024) {
	if (bsize == -1)
	    bsize = 1024;
	if (drm == -1)
	    drm = 63;
	if (spt == -1)
	    spt = 26;
	if (offs == -1)
	    offs = 0;
    }
    else {
	if (bsize == -1)
	    bsize = 2048;
	if (drm == -1)
	    drm = 1023;
	if (spt == -1)
	    spt = 26;
	if (offs == -1)
	    offs = 0;
    }
    dsm = (size - offs*spt*128)/bsize - 1;
    checkval(spt <= 0xffff, spt, "sectors per track");
    checkval(size/(spt*128)+offs <= 0xffff, size/(spt*128)+offs, "tracks");
    checkval(((bsize&(bsize-1))==0) &&
	     (bsize >= ((dsm < 256) ? 1024 : 2048)) &&
	     bsize <= 16384, bsize, "block size");
    dblocks = ((drm+1)*32+bsize-1)/bsize;
    checkval(dblocks<=16 && dblocks < dsm, drm, "max directory entry");
    (void) (__extension__ (__builtin_constant_p ( 0 ) && ( 0 ) == '\0'	? ({ void *__s = (  head  ); __bzero (__s,    sizeof head  ); __s; })	: memset (  head  ,  0 ,    sizeof head  )))  ;
    sprintf(head, "<CPM_Disk>");
    head[32] = spt;
    head[33] = spt>>8;
    head[34] = popcount(bsize-1)-7;	/* bsh */
    head[35] = (bsize/128-1);		/* blm */
    head[36] = dsm < 256 ? bsize/1024-1 : bsize/2048-1; /* exm */
    head[37] = dsm;
    head[38] = dsm>>8;
    head[39] = drm;
    head[40] = drm>>8;
    al01 = ~((1<<(16-dblocks))-1);
    head[41] = al01>>8;
    head[42] = al01;
    head[45] = offs;
    head[46] = offs>>8;

    if (fwrite(head, sizeof head, 1, f) == 0) {
	fclose(f);
	perror(fn);
	return 0;
    }
    makedisk(f, fn, 128*spt*offs, 128*(drm+4)/4, sizeof head + size);
    return 0;
}

static int
hexdig(char c)
{
    if ('0' <= c && c <= '9')
	return c - '0';
    if ('A' <= c && c <= 'F')
	return c - 'A' + 10;
    if ('a' <= c && c <= 'f')
	return c - 'a' + 10;
    return -1;
}

static int
doint(char *cmd)
{
    int d1, d2;
    char *tok = strtok(((void *)0) , white);

    if (tok) {
	if (strlen(tok) != 2) {
	bad:
	    printf("%s invalid key specifier\n", tok);
	    return 0;
	}
	/* let's face it: this doesn't work if the host character set is not ascii */
	if (tok[0] == '^' && '@' <= tok[1])
	    interrupt = tok[1] & 0x1f;
	else {
	    if ((d1 = hexdig(tok[0])) < 0)
		goto bad;
	    if ((d2 = hexdig(tok[1])) < 0)
		goto bad;
	    interrupt = (d1<<4)+d2;
	}
	rawtio.c_lflag = interrupt ? 0000001  : 0;
	rawtio.c_cc[0 ] = interrupt;
    }
    else {
	fputs("interrupt key is ", stdout);
	if (interrupt == 0)
	    puts("disabled");
	else if (interrupt < 0x20)
	    printf("^%c\n", interrupt+'@');
	else
	    printf("%2x\n", interrupt);
    }
    return 0;
}

static int
dotime(char *cmd)
{
    static clock_t lastreal;
    clock_t now;
    static struct tms lastbuf;
    struct tms tbuf;
    long tickspersec = CLK_TCK;
    extern char *perl_params;

    now = times(&tbuf);

    printf("elapsed=%.3f, user=%.3f, sys=%.3f (%s)\n",
	   ((double)(now-lastreal))/tickspersec,
	   ((double)(tbuf.tms_utime-lastbuf.tms_utime))/tickspersec,
	   ((double)(tbuf.tms_stime-lastbuf.tms_stime))/tickspersec,
	   perl_params);
    lastreal = now;
    lastbuf = tbuf;
    return 0;
}

static int
dogo(char *cmd)
{
    return 1;
}

static int
doshell(char *cmd)
{
    char *shell = getenv("SHELL");





    if (shell == ((void *)0) )
	shell = "/bin/sh";
    if (cmd[1])
	system(cmd+1);
    else
	system(shell);



    return 0;
}

static int
doquit(char *cmd)
{
    exit(0);
}

static int dohelp(char *cmd);

typedef struct {
    char *name;				/* User printable name of the function. */
    int (*func)(char *);		/* Function to call to do the job. */
    char *doc;				/* Short documentation.  */
    char *detail;			/* Long documentation. */
} COMMAND;

static COMMAND commands[] = {
{ "help",   dohelp,   "Display this text or give help about a command",
      "help <cmd>                 displays more information about <cmd>" },
{ "?",      dohelp,   "Synonym for `help'", ((void *)0)  },
{ "attach", doattach, "Attach CP/M device to a unix file",
      "attach                     without arguments lists the current attachments\n"
      "attach <physdev> <file>    attaches <physdev> to the unix <file>,\n"
      "                           where <physdev> is one of ttyin, ttyout,\n"
      "                           crtin, crtout, uc1in, uc1out, rdr,\n"
      "                           ur1, ur2, pun, up1, up2, lpt, ul1" },
{ "detach", dodetach, "Detach CP/M device from file",
      "detach <physdev>           closes the file attached to <physdev>\n"
      "                           (see attach)" },
{ "mount",  domount,  "Mount a unix file or directory as a CP/M disk",
      "mount                      without arguments lists the mount table\n"
      "mount -v                   lists the mount table verbosely\n"
      "mount <drive> <file>       mounts <file> as CP/M disk <drive>\n"
      "                           (a letter from a..p).\n"
      "        If <file> is a plain file it must contain a CP/M filesystem.\n"
      "        If <file> is a unix directory its contents may be accessed\n"
      "           as a read-only CP/M disk\n"
      "mount -r <drive> <file>    mounts the <file> read/only." },
{ "umount", doumount, "Unmount a CP/M disk",
      "umount <drive>             closes the file associated with <drive>\n"
      "                           and frees the resources" },
{ "create", docreate, "Create a new disk",
      "create {flags} <file> {size}  creates a unix <file> initialized as a\n"
      "                              CP/M disk of size {size} (default 1MB).\n"
      "       -b <block size>        default 1024 if size < 256K, else 2048\n"
      "       -d <# dir entries - 1> default 1023\n"
      "       -o <track offset>      default 0\n"
      "       -s <sectors per track> default 26\n"
      "create <file> 256256          create a raw SSSD disk image" },
{ "interrupt", doint, "Set user interrupt key",
      "interrupt <key>            makes <key> interrupt CP/M back to the monitor\n"
      "        <key> may be a 2-digit hex number or ^x where x is one of a..z[\\]^_\n"
      "        ^@ makes CP/M uninterruptible (from the keyboard)\n"
      "interrupt                  without an argument displays the current setting" },
{ "go",     dogo,     "Start/Continue CP/M execution", ((void *)0)  },
{ "!",      doshell,  "Execute a unix command",
      "!                          escape to a unix shell\n"
      "!cmd                       execute unix cmd" },
{ "quit",   doquit,   "Terminate yaze", ((void *)0)  },
{ "time",   dotime,   "Display elapsed time since last `time' command",
      "displays elapsed, user and system time in seconds,\n"
      "         along with simulator options" },
{ ((void *)0) , ((void *)0) , ((void *)0) , ((void *)0)  }
};

static int
dohelp(char *cmd)
{
    char *tok = strtok(((void *)0) , white);
    int tlen;
    COMMAND *cp;

    if (tok) {
	for (tlen = strlen(tok), cp = commands; cp->name; cp++)
	    if ((__extension__ (__builtin_constant_p (  tlen )	&& ((__builtin_constant_p ( tok )	&& strlen ( tok ) < ((size_t) (  tlen )))	|| (__builtin_constant_p (  cp->name )	&& strlen (  cp->name ) < ((size_t) (  tlen ))))	? __extension__	({ size_t __s1_len, __s2_len;	(__builtin_constant_p (  tok  ) && __builtin_constant_p (    cp->name  )	&& (__s1_len = strlen (  tok  ), __s2_len = strlen (    cp->name  ),	(! ((size_t)(const void *)((   tok   ) + 1) - (size_t)(const void *)(   tok   ) == 1)  || __s1_len >= 4)	&& (! ((size_t)(const void *)((     cp->name   ) + 1) - (size_t)(const void *)(     cp->name   ) == 1)  || __s2_len >= 4))	? memcmp ((__const char *) (  tok  ), (__const char *) (    cp->name  ),	(__s1_len < __s2_len ? __s1_len : __s2_len) + 1)	: (__builtin_constant_p (  tok  ) && ((size_t)(const void *)((   tok   ) + 1) - (size_t)(const void *)(   tok   ) == 1) 	&& (__s1_len = strlen (  tok  ), __s1_len < 4)	? (__builtin_constant_p (    cp->name  ) && ((size_t)(const void *)((     cp->name   ) + 1) - (size_t)(const void *)(     cp->name   ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (   tok   ))[0] - ((__const unsigned char *) (__const char *)(      cp->name   ))[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[1]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[1]);	if (  __s1_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[2]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[2]);	if (  __s1_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[3]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s2 =	(__const unsigned char *) (__const char *) (      cp->name   );	register int __result =	(((__const unsigned char *) (__const char *) (   tok   ))[0] - __s2[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[1] - __s2[1]); if (  __s1_len  > 1 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[2] - __s2[2]);	if (  __s1_len  > 2 && __result == 0)	__result = (((__const unsigned char *)	(__const char *)  (   tok   ))[3]	- __s2[3]);	}	}	__result; })) )	: (__builtin_constant_p (    cp->name  ) && ((size_t)(const void *)((     cp->name   ) + 1) - (size_t)(const void *)(     cp->name   ) == 1) 	&& (__s2_len = strlen (    cp->name  ), __s2_len < 4)	? (__builtin_constant_p (  tok  ) && ((size_t)(const void *)((   tok   ) + 1) - (size_t)(const void *)(   tok   ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (   tok   ))[0] - ((__const unsigned char *) (__const char *)(      cp->name   ))[0]);	if (  __s2_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[1]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[2]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[3]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s1 =	(__const unsigned char *) (__const char *) (   tok   );	register int __result =	__s1[0] - ((__const unsigned char *)	(__const char *) (      cp->name   ))[0];	if (  __s2_len  > 0 && __result == 0)	{	__result = (__s1[1]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(__s1[2] - ((__const unsigned char *)	(__const char *) (      cp->name   ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(__s1[3]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[3]);	}	}	__result; })) )	: strcmp (  tok  ,     cp->name  )))); })  : strncmp ( tok ,   cp->name ,   tlen )))  == 0)
		break;
	if (cp->name) {
		puts(cp->detail ? cp->detail : cp->doc);
	    return 0;
	}
    }
    for (cp = commands; cp->name; cp++)
	printf("%-10s  %s\n", cp->name, cp->doc);
    return 0;
}

int
docmd(char *cmd)
{
    char *tok;
    int tlen;
    COMMAND *cp;
    int (*func)(char *) = ((void *)0) ;

    if (cmd == ((void *)0) )
	return 0;
    while (*cmd == ' ' || *cmd == '\t' || *cmd == '\n')
	cmd++;
    for (tok = cmd + strlen(cmd) - 1; tok >= cmd; tok--)
	if (*tok == ' ' || *tok == '\t' || *tok == '\n')
	    *tok = 0;
	else
	    break;
    if (*cmd == 0)
	return 0;
     ;
    if (*cmd == '!') {
	/* special case */
	doshell(cmd);
	return 0;
    }
    tok = strtok(cmd, white);
    if (tok == ((void *)0)  || *tok == 0)
	return 0;
    for (tlen = strlen(tok), cp = commands; cp->name; cp++)
	if ((__extension__ (__builtin_constant_p (  tlen )	&& ((__builtin_constant_p ( tok )	&& strlen ( tok ) < ((size_t) (  tlen )))	|| (__builtin_constant_p (  cp->name )	&& strlen (  cp->name ) < ((size_t) (  tlen ))))	? __extension__	({ size_t __s1_len, __s2_len;	(__builtin_constant_p (  tok  ) && __builtin_constant_p (    cp->name  )	&& (__s1_len = strlen (  tok  ), __s2_len = strlen (    cp->name  ),	(! ((size_t)(const void *)((   tok   ) + 1) - (size_t)(const void *)(   tok   ) == 1)  || __s1_len >= 4)	&& (! ((size_t)(const void *)((     cp->name   ) + 1) - (size_t)(const void *)(     cp->name   ) == 1)  || __s2_len >= 4))	? memcmp ((__const char *) (  tok  ), (__const char *) (    cp->name  ),	(__s1_len < __s2_len ? __s1_len : __s2_len) + 1)	: (__builtin_constant_p (  tok  ) && ((size_t)(const void *)((   tok   ) + 1) - (size_t)(const void *)(   tok   ) == 1) 	&& (__s1_len = strlen (  tok  ), __s1_len < 4)	? (__builtin_constant_p (    cp->name  ) && ((size_t)(const void *)((     cp->name   ) + 1) - (size_t)(const void *)(     cp->name   ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (   tok   ))[0] - ((__const unsigned char *) (__const char *)(      cp->name   ))[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[1]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[1]);	if (  __s1_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[2]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[2]);	if (  __s1_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[3]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s2 =	(__const unsigned char *) (__const char *) (      cp->name   );	register int __result =	(((__const unsigned char *) (__const char *) (   tok   ))[0] - __s2[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[1] - __s2[1]); if (  __s1_len  > 1 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[2] - __s2[2]);	if (  __s1_len  > 2 && __result == 0)	__result = (((__const unsigned char *)	(__const char *)  (   tok   ))[3]	- __s2[3]);	}	}	__result; })) )	: (__builtin_constant_p (    cp->name  ) && ((size_t)(const void *)((     cp->name   ) + 1) - (size_t)(const void *)(     cp->name   ) == 1) 	&& (__s2_len = strlen (    cp->name  ), __s2_len < 4)	? (__builtin_constant_p (  tok  ) && ((size_t)(const void *)((   tok   ) + 1) - (size_t)(const void *)(   tok   ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (   tok   ))[0] - ((__const unsigned char *) (__const char *)(      cp->name   ))[0]);	if (  __s2_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (   tok   ))[1]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[2]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (   tok   ))[3]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s1 =	(__const unsigned char *) (__const char *) (   tok   );	register int __result =	__s1[0] - ((__const unsigned char *)	(__const char *) (      cp->name   ))[0];	if (  __s2_len  > 0 && __result == 0)	{	__result = (__s1[1]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(__s1[2] - ((__const unsigned char *)	(__const char *) (      cp->name   ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(__s1[3]	- ((__const unsigned char *)	(__const char *) (      cp->name   ))[3]);	}	}	__result; })) )	: strcmp (  tok  ,     cp->name  )))); })  : strncmp ( tok ,   cp->name ,   tlen )))  == 0)
	    /* don't allow quit command to be abbreviated */
	    if (cp->func != doquit || __extension__	({ size_t __s1_len, __s2_len;	(__builtin_constant_p ( tok ) && __builtin_constant_p (  cp->name )	&& (__s1_len = strlen ( tok ), __s2_len = strlen (  cp->name ),	(! ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1)  || __s1_len >= 4)	&& (! ((size_t)(const void *)((   cp->name  ) + 1) - (size_t)(const void *)(   cp->name  ) == 1)  || __s2_len >= 4))	? memcmp ((__const char *) ( tok ), (__const char *) (  cp->name ),	(__s1_len < __s2_len ? __s1_len : __s2_len) + 1)	: (__builtin_constant_p ( tok ) && ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1) 	&& (__s1_len = strlen ( tok ), __s1_len < 4)	? (__builtin_constant_p (  cp->name ) && ((size_t)(const void *)((   cp->name  ) + 1) - (size_t)(const void *)(   cp->name  ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - ((__const unsigned char *) (__const char *)(    cp->name  ))[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1]	- ((__const unsigned char *)	(__const char *) (    cp->name  ))[1]);	if (  __s1_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[2]	- ((__const unsigned char *)	(__const char *) (    cp->name  ))[2]);	if (  __s1_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[3]	- ((__const unsigned char *)	(__const char *) (    cp->name  ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s2 =	(__const unsigned char *) (__const char *) (    cp->name  );	register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - __s2[0]);	if (  __s1_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1] - __s2[1]); if (  __s1_len  > 1 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[2] - __s2[2]);	if (  __s1_len  > 2 && __result == 0)	__result = (((__const unsigned char *)	(__const char *)  (  tok  ))[3]	- __s2[3]);	}	}	__result; })) )	: (__builtin_constant_p (  cp->name ) && ((size_t)(const void *)((   cp->name  ) + 1) - (size_t)(const void *)(   cp->name  ) == 1) 	&& (__s2_len = strlen (  cp->name ), __s2_len < 4)	? (__builtin_constant_p ( tok ) && ((size_t)(const void *)((  tok  ) + 1) - (size_t)(const void *)(  tok  ) == 1) 	? (__extension__ ({ register int __result =	(((__const unsigned char *) (__const char *) (  tok  ))[0] - ((__const unsigned char *) (__const char *)(    cp->name  ))[0]);	if (  __s2_len  > 0 && __result == 0)	{	__result = (((__const unsigned char *)	(__const char *) (  tok  ))[1]	- ((__const unsigned char *)	(__const char *) (    cp->name  ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[2]	- ((__const unsigned char *)	(__const char *) (    cp->name  ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(((__const unsigned char *)	(__const char *) (  tok  ))[3]	- ((__const unsigned char *)	(__const char *) (    cp->name  ))[3]);	}	}	__result; })) 	: (__extension__ ({ __const unsigned char *__s1 =	(__const unsigned char *) (__const char *) (  tok  );	register int __result =	__s1[0] - ((__const unsigned char *)	(__const char *) (    cp->name  ))[0];	if (  __s2_len  > 0 && __result == 0)	{	__result = (__s1[1]	- ((__const unsigned char *)	(__const char *) (    cp->name  ))[1]);	if (  __s2_len  > 1 && __result == 0)	{	__result =	(__s1[2] - ((__const unsigned char *)	(__const char *) (    cp->name  ))[2]);	if (  __s2_len  > 2 && __result == 0)	__result =	(__s1[3]	- ((__const unsigned char *)	(__const char *) (    cp->name  ))[3]);	}	}	__result; })) )	: strcmp ( tok ,   cp->name )))); })  == 0)
		if (func == ((void *)0) )
		    func = cp->func;
		else {
		    func = ((void *)0) ;	/* ambiguous */
		    break;
		}
    if (func)
	return func(cmd);
    printf("%s ?\n", tok);
    return 0;
}









void
monitor(FASTWORK adr)
{
    static char *cmd = ((void *)0) ;

    ttycook();






# 1111 "monitor.c"

    if (cmd == ((void *)0) )
	cmd = xmalloc(8192   );
    do {
	fputs("$>", stdout);
	fflush(stdout);
	if (fgets(cmd, 8192   -1, stdin) == ((void *)0) )
	    if ((ttyflags & 1 ) == 0)
		doquit(((void *)0) );
	    else {
		putchar('\n');
		cmd[0] = 0;
	    }
    } while (!docmd(cmd));

    ttyraw();
}
