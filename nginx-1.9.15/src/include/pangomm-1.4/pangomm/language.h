// -*- c++ -*-
// Generated by gtkmmproc -- DO NOT MODIFY!
#ifndef _PANGOMM_LANGUAGE_H
#define _PANGOMM_LANGUAGE_H


#include <glibmm.h>

/* Copyright (C) 2002 The gtkmm Development Team
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

#include <pango/pango-attributes.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
extern "C" { typedef struct _PangoLanguage PangoLanguage; }
#endif

namespace Pango
{

/** @addtogroup pangommEnums Enums and Flags */

/**
 * @ingroup pangommEnums
 */
enum Script
{
  SCRIPT_INVALID_CODE = -1,
  SCRIPT_COMMON,
  SCRIPT_INHERITED,
  SCRIPT_ARABIC,
  SCRIPT_ARMENIAN,
  SCRIPT_BENGALI,
  SCRIPT_BOPOMOFO,
  SCRIPT_CHEROKEE,
  SCRIPT_COPTIC,
  SCRIPT_CYRILLIC,
  SCRIPT_DESERET,
  SCRIPT_DEVANAGARI,
  SCRIPT_ETHIOPIC,
  SCRIPT_GEORGIAN,
  SCRIPT_GOTHIC,
  SCRIPT_GREEK,
  SCRIPT_GUJARATI,
  SCRIPT_GURMUKHI,
  SCRIPT_HAN,
  SCRIPT_HANGUL,
  SCRIPT_HEBREW,
  SCRIPT_HIRAGANA,
  SCRIPT_KANNADA,
  SCRIPT_KATAKANA,
  SCRIPT_KHMER,
  SCRIPT_LAO,
  SCRIPT_LATIN,
  SCRIPT_MALAYALAM,
  SCRIPT_MONGOLIAN,
  SCRIPT_MYANMAR,
  SCRIPT_OGHAM,
  SCRIPT_OLD_ITALIC,
  SCRIPT_ORIYA,
  SCRIPT_RUNIC,
  SCRIPT_SINHALA,
  SCRIPT_SYRIAC,
  SCRIPT_TAMIL,
  SCRIPT_TELUGU,
  SCRIPT_THAANA,
  SCRIPT_THAI,
  SCRIPT_TIBETAN,
  SCRIPT_CANADIAN_ABORIGINAL,
  SCRIPT_YI,
  SCRIPT_TAGALOG,
  SCRIPT_HANUNOO,
  SCRIPT_BUHID,
  SCRIPT_TAGBANWA,
  SCRIPT_BRAILLE,
  SCRIPT_CYPRIOT,
  SCRIPT_LIMBU,
  SCRIPT_OSMANYA,
  SCRIPT_SHAVIAN,
  SCRIPT_LINEAR_B,
  SCRIPT_TAI_LE,
  SCRIPT_UGARITIC,
  SCRIPT_NEW_TAI_LUE,
  SCRIPT_BUGINESE,
  SCRIPT_GLAGOLITIC,
  SCRIPT_TIFINAGH,
  SCRIPT_SYLOTI_NAGRI,
  SCRIPT_OLD_PERSIAN,
  SCRIPT_KHAROSHTHI,
  SCRIPT_UNKNOWN,
  SCRIPT_BALINESE,
  SCRIPT_CUNEIFORM,
  SCRIPT_PHOENICIAN,
  SCRIPT_PHAGS_PA,
  SCRIPT_NKO,
  SCRIPT_KAYAH_LI,
  SCRIPT_LEPCHA,
  SCRIPT_REJANG,
  SCRIPT_SUNDANESE,
  SCRIPT_SAURASHTRA,
  SCRIPT_CHAM,
  SCRIPT_OL_CHIKI,
  SCRIPT_VAI,
  SCRIPT_CARIAN,
  SCRIPT_LYCIAN,
  SCRIPT_LYDIAN
};

} // namespace Pango


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Pango::Script> : public Glib::Value_Enum<Pango::Script>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Pango
{


/** A Pango::Language is used to represent a language.
 */
class Language
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Language CppObjectType;
  typedef PangoLanguage BaseObjectType;

  static GType get_type() G_GNUC_CONST;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


  explicit Language(PangoLanguage* gobject, bool make_a_copy = true);

  Language(const Language& other);
  Language& operator=(const Language& other);

  ~Language();

  void swap(Language& other);

  ///Provides access to the underlying C instance.
  PangoLanguage*       gobj()       { return gobject_; }

  ///Provides access to the underlying C instance.
  const PangoLanguage* gobj() const { return gobject_; }

  ///Provides access to the underlying C instance. The caller is responsible for freeing it. Use when directly setting fields in structs.
  PangoLanguage* gobj_copy() const;

protected:
  PangoLanguage* gobject_;

private:

   //This function is a bad hack for internal use by renderers and Pango (from pango/pango-utils.c)
   //This is defined as a macro
  

public:
  /** Constructs an empty language tag.
   */
  Language();

  /** Constructs a Pango::Language object from a RFC-3066 format language tag.
   * This function first canonicalizes the string by converting it to lowercase,
   * mapping '_' to '-', and stripping all characters other than letters and '-'.
   */
  Language(const Glib::ustring& language);

  /** Gets a RFC-3066 format string representing the given language tag.
   * @return A string representing the language tag. An empty string is returned if the language tag is empty.
   */
  Glib::ustring get_string() const;

  
  /** Checks if a language tag matches one of the elements in a list of
   * language ranges. A language tag is considered to match a range
   * in the list if the range is '*', the range is exactly the tag,
   * or the range is a prefix of the tag, and the character after it
   * in the tag is '-'.
   * @param range_list A list of language ranges, separated by ';', ':',
   * ',', or space characters.
   * Each element must either be '*', or a RFC 3066 language range
   * canonicalized as by pango_language_from_string().
   * @return <tt>true</tt> if a match was found.
   */
  bool matches(const Glib::ustring & range_list) const;
  
  /** Determines if @a script is one of the scripts used to
   * write @a language. The returned value is conservative;
   * if nothing is known about the language tag @a language,
   * <tt>true</tt> will be returned, since, as far as Pango knows,
   *  @a script might be used to write @a language.
   * 
   * This routine is used in Pango's itemization process when
   * determining if a supplied language tag is relevant to
   * a particular section of text. It probably is not useful for
   * applications in most circumstances.
   * 
   * This function uses pango_language_get_scripts() internally.
   * @param script A Pango::Script.
   * @return <tt>true</tt> if @a script is one of the scripts used
   * to write @a language or if nothing is known about @a language
   * (including the case that @a language is <tt>0</tt>),
   * <tt>false</tt> otherwise.
   *  
   * @newin{1,4}.
   */
  bool includes_script(Script script) const;


 /** Determines the scripts used to to write this language.
   * If nothing is known about the language tag then an empty container is returned.
   * The list of scripts returned starts with the script that the
   * language uses most and continues to the one it uses least.
   *
   * Most languages use only one script for writing, but there are
   * some that use two (Latin and Cyrillic for example), and a few
   * use three (Japanese for example).  Applications should not make
   * any assumptions on the maximum number of scripts returned
   * though, except that it is a small number.
   *
   * @result A container of Script values.
   *
   * @newin{2,14}
   */
  Glib::ArrayHandle<Script> get_scripts() const;
  

};

} /* namespace Pango */


namespace Pango
{

/** @relates Pango::Language
 * @param lhs The left-hand side
 * @param rhs The right-hand side
 */
inline void swap(Language& lhs, Language& rhs)
  { lhs.swap(rhs); }

} // namespace Pango

namespace Glib
{

/** A Glib::wrap() method for this object.
 * 
 * @param object The C instance.
 * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
 * @result A C++ instance that wraps this C instance.
 *
 * @relates Pango::Language
 */
Pango::Language wrap(PangoLanguage* object, bool take_copy = false);

#ifndef DOXYGEN_SHOULD_SKIP_THIS
template <>
class Value<Pango::Language> : public Glib::Value_Boxed<Pango::Language>
{};
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

} // namespace Glib


#endif /* _PANGOMM_LANGUAGE_H */

