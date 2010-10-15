/****************************************************************************
** $Id: qt/qsemimodal.h   3.3.7   edited Aug 31 2005 $
**
** Definition of QSemiModal class for source compatibility
**
** Created : 001010
**
** Copyright (C) 2000-2005 Trolltech AS.  All rights reserved.
**
** This file is part of the dialogs module of the Qt GUI Toolkit.
**
** This file may be distributed under the terms of the Q Public License
** as defined by Trolltech AS of Norway and appearing in the file
** LICENSE.QPL included in the packaging of this file.
**
** This file may be distributed and/or modified under the terms of the
** GNU General Public License version 2 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.
**
** Licensees holding valid Qt Enterprise Edition or Qt Professional Edition
** licenses may use this file in accordance with the Qt Commercial License
** Agreement provided with the Software.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.trolltech.com/pricing.html or email sales@trolltech.com for
**   information about Qt Commercial License Agreements.
** See http://www.trolltech.com/qpl/ for QPL licensing information.
** See http://www.trolltech.com/gpl/ for GPL licensing information.
**
** Contact info@trolltech.com if any conditions of this licensing are
** not clear to you.
**
**********************************************************************/

#ifndef QSEMIMODAL_H
#define QSEMIMODAL_H

#ifndef QT_H
#include "qdialog.h"
#endif // QT_H

#ifndef QT_NO_COMPAT
#ifndef QT_NO_SEMIMODAL
class Q_EXPORT QSemiModal : public QDialog
{
    Q_OBJECT
public:
    QSemiModal( QWidget* parent=0, const char* name=0, bool modal=FALSE, WFlags f=0 )
	: QDialog( parent, name, modal, f ) { }

private:	// Disabled copy constructor and operator=
#if defined(Q_DISABLE_COPY)
    QSemiModal( const QSemiModal & );
    QSemiModal &operator=( const QSemiModal & );
#endif
};
#endif
#endif

#endif // QSEMIMODAL_H
