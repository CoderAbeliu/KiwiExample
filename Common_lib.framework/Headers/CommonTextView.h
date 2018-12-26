//
//  CommonTextView.h
//  Common_lib
//  为textView 设置placeholder
//  Created by Abe_liu on 2018/10/7.
//  Copyright © 2018年 Abe_liu. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CommonTextView : UITextView
@property(nonatomic,copy) NSString *myPlaceholder;  ///文字
@property(nonatomic,strong) UIColor *myPlaceholderColor; ///文字颜色
@end

NS_ASSUME_NONNULL_END
