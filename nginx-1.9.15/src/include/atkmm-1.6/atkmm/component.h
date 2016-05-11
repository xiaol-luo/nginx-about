// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _ATKMM_COMPONENT_H
#define _ATKMM_COMPONENT_H


#include <glibmm.h>

/* $Id: component.hg,v 1.5 2004/03/12 20:35:53 murrayc Exp $ */

/* Copyright (C) 2002 The gtkmm Development Team
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


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
  typedef struct _AtkComponentIface AtkComponentIface;
  typedef struct _AtkObject         AtkObject;
  typedef void (* AtkFocusHandler) (AtkObject*, gboolean);
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _AtkComponent AtkComponent;
typedef struct _AtkComponentClass AtkComponentClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Atk
{ class Component_Class; } // namespace Atk
namespace Atk
{


/** @addtogroup atkmmEnums Enums and Flags */

/**
 * @ingroup atkmmEnums
 */
enum CoordType
{
  XY_SCREEN,
  XY_WINDOW
};

} // namespace Atk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Atk::CoordType> : public Glib::Value_Enum<Atk::CoordType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Atk
{

/**
 * @ingroup atkmmEnums
 */
enum Layer
{
  LAYER_INVALID,
  LAYER_BACKGROUND,
  LAYER_CANVAS,
  LAYER_WIDGET,
  LAYER_MDI,
  LAYER_POPUP,
  LAYER_OVERLAY,
  LAYER_WINDOW
};

} // namespace Atk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Atk::Layer> : public Glib::Value_Enum<Atk::Layer>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Atk
{


class Object;


/** The ATK interface provided by UI components which occupy a physical area on the screen.
 * This should be implemented by most if not all UI elements with an actual on-screen presence, i.e. components which
 * can be said to have a screen-coordinate bounding box. Virtually all widgets will need to have Atk::Component
 * implementations provided for their corresponding Atk::Object class. In short, only UI elements which are *not* GUI
 * elements will omit this ATK interface.
 * 
 * A possible exception might be textual information with a transparent background, in which case text glyph bounding
 * box information is provided by Atk::Text.
 */

class Component : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Component CppObjectType;
  typedef Component_Class CppClassType;
  typedef AtkComponent BaseObjectType;
  typedef AtkComponentIface BaseClassType;

private:
  friend class Component_Class;
  static CppClassType component_class_;

  // noncopyable
  Component(const Component&);
  Component& operator=(const Component&);

protected:
  Component(); // you must derive from this class

  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit Component(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit Component(AtkComponent* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Component();

  static void add_interface(GType gtype_implementer);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  AtkComponent*       gobj()       { return reinterpret_cast<AtkComponent*>(gobject_); }

  ///Provides access to the underlying C GObject.  
  const AtkComponent* gobj() const { return reinterpret_cast<AtkComponent*>(gobject_); }

private:

  
public:
  
  /** Add the specified handler to the set of functions to be called 
   * when this object receives focus events (in or out). If the handler is
   * already added it is not added again
   * @param handler The Atk::FocusHandler to be attached to @a component.
   * @return A handler id which can be used in atk_component_remove_focus_handler
   * or zero if the handler was already added.
   */
  guint add_focus_handler(AtkFocusHandler handler);
  
  /** Checks whether the specified point is within the extent of the @a component.
   * @param x X coordinate.
   * @param y Y coordinate.
   * @param coord_type Specifies whether the coordinates are relative to the screen
   * or to the components top level window.
   * @return <tt>true</tt> or <tt>false</tt> indicating whether the specified point is within
   * the extent of the @a component or not.
   */
  bool contains(int x, int y, CoordType coord_type) const;
  
  /** Gets a reference to the accessible child, if one exists, at the
   * coordinate point specified by @a x and @a y.
   * @param x X coordinate.
   * @param y Y coordinate.
   * @param coord_type Specifies whether the coordinates are relative to the screen
   * or to the components top level window.
   * @return A reference to the accessible child, if one exists.
   */
  Glib::RefPtr<Atk::Object> get_accessible_at_point(int x, int y, CoordType coord_type);
  
  /** Gets the rectangle which gives the extent of the @a component.
   * @param x Address of <tt>int</tt> to put x coordinate.
   * @param y Address of <tt>int</tt> to put y coordinate.
   * @param width Address of <tt>int</tt> to put width.
   * @param height Address of <tt>int</tt> to put height.
   * @param coord_type Specifies whether the coordinates are relative to the screen
   * or to the components top level window.
   */
  void get_extents(int& x, int& y, int& width, int& height, CoordType coord_type) const;
  
  /** Gets the position of @a component in the form of 
   * a point specifying @a component's top-left corner.
   * @param x Address of <tt>int</tt> to put x coordinate position.
   * @param y Address of <tt>int</tt> to put y coordinate position.
   * @param coord_type Specifies whether the coordinates are relative to the screen
   * or to the components top level window.
   */
  void get_position(int& x, int& y, CoordType coord_type) const;
  
  /** Gets the size of the @a component in terms of width and height.
   * @param width Address of <tt>int</tt> to put width of @a component.
   * @param height Address of <tt>int</tt> to put height of @a component.
   */
  void get_size(int& width, int& height) const;
  
  /** Gets the layer of the component.
   * @return An Atk::Layer which is the layer of the component.
   */
  Layer get_layer() const;
  
  /** Gets the zorder of the component. The value G_MININT will be returned 
   * if the layer of the component is not ATK_LAYER_MDI or ATK_LAYER_WINDOW.
   * @return A <tt>int</tt> which is the zorder of the component, i.e. the depth at 
   * which the component is shown in relation to other components in the same 
   * container.
   */
  int get_mdi_zorder() const;
  
  /** Grabs focus for this @a component.
   * @return <tt>true</tt> if successful, <tt>false</tt> otherwise.
   */
  bool grab_focus();
  
  /** Remove the handler specified by @a handler_id from the list of
   * functions to be executed when this object receives focus events 
   * (in or out).
   * @param handler_id The handler id of the focus handler to be removed
   * from @a component.
   */
  void remove_focus_handler(guint handler_id);
  
  /** Sets the extents of @a component.
   * @param x X coordinate.
   * @param y Y coordinate.
   * @param width Width to set for @a component.
   * @param height Height to set for @a component.
   * @param coord_type Specifies whether the coordinates are relative to the screen
   * or to the components top level window.
   * @return <tt>true</tt> or <tt>false</tt> whether the extents were set or not.
   */
  bool set_extents(int x, int y, int width, int height, CoordType coord_type);
  
  /** Sets the postition of @a component.
   * @param x X coordinate.
   * @param y Y coordinate.
   * @param coord_type Specifies whether the coordinates are relative to the screen
   * or to the components top level window.
   * @return <tt>true</tt> or <tt>false</tt> whether or not the position was set or not.
   */
  bool set_position(int x, int y, CoordType coord_type);
  
  /** Set the size of the @a component in terms of width and height.
   * @param width Width to set for @a component.
   * @param height Height to set for @a component.
   * @return <tt>true</tt> or <tt>false</tt> whether the size was set or not.
   */
  bool set_size(int width, int height);

protected:
  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual guint add_focus_handler_vfunc(AtkFocusHandler handler);
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool contains_vfunc(int x, int y, CoordType coord_type) const;
#endif //GLIBMM_VFUNCS_ENABLED


  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual Glib::RefPtr<Atk::Object> get_accessible_at_point_vfunc(int x, int y, CoordType coord_type);
#endif //GLIBMM_VFUNCS_ENABLED


  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual void get_extents_vfunc(int& x, int& y, int& width, int& height, CoordType coord_type) const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual void get_position_vfunc(int& x, int& y, CoordType coord_type) const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual void get_size_vfunc(int& width, int& height) const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual Layer get_layer_vfunc() const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual int get_mdi_zorder_vfunc() const;
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool grab_focus_vfunc();
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual void remove_focus_handler_vfunc(guint handler_id);
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool set_extents_vfunc(int x, int y, int width, int height, CoordType coord_type);
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool set_position_vfunc(int x, int y, CoordType coord_type);
#endif //GLIBMM_VFUNCS_ENABLED

  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool set_size_vfunc(int width, int height);
#endif //GLIBMM_VFUNCS_ENABLED


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

} // namespace Atk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Atk::Component
   */
  Glib::RefPtr<Atk::Component> wrap(AtkComponent* object, bool take_copy = false);

} // namespace Glib


#endif /* _ATKMM_COMPONENT_H */
