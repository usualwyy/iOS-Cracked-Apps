//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ASSStorageAccesser : NSObject
{
}

+ (id)getApdidcFromFile;
+ (id)getFromFile;
+ (id)loadJBErrorHistory;
+ (void)saveJBErrorHistory:(id)arg1;
+ (id)loadTrustData;
+ (void)saveTrustData:(id)arg1;
+ (id)loadApdidc;
+ (void)saveApdidc:(id)arg1;
+ (void)saveCurrentLoginTime:(id)arg1;
+ (id)loadLastLoginTime;
+ (void)saveEnvironmentMode:(id)arg1 keyName:(id)arg2;
+ (id)loadEnvironmentMode:(id)arg1;
+ (id)loadDynamicKey;
+ (void)saveDynamicKey:(id)arg1;
+ (id)getClientKeyDataFormation:(id)arg1;
+ (id)getRadomizedClientKey;
+ (id)getNewRadomizedID;
+ (id)getRandomizedID;
+ (id)loadPreviousApdid;
+ (void)clearStorage;
+ (id)loadStorageModelFromKeychain;
+ (void)saveStorageModel:(id)arg1;

@end

