/*
 * osdep.h : GeeXboX uShare OS independant helpers headers.
 * Originally developped for the GeeXboX project.
 * Copyright (C) 2005-2007 Benjamin Zores <ben@geexbox.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef _OS_DEP_H_
#define _OS_DEP_H_


#ifdef _WIN32
	typedef int bool;

	#ifndef true
	#define true 1
	#endif
	#ifndef false
	#define false 0
	#endif
#else
	#include <stdbool.h>
#endif


#ifdef _WIN32
#include <io.h>
#else
#include <unistd.h>
#endif

#ifdef _WIN32
#include <getopt_win.h>
#else
#include <getopt.h>
#endif

#ifdef _WIN32
typedef __int32 int32_t;
typedef unsigned __int32 uint32_t;
typedef int socklen_t;
#endif

#if (defined(BSD) || defined(__FreeBSD__))

char *strndup (const char *s, size_t n);
ssize_t getline (char **lineptr, size_t *n, FILE *stream);
#endif

#endif /* _OS_DEP_H_ */
