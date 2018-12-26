//
//  K eyChainStore.h
//  Common_lib
//
//  Created by Abe_liu on 2018/9/12.
//  Copyright © 2018年 Abe_liu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface KeyChainStore : NSObject


/**
 保存数据到钥匙串

 @param service 标识符
 @param data 需要保存的数据
 */
+ (void)save:(NSString *)service data:(id)data;

/**
 加载保存的数据

 @param service 指定的标识符
 @return 被保存的数据
 */
+ (id)load:(NSString *)service;

/**
 删除某个数据

 @param service 标识符
 */
+ (void)delete:(NSString *)service;
@end
