// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GIOMM_EMBLEMEDICON_H
#define _GIOMM_EMBLEMEDICON_H


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

#include <glibmm/object.h>
#include <giomm/icon.h>
#include <giomm/emblem.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GEmblemedIcon GEmblemedIcon;
typedef struct _GEmblemedIconClass GEmblemedIconClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gio
{ class EmblemedIcon_Class; } // namespace Gio
namespace Gio
{

/** Icons with Emblems
 *
 * EmblemedIcon is an implementation of Icon that supports adding an emblem to
 * an icon. Adding multiple emblems to an icon is ensured via add_emblem().
 *
 * Note that EmblemedIcon allows no control over the position of the emblems.
 * See also Emblem for more information.
 *
 * @newin{2,20}
 */

class EmblemedIcon
: public Glib::Object,
  public Icon
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef EmblemedIcon CppObjectType;
  typedef EmblemedIcon_Class CppClassType;
  typedef GEmblemedIcon BaseObjectType;
  typedef GEmblemedIconClass BaseClassType;

private:  friend class EmblemedIcon_Class;
  static CppClassType emblemedicon_class_;

private:
  // noncopyable
  EmblemedIcon(const EmblemedIcon&);
  EmblemedIcon& operator=(const EmblemedIcon&);

protected:
  explicit EmblemedIcon(const Glib::ConstructParams& construct_params);
  explicit EmblemedIcon(GEmblemedIcon* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~EmblemedIcon();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GEmblemedIcon*       gobj()       { return reinterpret_cast<GEmblemedIcon*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GEmblemedIcon* gobj() const { return reinterpret_cast<GEmblemedIcon*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GEmblemedIcon* gobj_copy();

private:

  
protected:
  //TODO: Documentation:
 explicit EmblemedIcon(const Glib::RefPtr<Icon>& icon, const Glib::RefPtr<Emblem>& emblem);

public:
  
  static Glib::RefPtr<EmblemedIcon> create(const Glib::RefPtr<Icon>& icon, const Glib::RefPtr<Emblem>& emblem);


  /** Gets the main icon for @a emblemed.
   * @return A Icon that is owned by @a emblemed
   * 
   * @newin{2,18}.
   */
  Glib::RefPtr<Icon> get_icon();
  
  /** Gets the main icon for @a emblemed.
   * @return A Icon that is owned by @a emblemed
   * 
   * @newin{2,18}.
   */
  Glib::RefPtr<const Icon> get_icon() const;
 

  /** Gets the list of emblems for the @a icon.
   * @return A List of Emblem <!-- -->s that is owned by @a emblemed
   * 
   * @newin{2,18}.
   */
  Glib::ListHandle<Glib::RefPtr<Emblem> > get_emblems();
  // TODO: need constversion?
  //_WRAP_METHOD(Glib::ListHandle<Glib::RefPtr<const Emblem> > get_emblems() const, g_emblemed_icon_get_emblems, constversion)
  
  /** Adds @a emblem to the List of Emblem <!-- -->s.
   * 
   * @newin{2,18}
   * @param emblem A Emblem.
   */
  void add_emblem(const Glib::RefPtr<Emblem>& emblem);


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

protected:
  //GTK+ Virtual Functions (override these to change behaviour):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED

  //Default Signal Handlers::
#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


};

} // namespace Gio


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gio::EmblemedIcon
   */
  Glib::RefPtr<Gio::EmblemedIcon> wrap(GEmblemedIcon* object, bool take_copy = false);
}


#endif /* _GIOMM_EMBLEMEDICON_H */

