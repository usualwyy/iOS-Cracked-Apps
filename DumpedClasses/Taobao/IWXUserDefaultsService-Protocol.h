//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSString, NSURL;

@protocol IWXUserDefaultsService <NSObject>
- (void)synchronize;
- (void)removeObjectForKey:(NSString *)arg1;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2;
- (id)objectForKey:(NSString *)arg1;

@optional
- (void)setURL:(NSURL *)arg1 forKey:(NSString *)arg2;
- (void)setBool:(_Bool)arg1 forKey:(NSString *)arg2;
- (void)setDouble:(double)arg1 forKey:(NSString *)arg2;
- (void)setFloat:(float)arg1 forKey:(NSString *)arg2;
- (void)setInteger:(long long)arg1 forKey:(NSString *)arg2;
- (NSURL *)URLForKey:(NSString *)arg1;
- (_Bool)boolForKey:(NSString *)arg1;
- (double)doubleForKey:(NSString *)arg1;
- (float)floatForKey:(NSString *)arg1;
- (long long)integerForKey:(NSString *)arg1;
- (NSArray *)stringArrayForKey:(NSString *)arg1;
- (NSData *)dataForKey:(NSString *)arg1;
- (NSDictionary *)dictionaryForKey:(NSString *)arg1;
- (NSArray *)arrayForKey:(NSString *)arg1;
- (NSString *)stringForKey:(NSString *)arg1;
@end

