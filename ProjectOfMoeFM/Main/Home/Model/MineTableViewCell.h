//
//  MineTableViewCell.h
//  ProjectOfMoeFM
//
//  Created by 彭平军 on 2017/5/9.
//  Copyright © 2017年 彭平军. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Favourite.h"
@interface MineTableViewCell : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *songTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *albumLabel;

@property (strong, nonatomic) Favourite *fav;

@end