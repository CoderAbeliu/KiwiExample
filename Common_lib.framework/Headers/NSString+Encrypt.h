//
//  NSString+Encrypt.h
//  Common_lib
//
//  Created by Abe_liu on 2018/11/3.
//  Copyright © 2018 Abe_liu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSString (Encrypt)
/**
 SHA1 编码
 
 @param str 指定的NSString
 @return String
 */
+ (NSString *)sha1:(NSString *)str ;

/**
 SHA256 编码
 
 @param orginString 目标字符串
 @return String
 */
+ (NSString *)sha256:(NSString *)orginString;
@end

NS_ASSUME_NONNULL_END
