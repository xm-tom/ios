/*

Copyright (C) 2010  CycleStreets Ltd

This program is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License
as published by the Free Software Foundation; either version 2
of the License, or (at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.

*/

//  FavouritesCell.h
//  CycleStreets
//
//  Created by Alan Paxton on 17/03/2010.
//

#import <UIKit/UIKit.h>
#import "MultiLabelLine.h"
#import "BUTableCellView.h"
#import "RouteVO.h"
#import "LayoutBox.h"
#import "ExpandedUILabel.h"

@interface FavouritesCellView : BUTableCellView {
	
	RouteVO							*dataProvider;
	
	IBOutlet	LayoutBox			*viewContainer;
	IBOutlet ExpandedUILabel		*nameLabel;
	IBOutlet MultiLabelLine			*readoutLabel;
	
	IBOutlet UIImageView			*icon;
	
	BOOL							isSelectedRoute;
	IBOutlet UIImageView						*selectedRouteIcon;
	
}
@property (nonatomic, strong)	RouteVO		*dataProvider;
@property (nonatomic, strong)	IBOutlet LayoutBox		*viewContainer;
@property (nonatomic, strong)	IBOutlet ExpandedUILabel		*nameLabel;
@property (nonatomic, strong)	IBOutlet MultiLabelLine		*readoutLabel;
@property (nonatomic, strong)	IBOutlet UIImageView		*icon;
@property (nonatomic)	BOOL		isSelectedRoute;
@property (nonatomic, strong)	IBOutlet UIImageView		*selectedRouteIcon;


+(NSNumber*)heightForCellWithDataProvider:(RouteVO*)route;

@end
