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
#ifndef KNNOTIFICATIONUTIL_H
#define KNNOTIFICATIONUTIL_H

#include <QObject>

namespace NotificationUtil
{
enum NotificationRole
{
    ContentRole = Qt::UserRole+1
};

enum NotificationType
{
    Information = 0,
    NotificationTypeCount
};

enum NotificationIcon
{
    Message,
    NotificationIconCount
};

struct NotificationData
{
    QString title;
    QString content;
    int type;
    int iconType;
    NotificationData() :
        type(Information),
        iconType(Message)
    {
    }
};
}

class KNNotificationUtil
{
public:

private:
    KNNotificationUtil();
    KNNotificationUtil(const KNNotificationUtil &);
};

#endif // KNNOTIFICATIONUTIL_H
