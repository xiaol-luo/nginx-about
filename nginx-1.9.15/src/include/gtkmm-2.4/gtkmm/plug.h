// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_PLUG_H
#define _GTKMM_PLUG_H


#include <glibmm.h>

/* $Id: plug.hg,v 1.2 2005/01/25 16:16:33 murrayc Exp $ */

/* Copyright (C) 1998-2002 The gtkmm Development Team
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

#include <gtkmm/window.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkPlug GtkPlug;
typedef struct _GtkPlugClass GtkPlugClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Plug_Class; } // namespace Gtk
namespace Gtk
{


class Plug : public Window
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Plug CppObjectType;
  typedef Plug_Class CppClassType;
  typedef GtkPlug BaseObjectType;
  typedef GtkPlugClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Plug();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Plug_Class;
  static CppClassType plug_class_;

  // noncopyable
  Plug(const Plug&);
  Plug& operator=(const Plug&);

protected:
  explicit Plug(const Glib::ConstructParams& construct_params);
  explicit Plug(GtkPlug* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkPlug*       gobj()       { return reinterpret_cast<GtkPlug*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkPlug* gobj() const { return reinterpret_cast<GtkPlug*>(gobject_); }


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
  virtual void on_embedded();
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


private:

  
  //This is not available in on Win32.
//This source file will not be compiled,
//and the class will not be registered in wrap_init.h or wrap_init.cc

public:
  Plug();
  explicit Plug(GdkNativeWindow socket_id);
  Plug(const Glib::RefPtr<Gdk::Display>& display, GdkNativeWindow socket_id);

  
  /** Gets the window ID of a Gtk::Plug widget, which can then
   * be used to embed this window inside another window, for
   * instance with Gtk::Socket::add_id().
   * @return The window ID for the plug.
   */
  GdkNativeWindow get_id() const;

  
  /** Determines whether the plug is embedded in a socket.
   * @return <tt>true</tt> if the plug is embedded in a socket
   * 
   * @newin{2,14}.
   */
  bool get_embedded() const;

  
  /** Retrieves the socket the plug is embedded in.
   * @return The window of the socket, or <tt>0</tt>
   * 
   * @newin{2,14}.
   */
  Glib::RefPtr<Gdk::Window> get_socket_window();
  
  /** Retrieves the socket the plug is embedded in.
   * @return The window of the socket, or <tt>0</tt>
   * 
   * @newin{2,14}.
   */
  Glib::RefPtr<const Gdk::Window> get_socket_window() const;

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether or not the plug is embedded.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_embedded() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The window of the socket the plug is embedded in.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Window> > property_socket_window() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


  /**
   * @par Prototype:
   * <tt>void on_my_%embedded()</tt>
   */

  Glib::SignalProxy0< void > signal_embedded();


};

} /* namespace Gtk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Plug
   */
  Gtk::Plug* wrap(GtkPlug* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_PLUG_H */

