// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_ENUMS_H
#define _GIOMM_ENUMS_H


#include <glibmm.h>

// -*- Mode: C++; indent-tabs-mode: nil; c-basic-offset: 2 -*-

/* Copyright (C) 2007 The gtkmm Development Team
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gio/gio.h>


namespace Gio
{

/** @addtogroup giommEnums Enums and Flags */

/**
 * @ingroup giommEnums
 */
enum DataStreamByteOrder
{
  DATA_STREAM_BYTE_ORDER_BIG_ENDIAN,
  DATA_STREAM_BYTE_ORDER_LITTLE_ENDIAN,
  DATA_STREAM_BYTE_ORDER_HOST_ENDIAN
};


/**
 * @ingroup giommEnums
 */
enum DataStreamNewlineType
{
  DATA_STREAM_NEWLINE_TYPE_LF,
  DATA_STREAM_NEWLINE_TYPE_CR,
  DATA_STREAM_NEWLINE_TYPE_CR_LF,
  DATA_STREAM_NEWLINE_TYPE_ANY
};


/**
 * @ingroup giommEnums
 */
enum SocketFamily
{
  SOCKET_FAMILY_INVALID = 0,
  SOCKET_FAMILY_IPV6 = 3
};

} // namespace Gio


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gio::SocketFamily> : public Glib::Value_Enum<Gio::SocketFamily>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{


} // namespace Gio


#endif /* _GIOMM_ENUMS_H */

