//
//  DeviceTools.h
//  Common_lib
//
//  Created by Abe_liu on 2018/10/5.
//  Copyright © 2018年 Abe_liu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DevicesTools : NSObject
/**
 获取手机型号
 
 @return e.g. @"iPhone7"
 */
+ (NSString *)getPhoneType;

/**
 获取手机厂商名称
 
 @return @"Apple"
 */
+ (NSString *)getPhoneManufacturer;

/**
 获取手机系统版本
 
 @return @"iOS 9.1"
 */
+ (NSString *)getPhoneOSVersion;

/**
 获取APP版本信息
 
 @return 8.0.7.2
 */
+ (NSString *)getAPPVersion;

/**
 获取本机该APP UUID
 
 @return 本机的UUID
 */
+ (NSString *)getPhoneAPPUUID;

/**
 获取本机的系统类型
 
 @return "iOS"
 */
+ (NSString *)getPhoneOSType;
@end

NS_ASSUME_NONNULL_END
