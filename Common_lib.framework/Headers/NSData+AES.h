//
//  NSData+AES.h
//  Common_lib
//
//  Created by Abe_liu on 2018/9/13.
//  Copyright © 2018年 Abe_liu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSData (AES)
/**
 * Encrypt NSData using AES256 with a given symmetric encryption key.
 * @param key The symmetric encryption key
 */
- (NSData *)AES256EncryptWithKey:(NSString *)key;

/**
 * Decrypt NSData using AES256 with a given symmetric encryption key.
 * @param key The symmetric encryption key
 */
- (NSData *)AES256DecryptWithKey:(NSString *)key;






/**
 加密后NSData
 
 @param key 秘钥
 @param iv 初始化向量
 @return NSData
 */
- (NSData *)AES128EncryptWithKey:(NSString *)key iv:(NSString *)iv;

/**
 解密后NSData
 
 @param key 秘钥
 @param iv 初始化向量
 @return NSData
 */
- (NSData *)AES128DecryptWithKey:(NSString *)key iv:(NSString *)iv;


@end
