// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_RULER_P_H
#define _GTKMM_RULER_P_H


#include <gtkmm/private/widget_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class Ruler_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Ruler CppObjectType;
  typedef GtkRuler BaseObjectType;
  typedef GtkRulerClass BaseClassType;
  typedef Gtk::Widget_Class CppClassParent;
  typedef GtkWidgetClass BaseClassParent;

  friend class Ruler;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

  //Callbacks (virtual functions):
#ifdef GLIBMM_VFUNCS_ENABLED
  static void draw_ticks_vfunc_callback(GtkRuler* self);
  static void draw_pos_vfunc_callback(GtkRuler* self);
#endif //GLIBMM_VFUNCS_ENABLED
};


} // namespace Gtk


#include <glibmm/class.h>

namespace Gtk
{

class VRuler_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef VRuler CppObjectType;
  typedef GtkVRuler BaseObjectType;
  typedef GtkVRulerClass BaseClassType;
  typedef Gtk::Ruler_Class CppClassParent;
  typedef GtkRulerClass BaseClassParent;

  friend class VRuler;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

  //Callbacks (virtual functions):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED
};


} // namespace Gtk


#include <glibmm/class.h>

namespace Gtk
{

class HRuler_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef HRuler CppObjectType;
  typedef GtkHRuler BaseObjectType;
  typedef GtkHRulerClass BaseClassType;
  typedef Gtk::Ruler_Class CppClassParent;
  typedef GtkRulerClass BaseClassParent;

  friend class HRuler;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

  //Callbacks (virtual functions):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED
};


} // namespace Gtk


#endif /* _GTKMM_RULER_P_H */

