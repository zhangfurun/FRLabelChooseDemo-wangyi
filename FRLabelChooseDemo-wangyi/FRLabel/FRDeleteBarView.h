//
//  FRDeleteBarView.h
//  FRLabelChooseDemo-wangyi
//
//  Created by 张福润 on 16/9/2.
//  Copyright © 2016年 张福润. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FRDeleteBarView : UIView
@property (nonatomic,strong) UILabel *hitText;

@property (nonatomic,strong) UIButton *sortBtn;

-(void)sortBtnClick:(UIButton *)sender;
@end
