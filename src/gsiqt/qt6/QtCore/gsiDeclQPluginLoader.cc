
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
*  @file gsiDeclQPluginLoader.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QPluginLoader>
#include <QChildEvent>
#include <QEvent>
#include <QJsonObject>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtCoreCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QPluginLoader

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QPluginLoader::staticMetaObject);
}


// QString QPluginLoader::errorString()


static void _init_f_errorString_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_errorString_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QPluginLoader *)cls)->errorString ());
}


// QString QPluginLoader::fileName()


static void _init_f_fileName_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QString > ();
}

static void _call_f_fileName_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QString > ((QString)((QPluginLoader *)cls)->fileName ());
}


// QObject *QPluginLoader::instance()


static void _init_f_instance_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_f_instance_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QPluginLoader *)cls)->instance ());
}


// bool QPluginLoader::isLoaded()


static void _init_f_isLoaded_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_isLoaded_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPluginLoader *)cls)->isLoaded ());
}


// bool QPluginLoader::load()


static void _init_f_load_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_load_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPluginLoader *)cls)->load ());
}


// QFlags<QLibrary::LoadHint> QPluginLoader::loadHints()


static void _init_f_loadHints_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QLibrary::LoadHint> > ();
}

static void _call_f_loadHints_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QLibrary::LoadHint> > ((QFlags<QLibrary::LoadHint>)((QPluginLoader *)cls)->loadHints ());
}


// QJsonObject QPluginLoader::metaData()


static void _init_f_metaData_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QJsonObject > ();
}

static void _call_f_metaData_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QJsonObject > ((QJsonObject)((QPluginLoader *)cls)->metaData ());
}


// void QPluginLoader::setFileName(const QString &fileName)


static void _init_f_setFileName_2025 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setFileName_2025 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPluginLoader *)cls)->setFileName (arg1);
}


// void QPluginLoader::setLoadHints(QFlags<QLibrary::LoadHint> loadHints)


static void _init_f_setLoadHints_2841 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("loadHints");
  decl->add_arg<QFlags<QLibrary::LoadHint> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_setLoadHints_2841 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QLibrary::LoadHint> arg1 = gsi::arg_reader<QFlags<QLibrary::LoadHint> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPluginLoader *)cls)->setLoadHints (arg1);
}


// bool QPluginLoader::unload()


static void _init_f_unload_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<bool > ();
}

static void _call_f_unload_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<bool > ((bool)((QPluginLoader *)cls)->unload ());
}


// static QList<QObject*> QPluginLoader::staticInstances()


static void _init_f_staticInstances_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<QList<QObject*> > ();
}

static void _call_f_staticInstances_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QList<QObject*> > ((QList<QObject*>)QPluginLoader::staticInstances ());
}


// static QString QPluginLoader::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "nullptr");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (nullptr, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QPluginLoader::tr (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QPluginLoader () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("errorString", "@brief Method QString QPluginLoader::errorString()\n", true, &_init_f_errorString_c0, &_call_f_errorString_c0);
  methods += new qt_gsi::GenericMethod (":fileName", "@brief Method QString QPluginLoader::fileName()\n", true, &_init_f_fileName_c0, &_call_f_fileName_c0);
  methods += new qt_gsi::GenericMethod ("instance", "@brief Method QObject *QPluginLoader::instance()\n", false, &_init_f_instance_0, &_call_f_instance_0);
  methods += new qt_gsi::GenericMethod ("isLoaded?", "@brief Method bool QPluginLoader::isLoaded()\n", true, &_init_f_isLoaded_c0, &_call_f_isLoaded_c0);
  methods += new qt_gsi::GenericMethod ("load", "@brief Method bool QPluginLoader::load()\n", false, &_init_f_load_0, &_call_f_load_0);
  methods += new qt_gsi::GenericMethod (":loadHints", "@brief Method QFlags<QLibrary::LoadHint> QPluginLoader::loadHints()\n", true, &_init_f_loadHints_c0, &_call_f_loadHints_c0);
  methods += new qt_gsi::GenericMethod ("metaData", "@brief Method QJsonObject QPluginLoader::metaData()\n", true, &_init_f_metaData_c0, &_call_f_metaData_c0);
  methods += new qt_gsi::GenericMethod ("setFileName|fileName=", "@brief Method void QPluginLoader::setFileName(const QString &fileName)\n", false, &_init_f_setFileName_2025, &_call_f_setFileName_2025);
  methods += new qt_gsi::GenericMethod ("setLoadHints|loadHints=", "@brief Method void QPluginLoader::setLoadHints(QFlags<QLibrary::LoadHint> loadHints)\n", false, &_init_f_setLoadHints_2841, &_call_f_setLoadHints_2841);
  methods += new qt_gsi::GenericMethod ("unload", "@brief Method bool QPluginLoader::unload()\n", false, &_init_f_unload_0, &_call_f_unload_0);
  methods += gsi::qt_signal<QObject * > ("destroyed(QObject *)", "destroyed", gsi::arg("arg1"), "@brief Signal declaration for QPluginLoader::destroyed(QObject *)\nYou can bind a procedure to this signal.");
  methods += gsi::qt_signal<const QString & > ("objectNameChanged(const QString &)", "objectNameChanged", gsi::arg("objectName"), "@brief Signal declaration for QPluginLoader::objectNameChanged(const QString &objectName)\nYou can bind a procedure to this signal.");
  methods += new qt_gsi::GenericStaticMethod ("staticInstances", "@brief Static method QList<QObject*> QPluginLoader::staticInstances()\nThis method is static and can be called without an instance.", &_init_f_staticInstances_0, &_call_f_staticInstances_0);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QPluginLoader::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  return methods;
}

gsi::Class<QObject> &qtdecl_QObject ();

qt_gsi::QtNativeClass<QPluginLoader> decl_QPluginLoader (qtdecl_QObject (), "QtCore", "QPluginLoader_Native",
  methods_QPluginLoader (),
  "@hide\n@alias QPluginLoader");

GSI_QTCORE_PUBLIC gsi::Class<QPluginLoader> &qtdecl_QPluginLoader () { return decl_QPluginLoader; }

}


class QPluginLoader_Adaptor : public QPluginLoader, public qt_gsi::QtObjectBase
{
public:

  virtual ~QPluginLoader_Adaptor();

  //  [adaptor ctor] QPluginLoader::QPluginLoader(QObject *parent)
  QPluginLoader_Adaptor() : QPluginLoader()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPluginLoader::QPluginLoader(QObject *parent)
  QPluginLoader_Adaptor(QObject *parent) : QPluginLoader(parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPluginLoader::QPluginLoader(const QString &fileName, QObject *parent)
  QPluginLoader_Adaptor(const QString &fileName) : QPluginLoader(fileName)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [adaptor ctor] QPluginLoader::QPluginLoader(const QString &fileName, QObject *parent)
  QPluginLoader_Adaptor(const QString &fileName, QObject *parent) : QPluginLoader(fileName, parent)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QPluginLoader::isSignalConnected(const QMetaMethod &signal)
  bool fp_QPluginLoader_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QPluginLoader::isSignalConnected(signal);
  }

  //  [expose] int QPluginLoader::receivers(const char *signal)
  int fp_QPluginLoader_receivers_c1731 (const char *signal) const {
    return QPluginLoader::receivers(signal);
  }

  //  [expose] QObject *QPluginLoader::sender()
  QObject * fp_QPluginLoader_sender_c0 () const {
    return QPluginLoader::sender();
  }

  //  [expose] int QPluginLoader::senderSignalIndex()
  int fp_QPluginLoader_senderSignalIndex_c0 () const {
    return QPluginLoader::senderSignalIndex();
  }

  //  [emitter impl] void QPluginLoader::destroyed(QObject *)
  void emitter_QPluginLoader_destroyed_1302(QObject *arg1)
  {
    emit QPluginLoader::destroyed(arg1);
  }

  //  [adaptor impl] bool QPluginLoader::event(QEvent *event)
  bool cbs_event_1217_0(QEvent *_event)
  {
    return QPluginLoader::event(_event);
  }

  virtual bool event(QEvent *_event)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QPluginLoader_Adaptor, bool, QEvent *>(&QPluginLoader_Adaptor::cbs_event_1217_0, _event);
    } else {
      return QPluginLoader::event(_event);
    }
  }

  //  [adaptor impl] bool QPluginLoader::eventFilter(QObject *watched, QEvent *event)
  bool cbs_eventFilter_2411_0(QObject *watched, QEvent *event)
  {
    return QPluginLoader::eventFilter(watched, event);
  }

  virtual bool eventFilter(QObject *watched, QEvent *event)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QPluginLoader_Adaptor, bool, QObject *, QEvent *>(&QPluginLoader_Adaptor::cbs_eventFilter_2411_0, watched, event);
    } else {
      return QPluginLoader::eventFilter(watched, event);
    }
  }

  //  [emitter impl] void QPluginLoader::objectNameChanged(const QString &objectName)
  void emitter_QPluginLoader_objectNameChanged_4567(const QString &objectName)
  {
    __SUPPRESS_UNUSED_WARNING (objectName);
    throw tl::Exception ("Can't emit private signal 'void QPluginLoader::objectNameChanged(const QString &objectName)'");
  }

  //  [adaptor impl] void QPluginLoader::childEvent(QChildEvent *event)
  void cbs_childEvent_1701_0(QChildEvent *event)
  {
    QPluginLoader::childEvent(event);
  }

  virtual void childEvent(QChildEvent *event)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QPluginLoader_Adaptor, QChildEvent *>(&QPluginLoader_Adaptor::cbs_childEvent_1701_0, event);
    } else {
      QPluginLoader::childEvent(event);
    }
  }

  //  [adaptor impl] void QPluginLoader::customEvent(QEvent *event)
  void cbs_customEvent_1217_0(QEvent *event)
  {
    QPluginLoader::customEvent(event);
  }

  virtual void customEvent(QEvent *event)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QPluginLoader_Adaptor, QEvent *>(&QPluginLoader_Adaptor::cbs_customEvent_1217_0, event);
    } else {
      QPluginLoader::customEvent(event);
    }
  }

  //  [adaptor impl] void QPluginLoader::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QPluginLoader::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QPluginLoader_Adaptor, const QMetaMethod &>(&QPluginLoader_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QPluginLoader::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QPluginLoader::timerEvent(QTimerEvent *event)
  void cbs_timerEvent_1730_0(QTimerEvent *event)
  {
    QPluginLoader::timerEvent(event);
  }

  virtual void timerEvent(QTimerEvent *event)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QPluginLoader_Adaptor, QTimerEvent *>(&QPluginLoader_Adaptor::cbs_timerEvent_1730_0, event);
    } else {
      QPluginLoader::timerEvent(event);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QPluginLoader_Adaptor::~QPluginLoader_Adaptor() { }

//  Constructor QPluginLoader::QPluginLoader(QObject *parent) (adaptor class)

static void _init_ctor_QPluginLoader_Adaptor_1302 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return_new<QPluginLoader_Adaptor> ();
}

static void _call_ctor_QPluginLoader_Adaptor_1302 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QPluginLoader_Adaptor *> (new QPluginLoader_Adaptor (arg1));
}


//  Constructor QPluginLoader::QPluginLoader(const QString &fileName, QObject *parent) (adaptor class)

static void _init_ctor_QPluginLoader_Adaptor_3219 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("fileName");
  decl->add_arg<const QString & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("parent", true, "nullptr");
  decl->add_arg<QObject * > (argspec_1);
  decl->set_return_new<QPluginLoader_Adaptor> ();
}

static void _call_ctor_QPluginLoader_Adaptor_3219 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  QObject *arg2 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ret.write<QPluginLoader_Adaptor *> (new QPluginLoader_Adaptor (arg1, arg2));
}


// void QPluginLoader::childEvent(QChildEvent *event)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPluginLoader_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QPluginLoader_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QPluginLoader::customEvent(QEvent *event)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPluginLoader_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QPluginLoader_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// emitter void QPluginLoader::destroyed(QObject *)

static void _init_emitter_destroyed_1302 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1", true, "nullptr");
  decl->add_arg<QObject * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_destroyed_1302 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args ? gsi::arg_reader<QObject * >() (args, heap) : gsi::arg_maker<QObject * >() (nullptr, heap);
  ((QPluginLoader_Adaptor *)cls)->emitter_QPluginLoader_destroyed_1302 (arg1);
}


// void QPluginLoader::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPluginLoader_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QPluginLoader_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QPluginLoader::event(QEvent *event)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QPluginLoader_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QPluginLoader_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QPluginLoader::eventFilter(QObject *watched, QEvent *event)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("watched");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("event");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QPluginLoader_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QPluginLoader_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QPluginLoader::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QPluginLoader_Adaptor *)cls)->fp_QPluginLoader_isSignalConnected_c2394 (arg1));
}


// emitter void QPluginLoader::objectNameChanged(const QString &objectName)

static void _init_emitter_objectNameChanged_4567 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("objectName");
  decl->add_arg<const QString & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_emitter_objectNameChanged_4567 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs & /*ret*/) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QString &arg1 = gsi::arg_reader<const QString & >() (args, heap);
  ((QPluginLoader_Adaptor *)cls)->emitter_QPluginLoader_objectNameChanged_4567 (arg1);
}


// exposed int QPluginLoader::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QPluginLoader_Adaptor *)cls)->fp_QPluginLoader_receivers_c1731 (arg1));
}


// exposed QObject *QPluginLoader::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QPluginLoader_Adaptor *)cls)->fp_QPluginLoader_sender_c0 ());
}


// exposed int QPluginLoader::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QPluginLoader_Adaptor *)cls)->fp_QPluginLoader_senderSignalIndex_c0 ());
}


// void QPluginLoader::timerEvent(QTimerEvent *event)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("event");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QPluginLoader_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QPluginLoader_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


namespace gsi
{

gsi::Class<QPluginLoader> &qtdecl_QPluginLoader ();

static gsi::Methods methods_QPluginLoader_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPluginLoader::QPluginLoader(QObject *parent)\nThis method creates an object of class QPluginLoader.", &_init_ctor_QPluginLoader_Adaptor_1302, &_call_ctor_QPluginLoader_Adaptor_1302);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QPluginLoader::QPluginLoader(const QString &fileName, QObject *parent)\nThis method creates an object of class QPluginLoader.", &_init_ctor_QPluginLoader_Adaptor_3219, &_call_ctor_QPluginLoader_Adaptor_3219);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QPluginLoader::childEvent(QChildEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QPluginLoader::customEvent(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("emit_destroyed", "@brief Emitter for signal void QPluginLoader::destroyed(QObject *)\nCall this method to emit this signal.", false, &_init_emitter_destroyed_1302, &_call_emitter_destroyed_1302);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QPluginLoader::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QPluginLoader::event(QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QPluginLoader::eventFilter(QObject *watched, QEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QPluginLoader::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("emit_objectNameChanged", "@brief Emitter for signal void QPluginLoader::objectNameChanged(const QString &objectName)\nCall this method to emit this signal.", false, &_init_emitter_objectNameChanged_4567, &_call_emitter_objectNameChanged_4567);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QPluginLoader::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QPluginLoader::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QPluginLoader::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QPluginLoader::timerEvent(QTimerEvent *event)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  return methods;
}

gsi::Class<QPluginLoader_Adaptor> decl_QPluginLoader_Adaptor (qtdecl_QPluginLoader (), "QtCore", "QPluginLoader",
  methods_QPluginLoader_Adaptor (),
  "@qt\n@brief Binding of QPluginLoader");

}

