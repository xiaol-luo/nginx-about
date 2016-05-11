// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_TREEDRAGSOURCE_H
#define _GTKMM_TREEDRAGSOURCE_H


#include <glibmm.h>

/* $Id: treedragsource.hg,v 1.8 2006/05/10 20:59:28 murrayc Exp $ */

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

#include <glibmm/interface.h>
#include <gtkmm/treemodel.h>
#include <gtkmm/selectiondata.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C"
{
typedef struct _GtkTreeDragSourceIface GtkTreeDragSourceIface;
typedef struct _GtkSelectionData GtkSelectionData;
}
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkTreeDragSource GtkTreeDragSource;
typedef struct _GtkTreeDragSourceClass GtkTreeDragSourceClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class TreeDragSource_Class; } // namespace Gtk
namespace Gtk
{

/**
 * @ingroup TreeView
*/

class TreeDragSource : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef TreeDragSource CppObjectType;
  typedef TreeDragSource_Class CppClassType;
  typedef GtkTreeDragSource BaseObjectType;
  typedef GtkTreeDragSourceIface BaseClassType;

private:
  friend class TreeDragSource_Class;
  static CppClassType treedragsource_class_;

  // noncopyable
  TreeDragSource(const TreeDragSource&);
  TreeDragSource& operator=(const TreeDragSource&);

protected:
  TreeDragSource(); // you must derive from this class

  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit TreeDragSource(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit TreeDragSource(GtkTreeDragSource* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~TreeDragSource();

  static void add_interface(GType gtype_implementer);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkTreeDragSource*       gobj()       { return reinterpret_cast<GtkTreeDragSource*>(gobject_); }

  ///Provides access to the underlying C GObject.  
  const GtkTreeDragSource* gobj() const { return reinterpret_cast<GtkTreeDragSource*>(gobject_); }

private:


public:
  
  /** Asks the Gtk::TreeDragSource whether a particular row can be used as
   * the source of a DND operation. If the source doesn't implement
   * this interface, the row is assumed draggable.
   * @param path Row on which user is initiating a drag.
   * @return <tt>true</tt> if the row can be dragged.
   */
  bool row_draggable(const TreeModel::Path& path) const;

  
  /** Asks the Gtk::TreeDragSource to fill in @a selection_data with a
   * representation of the row at @a path. @a selection_data->target gives
   * the required type of the data.  Should robustly handle a @a path no
   * longer found in the model!
   * @param path Row that was dragged.
   * @param selection_data A Gtk::SelectionData to fill with data from the dragged row.
   * @return <tt>true</tt> if data of the required type was provided.
   */
  bool drag_data_get(const TreeModel::Path& path, SelectionData& selection_data);
               
  
  /** Asks the Gtk::TreeDragSource to delete the row at @a path, because
   * it was moved somewhere else via drag-and-drop. Returns <tt>false</tt>
   * if the deletion fails because @a path no longer exists, or for
   * some model-specific reason. Should robustly handle a @a path no
   * longer found in the model!
   * @param path Row that was being dragged.
   * @return <tt>true</tt> if the row was successfully deleted.
   */
  bool drag_data_delete(const TreeModel::Path& path);

protected:


  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool row_draggable_vfunc(const TreeModel::Path& path) const;
#endif //GLIBMM_VFUNCS_ENABLED


  //We hand-code this so that we can use a temporary instance for the SelectionData& output parameter:
  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool drag_data_get_vfunc(const TreeModel::Path& path, SelectionData& selection_data) const;
  #endif //GLIBMM_VFUNCS_ENABLED
   
  #ifdef GLIBMM_VFUNCS_ENABLED
  virtual bool drag_data_delete_vfunc(const TreeModel::Path& path);
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

} // namespace Gtk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::TreeDragSource
   */
  Glib::RefPtr<Gtk::TreeDragSource> wrap(GtkTreeDragSource* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKMM_TREEDRAGSOURCE_H */
