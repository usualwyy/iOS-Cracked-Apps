//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface AlibcDeviceProbe : NSObject
{
    NSMutableDictionary *_utdidInfo;
    NSString *_umid;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *umid; // @synthesize umid=_umid;
@property(retain, nonatomic) NSMutableDictionary *utdidInfo; // @synthesize utdidInfo=_utdidInfo;
- (void).cxx_destruct;
- (void)recordCheckTime;
- (_Bool)isNeedCommitWithExpDays:(int)arg1;
- (void)recordAppInstallInfo;
- (id)getUmidComp;
- (void)registerUmid;
- (id)readUmid;
- (void)utUmid:(id)arg1;
- (_Bool)isValidUmid:(id)arg1;
- (void)recordAppUmidInfo:(id)arg1;
- (void)recodeAppUtdidInfo;
- (void)utMatchAppUtdidInfo:(id)arg1;
- (void)matchAppUtdidInfo;
- (id)utdid;
- (id)appKey;
- (void)appResignActive:(id)arg1;
- (void)appBecomeActive:(id)arg1;
- (void)appInit;
- (void)reisterAppEvent;

@end

