//
//  LanguageTools.h
//  Common_lib
//  国际化方案，待优化
//  Created by Abe_liu on 2018/10/5.
//  Copyright © 2018年 Abe_liu. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LanguageTools : NSObject

/**
 Localized string use NSLocalizedStringFromTableInBundle

 @param key language Key String
 @return localized string
 */
+(NSString *)localizedStringWithKey:(NSString *)key;



@end

NS_ASSUME_NONNULL_END
