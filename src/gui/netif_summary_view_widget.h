/*
* Copyright (C) 2019 ~ 2020 Uniontech Software Technology Co.,Ltd
*
* Author:      maojj <maojunjie@uniontech.com>
* Maintainer:  maojj <maojunjie@uniontech.com>
*
* This program is free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the License, or
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef NETIF_SUMMARY_VIEW_WIDGET_H
#define NETIF_SUMMARY_VIEW_WIDGET_H

#include <QWidget>

/**
 * @brief Network interface summary view widget
 */
class NetifSummaryViewWidget : public QWidget
{
    Q_OBJECT
public:
    explicit NetifSummaryViewWidget(QWidget *parent = nullptr);

signals:

public slots:
};

#endif // NETIF_SUMMARY_VIEW_WIDGET_H
