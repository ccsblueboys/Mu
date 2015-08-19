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
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef KNMUSICPLUGIN_H
#define KNMUSICPLUGIN_H

#include "knabstractmusicplugin.h"

class QBoxLayout;
class KNMouseDetectHeader;
class KNHWidgetSwitcher;
class KNVWidgetSwitcher;
class KNCategoryTabBar;
class KNSideShadowWidget;
class KNMusicDetailDialogPanel;
class KNMusicSoloMenuBase;
class KNMusicSearchBase;
class KNMusicNowPlayingBase;
class KNMusicHeaderPlayerBase;
class KNMusicPlayerBase;
class KNMusicPlaylistBase;
/*!
 * \brief The KNMusicCategoryPlugin class is the official music category plugin.
 * You can treat this as a example.\n
 * It will use the all the official sdk class.
 */
class KNMusicPlugin : public KNAbstractMusicPlugin
{
    Q_OBJECT
public:
    /*!
     * \brief Construct the KNMusicCategoryPlugin class.
     * \param parent The parent widget of the plugin.
     */
    explicit KNMusicPlugin(QWidget *parent = 0);
    ~KNMusicPlugin();

    /*!
     * \brief Reimplemented from KNAbstractMusicCategoryPlugin::headerWidget().
     */
    QWidget *headerWidget() Q_DECL_OVERRIDE;

    /*!
     * \brief Reimplemented from KNAbstractMusicCategoryPlugin::icon().
     */
    QPixmap icon() Q_DECL_OVERRIDE;

    /*!
     * \brief Reimplemented from KNAbstractMusicCategoryPlugin::title().
     */
    QString title() Q_DECL_OVERRIDE;

signals:

public slots:
    /*!
     * \brief Reimplemented from KNAbstractMusicCategoryPlugin::saveConfigure().
     */
    void saveConfigure() Q_DECL_OVERRIDE;

    /*!
     * \brief Reimplemented from
     * KNAbstractMusicCategoryPlugin::onArgumentsAvailable().
     */
    void onArgumentsAvailable(const QStringList &data) Q_DECL_OVERRIDE;

protected:
    void resizeEvent(QResizeEvent *event) Q_DECL_OVERRIDE;

private:
    inline void initialInfrastructure();
    void initialDetailDialogPanel();
    void initialParserPlugin();
    void initialSoloMenu(KNMusicSoloMenuBase *soloMenu);

    void initialSearch(KNMusicSearchBase *search);
    void initialNowPlaying(KNMusicNowPlayingBase *nowPlaying);
    void initialHeaderPlayer(KNMusicHeaderPlayerBase *headerPlayer);
    void initialPlaylist(KNMusicPlaylistBase *playlist);

    inline void initialPlayerWidget(KNMusicPlayerBase *player);

    //UI infrastructure elements.
    KNMouseDetectHeader *m_headerWidget;
    KNVWidgetSwitcher *m_headerWidgetContainer;
    QBoxLayout *m_headerRightLayout;
    KNCategoryTabBar *m_tabBar;
    KNHWidgetSwitcher *m_switcher;
    KNSideShadowWidget *m_topShadow;
};

#endif // KNMUSICPLUGIN_H