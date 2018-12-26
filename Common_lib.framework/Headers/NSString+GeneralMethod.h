//
//  NSString+GeneralMethod.h
//  Common_lib
//
//  Created by Abe_liu on 2018/9/16.
//  Copyright © 2018年 Abe_liu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (GeneralMethod)


/**
 去除NSString 头尾的空格

 @return 修改后的字符串
 */
-(NSString *)trim;

/**
 限制字符串长度
 
 @param maxLength 最大字符串长度
 @return String
 */
-(NSString *)stringLimitationWithLength:(NSInteger)maxLength;

/**
 校验邮箱地址是否合法
 
 @param email 输入的email地址
 @return 是否合法判断
 */
+(BOOL)IsValidateEmail:(NSString *)email;

/**
 校验手机号是否规范
 
 @param phoneNum 输入的手机号
 @return 是否为正常的手机号
 */
+ (BOOL)validateMobile:(NSString *)phoneNum;


/**
 把aFilePath追加到沙盒根目录下

 @param aFilePath 文件目录
 @return 路径
 */
+(NSString *)getFilePath:(NSString *)aFilePath;

//获得一个文件路径，保证目录是肯定存在的
+(NSString *)getPathWithDir:(NSString *)aDir file:(NSString *)aFile;

//获得文件路径，保证文件路径一定真实存在
+ (NSString *)getTruePathWithDir:(NSString *)aDir file:(NSString *)aFile;

/**
 计算字符串的高度

 @param width 给定的宽度
 @param fontAttribute 自定义的拓展
 @param originString 给定的String
 @return 字符串的高度
 */
+(CGFloat)calculateHeightWithViewWidth:(CGFloat)width fontAttribute:(NSDictionary *)fontAttribute originString:(NSString *)originString;

/**
 判断字符串是否是空串

 @param string 需要判断的字符串
 @return 是否为空串
 */
+(BOOL)isEmptyString:(NSString *)string;





@end
