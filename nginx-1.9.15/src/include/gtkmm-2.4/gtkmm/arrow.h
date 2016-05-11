// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_ARROW_H
#define _GTKMM_ARROW_H


#include <glibmm.h>

/* $Id: arrow.hg,v 1.1 2003/01/21 13:38:42 murrayc Exp $ */

/* arrow.h
 * 
 * Copyright (C) 1998-2002 The gtkmm Development Team
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

#include <gtkmm/misc.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkArrow GtkArrow;
typedef struct _GtkArrowClass GtkArrowClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Arrow_Class; } // namespace Gtk
namespace Gtk
{

/** Produces an arrow pointing in one of the four cardinal directions.
 *
 * This is intended for use where a directional arrow (in one of the four
 * cardinal directions) is desired. As such, it has very limited
 * functionality and basically only draws itself in a particular direction
 * and with a particular shadow type.
 *
 * Gtk::Arrow will fill any space alloted to it, but since it is inherited
 * from Gtk::Misc, it can be padded and/or aligned, to fill exactly the
 * space the programmer desires.
 *
 * The Arrow widget looks like this:
 * @image html arrow1.png
 *
 * @ingroup Widgets
 */

class Arrow : public Misc {
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Arrow CppObjectType;
  typedef Arrow_Class CppClassType;
  typedef GtkArrow BaseObjectType;
  typedef GtkArrowClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Arrow();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Arrow_Class;
  static CppClassType arrow_class_;

  // noncopyable
  Arrow(const Arrow&);
  Arrow& operator=(const Arrow&);

protected:
  explicit Arrow(const Glib::ConstructParams& construct_params);
  explicit Arrow(GtkArrow* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkArrow*       gobj()       { return reinterpret_cast<GtkArrow*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkArrow* gobj() const { return reinterpret_cast<GtkArrow*>(gobject_); }


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


private:

public:


  /** Creates an arrow.
   *
   * @param arrow_type A Gtk::ArrowType enum describing the arrow direction.
   * @param shadow_type A Gtk::ShadowType enum describing the shadow type of
   * the arrow.
   */
  explicit Arrow(ArrowType arrow_type, ShadowType shadow_type);
  

  // Changes the direction and shadow of an arrow.
  
  /** Sets the direction and shadow of this Arrow.
   * @param arrow_type A Gtk::ArrowType enum describing what arrow type to set this Arrow to.
   * @param shadow_type A Gtk::ShadowType enum describing what shadow type to set this Arrow to.
   */
  void set(ArrowType arrow_type, ShadowType shadow_type);

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The direction the arrow should point.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<ArrowType> property_arrow_type() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The direction the arrow should point.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<ArrowType> property_arrow_type() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Appearance of the shadow surrounding the arrow.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<ShadowType> property_shadow_type() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Appearance of the shadow surrounding the arrow.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<ShadowType> property_shadow_type() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


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
   * @relates Gtk::Arrow
   */
  Gtk::Arrow* wrap(GtkArrow* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_ARROW_H */

