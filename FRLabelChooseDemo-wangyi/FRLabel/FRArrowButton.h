//
//  FRArrowButton.h
//  FRLabelChooseDemo-wangyi
//
//  Created by 张福润 on 16/9/2.
//  Copyright © 2016年 张福润. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FRArrowButton : UIButton
@property (nonatomic,copy) void(^arrowBtnClick)();
@end
