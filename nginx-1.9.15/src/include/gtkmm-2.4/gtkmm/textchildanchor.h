// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_TEXTCHILDANCHOR_H
#define _GTKMM_TEXTCHILDANCHOR_H


#include <glibmm.h>

/* $Id: textchildanchor.hg,v 1.3 2006/03/22 16:53:22 murrayc Exp $ */

/* textchildanchor.h
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


#include <gtkmm/object.h>
#include <gtkmm/widget.h>
#include <glibmm/listhandle.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkTextChildAnchor GtkTextChildAnchor;
typedef struct _GtkTextChildAnchorClass GtkTextChildAnchorClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class TextChildAnchor_Class; } // namespace Gtk
namespace Gtk
{

/** A TextChildAnchor is a spot in the buffer where child widgets can be "anchored" 
 * (inserted inline, as if they were characters). The anchor can have multiple widgets anchored, 
 * to allow for multiple views.
 *
 * Typedefed as Gtk::TextBuffer::ChildAnchor.
 * @ingroup TextView
 */

class TextChildAnchor : public Glib::Object
{
   
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef TextChildAnchor CppObjectType;
  typedef TextChildAnchor_Class CppClassType;
  typedef GtkTextChildAnchor BaseObjectType;
  typedef GtkTextChildAnchorClass BaseClassType;

private:  friend class TextChildAnchor_Class;
  static CppClassType textchildanchor_class_;

private:
  // noncopyable
  TextChildAnchor(const TextChildAnchor&);
  TextChildAnchor& operator=(const TextChildAnchor&);

protected:
  explicit TextChildAnchor(const Glib::ConstructParams& construct_params);
  explicit TextChildAnchor(GtkTextChildAnchor* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~TextChildAnchor();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkTextChildAnchor*       gobj()       { return reinterpret_cast<GtkTextChildAnchor*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkTextChildAnchor* gobj() const { return reinterpret_cast<GtkTextChildAnchor*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkTextChildAnchor* gobj_copy();

private:

protected:
  TextChildAnchor();

public:
  
  static Glib::RefPtr<TextChildAnchor> create();


  /** Gets a list of all widgets anchored at this child anchor.
   * @return List of widgets anchored at @a anchor.
   */
  Glib::ListHandle<Widget*> get_widgets();
  
  /** Gets a list of all widgets anchored at this child anchor.
   * @return List of widgets anchored at @a anchor.
   */
  Glib::ListHandle<const Widget*> get_widgets() const;
  
  /** Determines whether a child anchor has been deleted from
   * the buffer. Keep in mind that the child anchor will be
   * unreferenced when removed from the buffer, so you need to
   * hold your own reference (with Glib::object_ref()) if you plan
   * to use this function — otherwise all deleted child anchors
   * will also be finalized.
   * @return <tt>true</tt> if the child anchor has been deleted from its buffer.
   */
  bool get_deleted() const;

  //These methods, and GtkTextLayout are semi-private:
  
  //_WRAP_METHOD(void Register_child(TextLayout& layout), gtk_text_child_anchor_register_child)
  //_WRAP_METHOD(void unregister_child(Widget& child), gtk_text_child_anchor_unregister_child)
  //_WRAP_METHOD(void queue_resize(TextLayout& layout), gtk_text_child_anchor_queue_resize)


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

} /* namespace Gtk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::TextChildAnchor
   */
  Glib::RefPtr<Gtk::TextChildAnchor> wrap(GtkTextChildAnchor* object, bool take_copy = false);
}


#endif /* _GTKMM_TEXTCHILDANCHOR_H */

