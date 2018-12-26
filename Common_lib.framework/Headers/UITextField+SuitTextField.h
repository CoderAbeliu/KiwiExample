//
//  UITextField+SuitTextField.h
//  Common_lib
//
//  Created by Abe_liu on 2018/11/6.
//  Copyright © 2018 Abe_liu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UITextField (SuitTextField)
@property(nonatomic,assign)CGFloat tintAjust; //扩展属性
/**
 Qickly initialize a UITextField Class
 
 @param color BackgroundColor
 @param cornerRadius CornerRadius
 @param enabeld TextField is whether edit
 @param tintAdjust The distance to super View's left edge
 @return UITextField
 */
+(UITextField *)textFieldWithBackgroundColor:(UIColor *)color cornerRadius:(CGFloat )cornerRadius enabeld:(BOOL)enabeld tintAdjust:(CGFloat)tintAdjust;

@end

NS_ASSUME_NONNULL_END
