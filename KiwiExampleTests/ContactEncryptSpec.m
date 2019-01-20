//
//  ContactEncryptSpec.m
//  KiwiExample
//
//  Created by Abe_liu on 2019/1/20.
//  Copyright 2019 Abe_liu. All rights reserved.
//

#import <Kiwi/Kiwi.h>
#import "ContactEncrypt.h"

@interface ContactEncrypt (Specs)

+ (NSString *)getModifiedPhoneNumber:(NSString *)phoneNumberString;

@end

SPEC_BEGIN(ContactEncryptSpec)

describe(@"ContactEncrypt", ^{
    context(@"getModifiedPhoneNumber", ^{
        it(@"should replace +86 with 0086", ^{
            NSString *phoneNumber = @"+8612345678901";
            [[[ContactEncrypt getModifiedPhoneNumber:phoneNumber] should] equal:@"008612345678901"];
        });
        it(@"do not process if phone number starts with 00", ^{
            NSString *phoneNumber = @"0012345678901";
            [[[ContactEncrypt getModifiedPhoneNumber:phoneNumber] should] equal:@"0012345678901"];
        });
        it(@"should replace 0 with 0086", ^{
            NSString *phoneNumber = @"012345678901";
            [[[ContactEncrypt getModifiedPhoneNumber:phoneNumber] should] equal:@"008612345678901"];
        });
        it(@"should add 0086 to phone number if phone number does not start with + or 00 or 0", ^{
            NSString *phoneNumber = @"12345678901";
            [[[ContactEncrypt getModifiedPhoneNumber:phoneNumber] should] equal:@"008612345678901"];
        });
    });
});

SPEC_END
