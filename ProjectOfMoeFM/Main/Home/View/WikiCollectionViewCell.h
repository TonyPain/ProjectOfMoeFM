//
//  WikiCollectionViewCell.h
//  ProjectOfMoeFM
//
//  Created by 彭平军 on 2017/4/12.
//  Copyright © 2017年 彭平军. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MoefmWiki.h"

@interface WikiCollectionViewCell : UICollectionViewCell
@property (strong, nonatomic) MoefmWiki *radioWiki;
//@property (strong, nonatomic) RadioInformation *radioInformation;
@property (weak, nonatomic) IBOutlet UIImageView *radioCoverImageView;
@property (weak, nonatomic) IBOutlet UILabel *radioTitleLabel;
@property (weak, nonatomic) IBOutlet UILabel *radioDateLabel;
@property (weak, nonatomic) IBOutlet UILabel *radioSongCountLabel;

@end
