#ifndef GCONFMM_VALUE_LISTHELPERS_H
#define GCONFMM_VALUE_LISTHELPERS_H
// -*- Mode: C++; c-basic-offset: 4  -*-

/* value_listhelpers.ccg
 * 
 * Copyright (C) 2000-2002 GConfmm Development Team
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

extern "C" {
    typedef struct _GConfValue GConfValue;
}

namespace Gnome
{
namespace Conf
{

#ifndef DOXYGEN_SHOULD_SKIP_THIS

class Schema;
class Value;

struct ValueTraits 
{
    typedef GConfValue*      CType;
    typedef GConfValue*      CTypeNonConst;

    static CType   to_c_type      (CType          ptr) { return ptr; }
    static void    release_c_type (CType          ptr);    
};

struct ValueSchemaTraits : public ValueTraits
{
    typedef Schema           CppType;
    
    static CType   to_c_type      (const CppType& ptr);
    static CppType to_cpp_type    (CType          ptr);
};
typedef Glib::SListHandle< Schema, ValueSchemaTraits > SListHandle_ValueSchema;

struct ValueStringTraits : public ValueTraits
{
    typedef Glib::ustring CppType;
    
    static CType   to_c_type      (const CppType& ptr);
    static CppType to_cpp_type    (CType          ptr);
};
typedef Glib::SListHandle< Glib::ustring, ValueStringTraits > SListHandle_ValueString;

struct ValueIntTraits : public ValueTraits
{
    typedef int           CppType;
    
    static CType   to_c_type      (const CppType& ptr);
    static CppType to_cpp_type    (CType          ptr);
};
typedef Glib::SListHandle< int, ValueIntTraits > SListHandle_ValueInt;

struct ValueBoolTraits : public ValueTraits
{
    typedef bool          CppType;
    
    static CType   to_c_type      (const CppType& ptr);
    static CppType to_cpp_type    (CType          ptr);
};
typedef Glib::SListHandle< bool, ValueBoolTraits > SListHandle_ValueBool;

struct ValueFloatTraits : public ValueTraits
{
    typedef double        CppType;
    
    static CType   to_c_type      (const CppType& ptr);
    static CppType to_cpp_type    (CType          ptr);
};
typedef Glib::SListHandle< double, ValueFloatTraits > SListHandle_ValueFloat;


} /* namespace Conf */
} /* namespace Gnome */

namespace Glib
{
namespace Container_Helpers
{
template<class Tr,class Cont>
struct ValueSourceTraits {
    static GSList* get_data(const Cont& cont) {
	return Glib::Container_Helpers::create_slist(cont.begin(), cont.end(), Tr());
    }
};

//partial template specializations:
template<class Cont>
struct SListSourceTraits<Gnome::Conf::ValueIntTraits,Cont> : ValueSourceTraits<Gnome::Conf::ValueIntTraits,Cont>{
    static const Glib::OwnershipType initial_ownership = Glib::OWNERSHIP_NONE;
};
template<class Cont>
struct SListSourceTraits<Gnome::Conf::ValueBoolTraits,Cont> : ValueSourceTraits<Gnome::Conf::ValueBoolTraits,Cont>{
    static const Glib::OwnershipType initial_ownership = Glib::OWNERSHIP_NONE;
};
template<class Cont>
struct SListSourceTraits<Gnome::Conf::ValueFloatTraits,Cont> : ValueSourceTraits<Gnome::Conf::ValueFloatTraits,Cont>{
    static const Glib::OwnershipType initial_ownership = Glib::OWNERSHIP_NONE;
};
template<class Cont>
struct SListSourceTraits<Gnome::Conf::ValueStringTraits,Cont> : ValueSourceTraits<Gnome::Conf::ValueStringTraits,Cont>{
    static const Glib::OwnershipType initial_ownership = Glib::OWNERSHIP_NONE;
};
template<class Cont>
struct SListSourceTraits<Gnome::Conf::ValueSchemaTraits,Cont> : ValueSourceTraits<Gnome::Conf::ValueSchemaTraits,Cont>{
    static const Glib::OwnershipType initial_ownership = Glib::OWNERSHIP_NONE;
};

#endif // DOXYGEN_SHOULD_SKIP_THIS

}
}

#endif
