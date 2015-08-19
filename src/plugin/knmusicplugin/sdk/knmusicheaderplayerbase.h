/*
 * Copyright (C) Kreogist Dev Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef KNMUSICHEADERPLAYERBASE_H
#define KNMUSICHEADERPLAYERBASE_H

#include "knmusicplayerbase.h"

class KNMusicHeaderPlayerBase : public KNMusicPlayerBase
{
    Q_OBJECT
public:
    KNMusicHeaderPlayerBase(QWidget *parent = 0) : KNMusicPlayerBase(parent){}

signals:

public slots:
    /*!
     * \brief When the mouse entered, activate function should be called by the
     * header.
     */
    virtual void activate()=0;

    /*!
     * \brief When the mouse leaved, inactivate function should be called by the
     * header.
     */
    virtual void inactivate()=0;
};

#endif // KNMUSICHEADERPLAYERBASE_H