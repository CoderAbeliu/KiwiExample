//
//  UIControl+RepeateClick.h
//  Abe UI
//
//  Created by Abe_liu on 2018/3/20.
//  Copyright © 2018年 abe_liu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIControl (RepeateClick)

/**
 重复点击的时间间隔
 */
@property(nonatomic,assign)NSTimeInterval timeInterval;

@property(nonatomic,assign)BOOL canIngoreEvent;//Yes 不允许操作

@end
