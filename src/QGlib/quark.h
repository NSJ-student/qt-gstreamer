/*
    Copyright (C) 2009-2010  George Kiagiadakis <kiagiadakis.george@gmail.com>

    This library is free software; you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published
    by the Free Software Foundation; either version 2.1 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef QGLIB_QUARK_H
#define QGLIB_QUARK_H

#include "string.h"

namespace QGlib {

class Quark
{
public:
    inline Quark(quint32 gquark) : m_quark(gquark) {}
    Quark(const char *str);
    Quark(const String & str);

    String toString() const;

    inline operator quint32() const { return m_quark; }

private:
    quint32 m_quark;
};

}

#endif // QGLIB_QUARK_H