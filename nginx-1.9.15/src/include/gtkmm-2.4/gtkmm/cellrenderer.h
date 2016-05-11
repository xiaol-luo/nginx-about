// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_CELLRENDERER_H
#define _GTKMM_CELLRENDERER_H

#include <gtkmmconfig.h>


#include <glibmm.h>

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

 
#include <gtkmm/object.h>
#include <gtkmm/widget.h>
#include <gtkmm/celleditable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkCellRenderer GtkCellRenderer;
typedef struct _GtkCellRendererClass GtkCellRendererClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class CellRenderer_Class; } // namespace Gtk
namespace Gtk
{

/** @addtogroup gtkmmEnums Enums and Flags */

/**
 * @ingroup gtkmmEnums
 * @par Bitwise operators:
 * <tt>%CellRendererState operator|(CellRendererState, CellRendererState)</tt><br>
 * <tt>%CellRendererState operator&(CellRendererState, CellRendererState)</tt><br>
 * <tt>%CellRendererState operator^(CellRendererState, CellRendererState)</tt><br>
 * <tt>%CellRendererState operator~(CellRendererState)</tt><br>
 * <tt>%CellRendererState& operator|=(CellRendererState&, CellRendererState)</tt><br>
 * <tt>%CellRendererState& operator&=(CellRendererState&, CellRendererState)</tt><br>
 * <tt>%CellRendererState& operator^=(CellRendererState&, CellRendererState)</tt><br>
 */
enum CellRendererState
{
  CELL_RENDERER_SELECTED = 1 << 0,
  CELL_RENDERER_PRELIT = 1 << 1,
  CELL_RENDERER_INSENSITIVE = 1 << 2,
  CELL_RENDERER_SORTED = 1 << 3,
  CELL_RENDERER_FOCUSED = 1 << 4
};

/** @ingroup gtkmmEnums */
inline CellRendererState operator|(CellRendererState lhs, CellRendererState rhs)
  { return static_cast<CellRendererState>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline CellRendererState operator&(CellRendererState lhs, CellRendererState rhs)
  { return static_cast<CellRendererState>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline CellRendererState operator^(CellRendererState lhs, CellRendererState rhs)
  { return static_cast<CellRendererState>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gtkmmEnums */
inline CellRendererState operator~(CellRendererState flags)
  { return static_cast<CellRendererState>(~static_cast<unsigned>(flags)); }

/** @ingroup gtkmmEnums */
inline CellRendererState& operator|=(CellRendererState& lhs, CellRendererState rhs)
  { return (lhs = static_cast<CellRendererState>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gtkmmEnums */
inline CellRendererState& operator&=(CellRendererState& lhs, CellRendererState rhs)
  { return (lhs = static_cast<CellRendererState>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gtkmmEnums */
inline CellRendererState& operator^=(CellRendererState& lhs, CellRendererState rhs)
  { return (lhs = static_cast<CellRendererState>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::CellRendererState> : public Glib::Value_Flags<Gtk::CellRendererState>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{

/**
 * @ingroup gtkmmEnums
 */
enum CellRendererMode
{
  CELL_RENDERER_MODE_INERT,
  CELL_RENDERER_MODE_ACTIVATABLE,
  CELL_RENDERER_MODE_EDITABLE
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::CellRendererMode> : public Glib::Value_Enum<Gtk::CellRendererMode>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** CellRenderers are used by Gtk::TreeView columns to render the Gtk::TreeModel column data appropriately.
 * They display, and allow editing of, the values of their properties.
 * In most cases, Gtk::TreeView::append_column() will automatically choose the appropriate renderer for the mode column's data type,
 * so you will rarely need to worry about these classes.
 *
 * @ingroup TreeView
 */

class CellRenderer : public Gtk::Object
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef CellRenderer CppObjectType;
  typedef CellRenderer_Class CppClassType;
  typedef GtkCellRenderer BaseObjectType;
  typedef GtkCellRendererClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~CellRenderer();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class CellRenderer_Class;
  static CppClassType cellrenderer_class_;

  // noncopyable
  CellRenderer(const CellRenderer&);
  CellRenderer& operator=(const CellRenderer&);

protected:
  explicit CellRenderer(const Glib::ConstructParams& construct_params);
  explicit CellRenderer(GtkCellRenderer* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkCellRenderer*       gobj()       { return reinterpret_cast<GtkCellRenderer*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkCellRenderer* gobj() const { return reinterpret_cast<GtkCellRenderer*>(gobject_); }


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
  virtual void on_editing_canceled();
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


private:

public:

  
  /** Obtains the width and height needed to render the cell. Used by view widgets
   * to determine the appropriate size for the cell_area passed to
   * render().  Fills in the x and y
   * offsets of the cell relative to this location.  Please note that the
   * values set in @a width and @a height, as well as those in @a x_offset and @a y_offset
   * are inclusive of the xpad and ypad properties.
   * @param widget The widget the renderer is rendering to.
   * @param cell_area The area a cell will be allocated.
   * @param x_offset Location to return x offset of cell relative to @a cell_area.
   * @param y_offset Location to return y offset of cell relative to @a cell_area.
   * @param width Location to return width needed to render a cell.
   * @param height Location to return height needed to render a cell.
   */
  void get_size(
                  Widget& widget,
                  const Gdk::Rectangle& cell_area,
                  int& x_offset, int& y_offset,
                  int& width,    int& height) const;

  /** Obtains the width and height needed to render the cell. Used by view widgets
   * to determine the appropriate size for the cell_area passed to
   * render().  Fills in the x and y
   * offsets of the cell relative to this location.  Please note that the
   * values set in @a width  and @a height , as well as those in @a x_offset  and @a y_offset
   * are inclusive of the xpad and ypad properties.
   * @param widget The widget the renderer is rendering to.
   * @param x_offset Location to return x offset of cell relative to @a cell_area.
   * @param y_offset Location to return y offset of cell relative to @a cell_area.
   * @param width Location to return width needed to render a cell.
   * @param height Location to return height needed to render a cell.
   */
  void get_size(Widget& widget, int& x_offset, int& y_offset, int& width, int& height) const;

  
  /** Invokes the virtual render function of the Gtk::CellRenderer. The three
   * passed-in rectangles are areas of @a window. Most renderers will draw within
   *  @a cell_area; the xalign, yalign, xpad, and ypad fields of the Gtk::CellRenderer
   * should be honored with respect to @a cell_area. @a background_area includes the
   * blank space around the cell, and also the area containing the tree expander;
   * so the @a background_area rectangles for all cells tile to cover the entire
   *  @a window.  @a expose_area is a clip rectangle.
   * @param window A Gdk::Drawable to draw to.
   * @param widget The widget owning @a window.
   * @param background_area Entire cell area (including tree expanders and maybe 
   * padding on the sides).
   * @param cell_area Area normally rendered by a cell renderer.
   * @param expose_area Area that actually needs updating.
   * @param flags Flags that affect rendering.
   */
  void render(
                  const Glib::RefPtr<Gdk::Window>& window,
                  Widget& widget,
                  const Gdk::Rectangle& background_area,
                  const Gdk::Rectangle& cell_area,
                  const Gdk::Rectangle& expose_area,
                  CellRendererState flags);

  
  /** Passes an activate event to the cell renderer for possible processing.  
   * Some cell renderers may use events; for example, Gtk::CellRendererToggle 
   * toggles when it gets a mouse click.
   * @param event A Gdk::Event.
   * @param widget Widget that received the event.
   * @param path Widget-dependent string representation of the event location; 
   * e.g. for Gtk::TreeView, a string representation of Gtk::TreePath.
   * @param background_area Background area as passed to render().
   * @param cell_area Cell area as passed to render().
   * @param flags Render flags.
   * @return <tt>true</tt> if the event was consumed/handled.
   */
  bool activate(
                  GdkEvent* event,
                  Widget& widget,
                  const Glib::ustring& path,
                  const Gdk::Rectangle& background_area,
                  const Gdk::Rectangle& cell_area,
                  CellRendererState flags);

  
  /** Passes an activate event to the cell renderer for possible processing.
   * @param event A Gdk::Event.
   * @param widget Widget that received the event.
   * @param path Widget-dependent string representation of the event location; 
   * e.g. for Gtk::TreeView, a string representation of Gtk::TreePath.
   * @param background_area Background area as passed to render().
   * @param cell_area Cell area as passed to render().
   * @param flags Render flags.
   * @return A new Gtk::CellEditable, or <tt>0</tt>.
   */
  CellEditable* start_editing(
                  GdkEvent* event, Widget& widget,
                  const Glib::ustring& path,
                  const Gdk::Rectangle& background_area,
                  const Gdk::Rectangle& cell_area,
                  CellRendererState flags = CellRendererState(0));

  
  /** Sets the renderer size to be explicit, independent of the properties set.
   * @param width The width of the cell renderer, or -1.
   * @param height The height of the cell renderer, or -1.
   */
  void set_fixed_size(int width, int height);
  
  /** Fills in @a width and @a height with the appropriate size of @a cell.
   * @param width Location to fill in with the fixed width of the widget.
   * @param height Location to fill in with the fixed height of the widget.
   */
  void get_fixed_size(int& width, int& height) const;

  
  /** Sets the renderer's alignment within its available space.
   * 
   * @newin{2,18}
   * @param xalign The x alignment of the cell renderer.
   * @param yalign The y alignment of the cell renderer.
   */
  void set_alignment(float align, float yalign);
  
  /** Fills in @a xalign and @a yalign with the appropriate values of @a cell.
   * 
   * @newin{2,18}
   * @param xalign Location to fill in with the x alignment of the cell, or <tt>0</tt>.
   * @param yalign Location to fill in with the y alignment of the cell, or <tt>0</tt>.
   */
  void get_alignment(float& xalign, float& yalign) const;

  
  /** Sets the renderer's padding.
   * 
   * @newin{2,18}
   * @param xpad The x padding of the cell renderer.
   * @param ypad The y padding of the cell renderer.
   */
  void set_padding(int xpad, int ypad);
  
  /** Fills in @a xpad and @a ypad with the appropriate values of @a cell.
   * 
   * @newin{2,18}
   * @param xpad Location to fill in with the x padding of the cell, or <tt>0</tt>.
   * @param ypad Location to fill in with the y padding of the cell, or <tt>0</tt>.
   */
  void get_padding(int& xpad, int& ypad) const;

  
  /** Sets the cell renderer's visibility.
   * 
   * @newin{2,18}
   * @param visible The visibility of the cell.
   */
  void set_visible(bool visible = true);
  
  /** Returns: <tt>true</tt> if the cell renderer is visible
   * @return <tt>true</tt> if the cell renderer is visible
   * 
   * @newin{2,18}.
   */
  bool get_visible() const;
  
  /** Sets the cell renderer's sensitivity.
   * 
   * @newin{2,18}
   * @param sensitive The sensitivity of the cell.
   */
  void set_sensitive(bool sensitive = true);
  
  /** Returns: <tt>true</tt> if the cell renderer is sensitive
   * @return <tt>true</tt> if the cell renderer is sensitive
   * 
   * @newin{2,18}.
   */
  bool get_sensitive() const;

  
#ifndef GTKMM_DISABLE_DEPRECATED

  /** Causes the cell renderer to emit the Gtk::CellRenderer::editing-canceled 
   * signal.  
   * 
   * This function is for use only by implementations of cell renderers that 
   * need to notify the client program that an editing process was canceled 
   * and the changes were not committed.
   * 
   * @newin{2,4}
   * Deprecated: 2.6: Use stop_editing() instead
   * @deprecated Use stop_editing().
   */
  void editing_canceled();
#endif // GTKMM_DISABLE_DEPRECATED


  /** Informs the cell renderer that the editing is stopped.
   * If @a canceled is <tt>true</tt>, the cell renderer will emit the 
   * Gtk::CellRenderer::editing-canceled signal. 
   * 
   * This function should be called by cell renderer implementations 
   * in response to the Gtk::CellEditable::editing-done signal of 
   * Gtk::CellEditable.
   * 
   * @newin{2,6}
   * @param canceled <tt>true</tt> if the editing has been canceled.
   */
  void stop_editing(bool canceled = false);

  /** Returns the property that this CellRenderer renders.
   * For instance, property_text for CellRendererText, and property_active for CellRendererToggle
   * Needs to be overridden in derived classes.
   */
#ifdef GLIBMM_PROPERTIES_ENABLED
  virtual Glib::PropertyProxy_Base _property_renderable();
#else
  virtual Glib::ustring _property_renderable();
#endif

  /** This signal is emitted when the user cancels the process of editing a
   * cell.  For example, an editable cell renderer could be written to cancel
   * editing when the user presses Escape.
   *
   * @see editing_canceled()
   *
   * @par Prototype:
   * <tt>void on_my_%editing_canceled()</tt>
   */

  Glib::SignalProxy0< void > signal_editing_canceled();


  //We use no_default_handler for this, because we can not add a new vfunc to 2.5 without breaking ABI.
  //TODO: Remove no_default_handler when we do an ABI-break-with-parallel-install.
  //TODO: Remove the warning in the documentation when we have fixed the inheritance of CellRendererCombo.
  /** This signal gets emitted when a cell starts to be edited.
   * The indended use of this signal is to do special setup
   * on @a editable, e.g. adding an EntryCompletion or setting
   * up additional columns in a ComboBox.
   *
   * Note that GTK+ doesn't guarantee that cell renderers will
   * continue to use the same kind of widget for editing in future
   * releases, therefore you should check the type of @a editable
   * before doing any specific setup.
   *
   * Note that this signal does not work yet in gtkmm.
   * See http://bugzilla.gnome.org/show_bug.cgi?id=301597
   *
   * @newin{2,6}
   *
   * @param editable the CellEditable.
   * @param path the path identifying the edited cell.
   *
   * @par Prototype:
   * <tt>void on_my_%editing_started(CellEditable* editable, const Glib::ustring& path)</tt>
   */

  Glib::SignalProxy2< void,CellEditable*,const Glib::ustring& > signal_editing_started();


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Editable mode of the CellRenderer.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<CellRendererMode> property_mode() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Editable mode of the CellRenderer.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<CellRendererMode> property_mode() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Display the cell.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_visible() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Display the cell.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_visible() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Display the cell sensitive.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_sensitive() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Display the cell sensitive.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_sensitive() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The x-align.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<float> property_xalign() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The x-align.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<float> property_xalign() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The y-align.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<float> property_yalign() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The y-align.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<float> property_yalign() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The xpad.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<unsigned int> property_xpad() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The xpad.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<unsigned int> property_xpad() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The ypad.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<unsigned int> property_ypad() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The ypad.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<unsigned int> property_ypad() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The fixed width.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<int> property_width() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The fixed width.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<int> property_width() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The fixed height.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<int> property_height() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The fixed height.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<int> property_height() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Row has children.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_is_expander() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Row has children.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_is_expander() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Row is an expander row
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_is_expanded() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Row is an expander row
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_is_expanded() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Cell background color as a string.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_WriteOnly<Glib::ustring> property_cell_background() ;
#endif //#GLIBMM_PROPERTIES_ENABLED


  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Cell background color as a GdkColor.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Gdk::Color> property_cell_background_gdk() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Cell background color as a GdkColor.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Gdk::Color> property_cell_background_gdk() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether this tag affects the cell background color.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_cell_background_set() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether this tag affects the cell background color.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_cell_background_set() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


protected:
  CellRenderer();

  /** Override this in derived CellRenderers.
   *
   * Obtains the width and height needed to render the cell. Used by view widgets
   * to determine the appropriate size for the cell_area passed to
   * render().  If @a cell_area is not 0, fills in the x and y
   * offsets (if set) of the cell relative to this location.  Please note that the
   * values set in @a width and @a height, as well as those in @a x_offset and @a y_offset
   * are inclusive of the xpad and ypad properties.
   *
   * @param widget The widget the renderer is rendering to.
   * @param cell_area The area a cell will be allocated, or 0.
   * @param x_offset x offset of cell relative to @a cell_area.
   * @param y_offset y offset of cell relative to @a cell_area.
   * @param width Width needed to render a cell.
   * @param height Height needed to render a cell.
   **/
  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual void get_size_vfunc(Widget& widget, const Gdk::Rectangle* cell_area, int* x_offset, int* y_offset, int* width, int* height) const;
#endif //GLIBMM_VFUNCS_ENABLED


  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual void render_vfunc(const Glib::RefPtr<Gdk::Drawable>& window, Widget& widget, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, const Gdk::Rectangle& expose_area, CellRendererState flags);
#endif //GLIBMM_VFUNCS_ENABLED


  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool activate_vfunc(GdkEvent* event, Widget& widget, const Glib::ustring& path, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, CellRendererState flags);
#endif //GLIBMM_VFUNCS_ENABLED


  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual CellEditable* start_editing_vfunc(GdkEvent* event, Widget& widget, const Glib::ustring& path, const Gdk::Rectangle& background_area, const Gdk::Rectangle& cell_area, CellRendererState flags);
#endif //GLIBMM_VFUNCS_ENABLED


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
   * @relates Gtk::CellRenderer
   */
  Gtk::CellRenderer* wrap(GtkCellRenderer* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_CELLRENDERER_H */
