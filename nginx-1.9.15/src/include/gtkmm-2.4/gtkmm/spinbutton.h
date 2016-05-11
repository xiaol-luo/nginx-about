// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _GTKMM_SPINBUTTON_H
#define _GTKMM_SPINBUTTON_H


#include <glibmm.h>

/* $Id: spinbutton.hg,v 1.4 2006/07/19 15:35:02 murrayc Exp $ */

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

#include <gtkmm/entry.h>
#include <gtkmm/editable.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSpinButton GtkSpinButton;
typedef struct _GtkSpinButtonClass GtkSpinButtonClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{ class SpinButton_Class; } // namespace Gtk
namespace Gtk
{


/** @addtogroup gtkmmEnums Enums and Flags */

/**
 * @ingroup gtkmmEnums
 */
enum SpinButtonUpdatePolicy
{
  UPDATE_ALWAYS,
  UPDATE_IF_VALID
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::SpinButtonUpdatePolicy> : public Glib::Value_Enum<Gtk::SpinButtonUpdatePolicy>
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
enum SpinType
{
  SPIN_STEP_FORWARD,
  SPIN_STEP_BACKWARD,
  SPIN_PAGE_FORWARD,
  SPIN_PAGE_BACKWARD,
  SPIN_HOME,
  SPIN_END,
  SPIN_USER_DEFINED
};

} // namespace Gtk


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gtk::SpinType> : public Glib::Value_Enum<Gtk::SpinType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gtk
{


/** @ingroup gtkmmEnums */
enum { INPUT_ERROR = -1 };

class Adjustment;

/** numeric Entry with up/down buttons
 * Slightly misnamed, this should be called a SpinEntry.
 *
 * The SpinButton widget looks like this:
 * @image html spinbutton1.png
 *
 * @ingroup Widgets
 */

class SpinButton : public Entry
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef SpinButton CppObjectType;
  typedef SpinButton_Class CppClassType;
  typedef GtkSpinButton BaseObjectType;
  typedef GtkSpinButtonClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  virtual ~SpinButton();

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class SpinButton_Class;
  static CppClassType spinbutton_class_;

  // noncopyable
  SpinButton(const SpinButton&);
  SpinButton& operator=(const SpinButton&);

protected:
  explicit SpinButton(const Glib::ConstructParams& construct_params);
  explicit SpinButton(GtkSpinButton* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_type()      G_GNUC_CONST;


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkSpinButton*       gobj()       { return reinterpret_cast<GtkSpinButton*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkSpinButton* gobj() const { return reinterpret_cast<GtkSpinButton*>(gobject_); }


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
  virtual int on_input(double* new_value);
  virtual bool on_output();
  virtual void on_value_changed();
#endif //GLIBMM_DEFAULT_SIGNAL_HANDLERS_ENABLED


private:

  
public:

  //: create instance
  // adjustment: see Gtk::Adjustment
  // climb_rate:
  // digits: number of decimal digits (has to be < 6)
  SpinButton(double climb_rate = 0.0, guint digits = 0);
  explicit SpinButton(Adjustment& adjustment, double climb_rate = 0.0, guint digits = 0);


  void configure(Adjustment& adjustment, double climb_rate, guint digits);

  
  /** Replaces the Gtk::Adjustment associated with @a spin_button.
   * @param adjustment A Gtk::Adjustment to replace the existing adjustment.
   */
  void set_adjustment(Adjustment& adjustment);
  void unset_adjustment();
  
  /** Get the adjustment associated with a Gtk::SpinButton
   * @return The Gtk::Adjustment of @a spin_button.
   */
  Gtk::Adjustment* get_adjustment();
  
  /** Get the adjustment associated with a Gtk::SpinButton
   * @return The Gtk::Adjustment of @a spin_button.
   */
  const Gtk::Adjustment* get_adjustment() const;

  
  /** Set the precision to be displayed by @a spin_button. Up to 20 digit precision
   * is allowed.
   * @param digits The number of digits after the decimal point to be displayed for the spin button's value.
   */
  void set_digits(guint digits);
  
  /** Fetches the precision of @a spin_button. See set_digits().
   * @return The current precision.
   */
  guint get_digits() const;

  
  /** Sets the step and page increments for spin_button.  This affects how 
   * quickly the value changes when the spin button's arrows are activated.
   * @param step Increment applied for a button 1 press.
   * @param page Increment applied for a button 2 press.
   */
  void set_increments(double step, double page);
  
  /** Gets the current step and page the increments used by @a spin_button. See
   * set_increments().
   * @param step Location to store step increment, or <tt>0</tt>.
   * @param page Location to store page increment, or <tt>0</tt>.
   */
  void get_increments(double& step, double& page) const;

  
  /** Sets the minimum and maximum allowable values for @a spin_button
   * @param min Minimum allowable value.
   * @param max Maximum allowable value.
   */
  void set_range(double min, double max);
  
  /** Gets the range allowed for @a spin_button. See
   * set_range().
   * @param min Location to store minimum allowed value, or <tt>0</tt>.
   * @param max Location to store maximum allowed value, or <tt>0</tt>.
   */
  void get_range(double& min, double& max) const;

  
  /** Get the value in the @a spin_button.
   * @return The value of @a spin_button.
   */
  double get_value() const;
  
  /** Get the value @a spin_button represented as an integer.
   * @return The value of @a spin_button.
   */
  int get_value_as_int() const;
  
  /** Set the value of @a spin_button.
   * @param value The new value.
   */
  void set_value(double value);

  
  /** Sets the update behavior of a spin button. This determines whether the
   * spin button is always updated or only when a valid value is set.
   * @param policy A Gtk::SpinButtonUpdatePolicy value.
   */
  void set_update_policy(SpinButtonUpdatePolicy policy);
  
  /** Gets the update behavior of a spin button. See
   * set_update_policy().
   * @return The current update policy.
   */
  SpinButtonUpdatePolicy get_update_policy() const;

  
  /** Sets the flag that determines if non-numeric text can be typed into
   * the spin button.
   * @param numeric Flag indicating if only numeric entry is allowed.
   */
  void set_numeric(bool numeric = true);
  
  /** Return value: <tt>true</tt> if only numeric text can be entered
   * @return <tt>true</tt> if only numeric text can be entered.
   */
  bool get_numeric() const;

  
  /** Increment or decrement a spin button's value in a specified direction
   * by a specified amount.
   * @param direction A Gtk::SpinType indicating the direction to spin.
   * @param increment Step increment to apply in the specified direction.
   */
  void spin(SpinType direction, double increment);

  
  /** Sets the flag that determines if a spin button value wraps around to the
   * opposite limit when the upper or lower limit of the range is exceeded.
   * @param wrap A flag indicating if wrapping behavior is performed.
   */
  void set_wrap(bool wrap = true);
  
  /** Return value: <tt>true</tt> if the spin button wraps around
   * @return <tt>true</tt> if the spin button wraps around.
   */
  bool get_wrap() const;

  
  /** Sets the policy as to whether values are corrected to the nearest step 
   * increment when a spin button is activated after providing an invalid value.
   * @param snap_to_ticks A flag indicating if invalid values should be corrected.
   */
  void set_snap_to_ticks(bool snap_to_ticks = true);
  
  /** Return value: <tt>true</tt> if values are snapped to the nearest step.
   * @return <tt>true</tt> if values are snapped to the nearest step.
   */
  bool get_snap_to_ticks() const;

  
  /** Manually force an update of the spin button.
   */
  void update();

  /** Convert the Entry text to a number.
   * The computed number should be written to <tt>*new_value</tt>.
   * @return
   * @li <tt>false</tt>: No conversion done, continue with default handler.
   * @li <tt>true</tt>: Conversion successful, don't call default handler.
   * @li <tt>Gtk::INPUT_ERROR</tt>: Conversion failed, don't call default handler.
   *
   * @par Prototype:
   * <tt>int on_my_%input(double* new_value)</tt>
   */

  Glib::SignalProxy1< int,double* > signal_input();


  /** Convert the Adjustment position to text.
   * The computed text should be written via Gtk::Entry::set_text().
   * @return
   * @li <tt>false</tt>: No conversion done, continue with default handler.
   * @li <tt>true</tt>: Conversion successful, don't call default handler.
   *
   * @par Prototype:
   * <tt>bool on_my_%output()</tt>
   */

  Glib::SignalProxy0< bool > signal_output();


  /**
   * @par Prototype:
   * <tt>bool on_my_%wrapped()</tt>
   */

  Glib::SignalProxy0< bool > signal_wrapped();


  /**
   * @par Prototype:
   * <tt>void on_my_%value_changed()</tt>
   */

  Glib::SignalProxy0< void > signal_value_changed();


  //Keybinding signals:
  

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The adjustment that holds the value of the spinbutton.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<Gtk::Adjustment*> property_adjustment() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The adjustment that holds the value of the spinbutton.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<Gtk::Adjustment*> property_adjustment() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The acceleration rate when you hold down a button.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<double> property_climb_rate() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The acceleration rate when you hold down a button.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<double> property_climb_rate() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** The number of decimal places to display.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<guint> property_digits() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** The number of decimal places to display.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<guint> property_digits() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether erroneous values are automatically changed to a spin button's nearest step increment.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_snap_to_ticks() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether erroneous values are automatically changed to a spin button's nearest step increment.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_snap_to_ticks() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether non-numeric characters should be ignored.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_numeric() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether non-numeric characters should be ignored.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_numeric() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether a spin button should wrap upon reaching its limits.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<bool> property_wrap() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether a spin button should wrap upon reaching its limits.
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<bool> property_wrap() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the spin button should update always
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<SpinButtonUpdatePolicy> property_update_policy() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Whether the spin button should update always
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<SpinButtonUpdatePolicy> property_update_policy() const;
#endif //#GLIBMM_PROPERTIES_ENABLED

  #ifdef GLIBMM_PROPERTIES_ENABLED
/** Reads the current value
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy<double> property_value() ;
#endif //#GLIBMM_PROPERTIES_ENABLED

#ifdef GLIBMM_PROPERTIES_ENABLED
/** Reads the current value
   *
   * You rarely need to use properties because there are get_ and set_ methods for almost all of them.
   * @return A PropertyProxy that allows you to get or set the property of the value, or receive notification when
   * the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly<double> property_value() const;
#endif //#GLIBMM_PROPERTIES_ENABLED


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
   * @relates Gtk::SpinButton
   */
  Gtk::SpinButton* wrap(GtkSpinButton* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKMM_SPINBUTTON_H */

