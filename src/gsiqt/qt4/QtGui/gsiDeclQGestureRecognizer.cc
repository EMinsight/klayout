
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
*  @file gsiDeclQGestureRecognizer.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QGestureRecognizer>
#include <QEvent>
#include <QGesture>
#include <QObject>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QGestureRecognizer

// QGesture *QGestureRecognizer::create(QObject *target)


static void _init_f_create_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("target");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<QGesture * > ();
}

static void _call_f_create_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = gsi::arg_reader<QObject * >() (args, heap);
  ret.write<QGesture * > ((QGesture *)((QGestureRecognizer *)cls)->create (arg1));
}


// QFlags<QGestureRecognizer::ResultFlag> QGestureRecognizer::recognize(QGesture *state, QObject *watched, QEvent *event)


static void _init_f_recognize_3741 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("state");
  decl->add_arg<QGesture * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("watched");
  decl->add_arg<QObject * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("event");
  decl->add_arg<QEvent * > (argspec_2);
  decl->set_return<QFlags<QGestureRecognizer::ResultFlag> > ();
}

static void _call_f_recognize_3741 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGesture *arg1 = gsi::arg_reader<QGesture * >() (args, heap);
  QObject *arg2 = gsi::arg_reader<QObject * >() (args, heap);
  QEvent *arg3 = gsi::arg_reader<QEvent * >() (args, heap);
  ret.write<QFlags<QGestureRecognizer::ResultFlag> > ((QFlags<QGestureRecognizer::ResultFlag>)((QGestureRecognizer *)cls)->recognize (arg1, arg2, arg3));
}


// void QGestureRecognizer::reset(QGesture *state)


static void _init_f_reset_1438 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("state");
  decl->add_arg<QGesture * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_reset_1438 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGesture *arg1 = gsi::arg_reader<QGesture * >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGestureRecognizer *)cls)->reset (arg1);
}


// static Qt::GestureType QGestureRecognizer::registerRecognizer(QGestureRecognizer *recognizer)


static void _init_f_registerRecognizer_2486 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("recognizer");
  decl->add_arg<QGestureRecognizer * > (argspec_0);
  decl->set_return<qt_gsi::Converter<Qt::GestureType>::target_type > ();
}

static void _call_f_registerRecognizer_2486 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGestureRecognizer *arg1 = gsi::arg_reader<QGestureRecognizer * >() (args, heap);
  ret.write<qt_gsi::Converter<Qt::GestureType>::target_type > ((qt_gsi::Converter<Qt::GestureType>::target_type)qt_gsi::CppToQtAdaptor<Qt::GestureType>(QGestureRecognizer::registerRecognizer (arg1)));
}


// static void QGestureRecognizer::unregisterRecognizer(Qt::GestureType type)


static void _init_f_unregisterRecognizer_1902 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<Qt::GestureType>::target_type & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_unregisterRecognizer_1902 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<Qt::GestureType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<Qt::GestureType>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  QGestureRecognizer::unregisterRecognizer (qt_gsi::QtToCppAdaptor<Qt::GestureType>(arg1).cref());
}


namespace gsi
{

static gsi::Methods methods_QGestureRecognizer () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Method QGesture *QGestureRecognizer::create(QObject *target)\n", false, &_init_f_create_1302, &_call_f_create_1302);
  methods += new qt_gsi::GenericMethod ("recognize", "@brief Method QFlags<QGestureRecognizer::ResultFlag> QGestureRecognizer::recognize(QGesture *state, QObject *watched, QEvent *event)\n", false, &_init_f_recognize_3741, &_call_f_recognize_3741);
  methods += new qt_gsi::GenericMethod ("reset", "@brief Method void QGestureRecognizer::reset(QGesture *state)\n", false, &_init_f_reset_1438, &_call_f_reset_1438);
  methods += new qt_gsi::GenericStaticMethod ("registerRecognizer", "@brief Static method Qt::GestureType QGestureRecognizer::registerRecognizer(QGestureRecognizer *recognizer)\nThis method is static and can be called without an instance.", &_init_f_registerRecognizer_2486, &_call_f_registerRecognizer_2486);
  methods += new qt_gsi::GenericStaticMethod ("unregisterRecognizer", "@brief Static method void QGestureRecognizer::unregisterRecognizer(Qt::GestureType type)\nThis method is static and can be called without an instance.", &_init_f_unregisterRecognizer_1902, &_call_f_unregisterRecognizer_1902);
  return methods;
}

gsi::Class<QGestureRecognizer> decl_QGestureRecognizer ("QtGui", "QGestureRecognizer_Native",
  methods_QGestureRecognizer (),
  "@hide\n@alias QGestureRecognizer");

GSI_QTGUI_PUBLIC gsi::Class<QGestureRecognizer> &qtdecl_QGestureRecognizer () { return decl_QGestureRecognizer; }

}


class QGestureRecognizer_Adaptor : public QGestureRecognizer, public qt_gsi::QtObjectBase
{
public:

  virtual ~QGestureRecognizer_Adaptor();

  //  [adaptor ctor] QGestureRecognizer::QGestureRecognizer()
  QGestureRecognizer_Adaptor() : QGestureRecognizer()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor impl] QGesture *QGestureRecognizer::create(QObject *target)
  QGesture * cbs_create_1302_0(QObject *target)
  {
    return QGestureRecognizer::create(target);
  }

  virtual QGesture * create(QObject *target)
  {
    if (cb_create_1302_0.can_issue()) {
      return cb_create_1302_0.issue<QGestureRecognizer_Adaptor, QGesture *, QObject *>(&QGestureRecognizer_Adaptor::cbs_create_1302_0, target);
    } else {
      return QGestureRecognizer::create(target);
    }
  }

  //  [adaptor impl] QFlags<QGestureRecognizer::ResultFlag> QGestureRecognizer::recognize(QGesture *state, QObject *watched, QEvent *event)
  QFlags<QGestureRecognizer::ResultFlag> cbs_recognize_3741_0(QGesture *state, QObject *watched, QEvent *event)
  {
    __SUPPRESS_UNUSED_WARNING (state);
    __SUPPRESS_UNUSED_WARNING (watched);
    __SUPPRESS_UNUSED_WARNING (event);
    throw qt_gsi::AbstractMethodCalledException("recognize");
  }

  virtual QFlags<QGestureRecognizer::ResultFlag> recognize(QGesture *state, QObject *watched, QEvent *event)
  {
    if (cb_recognize_3741_0.can_issue()) {
      return cb_recognize_3741_0.issue<QGestureRecognizer_Adaptor, QFlags<QGestureRecognizer::ResultFlag>, QGesture *, QObject *, QEvent *>(&QGestureRecognizer_Adaptor::cbs_recognize_3741_0, state, watched, event);
    } else {
      throw qt_gsi::AbstractMethodCalledException("recognize");
    }
  }

  //  [adaptor impl] void QGestureRecognizer::reset(QGesture *state)
  void cbs_reset_1438_0(QGesture *state)
  {
    QGestureRecognizer::reset(state);
  }

  virtual void reset(QGesture *state)
  {
    if (cb_reset_1438_0.can_issue()) {
      cb_reset_1438_0.issue<QGestureRecognizer_Adaptor, QGesture *>(&QGestureRecognizer_Adaptor::cbs_reset_1438_0, state);
    } else {
      QGestureRecognizer::reset(state);
    }
  }

  gsi::Callback cb_create_1302_0;
  gsi::Callback cb_recognize_3741_0;
  gsi::Callback cb_reset_1438_0;
};

QGestureRecognizer_Adaptor::~QGestureRecognizer_Adaptor() { }

//  Constructor QGestureRecognizer::QGestureRecognizer() (adaptor class)

static void _init_ctor_QGestureRecognizer_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QGestureRecognizer_Adaptor> ();
}

static void _call_ctor_QGestureRecognizer_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QGestureRecognizer_Adaptor *> (new QGestureRecognizer_Adaptor ());
}


// QGesture *QGestureRecognizer::create(QObject *target)

static void _init_cbs_create_1302_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("target");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<QGesture * > ();
}

static void _call_cbs_create_1302_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  ret.write<QGesture * > ((QGesture *)((QGestureRecognizer_Adaptor *)cls)->cbs_create_1302_0 (arg1));
}

static void _set_callback_cbs_create_1302_0 (void *cls, const gsi::Callback &cb)
{
  ((QGestureRecognizer_Adaptor *)cls)->cb_create_1302_0 = cb;
}


// QFlags<QGestureRecognizer::ResultFlag> QGestureRecognizer::recognize(QGesture *state, QObject *watched, QEvent *event)

static void _init_cbs_recognize_3741_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("state");
  decl->add_arg<QGesture * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("watched");
  decl->add_arg<QObject * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("event");
  decl->add_arg<QEvent * > (argspec_2);
  decl->set_return<QFlags<QGestureRecognizer::ResultFlag> > ();
}

static void _call_cbs_recognize_3741_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGesture *arg1 = args.read<QGesture * > (heap);
  QObject *arg2 = args.read<QObject * > (heap);
  QEvent *arg3 = args.read<QEvent * > (heap);
  ret.write<QFlags<QGestureRecognizer::ResultFlag> > ((QFlags<QGestureRecognizer::ResultFlag>)((QGestureRecognizer_Adaptor *)cls)->cbs_recognize_3741_0 (arg1, arg2, arg3));
}

static void _set_callback_cbs_recognize_3741_0 (void *cls, const gsi::Callback &cb)
{
  ((QGestureRecognizer_Adaptor *)cls)->cb_recognize_3741_0 = cb;
}


// void QGestureRecognizer::reset(QGesture *state)

static void _init_cbs_reset_1438_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("state");
  decl->add_arg<QGesture * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_reset_1438_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QGesture *arg1 = args.read<QGesture * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QGestureRecognizer_Adaptor *)cls)->cbs_reset_1438_0 (arg1);
}

static void _set_callback_cbs_reset_1438_0 (void *cls, const gsi::Callback &cb)
{
  ((QGestureRecognizer_Adaptor *)cls)->cb_reset_1438_0 = cb;
}


namespace gsi
{

gsi::Class<QGestureRecognizer> &qtdecl_QGestureRecognizer ();

static gsi::Methods methods_QGestureRecognizer_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QGestureRecognizer::QGestureRecognizer()\nThis method creates an object of class QGestureRecognizer.", &_init_ctor_QGestureRecognizer_Adaptor_0, &_call_ctor_QGestureRecognizer_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("qt_create", "@brief Virtual method QGesture *QGestureRecognizer::create(QObject *target)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_create_1302_0, &_call_cbs_create_1302_0);
  methods += new qt_gsi::GenericMethod ("qt_create", "@hide", false, &_init_cbs_create_1302_0, &_call_cbs_create_1302_0, &_set_callback_cbs_create_1302_0);
  methods += new qt_gsi::GenericMethod ("recognize", "@brief Virtual method QFlags<QGestureRecognizer::ResultFlag> QGestureRecognizer::recognize(QGesture *state, QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_recognize_3741_0, &_call_cbs_recognize_3741_0);
  methods += new qt_gsi::GenericMethod ("recognize", "@hide", false, &_init_cbs_recognize_3741_0, &_call_cbs_recognize_3741_0, &_set_callback_cbs_recognize_3741_0);
  methods += new qt_gsi::GenericMethod ("reset", "@brief Virtual method void QGestureRecognizer::reset(QGesture *state)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_reset_1438_0, &_call_cbs_reset_1438_0);
  methods += new qt_gsi::GenericMethod ("reset", "@hide", false, &_init_cbs_reset_1438_0, &_call_cbs_reset_1438_0, &_set_callback_cbs_reset_1438_0);
  return methods;
}

gsi::Class<QGestureRecognizer_Adaptor> decl_QGestureRecognizer_Adaptor (qtdecl_QGestureRecognizer (), "QtGui", "QGestureRecognizer",
  methods_QGestureRecognizer_Adaptor (),
  "@qt\n@brief Binding of QGestureRecognizer");

}


//  Implementation of the enum wrapper class for QGestureRecognizer::ResultFlag
namespace qt_gsi
{

static gsi::Enum<QGestureRecognizer::ResultFlag> decl_QGestureRecognizer_ResultFlag_Enum ("QtGui", "QGestureRecognizer_ResultFlag",
    gsi::enum_const ("Ignore", QGestureRecognizer::Ignore, "@brief Enum constant QGestureRecognizer::Ignore") +
    gsi::enum_const ("MayBeGesture", QGestureRecognizer::MayBeGesture, "@brief Enum constant QGestureRecognizer::MayBeGesture") +
    gsi::enum_const ("TriggerGesture", QGestureRecognizer::TriggerGesture, "@brief Enum constant QGestureRecognizer::TriggerGesture") +
    gsi::enum_const ("FinishGesture", QGestureRecognizer::FinishGesture, "@brief Enum constant QGestureRecognizer::FinishGesture") +
    gsi::enum_const ("CancelGesture", QGestureRecognizer::CancelGesture, "@brief Enum constant QGestureRecognizer::CancelGesture") +
    gsi::enum_const ("ResultState_Mask", QGestureRecognizer::ResultState_Mask, "@brief Enum constant QGestureRecognizer::ResultState_Mask") +
    gsi::enum_const ("ConsumeEventHint", QGestureRecognizer::ConsumeEventHint, "@brief Enum constant QGestureRecognizer::ConsumeEventHint") +
    gsi::enum_const ("ResultHint_Mask", QGestureRecognizer::ResultHint_Mask, "@brief Enum constant QGestureRecognizer::ResultHint_Mask"),
  "@qt\n@brief This class represents the QGestureRecognizer::ResultFlag enum");

static gsi::QFlagsClass<QGestureRecognizer::ResultFlag > decl_QGestureRecognizer_ResultFlag_Enums ("QtGui", "QGestureRecognizer_QFlags_ResultFlag",
  "@qt\n@brief This class represents the QFlags<QGestureRecognizer::ResultFlag> flag set");

//  Inject the declarations into the parent
static gsi::ClassExt<QGestureRecognizer> inject_QGestureRecognizer_ResultFlag_Enum_in_parent (decl_QGestureRecognizer_ResultFlag_Enum.defs ());
static gsi::ClassExt<QGestureRecognizer> decl_QGestureRecognizer_ResultFlag_Enum_as_child (decl_QGestureRecognizer_ResultFlag_Enum, "ResultFlag");
static gsi::ClassExt<QGestureRecognizer> decl_QGestureRecognizer_ResultFlag_Enums_as_child (decl_QGestureRecognizer_ResultFlag_Enums, "QFlags_ResultFlag");

}

