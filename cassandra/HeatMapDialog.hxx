/*
 * Copyright (c) 2013
 * COMPUTER APPLICATIONS IN SCIENCE & ENGINEERING
 * BARCELONA SUPERCOMPUTING CENTRE - CENTRO NACIONAL DE SUPERCOMPUTACIÓN
 * http://www.bsc.es
 *
 * This file is part of Cassandra.
 * Cassandra is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * Cassandra is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *  
 * You should have received a copy of the GNU General Public 
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

#ifndef __HeatMapDialog_hxx__
#define __HeatMapDialog_hxx__

#include <QDialog>
#include <ui_HeatMapDialog.h>
#include <tinyxml.h>


namespace GUI
{

class HeatMapDialog : public QDialog
{
	Q_OBJECT

	Ui::HeatMapDialog _heatMapDialog;

	std::string _groupFile;

	bool loadGroupFile();
	void fillParams();
    void fillVariables();

    std::vector< std::vector<float> > _values;

private slots:
	void selectXAxis( int index );
	void selectYAxis( int index );
	void selectVariable( int index );
public:
	HeatMapDialog( QWidget * parent, const std::string & groupFile );
	virtual ~HeatMapDialog();

signals:
    void updateXTicks( std::vector<float> );
    void updateYTicks( std::vector<float> );
};

} // namespace GUI

#endif // __HeatMapDialog_hxx__
