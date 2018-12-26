//
//  UIView+cornerRadio.h
//  Abe UI
//
//  Created by Abe_liu on 2018/3/14.
//  Copyright © 2018年 abe_liu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

typedef enum{
    KCornerAllCorner=0,
    KCornerTopHorizontalType,
    KCornerBottomHorizonType,
    KCornerVerticalLeftType,
    KCornerVerticalRightType
}cornerType;

@interface UIView (cornerRadius)

+(instancetype)setFrame:(CGRect)frame setCornerRadio:(CGSize )cornerRadio type:(cornerType)type;


@end
