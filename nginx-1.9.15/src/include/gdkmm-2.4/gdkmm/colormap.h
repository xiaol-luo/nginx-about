// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GDKMM_COLORMAP_H
#define _GDKMM_COLORMAP_H

#include <gdkmmconfig.h>


#include <glibmm.h>

/* $Id: colormap.hg,v 1.7 2006/04/12 11:11:24 murrayc Exp $ */

/* box.h
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

// This is for including the config header before any code (such as
// the #ifndef GDKMM_DISABLE_DEPRECATED in deprecated classes) is generated:


#include <glibmm/object.h>
#include <gdkmm/visual.h>
#include <gdkmm/color.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GdkColormap GdkColormap;
typedef struct _GdkColormapClass GdkColormapClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gdk
{ class Colormap_Class; } // namespace Gdk
namespace Gdk
{

/** A Colormap is an object that contains the mapping between the color values stored in memory and the RGB values that are
 * used to display color values. In general, colormaps only contain significant information for pseudo-color visuals, but
 * even for other visual types, a colormap object is required in some circumstances.
 *
 * There are a couple of special colormaps that can be retrieved. The system colormap (retrieved with get_system()) is the
 * default colormap of the system. If you are using GdkRGB, there is another colormap that is important - the colormap in
 * which GdkRGB works, retrieved with Gdk::rgb_get_colormap(). However, when using GdkRGB, it is not generally necessary to
 * allocate colors directly.
 */

class Colormap : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef Colormap CppObjectType;
  typedef Colormap_Class CppClassType;
  typedef GdkColormap BaseObjectType;
  typedef GdkColormapClass BaseClassType;

private:  friend class Colormap_Class;
  static CppClassType colormap_class_;

private:
  // noncopyable
  Colormap(const Colormap&);
  Colormap& operator=(const Colormap&);

protected:
  explicit Colormap(const Glib::ConstructParams& construct_params);
  explicit Colormap(GdkColormap* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
  virtual ~Colormap();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GdkColormap*       gobj()       { return reinterpret_cast<GdkColormap*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GdkColormap* gobj() const { return reinterpret_cast<GdkColormap*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GdkColormap* gobj_copy();

private:

  
protected:
  explicit Colormap(const Glib::RefPtr<Visual>& visual, bool allocate);

public:

  
  static Glib::RefPtr<Colormap> create(const Glib::RefPtr<Visual>& visual, bool allocate);


  /** Gets the system's default colormap for the default screen. (See
   * gdk_colormap_get_system_for_screen())
   * @return The default colormap.
   */
  static Glib::RefPtr<Colormap> get_system();

  //_WRAP_METHOD(void change(int ncolors), gdk_colormap_change)

  #ifndef GDKMM_DISABLE_DEPRECATED

  ///@deprecated Use alloc_color().
  int alloc_colors(ArrayHandle_Color& colors, int ncolors, bool writeable, bool best_match, Glib::ArrayHandle<bool>& success);
  

  ///@deprecated Use free_color()
  void free_colors(Color& colors, int ncolors);
  
  #endif // GDKMM_DISABLE_DEPRECATED


  /** Allocates a single color from a colormap.
   * @param color The color to allocate. On return the
   * <structfield>pixel</structfield> field will be
   * filled in if allocation succeeds.
   * @param writeable If <tt>true</tt>, the color is allocated writeable
   * (their values can later be changed using gdk_color_change()).
   * Writeable colors cannot be shared between applications.
   * @param best_match If <tt>true</tt>, GDK will attempt to do matching against
   * existing colors if the color cannot be allocated as requested.
   * @return <tt>true</tt> if the allocation succeeded.
   */
  bool alloc_color(Color& color, bool writeable = false, bool best_match = true);
  void free_color(Color& color);

  
  /** Locates the RGB color in @a colormap corresponding to the given
   * hardware pixel @a pixel. @a pixel must be a valid pixel in the
   * colormap; it's a programmer error to call this function with a
   * pixel which is not in the colormap. Hardware pixels are normally
   * obtained from alloc_colors(), or from a Gdk::Image. (A
   * Gdk::Image contains image data in hardware format, a Gdk::Pixbuf
   * contains image data in a canonical 24-bit RGB format.)
   * 
   * This function is rarely useful; it's used for example to
   * implement the eyedropper feature in Gtk::ColorSelection.
   * @param pixel Pixel value in hardware display format.
   * @param result Gdk::Color with red, green, blue fields initialized.
   */
  void query_color (gulong pixel, Color& result);

  
  /** Return value: the visual of the colormap.
   * @return The visual of the colormap.
   */
  Glib::RefPtr<Visual> get_visual();
  
  /** Return value: the visual of the colormap.
   * @return The visual of the colormap.
   */
  Glib::RefPtr<const Visual> get_visual() const;
  
  
  /** Gets the screen for which this colormap was created.
   * @return The screen for which this colormap was created.
   * 
   * @newin{2,2}.
   */
  Glib::RefPtr<Screen> get_screen();
  
  /** Gets the screen for which this colormap was created.
   * @return The screen for which this colormap was created.
   * 
   * @newin{2,2}.
   */
  Glib::RefPtr<const Screen> get_screen() const;
  

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

} /* namespace Gdk */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gdk::Colormap
   */
  Glib::RefPtr<Gdk::Colormap> wrap(GdkColormap* object, bool take_copy = false);
}


#endif /* _GDKMM_COLORMAP_H */

