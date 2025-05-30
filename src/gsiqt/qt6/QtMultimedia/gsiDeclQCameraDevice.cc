
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2025 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/**
*  @file gsiDeclQCameraDevice.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCameraDevice>
#include <QCameraFormat>
#include <QSize>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCameraDevice

//  Constructor QCameraDevice::QCameraDevice()


static void _init_ctor_QCameraDevice_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCameraDevice> ();
}

static void _call_ctor_QCameraDevice_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCameraDevice *> (new QCameraDevice ());
}


//  Constructor QCameraDevice::QCameraDevice(const QCameraDevice &other)


static void _init_ctor_QCameraDevice_2571 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraDevice & > (argspec_0);
  decl->set_return_new<QCameraDevice> ();
}

static void _call_ctor_QCameraDevice_2571 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraDevice &arg1 = gsi::arg_reader<const QCameraDevice & >() (args, heap);
  ret.write<QCameraDevice *> (new QCameraDevice (arg1));
}


// QString QCameraDevice::description()


static void _init_f_description_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_description_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QCameraDevice *)cls)->description ());
}


// QByteArray QCameraDevice::id()


static void _init_f_id_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_id_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QCameraDevice *)cls)->id ());
}


// bool QCameraDevice::isDefault()


static void _init_f_isDefault_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isDefault_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QCameraDevice *)cls)->isDefault ());
}


// bool QCameraDevice::isNull()


static void _init_f_isNull_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isNull_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QCameraDevice *)cls)->isNull ());
}


// bool QCameraDevice::operator!=(const QCameraDevice &other)


static void _init_f_operator_excl__eq__c2571 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraDevice & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_excl__eq__c2571 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraDevice &arg1 = gsi::arg_reader<const QCameraDevice & >() (args, heap);
  ret.write<bool > ((bool)((QCameraDevice *)cls)->operator!= (arg1));
}


// QCameraDevice &QCameraDevice::operator=(const QCameraDevice &other)


static void _init_f_operator_eq__2571 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraDevice & > (argspec_0);
  decl->set_return<QCameraDevice & > ();
}

static void _call_f_operator_eq__2571 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraDevice &arg1 = gsi::arg_reader<const QCameraDevice & >() (args, heap);
  ret.write<QCameraDevice & > ((QCameraDevice &)((QCameraDevice *)cls)->operator= (arg1));
}


// bool QCameraDevice::operator==(const QCameraDevice &other)


static void _init_f_operator_eq__eq__c2571 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QCameraDevice & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_operator_eq__eq__c2571 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QCameraDevice &arg1 = gsi::arg_reader<const QCameraDevice & >() (args, heap);
  ret.write<bool > ((bool)((QCameraDevice *)cls)->operator== (arg1));
}


// QList<QSize> QCameraDevice::photoResolutions()


static void _init_f_photoResolutions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QSize> > ();
}

static void _call_f_photoResolutions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QSize> > ((QList<QSize>)((QCameraDevice *)cls)->photoResolutions ());
}


// QCameraDevice::Position QCameraDevice::position()


static void _init_f_position_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QCameraDevice::Position>::target_type > ();
}

static void _call_f_position_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QCameraDevice::Position>::target_type > ((qt_gsi::Converter<QCameraDevice::Position>::target_type)qt_gsi::CppToQtAdaptor<QCameraDevice::Position>(((QCameraDevice *)cls)->position ()));
}


// QList<QCameraFormat> QCameraDevice::videoFormats()


static void _init_f_videoFormats_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QList<QCameraFormat> > ();
}

static void _call_f_videoFormats_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QCameraFormat> > ((QList<QCameraFormat>)((QCameraDevice *)cls)->videoFormats ());
}



namespace gsi
{

static gsi::Methods methods_QCameraDevice () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCameraDevice::QCameraDevice()\nThis method creates an object of class QCameraDevice.", &_init_ctor_QCameraDevice_0, &_call_ctor_QCameraDevice_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCameraDevice::QCameraDevice(const QCameraDevice &other)\nThis method creates an object of class QCameraDevice.", &_init_ctor_QCameraDevice_2571, &_call_ctor_QCameraDevice_2571);
  methods += new qt_gsi::GenericMethod ("description", "@brief Method QString QCameraDevice::description()\n", true, &_init_f_description_c0, &_call_f_description_c0);
  methods += new qt_gsi::GenericMethod ("id", "@brief Method QByteArray QCameraDevice::id()\n", true, &_init_f_id_c0, &_call_f_id_c0);
  methods += new qt_gsi::GenericMethod ("isDefault?", "@brief Method bool QCameraDevice::isDefault()\n", true, &_init_f_isDefault_c0, &_call_f_isDefault_c0);
  methods += new qt_gsi::GenericMethod ("isNull?", "@brief Method bool QCameraDevice::isNull()\n", true, &_init_f_isNull_c0, &_call_f_isNull_c0);
  methods += new qt_gsi::GenericMethod ("!=", "@brief Method bool QCameraDevice::operator!=(const QCameraDevice &other)\n", true, &_init_f_operator_excl__eq__c2571, &_call_f_operator_excl__eq__c2571);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QCameraDevice &QCameraDevice::operator=(const QCameraDevice &other)\n", false, &_init_f_operator_eq__2571, &_call_f_operator_eq__2571);
  methods += new qt_gsi::GenericMethod ("==", "@brief Method bool QCameraDevice::operator==(const QCameraDevice &other)\n", true, &_init_f_operator_eq__eq__c2571, &_call_f_operator_eq__eq__c2571);
  methods += new qt_gsi::GenericMethod ("photoResolutions", "@brief Method QList<QSize> QCameraDevice::photoResolutions()\n", true, &_init_f_photoResolutions_c0, &_call_f_photoResolutions_c0);
  methods += new qt_gsi::GenericMethod ("position", "@brief Method QCameraDevice::Position QCameraDevice::position()\n", true, &_init_f_position_c0, &_call_f_position_c0);
  methods += new qt_gsi::GenericMethod ("videoFormats", "@brief Method QList<QCameraFormat> QCameraDevice::videoFormats()\n", true, &_init_f_videoFormats_c0, &_call_f_videoFormats_c0);
  return methods;
}

gsi::Class<QCameraDevice> decl_QCameraDevice ("QtMultimedia", "QCameraDevice",
  methods_QCameraDevice (),
  "@qt\n@brief Binding of QCameraDevice");


GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QCameraDevice> &qtdecl_QCameraDevice () { return decl_QCameraDevice; }

}


//  Implementation of the enum wrapper class for QCameraDevice::Position
namespace qt_gsi
{

static gsi::Enum<QCameraDevice::Position> decl_QCameraDevice_Position_Enum ("QtMultimedia", "QCameraDevice_Position",
    gsi::enum_const ("UnspecifiedPosition", QCameraDevice::UnspecifiedPosition, "@brief Enum constant QCameraDevice::UnspecifiedPosition") +
    gsi::enum_const ("BackFace", QCameraDevice::BackFace, "@brief Enum constant QCameraDevice::BackFace") +
    gsi::enum_const ("FrontFace", QCameraDevice::FrontFace, "@brief Enum constant QCameraDevice::FrontFace"),
  "@qt\n@brief This class represents the QCameraDevice::Position enum");

static gsi::QFlagsClass<QCameraDevice::Position > decl_QCameraDevice_Position_Enums ("QtMultimedia", "QCameraDevice_QFlags_Position",
  "@qt\n@brief This class represents the QFlags<QCameraDevice::Position> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QCameraDevice> inject_QCameraDevice_Position_Enum_in_parent (decl_QCameraDevice_Position_Enum.defs ());
static gsi::ClassExt<QCameraDevice> decl_QCameraDevice_Position_Enum_as_child (decl_QCameraDevice_Position_Enum, "Position");
static gsi::ClassExt<QCameraDevice> decl_QCameraDevice_Position_Enums_as_child (decl_QCameraDevice_Position_Enums, "QFlags_Position");

}

