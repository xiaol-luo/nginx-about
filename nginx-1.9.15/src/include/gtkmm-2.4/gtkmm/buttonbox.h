// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_BUTTONBOX_H
#define _GTKMM_BUTTONBOX_H


#include <glibmm.h>

/* $Id: buttonbox.hg,v 1.3 2003/10/12 09:38:11 murrayc Exp $ */

/* buttonbox.h
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

#include <gtkmm/box.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkButtonBox GtkButtonBox;
typedef struct _GtkButtonBoxClass GtkButtonBoxClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class ButtonBox_Class; } // namespace Gtk
#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkVButtonBox GtkVButtonBox;
typedef struct _GtkVButtonBoxClass GtkVButtonBoxClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class VButtonBox_Class; } // namespace Gtk
#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkHButtonBox GtkHButtonBox;
typedef struct _GtkHButtonBoxClass GtkHButtonBoxClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class HButtonBox_Class; } // namespace Gtk
namespace Gtk
{

// This is a #define in GTK+, and unrelated to the GtkButtonBoxStyle enum.
/** @ingroup gtkmmEnums */
enum { BUTTONBOX_DEFAULT = -1 };


//TODO: Inherit/Implement Orientation when we can break ABI.

/** Base class for Gtk::HButtonBox and Gtk::VButtonBox
 *
 * A button box should be used to provide a consistent layout of buttons
 * throughout your application.  There is one default layout and a default
 * spacing value that are persistant across all ButtonBox widgets.
 */

class ButtonBox : public Box
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef ButtonBox CppObjectType;
  typedef ButtonBox_Class CppClassType;
  typedef GtkButtonBox BaseObjectType;
  typedef GtkButtonBoxClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~ButtonBox();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class ButtonBox_Class;
  static CppClassType buttonbox_class_;

  // noncopyable
  ButtonBox(const ButtonBox&);
  ButtonBox& operator=(const ButtonBox&);

protected:
  explicit ButtonBox(const Glib::ConstructParams& construct_params);
  explicit ButtonBox(GtkButtonBox* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkButtonBox*       gobj()       { return reinterpret_cast<GtkButtonBox*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkButtonBox* gobj() const { return reinterpret_cast<GtkButtonBox*>(gobject_); }


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
  
  ButtonBoxStyle get_layout() const;
  
  void set_layout(ButtonBoxStyle layout_style);
  
  
  /** Sets whether @a child should appear in a secondary group of children.
   * A typical use of a secondary child is the help button in a dialog.
   * 
   * This group appears after the other children if the style
   * is Gtk::BUTTONBOX_START, Gtk::BUTTONBOX_SPREAD or
   * Gtk::BUTTONBOX_EDGE, and before the other children if the style
   * is Gtk::BUTTONBOX_END. For horizontal button boxes, the definition
   * of before/after depends on direction of the widget (see
   * Gtk::Widget::set_direction()). If the style is Gtk::BUTTONBOX_START
   * or Gtk::BUTTONBOX_END, then the secondary children are aligned at
   * the other end of the button box from the main children. For the
   * other styles, they appear immediately next to the main children.
   * @param child A child of @a widget.
   * @param is_secondary If <tt>true</tt>, the @a child appears in a secondary group of the
   * button box.
   */
  void set_child_secondary(Widget& child, bool is_secondary = true);
  
  /** Return value: whether @a child should appear in a secondary group of children.
   * @param child A child of @a widget.
   * @return Whether @a child should appear in a secondary group of children.
   * 
   * @newin{2,4}.
   */
  bool get_child_secondary(const Gtk::Widget& child) const;

   int get_child_min_width() const;
    void set_child_min_width(const int& value);
 
   int get_child_min_height() const;
    void set_child_min_height(const int& value);
 
   int get_child_ipadding_x() const;
    void set_child_ipadding_x(const int& value);
 
   int get_child_ipadding_y() const;
    void set_child_ipadding_y(const int& value);
 
  #ifdef GLIBMM_PROPERTIES_ENABLED
/** How to layout the buttons in the box. Possible values are default
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<ButtonBoxStyle> property_layout_style() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** How to layout the buttons in the box. Possible values are default
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<ButtonBoxStyle> property_layout_style() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


};

/** A container for arranging buttons vertically.
 *
 * A button box should be used to provide a consistent layout of buttons
 * throughout your application. There is one default layout and a default spacing
 * value that are persistant across all Gtk::VButtonBox widgets. 
 *
 * The layout/spacing can then be altered by the programmer, or if desired,
 * by the user to alter the 'feel' of a program to a small degree. 
 *
 * @ingroup Widgets
 * @ingroup Containers
 */

class VButtonBox : public ButtonBox
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef VButtonBox CppObjectType;
  typedef VButtonBox_Class CppClassType;
  typedef GtkVButtonBox BaseObjectType;
  typedef GtkVButtonBoxClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~VButtonBox();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class VButtonBox_Class;
  static CppClassType vbuttonbox_class_;

  // noncopyable
  VButtonBox(const VButtonBox&);
  VButtonBox& operator=(const VButtonBox&);

protected:
  explicit VButtonBox(const Glib::ConstructParams& construct_params);
  explicit VButtonBox(GtkVButtonBox* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkVButtonBox*       gobj()       { return reinterpret_cast<GtkVButtonBox*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkVButtonBox* gobj() const { return reinterpret_cast<GtkVButtonBox*>(gobject_); }


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
  explicit VButtonBox(ButtonBoxStyle layout = BUTTONBOX_DEFAULT_STYLE, int spacing = BUTTONBOX_DEFAULT);


};

/** A container for arranging buttons horizontally.
 *
 * A button box should be used to provide a consistent layout of buttons
 * throughout your application. There is one default layout and a default spacing
 * value that are persistant across all Gtk::HButtonBox widgets. 
 *
 * The layout/spacing can then be altered by the programmer, or if desired,
 * by the user to alter the 'feel' of a program to a small degree. 
 *
 * The HButtonBox widget looks like this:
 * @image html hbuttonbox1.png
 *
 * @ingroup Widgets
 * @ingroup Containers
 */

class HButtonBox : public ButtonBox
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef HButtonBox CppObjectType;
  typedef HButtonBox_Class CppClassType;
  typedef GtkHButtonBox BaseObjectType;
  typedef GtkHButtonBoxClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~HButtonBox();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class HButtonBox_Class;
  static CppClassType hbuttonbox_class_;

  // noncopyable
  HButtonBox(const HButtonBox&);
  HButtonBox& operator=(const HButtonBox&);

protected:
  explicit HButtonBox(const Glib::ConstructParams& construct_params);
  explicit HButtonBox(GtkHButtonBox* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkHButtonBox*       gobj()       { return reinterpret_cast<GtkHButtonBox*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkHButtonBox* gobj() const { return reinterpret_cast<GtkHButtonBox*>(gobject_); }


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
  explicit HButtonBox(ButtonBoxStyle layout = BUTTONBOX_DEFAULT_STYLE, int spacing = BUTTONBOX_DEFAULT);


};

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::ButtonBox
   */
  Gtk::ButtonBox* wrap(GtkButtonBox* object, bool take_copy = false);
} //namespace Glib


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::VButtonBox
   */
  Gtk::VButtonBox* wrap(GtkVButtonBox* object, bool take_copy = false);
} //namespace Glib


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::HButtonBox
   */
  Gtk::HButtonBox* wrap(GtkHButtonBox* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_BUTTONBOX_H */

