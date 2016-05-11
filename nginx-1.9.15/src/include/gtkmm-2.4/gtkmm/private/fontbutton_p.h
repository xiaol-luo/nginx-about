// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_FONTBUTTON_P_H
#define _GTKMM_FONTBUTTON_P_H


#include <gtkmm/private/button_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class FontButton_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef FontButton CppObjectType;
  typedef GtkFontButton BaseObjectType;
  typedef GtkFontButtonClass BaseClassType;
  typedef Gtk::Button_Class CppClassParent;
  typedef GtkButtonClass BaseClassParent;

  friend class FontButton;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

#ifdef GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED
  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void font_set_callback(GtkFontButton* self);
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED

  //Callbacks (virtual functions):
#ifdef GLIBMM_VFUNCS_ENABLED
#endif //GLIBMM_VFUNCS_ENABLED
};


} // namespace Gtk


#endif /* _GTKMM_FONTBUTTON_P_H */

