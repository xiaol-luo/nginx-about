// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GDKMM_PIXBUFLOADER_P_H
#define _GDKMM_PIXBUFLOADER_P_H


#include <glibmm/private/object_p.h>

#include <glibmm/class.h>

namespace Gdk
{

class PixbufLoader_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef PixbufLoader CppObjectType;
  typedef GdkPixbufLoader BaseObjectType;
  typedef GdkPixbufLoaderClass BaseClassType;
  typedef Glib::Object_Class CppClassParent;
  typedef GObjectClass BaseClassParent;

  friend class PixbufLoader;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void area_prepared_callback(GdkPixbufLoader* self);
  static void area_updated_callback(GdkPixbufLoader* self, gint p0, gint p1, gint p2, gint p3);
  static void closed_callback(GdkPixbufLoader* self);
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

  //Callbacks (virtual functions):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED
};


} // namespace Gdk


#endif /* _GDKMM_PIXBUFLOADER_P_H */

