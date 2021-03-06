//
//  Some handy functions
//
//  GZTUtilities.h
//
//  Created by 童罡正 on 8/3/15.
//  Copyright (c) 2015 Gangzheng Tong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GZTUtilities : NSObject

+(NSDictionary *)indexKeyedDictionaryFromArray:(NSArray *)array;
+(NSDictionary *) DictionaryFromArray: (NSArray*)array WithKey:(NSString *)key;
+(NSArray *)getArrayFromString:(NSString *)string;
+(NSString *)getStringFromArray:(NSArray*) myArray;

@end
