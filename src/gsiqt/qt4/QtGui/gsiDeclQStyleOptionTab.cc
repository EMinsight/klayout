
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
*  @file gsiDeclQStyleOptionTab.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QStyleOptionTab>
#include <QStyleOption>
#include <QWidget>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include <memory>

// -----------------------------------------------------------------------
// class QStyleOptionTab

//  Constructor QStyleOptionTab::QStyleOptionTab()


static void _init_ctor_QStyleOptionTab_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QStyleOptionTab> ();
}

static void _call_ctor_QStyleOptionTab_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QStyleOptionTab *> (new QStyleOptionTab ());
}


//  Constructor QStyleOptionTab::QStyleOptionTab(const QStyleOptionTab &other)


static void _init_ctor_QStyleOptionTab_2835 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("other");
  decl->add_arg<const QStyleOptionTab & > (argspec_0);
  decl->set_return_new<QStyleOptionTab> ();
}

static void _call_ctor_QStyleOptionTab_2835 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QStyleOptionTab &arg1 = gsi::arg_reader<const QStyleOptionTab & >() (args, heap);
  ret.write<QStyleOptionTab *> (new QStyleOptionTab (arg1));
}



namespace gsi
{

static gsi::Methods methods_QStyleOptionTab () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionTab::QStyleOptionTab()\nThis method creates an object of class QStyleOptionTab.", &_init_ctor_QStyleOptionTab_0, &_call_ctor_QStyleOptionTab_0);
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QStyleOptionTab::QStyleOptionTab(const QStyleOptionTab &other)\nThis method creates an object of class QStyleOptionTab.", &_init_ctor_QStyleOptionTab_2835, &_call_ctor_QStyleOptionTab_2835);
  return methods;
}

gsi::Class<QStyleOption> &qtdecl_QStyleOption ();

gsi::Class<QStyleOptionTab> decl_QStyleOptionTab (qtdecl_QStyleOption (), "QtGui", "QStyleOptionTab",
  methods_QStyleOptionTab (),
  "@qt\n@brief Binding of QStyleOptionTab");


GSI_QTGUI_PUBLIC gsi::Class<QStyleOptionTab> &qtdecl_QStyleOptionTab () { return decl_QStyleOptionTab; }

}

