
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
*  @file gsiDeclQTimeZone.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QTimeZone>
#include <QDateTime>
#include <QLocale>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QTimeZone
  static bool QTimeZone_operator_eq(const QTimeZone *a, const QTimeZone &b) {
    return *a == b;
  }
  static bool QTimeZone_operator_ne(const QTimeZone *a, const QTimeZone &b) {
    return !(*a == b);
  }

//  Constructor QTimeZone::QTimeZone()


static void _init_ctor_QTimeZone_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QTimeZone> ();
}

static void _call_ctor_QTimeZone_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTimeZone *> (new QTimeZone ());
}


//  Constructor QTimeZone::QTimeZone(const QByteArray &ianaId)


static void _init_ctor_QTimeZone_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ianaId");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return_new<QTimeZone> ();
}

static void _call_ctor_QTimeZone_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QTimeZone *> (new QTimeZone (arg1));
}


//  Constructor QTimeZone::QTimeZone(int offsetSeconds)


static void _init_ctor_QTimeZone_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offsetSeconds");
  decl->add_arg<int > (argspec_0);
  decl->set_return_new<QTimeZone> ();
}

static void _call_ctor_QTimeZone_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QTimeZone *> (new QTimeZone (arg1));
}


//  Constructor QTimeZone::QTimeZone(const QByteArray &zoneId, int offsetSeconds, const QString &name, const QString &abbreviation, QLocale::Territory territory, const QString &comment)


static void _init_ctor_QTimeZone_10816 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("zoneId");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("offsetSeconds");
  decl->add_arg<int > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("name");
  decl->add_arg<const QString & > (argspec_2);
  static gsi::ArgSpecBase argspec_3 ("abbreviation");
  decl->add_arg<const QString & > (argspec_3);
  static gsi::ArgSpecBase argspec_4 ("territory", true, "QLocale::AnyTerritory");
  decl->add_arg<QLocale::Territory > (argspec_4);
  static gsi::ArgSpecBase argspec_5 ("comment", true, "QString()");
  decl->add_arg<const QString & > (argspec_5);
  decl->set_return_new<QTimeZone> ();
}

static void _call_ctor_QTimeZone_10816 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  int arg2 = gsi::arg_reader<int >() (args, heap);
  const QString &arg3 = gsi::arg_reader<const QString & >() (args, heap);
  const QString &arg4 = gsi::arg_reader<const QString & >() (args, heap);
  QLocale::Territory arg5 = args ? gsi::arg_reader<QLocale::Territory >() (args, heap) : gsi::arg_maker<QLocale::Territory >() (QLocale::AnyTerritory, heap);
  const QString &arg6 = args ? gsi::arg_reader<const QString & >() (args, heap) : gsi::arg_maker<const QString & >() (QString(), heap);
  ret.write<QTimeZone *> (new QTimeZone (arg1, arg2, arg3, arg4, arg5, arg6));
}


//  Constructor QTimeZone::QTimeZone(const QTimeZone &other)


static void _init_ctor_QTimeZone_2205 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTimeZone & > (argspec_0);
  decl->set_return_new<QTimeZone> ();
}

static void _call_ctor_QTimeZone_2205 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTimeZone &arg1 = gsi::arg_reader<const QTimeZone & >() (args, heap);
  ret.write<QTimeZone *> (new QTimeZone (arg1));
}


// QString QTimeZone::abbreviation(const QDateTime &atDateTime)


static void _init_f_abbreviation_c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("atDateTime");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<QString > ();
}

static void _call_f_abbreviation_c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  ret.write<QString > ((QString)((QTimeZone *)cls)->abbreviation (arg1));
}


// QString QTimeZone::comment()


static void _init_f_comment_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_comment_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QTimeZone *)cls)->comment ());
}


// QLocale::Country QTimeZone::country()


static void _init_f_country_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<qt_gsi::Converter<QLocale::Country>::target_type > ();
}

static void _call_f_country_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<qt_gsi::Converter<QLocale::Country>::target_type > ((qt_gsi::Converter<QLocale::Country>::target_type)qt_gsi::CppToQtAdaptor<QLocale::Country>(((QTimeZone *)cls)->country ()));
}


// int QTimeZone::daylightTimeOffset(const QDateTime &atDateTime)


static void _init_f_daylightTimeOffset_c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("atDateTime");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_daylightTimeOffset_c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  ret.write<int > ((int)((QTimeZone *)cls)->daylightTimeOffset (arg1));
}


// QString QTimeZone::displayName(const QDateTime &atDateTime, QTimeZone::NameType nameType, const QLocale &locale)


static void _init_f_displayName_c6192 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("atDateTime");
  decl->add_arg<const QDateTime & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("nameType", true, "QTimeZone::DefaultName");
  decl->add_arg<const qt_gsi::Converter<QTimeZone::NameType>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("locale", true, "QLocale()");
  decl->add_arg<const QLocale & > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_displayName_c6192 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  const qt_gsi::Converter<QTimeZone::NameType>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QTimeZone::NameType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QTimeZone::NameType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QTimeZone::NameType>(heap, QTimeZone::DefaultName), heap);
  const QLocale &arg3 = args ? gsi::arg_reader<const QLocale & >() (args, heap) : gsi::arg_maker<const QLocale & >() (QLocale(), heap);
  ret.write<QString > ((QString)((QTimeZone *)cls)->displayName (arg1, qt_gsi::QtToCppAdaptor<QTimeZone::NameType>(arg2).cref(), arg3));
}


// QString QTimeZone::displayName(QTimeZone::TimeType timeType, QTimeZone::NameType nameType, const QLocale &locale)


static void _init_f_displayName_c6278 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("timeType");
  decl->add_arg<const qt_gsi::Converter<QTimeZone::TimeType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("nameType", true, "QTimeZone::DefaultName");
  decl->add_arg<const qt_gsi::Converter<QTimeZone::NameType>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("locale", true, "QLocale()");
  decl->add_arg<const QLocale & > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_displayName_c6278 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QTimeZone::TimeType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QTimeZone::TimeType>::target_type & >() (args, heap);
  const qt_gsi::Converter<QTimeZone::NameType>::target_type & arg2 = args ? gsi::arg_reader<const qt_gsi::Converter<QTimeZone::NameType>::target_type & >() (args, heap) : gsi::arg_maker<const qt_gsi::Converter<QTimeZone::NameType>::target_type & >() (qt_gsi::CppToQtReadAdaptor<QTimeZone::NameType>(heap, QTimeZone::DefaultName), heap);
  const QLocale &arg3 = args ? gsi::arg_reader<const QLocale & >() (args, heap) : gsi::arg_maker<const QLocale & >() (QLocale(), heap);
  ret.write<QString > ((QString)((QTimeZone *)cls)->displayName (qt_gsi::QtToCppAdaptor<QTimeZone::TimeType>(arg1).cref(), qt_gsi::QtToCppAdaptor<QTimeZone::NameType>(arg2).cref(), arg3));
}


// bool QTimeZone::hasDaylightTime()


static void _init_f_hasDaylightTime_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasDaylightTime_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTimeZone *)cls)->hasDaylightTime ());
}


// bool QTimeZone::hasTransitions()


static void _init_f_hasTransitions_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_hasTransitions_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTimeZone *)cls)->hasTransitions ());
}


// QByteArray QTimeZone::id()


static void _init_f_id_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_id_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)((QTimeZone *)cls)->id ());
}


// bool QTimeZone::isDaylightTime(const QDateTime &atDateTime)


static void _init_f_isDaylightTime_c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("atDateTime");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isDaylightTime_c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  ret.write<bool > ((bool)((QTimeZone *)cls)->isDaylightTime (arg1));
}


// bool QTimeZone::isValid()


static void _init_f_isValid_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isValid_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QTimeZone *)cls)->isValid ());
}


// QTimeZone::OffsetData QTimeZone::nextTransition(const QDateTime &afterDateTime)


static void _init_f_nextTransition_c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("afterDateTime");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<QTimeZone::OffsetData > ();
}

static void _call_f_nextTransition_c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  ret.write<QTimeZone::OffsetData > ((QTimeZone::OffsetData)((QTimeZone *)cls)->nextTransition (arg1));
}


// QTimeZone::OffsetData QTimeZone::offsetData(const QDateTime &forDateTime)


static void _init_f_offsetData_c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("forDateTime");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<QTimeZone::OffsetData > ();
}

static void _call_f_offsetData_c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  ret.write<QTimeZone::OffsetData > ((QTimeZone::OffsetData)((QTimeZone *)cls)->offsetData (arg1));
}


// int QTimeZone::offsetFromUtc(const QDateTime &atDateTime)


static void _init_f_offsetFromUtc_c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("atDateTime");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_offsetFromUtc_c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  ret.write<int > ((int)((QTimeZone *)cls)->offsetFromUtc (arg1));
}


// QTimeZone &QTimeZone::operator=(const QTimeZone &other)


static void _init_f_operator_eq__2205 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QTimeZone & > (argspec_0);
  decl->set_return<QTimeZone & > ();
}

static void _call_f_operator_eq__2205 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QTimeZone &arg1 = gsi::arg_reader<const QTimeZone & >() (args, heap);
  ret.write<QTimeZone & > ((QTimeZone &)((QTimeZone *)cls)->operator= (arg1));
}


// QTimeZone::OffsetData QTimeZone::previousTransition(const QDateTime &beforeDateTime)


static void _init_f_previousTransition_c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("beforeDateTime");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<QTimeZone::OffsetData > ();
}

static void _call_f_previousTransition_c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  ret.write<QTimeZone::OffsetData > ((QTimeZone::OffsetData)((QTimeZone *)cls)->previousTransition (arg1));
}


// int QTimeZone::standardTimeOffset(const QDateTime &atDateTime)


static void _init_f_standardTimeOffset_c2175 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("atDateTime");
  decl->add_arg<const QDateTime & > (argspec_0);
  decl->set_return<int > ();
}

static void _call_f_standardTimeOffset_c2175 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  ret.write<int > ((int)((QTimeZone *)cls)->standardTimeOffset (arg1));
}


// void QTimeZone::swap(QTimeZone &other)


static void _init_f_swap_1510 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<QTimeZone & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_swap_1510 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimeZone &arg1 = gsi::arg_reader<QTimeZone & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QTimeZone *)cls)->swap (arg1);
}


// QLocale::Territory QTimeZone::territory()


static void _init_f_territory_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QLocale::Territory > ();
}

static void _call_f_territory_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QLocale::Territory > ((QLocale::Territory)((QTimeZone *)cls)->territory ());
}


// QList<QTimeZone::OffsetData> QTimeZone::transitions(const QDateTime &fromDateTime, const QDateTime &toDateTime)


static void _init_f_transitions_c4242 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fromDateTime");
  decl->add_arg<const QDateTime & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("toDateTime");
  decl->add_arg<const QDateTime & > (argspec_1);
  decl->set_return<QList<QTimeZone::OffsetData> > ();
}

static void _call_f_transitions_c4242 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QDateTime &arg1 = gsi::arg_reader<const QDateTime & >() (args, heap);
  const QDateTime &arg2 = gsi::arg_reader<const QDateTime & >() (args, heap);
  ret.write<QList<QTimeZone::OffsetData> > ((QList<QTimeZone::OffsetData>)((QTimeZone *)cls)->transitions (arg1, arg2));
}


// static QList<QByteArray> QTimeZone::availableTimeZoneIds()


static void _init_f_availableTimeZoneIds_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_availableTimeZoneIds_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)QTimeZone::availableTimeZoneIds ());
}


// static QList<QByteArray> QTimeZone::availableTimeZoneIds(QLocale::Territory territory)


static void _init_f_availableTimeZoneIds_2205 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("territory");
  decl->add_arg<QLocale::Territory > (argspec_0);
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_availableTimeZoneIds_2205 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QLocale::Territory arg1 = gsi::arg_reader<QLocale::Territory >() (args, heap);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)QTimeZone::availableTimeZoneIds (arg1));
}


// static QList<QByteArray> QTimeZone::availableTimeZoneIds(int offsetSeconds)


static void _init_f_availableTimeZoneIds_767 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("offsetSeconds");
  decl->add_arg<int > (argspec_0);
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_availableTimeZoneIds_767 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  int arg1 = gsi::arg_reader<int >() (args, heap);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)QTimeZone::availableTimeZoneIds (arg1));
}


// static QByteArray QTimeZone::ianaIdToWindowsId(const QByteArray &ianaId)


static void _init_f_ianaIdToWindowsId_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ianaId");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_ianaIdToWindowsId_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QByteArray > ((QByteArray)QTimeZone::ianaIdToWindowsId (arg1));
}


// static bool QTimeZone::isTimeZoneIdAvailable(const QByteArray &ianaId)


static void _init_f_isTimeZoneIdAvailable_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("ianaId");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_f_isTimeZoneIdAvailable_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<bool > ((bool)QTimeZone::isTimeZoneIdAvailable (arg1));
}


// static QTimeZone QTimeZone::systemTimeZone()


static void _init_f_systemTimeZone_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QTimeZone > ();
}

static void _call_f_systemTimeZone_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTimeZone > ((QTimeZone)QTimeZone::systemTimeZone ());
}


// static QByteArray QTimeZone::systemTimeZoneId()


static void _init_f_systemTimeZoneId_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QByteArray > ();
}

static void _call_f_systemTimeZoneId_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QByteArray > ((QByteArray)QTimeZone::systemTimeZoneId ());
}


// static QTimeZone QTimeZone::utc()


static void _init_f_utc_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QTimeZone > ();
}

static void _call_f_utc_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QTimeZone > ((QTimeZone)QTimeZone::utc ());
}


// static QByteArray QTimeZone::windowsIdToDefaultIanaId(const QByteArray &windowsId)


static void _init_f_windowsIdToDefaultIanaId_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("windowsId");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QByteArray > ();
}

static void _call_f_windowsIdToDefaultIanaId_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QByteArray > ((QByteArray)QTimeZone::windowsIdToDefaultIanaId (arg1));
}


// static QByteArray QTimeZone::windowsIdToDefaultIanaId(const QByteArray &windowsId, QLocale::Territory territory)


static void _init_f_windowsIdToDefaultIanaId_4406 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("windowsId");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("territory");
  decl->add_arg<QLocale::Territory > (argspec_1);
  decl->set_return<QByteArray > ();
}

static void _call_f_windowsIdToDefaultIanaId_4406 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  QLocale::Territory arg2 = gsi::arg_reader<QLocale::Territory >() (args, heap);
  ret.write<QByteArray > ((QByteArray)QTimeZone::windowsIdToDefaultIanaId (arg1, arg2));
}


// static QList<QByteArray> QTimeZone::windowsIdToIanaIds(const QByteArray &windowsId)


static void _init_f_windowsIdToIanaIds_2309 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("windowsId");
  decl->add_arg<const QByteArray & > (argspec_0);
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_windowsIdToIanaIds_2309 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)QTimeZone::windowsIdToIanaIds (arg1));
}


// static QList<QByteArray> QTimeZone::windowsIdToIanaIds(const QByteArray &windowsId, QLocale::Territory territory)


static void _init_f_windowsIdToIanaIds_4406 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("windowsId");
  decl->add_arg<const QByteArray & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("territory");
  decl->add_arg<QLocale::Territory > (argspec_1);
  decl->set_return<QList<QByteArray> > ();
}

static void _call_f_windowsIdToIanaIds_4406 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QByteArray &arg1 = gsi::arg_reader<const QByteArray & >() (args, heap);
  QLocale::Territory arg2 = gsi::arg_reader<QLocale::Territory >() (args, heap);
  ret.write<QList<QByteArray> > ((QList<QByteArray>)QTimeZone::windowsIdToIanaIds (arg1, arg2));
}



namespace gsi
{

static gsi::Methods methods_QTimeZone () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTimeZone::QTimeZone()\nThis method creates an object of class QTimeZone.", &_init_ctor_QTimeZone_0, &_call_ctor_QTimeZone_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTimeZone::QTimeZone(const QByteArray &ianaId)\nThis method creates an object of class QTimeZone.", &_init_ctor_QTimeZone_2309, &_call_ctor_QTimeZone_2309);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTimeZone::QTimeZone(int offsetSeconds)\nThis method creates an object of class QTimeZone.", &_init_ctor_QTimeZone_767, &_call_ctor_QTimeZone_767);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTimeZone::QTimeZone(const QByteArray &zoneId, int offsetSeconds, const QString &name, const QString &abbreviation, QLocale::Territory territory, const QString &comment)\nThis method creates an object of class QTimeZone.", &_init_ctor_QTimeZone_10816, &_call_ctor_QTimeZone_10816);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QTimeZone::QTimeZone(const QTimeZone &other)\nThis method creates an object of class QTimeZone.", &_init_ctor_QTimeZone_2205, &_call_ctor_QTimeZone_2205);
  methods += new qt_gsi::GenericMethod ("abbreviation", "@brief Method QString QTimeZone::abbreviation(const QDateTime &atDateTime)\n", true, &_init_f_abbreviation_c2175, &_call_f_abbreviation_c2175);
  methods += new qt_gsi::GenericMethod ("comment", "@brief Method QString QTimeZone::comment()\n", true, &_init_f_comment_c0, &_call_f_comment_c0);
  methods += new qt_gsi::GenericMethod ("country", "@brief Method QLocale::Country QTimeZone::country()\n", true, &_init_f_country_c0, &_call_f_country_c0);
  methods += new qt_gsi::GenericMethod ("daylightTimeOffset", "@brief Method int QTimeZone::daylightTimeOffset(const QDateTime &atDateTime)\n", true, &_init_f_daylightTimeOffset_c2175, &_call_f_daylightTimeOffset_c2175);
  methods += new qt_gsi::GenericMethod ("displayName", "@brief Method QString QTimeZone::displayName(const QDateTime &atDateTime, QTimeZone::NameType nameType, const QLocale &locale)\n", true, &_init_f_displayName_c6192, &_call_f_displayName_c6192);
  methods += new qt_gsi::GenericMethod ("displayName", "@brief Method QString QTimeZone::displayName(QTimeZone::TimeType timeType, QTimeZone::NameType nameType, const QLocale &locale)\n", true, &_init_f_displayName_c6278, &_call_f_displayName_c6278);
  methods += new qt_gsi::GenericMethod ("hasDaylightTime", "@brief Method bool QTimeZone::hasDaylightTime()\n", true, &_init_f_hasDaylightTime_c0, &_call_f_hasDaylightTime_c0);
  methods += new qt_gsi::GenericMethod ("hasTransitions", "@brief Method bool QTimeZone::hasTransitions()\n", true, &_init_f_hasTransitions_c0, &_call_f_hasTransitions_c0);
  methods += new qt_gsi::GenericMethod ("id", "@brief Method QByteArray QTimeZone::id()\n", true, &_init_f_id_c0, &_call_f_id_c0);
  methods += new qt_gsi::GenericMethod ("isDaylightTime?", "@brief Method bool QTimeZone::isDaylightTime(const QDateTime &atDateTime)\n", true, &_init_f_isDaylightTime_c2175, &_call_f_isDaylightTime_c2175);
  methods += new qt_gsi::GenericMethod ("isValid?", "@brief Method bool QTimeZone::isValid()\n", true, &_init_f_isValid_c0, &_call_f_isValid_c0);
  methods += new qt_gsi::GenericMethod ("nextTransition", "@brief Method QTimeZone::OffsetData QTimeZone::nextTransition(const QDateTime &afterDateTime)\n", true, &_init_f_nextTransition_c2175, &_call_f_nextTransition_c2175);
  methods += new qt_gsi::GenericMethod ("offsetData", "@brief Method QTimeZone::OffsetData QTimeZone::offsetData(const QDateTime &forDateTime)\n", true, &_init_f_offsetData_c2175, &_call_f_offsetData_c2175);
  methods += new qt_gsi::GenericMethod ("offsetFromUtc", "@brief Method int QTimeZone::offsetFromUtc(const QDateTime &atDateTime)\n", true, &_init_f_offsetFromUtc_c2175, &_call_f_offsetFromUtc_c2175);
  methods += new qt_gsi::GenericMethod ("assign", "@brief Method QTimeZone &QTimeZone::operator=(const QTimeZone &other)\n", false, &_init_f_operator_eq__2205, &_call_f_operator_eq__2205);
  methods += new qt_gsi::GenericMethod ("previousTransition", "@brief Method QTimeZone::OffsetData QTimeZone::previousTransition(const QDateTime &beforeDateTime)\n", true, &_init_f_previousTransition_c2175, &_call_f_previousTransition_c2175);
  methods += new qt_gsi::GenericMethod ("standardTimeOffset", "@brief Method int QTimeZone::standardTimeOffset(const QDateTime &atDateTime)\n", true, &_init_f_standardTimeOffset_c2175, &_call_f_standardTimeOffset_c2175);
  methods += new qt_gsi::GenericMethod ("swap", "@brief Method void QTimeZone::swap(QTimeZone &other)\n", false, &_init_f_swap_1510, &_call_f_swap_1510);
  methods += new qt_gsi::GenericMethod ("territory", "@brief Method QLocale::Territory QTimeZone::territory()\n", true, &_init_f_territory_c0, &_call_f_territory_c0);
  methods += new qt_gsi::GenericMethod ("transitions", "@brief Method QList<QTimeZone::OffsetData> QTimeZone::transitions(const QDateTime &fromDateTime, const QDateTime &toDateTime)\n", true, &_init_f_transitions_c4242, &_call_f_transitions_c4242);
  methods += new qt_gsi::GenericStaticMethod ("availableTimeZoneIds", "@brief Static method QList<QByteArray> QTimeZone::availableTimeZoneIds()\nThis method is static and can be called without an instance.", &_init_f_availableTimeZoneIds_0, &_call_f_availableTimeZoneIds_0);
  methods += new qt_gsi::GenericStaticMethod ("availableTimeZoneIds", "@brief Static method QList<QByteArray> QTimeZone::availableTimeZoneIds(QLocale::Territory territory)\nThis method is static and can be called without an instance.", &_init_f_availableTimeZoneIds_2205, &_call_f_availableTimeZoneIds_2205);
  methods += new qt_gsi::GenericStaticMethod ("availableTimeZoneIds", "@brief Static method QList<QByteArray> QTimeZone::availableTimeZoneIds(int offsetSeconds)\nThis method is static and can be called without an instance.", &_init_f_availableTimeZoneIds_767, &_call_f_availableTimeZoneIds_767);
  methods += new qt_gsi::GenericStaticMethod ("ianaIdToWindowsId", "@brief Static method QByteArray QTimeZone::ianaIdToWindowsId(const QByteArray &ianaId)\nThis method is static and can be called without an instance.", &_init_f_ianaIdToWindowsId_2309, &_call_f_ianaIdToWindowsId_2309);
  methods += new qt_gsi::GenericStaticMethod ("isTimeZoneIdAvailable?", "@brief Static method bool QTimeZone::isTimeZoneIdAvailable(const QByteArray &ianaId)\nThis method is static and can be called without an instance.", &_init_f_isTimeZoneIdAvailable_2309, &_call_f_isTimeZoneIdAvailable_2309);
  methods += new qt_gsi::GenericStaticMethod ("systemTimeZone", "@brief Static method QTimeZone QTimeZone::systemTimeZone()\nThis method is static and can be called without an instance.", &_init_f_systemTimeZone_0, &_call_f_systemTimeZone_0);
  methods += new qt_gsi::GenericStaticMethod ("systemTimeZoneId", "@brief Static method QByteArray QTimeZone::systemTimeZoneId()\nThis method is static and can be called without an instance.", &_init_f_systemTimeZoneId_0, &_call_f_systemTimeZoneId_0);
  methods += new qt_gsi::GenericStaticMethod ("utc", "@brief Static method QTimeZone QTimeZone::utc()\nThis method is static and can be called without an instance.", &_init_f_utc_0, &_call_f_utc_0);
  methods += new qt_gsi::GenericStaticMethod ("windowsIdToDefaultIanaId", "@brief Static method QByteArray QTimeZone::windowsIdToDefaultIanaId(const QByteArray &windowsId)\nThis method is static and can be called without an instance.", &_init_f_windowsIdToDefaultIanaId_2309, &_call_f_windowsIdToDefaultIanaId_2309);
  methods += new qt_gsi::GenericStaticMethod ("windowsIdToDefaultIanaId", "@brief Static method QByteArray QTimeZone::windowsIdToDefaultIanaId(const QByteArray &windowsId, QLocale::Territory territory)\nThis method is static and can be called without an instance.", &_init_f_windowsIdToDefaultIanaId_4406, &_call_f_windowsIdToDefaultIanaId_4406);
  methods += new qt_gsi::GenericStaticMethod ("windowsIdToIanaIds", "@brief Static method QList<QByteArray> QTimeZone::windowsIdToIanaIds(const QByteArray &windowsId)\nThis method is static and can be called without an instance.", &_init_f_windowsIdToIanaIds_2309, &_call_f_windowsIdToIanaIds_2309);
  methods += new qt_gsi::GenericStaticMethod ("windowsIdToIanaIds", "@brief Static method QList<QByteArray> QTimeZone::windowsIdToIanaIds(const QByteArray &windowsId, QLocale::Territory territory)\nThis method is static and can be called without an instance.", &_init_f_windowsIdToIanaIds_4406, &_call_f_windowsIdToIanaIds_4406);
  return methods;
}

gsi::Class<QTimeZone> decl_QTimeZone ("QtCore", "QTimeZone",
  gsi::method_ext("==", &QTimeZone_operator_eq, gsi::arg ("other"), "@brief Method bool QTimeZone::operator==(const QTimeZone &) const") +
  gsi::method_ext("!=", &QTimeZone_operator_ne, gsi::arg ("other"), "@brief Method bool QTimeZone::operator!=(const QTimeZone &) const") 
+
  methods_QTimeZone (),
  "@qt\n@brief Binding of QTimeZone");


GSI_QTCORE_PUBLIC gsi::Class<QTimeZone> &qtdecl_QTimeZone () { return decl_QTimeZone; }

}


//  Implementation of the enum wrapper class for QTimeZone::NameType
namespace qt_gsi
{

static gsi::Enum<QTimeZone::NameType> decl_QTimeZone_NameType_Enum ("QtCore", "QTimeZone_NameType",
    gsi::enum_const ("DefaultName", QTimeZone::DefaultName, "@brief Enum constant QTimeZone::DefaultName") +
    gsi::enum_const ("LongName", QTimeZone::LongName, "@brief Enum constant QTimeZone::LongName") +
    gsi::enum_const ("ShortName", QTimeZone::ShortName, "@brief Enum constant QTimeZone::ShortName") +
    gsi::enum_const ("OffsetName", QTimeZone::OffsetName, "@brief Enum constant QTimeZone::OffsetName"),
  "@qt\n@brief This class represents the QTimeZone::NameType enum");

static gsi::QFlagsClass<QTimeZone::NameType > decl_QTimeZone_NameType_Enums ("QtCore", "QTimeZone_QFlags_NameType",
  "@qt\n@brief This class represents the QFlags<QTimeZone::NameType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTimeZone> inject_QTimeZone_NameType_Enum_in_parent (decl_QTimeZone_NameType_Enum.defs ());
static gsi::ClassExt<QTimeZone> decl_QTimeZone_NameType_Enum_as_child (decl_QTimeZone_NameType_Enum, "NameType");
static gsi::ClassExt<QTimeZone> decl_QTimeZone_NameType_Enums_as_child (decl_QTimeZone_NameType_Enums, "QFlags_NameType");

}


//  Implementation of the enum wrapper class for QTimeZone::TimeType
namespace qt_gsi
{

static gsi::Enum<QTimeZone::TimeType> decl_QTimeZone_TimeType_Enum ("QtCore", "QTimeZone_TimeType",
    gsi::enum_const ("StandardTime", QTimeZone::StandardTime, "@brief Enum constant QTimeZone::StandardTime") +
    gsi::enum_const ("DaylightTime", QTimeZone::DaylightTime, "@brief Enum constant QTimeZone::DaylightTime") +
    gsi::enum_const ("GenericTime", QTimeZone::GenericTime, "@brief Enum constant QTimeZone::GenericTime"),
  "@qt\n@brief This class represents the QTimeZone::TimeType enum");

static gsi::QFlagsClass<QTimeZone::TimeType > decl_QTimeZone_TimeType_Enums ("QtCore", "QTimeZone_QFlags_TimeType",
  "@qt\n@brief This class represents the QFlags<QTimeZone::TimeType> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QTimeZone> inject_QTimeZone_TimeType_Enum_in_parent (decl_QTimeZone_TimeType_Enum.defs ());
static gsi::ClassExt<QTimeZone> decl_QTimeZone_TimeType_Enum_as_child (decl_QTimeZone_TimeType_Enum, "TimeType");
static gsi::ClassExt<QTimeZone> decl_QTimeZone_TimeType_Enums_as_child (decl_QTimeZone_TimeType_Enums, "QFlags_TimeType");

}

