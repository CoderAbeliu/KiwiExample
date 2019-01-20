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

+ (NSString *)createSHA512WithUTF8Encoding:(NSString *)source;

+ (NSString *)getModifiedPhoneNumber:(NSString *)phoneNumberString;
@end

NS_ASSUME_NONNULL_END
