// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_RECENTACTION_P_H
#define _GTKMM_RECENTACTION_P_H


#include <gtkmm/private/action_p.h>

#include <glibmm/class.h>

namespace Gtk
{

class RecentAction_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef RecentAction CppObjectType;
  typedef GtkRecentAction BaseObjectType;
  typedef GtkRecentActionClass BaseClassType;
  typedef Gtk::Action_Class CppClassParent;
  typedef GtkActionClass BaseClassParent;

  friend class RecentAction;
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


#endif /* _GTKMM_RECENTACTION_P_H */
