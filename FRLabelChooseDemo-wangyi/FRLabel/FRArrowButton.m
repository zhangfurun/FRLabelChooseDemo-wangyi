//
//  FRArrowButton.m
//  FRLabelChooseDemo-wangyi
//
//  Created by 张福润 on 16/9/2.
//  Copyright © 2016年 张福润. All rights reserved.
//

#import "FRArrowButton.h"

@implementation FRArrowButton

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        [self setImage:[UIImage imageNamed:@"Arrow.png"] forState:0];
        [self setImage:[UIImage imageNamed:@"Arrow.png"] forState:1<<0];
        self.backgroundColor = RGBColor(238.0, 238.0, 238.0);
        [self addTarget:self
                 action:@selector(ArrowClick)
       forControlEvents:1 << 6];
    }
    return self;
}

-(void)ArrowClick{
    if (self.arrowBtnClick) {
        self.arrowBtnClick();
    }
}

- (CGRect)imageRectForContentRect:(CGRect)contentRect{
    CGFloat imageSize = 18;
    return CGRectMake((contentRect.size.width-imageSize)/2, (30-imageSize)/2, imageSize, imageSize);
}

@end
