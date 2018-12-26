//
//  Common_lib.h
//  Common_lib
//
//  Created by Abe_liu on 2018/9/12.
//  Copyright © 2018年 Abe_liu. All rights reserved.
//

#ifdef __OBJC__

#import <UIKit/UIKit.h>

#import <Foundation/Foundation.h>

#import "DevicesTools.h"//包含获取手机型号，uuid，等操作

#import "NSString+GeneralMethod.h" //字符串常见操作

#import "NSData+AES.h"//AES 加密操作，可定制初始化向量

#import "KeyChainStore.h"//钥匙串操作，可用来保存用户名称和密码

#import "UIColor+expanded.h"//UIColor 颜色设置拓展

#import "UIControl+RepeateClick.h"//按钮等响应类型的h重复点击

#import "AddressPickView.h"//地址选择器

#import "NewsBanner.h"//滚动新闻试图

#import "UIView+cornerRadius.h"//UIView 类切角设置

#import "UncaughtExceptionHandler.h"//抓取iOS App运行的时候出现的异常

#import "NSDate+Extension.h"//NSDate 时间字符串操作

#import "UILabel+SuiteLabel.h"// 快速初始化UILabel

#import "UIViewController+TabBarVisiable.h"

#import "LanguageTools.h"

#import "UITextField+SuitTextField.h"

#import "NSString+Encrypt.h"

#endif
