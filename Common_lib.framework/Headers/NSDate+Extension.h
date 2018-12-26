//
//  NSDate+Extension.h
//  Common_UI
//
//  Created by QT on 2017/6/8.
//  Copyright © 2017年 Huawei Device. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (Extension)
//字符串转日期格式
+ (NSDate *)stringToDate:(NSString *)dateString;
// 日期转字符串
+(NSString *)dateToString:(NSDate *)date;
// 转化成中国时区
+ (NSDate *)changeToChinaTime:(NSDate *)date;
// 获取两个时间之间的秒数
+ (NSTimeInterval)getCountDownWithEndTime:(NSString *)endTime;
// 两个时间之间的秒数 转化成字符串
+ (NSString *)getStartTimeToEndTime:(NSTimeInterval)value;

/**
 return a string which likes xx小时前、xx天前

 @param reference the date need to be format
 @return formart String
 */
+ (NSString *)prettyDateWithReference:(NSDate *)reference;
@end
