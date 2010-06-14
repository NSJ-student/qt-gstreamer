/*
    Copyright (C) 2010  George Kiagiadakis <kiagiadakis.george@gmail.com>

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
#ifndef QGST_PIPELINE_H
#define QGST_PIPELINE_H

#include "bin.h"

namespace QGst {

class Pipeline : public Bin
{
    QGST_WRAPPER(Pipeline)
public:
    static PipelinePtr newPipeline(const QGlib::String & name = QGlib::String());
};

}

QGLIB_REGISTER_TYPE(QGst::Pipeline)

#endif
