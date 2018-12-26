//
//  UILabel+SuiteLabel.h
//  Common_lib
//
//  Created by Abe_liu on 2018/10/4.
//  Copyright © 2018年 Abe_liu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UILabel (SuiteLabel)

/**
 Quickly initialize a UILabel Class

 @param textString Text's string
 @param fontSize Text's fontsize
 @param fontColor Text's fontColor
 @param lineBreakMode LineBreakMode
 @return UILabel
 */
+(UILabel *)labelWithText:(NSString *)textString
                 fontSize:(CGFloat)fontSize
                fontColor:(UIColor *)fontColor
            lineBreakMode:(NSLineBreakMode)lineBreakMode;


/**
 设置label 的指定range使用字体
 @param font UIFont
 @param range 需要指定的范围
 */
-(void)setFont:(UIFont *)font range:(NSRange)range;

/**
 设置指定范围的Text字体颜色

 @param textColor 字体颜色
 @param range 需要指定的范围
 */
-(void)setTextColor:(UIColor *)textColor range:(NSRange)range;

/**
 修改Label的行间距
 */
-(void)changeLabelLineSpace:(float)space;

/**
 修改字符之间的间距

 @param space 间距大小
 */
-(void)changeLabelWordSpace:(float)space;

@end


