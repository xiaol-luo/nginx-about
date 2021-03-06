// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _LIBGNOMEMM_PROGRAM_H
#define _LIBGNOMEMM_PROGRAM_H


#include <glibmm.h>

/* $Id: program.hg,v 1.7 2002/11/28 12:10:06 murrayc Exp $ */
// -*- C++ -*- // this is for the .hg, I realize gensig puts one in

/* program.h
 * 
 * Copyright 2001      Free Software Foundation
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
#include <glibmm/slisthandle.h>
//#include <libgnome/libgnome.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GnomeProgram GnomeProgram;
typedef struct _GnomeProgramClass GnomeProgramClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gnome
{ class Program_Class; } // namespace Gnome
namespace Gnome
{


/** @addtogroup libgnomemmEnums Enums and Flags */

/**
 * @ingroup libgnomemmEnums
 */
enum FileDomain
{
  FILE_DOMAIN_UNKNOWN,
  FILE_DOMAIN_LIBDIR,
  FILE_DOMAIN_DATADIR,
  FILE_DOMAIN_SOUND,
  FILE_DOMAIN_PIXMAP,
  FILE_DOMAIN_CONFIG,
  FILE_DOMAIN_HELP,
  FILE_DOMAIN_APP_LIBDIR,
  FILE_DOMAIN_APP_DATADIR,
  FILE_DOMAIN_APP_SOUND,
  FILE_DOMAIN_APP_PIXMAP,
  FILE_DOMAIN_APP_CONFIG,
  FILE_DOMAIN_APP_HELP
};

} // namespace Gnome


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gnome::FileDomain> : public Glib::Value_Enum<Gnome::FileDomain>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gnome
{


/** Initialize and retrieve information about a GNOME application.
 * This is a singleton - Use Program::get() to retrieve an instance on which to call the other methods.
 */

class Program : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Program CppObjectType;
  typedef Program_Class CppClassType;
  typedef GnomeProgram BaseObjectType;
  typedef GnomeProgramClass BaseClassType;

private:  friend class Program_Class;
  static CppClassType program_class_;

private:
  // noncopyable
  Program(const Program&);
  Program& operator=(const Program&);

protected:
  explicit Program(const Glib::ConstructParams& construct_params);
  explicit Program(GnomeProgram* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Program();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GnomeProgram*       gobj()       { return reinterpret_cast<GnomeProgram*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GnomeProgram* gobj() const { return reinterpret_cast<GnomeProgram*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GnomeProgram* gobj_copy();

private:

public:

  
  static Glib::RefPtr<Program> get();

  
  Glib::ustring get_human_readable_name() const;
  
  Glib::ustring get_app_id() const;
  
  Glib::ustring get_app_version() const;

  Glib::ustring locate_file(FileDomain domain, const Glib::ustring& file_name, bool only_if_exists = true);
  Glib::SListHandle<Glib::ustring> locate_file_multiple(FileDomain domain, const Glib::ustring& file_name, bool only_if_exists = true);
  

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

} /* namespace Gnome */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gnome::Program
   */
  Glib::RefPtr<Gnome::Program> wrap(GnomeProgram* object, bool take_copy = false);
}


#endif /* _LIBGNOMEMM_PROGRAM_H */

