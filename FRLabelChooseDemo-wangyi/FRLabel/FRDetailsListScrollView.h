//
//  FRDetailsListScrollView.h
//  FRLabelChooseDemo-wangyi
//
//  Created by 张福润 on 16/9/2.
//  Copyright © 2016年 张福润. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FRDetailsListScrollView : UIScrollView

@property (nonatomic,strong) NSMutableArray *topView;
@property (nonatomic,strong) NSMutableArray *bottomView;
@property (nonatomic,strong) NSMutableArray *listAll;

@property (nonatomic,copy) void(^longPressedBlock)();
@property (nonatomic,copy) void(^opertionFromItemBlock)(animateType type, NSString *itemName, int index);
-(void)itemRespondFromListBarClickWithItemName:(NSString *)itemName;

@end
