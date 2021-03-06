/*
 *  Copyright (c) 2010 Lukáš Tvrdý <lukast.dev@gmail.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with this library; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef KIS_PRESSURE_SPACING_OPTION_WIDGET_H
#define KIS_PRESSURE_SPACING_OPTION_WIDGET_H

#include "kis_curve_option_widget.h"

class QCheckBox;

class PAINTOP_EXPORT KisPressureSpacingOptionWidget : public KisCurveOptionWidget
{
    Q_OBJECT

public:
    KisPressureSpacingOptionWidget();

    void readOptionSetting(const KisPropertiesConfigurationSP setting) override;

private Q_SLOTS:
    void setIsotropicSpacing(int isotropic);
    void setUseSpacingUpdates(int useSpacingUpdates);

private:
    QCheckBox *m_isotropicSpacing;
    QCheckBox *m_useSpacingUpdates;
};

#endif // KIS_PRESSURE_SPACING_OPTION_WIDGET_H
