/****************************************************************************
** $Id: qt/main.cpp   3.3.7   edited Aug 31 2005 $
**
** Copyright (C) 1992-2005 Trolltech AS.  All rights reserved.
**
** This file is part of an example program for Qt.  This example
** program may be used, distributed and modified without limitation.
**
*****************************************************************************/

#include <qapplication.h>
#include <qwindowsstyle.h>
#include "themes.h"

#include "metal.h"

int main( int argc, char ** argv )
{
    QApplication::setColorSpec( QApplication::ManyColor );
    QApplication a( argc, argv );

    Themes themes;
    themes.setCaption( "Qt Example - Themes (QStyle)" );
    themes.resize( 640, 400 );
    a.setMainWidget( &themes );
    themes.show();

    return a.exec();
}
