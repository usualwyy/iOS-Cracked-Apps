//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXContextBindingObject.h"

#import "IWXUserDefaultsService.h"
#import "YWServiceImplProtocol.h"

@class NSString;

@interface WXUserDefaults : WXContextBindingObject <YWServiceImplProtocol, IWXUserDefaultsService>
{
}

+ (id)sharedInstance;
+ (id)customUserDefaults;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)removeAllSDKKeysWhenDecryptFail;
- (void)setSDKKeyPreffix:(id)arg1;
- (_Bool)checkKeyChange;
- (void)synchronize;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)_encryptStringWithPreffix:(id)arg1;
- (id)initWithModularRef:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
