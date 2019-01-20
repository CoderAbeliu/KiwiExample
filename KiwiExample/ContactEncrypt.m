//
//  ContactEmcrypt.m
//  KiwiExample
//
//  Created by Abe_liu on 2019/1/20.
//  Copyright © 2019 Abe_liu. All rights reserved.
//

#import "ContactEncrypt.h"
#import <CommonCrypto/CommonCrypto.h>


#define CC_SHA512_DIGEST_LENGTH     64          /* digest length in bytes */
typedef uint32_t CC_LONG;       /* 32 bit unsigned integer */
extern unsigned char *CC_SHA512(const void *data, CC_LONG len, unsigned char *md)
__OSX_AVAILABLE_STARTING(__MAC_10_4, __IPHONE_2_0);

@implementation ContactEncrypt : NSObject 

+ (NSString *)createSHA512WithUTF8Encoding:(NSString *)source {
    const char *cstr = [source cStringUsingEncoding:NSUTF8StringEncoding];
    NSData *data = [NSData dataWithBytes:cstr length:source.length];
    uint8_t digest[CC_SHA512_DIGEST_LENGTH];
    CC_SHA512(data.bytes, (CC_LONG) data.length, digest);
    NSMutableString *output = [NSMutableString stringWithCapacity:CC_SHA512_DIGEST_LENGTH * 2];
    for (int i = 0; i < CC_SHA512_DIGEST_LENGTH; i++)
        [output appendFormat:@"%02x", digest[i]];
    return output;
}

+ (NSString *)getModifiedPhoneNumber:(NSString *)phoneNumberString {
    NSString *finalPhoneString = @"";
    if (phoneNumberString && [phoneNumberString length] > 0) {
        NSString *countryCode = @"CN";
        NSString *mobileCountryCode = [self callingCodeMap][countryCode];
        if ([[phoneNumberString substringWithRange:NSMakeRange(0, 1)] isEqualToString:@"+"]) {
            phoneNumberString = [phoneNumberString stringByReplacingCharactersInRange:NSMakeRange(0, 1) withString:@"00"];
            return phoneNumberString;
        } else if ([phoneNumberString length] > 1 && [[phoneNumberString substringWithRange:NSMakeRange(0, 2)] isEqualToString:@"00"]) {
            return phoneNumberString;
        } else if ([[phoneNumberString substringWithRange:NSMakeRange(0, 1)] isEqualToString:@"0"]) {
            phoneNumberString = [phoneNumberString stringByReplacingCharactersInRange:NSMakeRange(0, 1) withString:mobileCountryCode];
            return phoneNumberString;
        } else {
            NSString *finalStr = mobileCountryCode;
            finalStr = [finalStr stringByAppendingString:phoneNumberString];
            finalPhoneString = finalStr;
        }
    }
    
    return finalPhoneString;
}

+ (NSDictionary *)callingCodeMap {
    return @{
             @"AD": @"00376",
             @"CN": @"0086",
             };
}

@end
