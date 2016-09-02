//
//  FRListBarScrollView.h
//  FRLabelChooseDemo-wangyi
//
//  Created by 张福润 on 16/9/2.
//  Copyright © 2016年 张福润. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FRListBarScrollView : UIScrollView

@property (nonatomic,copy) void(^arrowChange)();
@property (nonatomic,copy) void(^listBarItemClickBlock)(NSString *itemName , NSInteger itemIndex);

@property (nonatomic,strong) NSMutableArray *visibleItemList;

-(void)operationFromBlock:(animateType)type itemName:(NSString *)itemName index:(int)index;
-(void)itemClickByScrollerWithIndex:(NSInteger)index;
@end
