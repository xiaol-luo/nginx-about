// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GDKMM_PIXMAP_H
#define _GDKMM_PIXMAP_H


#include <glibmm.h>

/* $Id: pixmap.hg,v 1.5 2004/03/10 01:17:36 murrayc Exp $ */

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

#include <gdkmm/drawable.h>
#include <gdkmm/color.h>
#include <gdkmm/colormap.h>
#include <gdkmm/types.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" {
//Custom stuct prototypes, because they aren't what the code-generator expects:
typedef struct _GdkDrawable GdkPixmap;
typedef struct _GdkPixmapClass GdkPixmapClass;
} // extern "C"
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gdk
{ class Pixmap_Class; } // namespace Gdk
namespace Gdk
{

class Window;

/** Pixmaps are offscreen drawables. They can be drawn upon with the standard drawing primitives, then copied to another
 * drawable (such as a Gdk::Window) with Gdk::Drawable::draw_drawable(). The depth of a pixmap is the number of bits per
 * pixels.
 * Bitmaps are simply pixmaps with a depth of 1. (That is, they are monochrome bitmaps - each pixel can be either on or off).
 */

class Pixmap : public Gdk::Drawable
{
  // GdkPixmap is a typedef to GdkDrawable, but it's actually a GdkPixmapObject.
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Pixmap CppObjectType;
  typedef Pixmap_Class CppClassType;
  typedef GdkPixmap BaseObjectType;
  typedef GdkPixmapObjectClass BaseClassType;

private:  friend class Pixmap_Class;
  static CppClassType pixmap_class_;

private:
  // noncopyable
  Pixmap(const Pixmap&);
  Pixmap& operator=(const Pixmap&);

protected:
  explicit Pixmap(const Glib::ConstructParams& construct_params);
  explicit Pixmap(GdkPixmap* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Pixmap();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GdkPixmap*       gobj()       { return reinterpret_cast<GdkPixmap*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GdkPixmap* gobj() const { return reinterpret_cast<GdkPixmap*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GdkPixmap* gobj_copy();

private:

   // see wrap_new() implementation in pixmap.ccg
  

protected:
  Pixmap();

  Pixmap(const Glib::RefPtr<Drawable>& drawable, int width, int height, int depth = -1);

  /// Initialize a Pixmap from data.
  Pixmap(const Glib::RefPtr<Drawable>& drawable,
         const char* data, int width, int height, int depth,
         const Color& fg, const Color& bg);

  Pixmap(const Glib::RefPtr<Display>& display, NativeWindow anid);

public:

  
  static Glib::RefPtr<Pixmap> create(const Glib::RefPtr<Drawable>& drawable, int width, int height, int depth =  -1);

  
  static Glib::RefPtr<Pixmap> create(const Glib::RefPtr<Drawable>& drawable, const char* data, int width, int height, int depth, const Color& fg, const Color& bg);


  static Glib::RefPtr<Pixmap> create(const Glib::RefPtr<Display>& display, NativeWindow anid);

  
  static Glib::RefPtr<Pixmap> create_from_data(const Glib::RefPtr<const Drawable>& drawable,
                                               const char* data, int width, int height, int depth,
                                               const Color& fg, const Color& bg);

  /// Create a Pixmap from a xpm file.
  static Glib::RefPtr<Pixmap> create_from_xpm(const Glib::RefPtr<const Drawable>& drawable,
                                              const Color& transparent_color,
                                              const std::string& filename);

  // Create a Pixmap from a xpm file.
  static Glib::RefPtr<Pixmap> create_from_xpm(const Glib::RefPtr<const Drawable>& drawable,
                                              Glib::RefPtr<Bitmap>& mask,
                                              const Color& transparent_color,
                                              const std::string& filename);

  /// Create a Pixmap from a xpm file with colormap.
  static Glib::RefPtr<Pixmap> create_from_xpm(const Glib::RefPtr<const Drawable>& drawable,
                                              const Glib::RefPtr<Colormap>& colormap,
                                              Glib::RefPtr<Bitmap>& mask,
                                              const Color& transparent_color,
                                              const std::string& filename);

  static Glib::RefPtr<Pixmap> create_from_xpm(const Glib::RefPtr<const Drawable>& drawable,
                                              Glib::RefPtr<Bitmap>& mask,
                                              const Color& transparent_color,
                                              const char* const* data);

  static Glib::RefPtr<Pixmap> create_from_xpm(const Glib::RefPtr<const Drawable>& drawable,
                                              const Glib::RefPtr<Colormap>& colormap,
                                              Glib::RefPtr<Bitmap>& mask,
                                              const Color& transparent_color,
                                              const char* const* data);

  static Glib::RefPtr<Pixmap> create_from_xpm(const Glib::RefPtr<Colormap>& colormap,
                                              Glib::RefPtr<Bitmap>& mask,
                                              const Color& transparent_color,
                                              const char* const* data);

  static Glib::RefPtr<Pixmap> create_from_xpm(const Glib::RefPtr<Colormap>& colormap,
                                              Glib::RefPtr<Bitmap>& mask,
                                              const char* const* data);


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

} // namespace Gdk


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gdk::Pixmap
   */
  Glib::RefPtr<Gdk::Pixmap> wrap(GdkPixmapObject* object, bool take_copy = false);
}


#endif /* _GDKMM_PIXMAP_H */

