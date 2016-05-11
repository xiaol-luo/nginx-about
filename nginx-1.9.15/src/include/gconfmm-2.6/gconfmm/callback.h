// $Id$ -*- c++ -*-

/* callback.h
 *
 * Copyright (C) 2000-2002 GConfmm Development Team
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

#ifndef GCONFMM_CALLBACK_H
#define GCONFMM_CALLBACK_H

extern "C"
{
#include <gconf/gconf-client.h>
}

#include <glibmm/object.h>
#include <gconfmm/entry.h>

namespace Gnome
{

namespace Conf
{

typedef sigc::slot<void, guint, Entry> Callback;

class Client;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
class CallbackHolder
{
public:

  CallbackHolder(Callback slot);
  ~CallbackHolder();

  void add(Client* pObj);

  Callback m_Slot;

  static void destroy(void *data);
  static void call(GConfClient *client, guint i, GConfEntry *entry, void *data);  
};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} /* namespace Conf */
} /* namespace Gnome */

#endif //GCONFMM_CALLBACK_H
