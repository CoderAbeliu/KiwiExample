//
//  ContactEmcrypt.h
//  KiwiExample
//
//  Created by Abe_liu on 2019/1/20.
//  Copyright © 2019 Abe_liu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ContactEncrypt : NSObject

/**
 加密字符串方法

 @param source 目标字符串
 @return 加密后的字符串
 */
+ (NSString *)createSHA512WithUTF8Encoding:(NSString *)source;

+ (NSString *)getModifiedPhoneNumber:(NSString *)phoneNumberString;
@end

NS_ASSUME_NONNULL_END
