//
//  UIColor+expanded.h
//  Common_lib
//
//  Created by Abe_liu on 2018/10/2.
//  Copyright © 2018年 Abe_liu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIColor (expanded)

/**
 *    @brief    RGB值转换为UIColor对象
 *
 *    @param     inColorString     RGB值，如“＃808080”这里只需要传入“808080”
 *
 *    @return    UIColor对象
 */
+ (UIColor *)colorFromHexRGB:(NSString *)inColorString;

+ (UIColor *)colorFromHexRGB:(NSString *)inColorString andAlpha:(CGFloat)alpha;

@end

NS_ASSUME_NONNULL_END
