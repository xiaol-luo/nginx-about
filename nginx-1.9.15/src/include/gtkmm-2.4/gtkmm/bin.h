// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_BIN_H
#define _GTKMM_BIN_H


#include <glibmm.h>

/* $Id: bin.hg,v 1.2 2003/03/03 07:49:05 murrayc Exp $ */

/* bin.h
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

#include <gtkmm/container.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkBin GtkBin;
typedef struct _GtkBinClass GtkBinClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class Bin_Class; } // namespace Gtk
namespace Gtk
{

/** A container with just one child.
 *
 * This is an abstract base class from which all classes holding
 * up to 1 widget inside of them derive.  It provides access to methods
 * relevent to a single object, such as add_label, add_pixmap, etc.
 *
 * @ingroup Widgets
 */

class Bin : public Container
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Bin CppObjectType;
  typedef Bin_Class CppClassType;
  typedef GtkBin BaseObjectType;
  typedef GtkBinClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~Bin();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class Bin_Class;
  static CppClassType bin_class_;

  // noncopyable
  Bin(const Bin&);
  Bin& operator=(const Bin&);

protected:
  explicit Bin(const Glib::ConstructParams& construct_params);
  explicit Bin(GtkBin* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkBin*       gobj()       { return reinterpret_cast<GtkBin*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkBin* gobj() const { return reinterpret_cast<GtkBin*>(gobject_); }


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

protected:

  /** This constructor is protected because only derived 
   * classes should be instantiated.
   */
  Bin();
public:
  

  // get_child() is a convenience function to get a c++ wrapper of
  // the contained widget. It may return NULL if such an item is not
  // available.
   Widget* get_child();
  const Widget* get_child() const;
 
  /** Remove the contained object
   * Since this can only hold one object it is not necessary to
   * specify which object to remove like other containers.
   *
   * When calling remove() on a Gtk::ScrolledWindow this might not remove the
   * expected child directly, because Gtk::ScrolledWindow::add() sometimes creates a
   * Gtk::ViewPort child and places the widget in that.
   */
  void remove();

  //Convenience methods that don't correspond to GTK+ functions:

  /** Add a Label object.
   * This does not correspond to any GTK+ function and is provided purely for
   * convenience.
   * @param label The text for the label.
   * @param mnemonic If <tt>true</tt>, characters preceded by an underscore 
   * (_) will be underlined and used as a keyboard accelerator (shortcut).
   * @param x_align The horizontal alignment of the text.  This ranges from 
   * 0.0 (left aligned) to 1.0 (right aligned).
   * @param y_align The vertical alignment of the text.  This ranges from 
   * 0.0 (top aligned) to 1.0 (bottom aligned).
   */
  void add_label(const Glib::ustring& label, bool mnemonic = false,
		 double x_align = 0.5, double y_align = 0.5);

  /** Add a Label object.
   * This does not correspond to any GTK+ function and is provided purely for
   * convenience.
   * @param label The label text.
   * @param mnemonic If <tt>true</tt>, characters preceded by an underscore
   * (_) will be underlined and used as a keyboard accelerator (shortcut).
   * @param x_align The horizontal alignment of the text.  For possible 
   * values, see Gtk::AlignmentEnum.
   * @param y_align The vertical alignment of the text.  For possible 
   * values, see Gtk::AlignmentEnum.
   */
  void add_label(const Glib::ustring& label, bool mnemonic,
		 AlignmentEnum x_align, AlignmentEnum y_align = ALIGN_CENTER);

  /** Add an Image object.
   * This does not correspond to any GTK+ function and is provided purely for
   * convenience.
   * This will create, manage, add, and show a new Image to this Bin.
   * @param pixmap A Glib::RefPtr to a Gdk::Pixmap.
   * @param mask A Glib::RefPtr to a Gdk::Bitmap.
   */
  void add_pixmap(const Glib::RefPtr<Gdk::Pixmap>& pixmap,
		  const Glib::RefPtr<Gdk::Bitmap>& mask);

  /** Add Image and Label objects.
   * This does not correspond to any GTK+ function and is provided purely for
   * convenience.
   * This will create, manage, add, and show a new Image and Label (within an 
   * HBox) to this Bin.
   * @param pixmap A Glib::RefPtr to a Gdk::Pixmap.
   * @param mask A Glib::RefPtr to a Gdk::Bitmap.
   * @param label The text for the label.
   * @param x_align The horizontal alignment of the text in the label.
   * @param y_align The vertical alignment of the text in the label.
   */
  void add_pixlabel(const Glib::RefPtr<Gdk::Pixmap>& pixmap,
                    const Glib::RefPtr<Gdk::Bitmap>& mask,
                    const Glib::ustring& label,
		                double x_align = 0.5, double y_align = 0.5);

  /** Add Image and Label objects.
   * This does not correspond to any GTK+ function and is provided purely for
   * convenience.
   * This will create, manage, add, and show a new Image and Label (within an 
   * HBox) to this Bin.
   * @param pixfile The path to a file to be displayed.
   * @param label The text for the label.
   * @param x_align The horizontal alignment of the text in the label.
   * @param y_align The vertical alignment of the text in the label.
   */
  void add_pixlabel(const Glib::ustring& pixfile,
                    const Glib::ustring& label,
		                double x_align = 0.5, double y_align = 0.5);


};

}  /* namespace Gtk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gtk::Bin
   */
  Gtk::Bin* wrap(GtkBin* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_BIN_H */

