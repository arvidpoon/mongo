/*-
 * See the file LICENSE for redistribution information.
 *
 * Copyright (c) 2008-2011 WiredTiger, Inc.
 *	All rights reserved.
 */

#include "util.h"

void
util_copyright(void)
{
	printf("%s\n", "Copyright (c) 2008-2011 WiredTiger, Inc.");
	printf("%s\n\n", "All rights reserved.");

	printf("%s\n\n",
	    "This program is free software: you can redistribute it and/or\n"
	    "modify it under the terms of version 3 of the GNU General\n"
	    "Public License as published by the Free Software Foundation.");

	printf("%s\n\n",
	    "This program is distributed in the hope that it will be useful,\n"
	    "but WITHOUT ANY WARRANTY; without even the implied warranty of\n"
	    "MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n"
	    "GNU General Public License for more details:");

	printf("\t%s\n\n",
	    "http://www.gnu.org/licenses/gpl-3.0-standalone.html");

	printf("%s\n",
	    "For a license to use the WiredTiger software under conditions\n"
	    "other than those described by the GNU General Public License,\n"
	    "or for technical support for this software, contact WiredTiger,\n"
	    "Inc. at info@wiredtiger.com.");
}
