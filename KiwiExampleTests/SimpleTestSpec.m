//
//  SimpleTestSpec.m
//  KiwiExample
//
//  Created by Abe_liu on 2018/12/21.
//  Copyright 2018 Abe_liu. All rights reserved.
//

#import <Kiwi/Kiwi.h>
#import "ViewController.h"


SPEC_BEGIN(SimpleTestSpec)

describe(@"SimpleTest", ^{
    __block ViewController *vc = nil;
    beforeAll(^{
        vc = [[ViewController alloc]init];
    });
    afterAll(^{
        vc = nil;
    });
    context(@"test ViewController message addA method", ^{
        it(@"the method should return 3", ^{
            [[theValue([vc addA:1 andB:2]) should]equal:theValue(3)];
        });
    });
});

SPEC_END
