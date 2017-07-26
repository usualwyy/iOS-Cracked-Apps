//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliLauncherDefaultDataProtocal.h"

@class AliLauncherConfig, AliLauncherStat, NSArray, NSDictionary, NSString, TBRuleSyncChain;

@interface TBAppLifeLauncher : NSObject <AliLauncherDefaultDataProtocal>
{
    _Bool _isOpenSmart;
    _Bool _isOpenAnnotation;
    NSDictionary *_launchOptions;
    NSArray *_launchDisableItems;
    id <TBAppConfigurationProtocol> _appConfiguration;
    id <AliLaucherDataProtocal> _dataProtocal;
    TBRuleSyncChain *_ruleSyncChain;
    AliLauncherStat *_laucherStat;
    AliLauncherConfig *_launchCfg;
    NSString *_configFile;
}

+ (void)setAppLaunchDisableItems:(id)arg1;
+ (void)setAppLaunchOptions:(id)arg1;
+ (void)setConfigurationFile:(id)arg1;
+ (void)setSettings:(id)arg1;
+ (id)sharedInstance;
+ (void)monitorLaunchItem:(id)arg1 andSubInfo:(id)arg2 andLaunchType:(id)arg3 andFirstLaunch:(_Bool)arg4;
+ (void)monitorLaunchItem:(id)arg1 andTime:(id)arg2;
+ (id)registerAppMonitor;
@property(retain, nonatomic) NSString *configFile; // @synthesize configFile=_configFile;
@property(retain, nonatomic) AliLauncherConfig *launchCfg; // @synthesize launchCfg=_launchCfg;
@property(nonatomic) _Bool isOpenAnnotation; // @synthesize isOpenAnnotation=_isOpenAnnotation;
@property(nonatomic) _Bool isOpenSmart; // @synthesize isOpenSmart=_isOpenSmart;
@property(retain, nonatomic) AliLauncherStat *laucherStat; // @synthesize laucherStat=_laucherStat;
@property(retain, nonatomic) TBRuleSyncChain *ruleSyncChain; // @synthesize ruleSyncChain=_ruleSyncChain;
@property(nonatomic) __weak id <AliLaucherDataProtocal> dataProtocal; // @synthesize dataProtocal=_dataProtocal;
@property(nonatomic) __weak id <TBAppConfigurationProtocol> appConfiguration; // @synthesize appConfiguration=_appConfiguration;
@property(retain) NSArray *launchDisableItems; // @synthesize launchDisableItems=_launchDisableItems;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
- (void).cxx_destruct;
- (id)launchItemsInfo;
- (void)alilauncherDidFinish:(_Bool)arg1;
- (void)homePageDidFinishLaunch;
- (void)appDidFinishLaunching;
- (void)setAliLauncherHandler:(id)arg1;
- (id)init;
- (double)wrapHomePageDidFinishLaunchWith:(id)arg1 className:(id)arg2 configuration:(id)arg3 notification:(id)arg4 backwardCompatible:(_Bool)arg5;
- (void)wrapAppDidFinishLaunchWith:(id)arg1 className:(id)arg2 configuration:(id)arg3;
- (_Bool)checkPreviousRunSuccess:(id)arg1 isOptional:(_Bool)arg2;
- (_Bool)isMainThread:(id)arg1;
- (void)idleTaskWithLaunchItems:(id)arg1 notification:(id)arg2;
- (id)serialAfterHomePageDidFinishLaunchItems:(id)arg1 notification:(id)arg2 dispatchQueue:(id)arg3 promiseChain:(id)arg4;
- (void)parallelAfterHomePageDidFinishLaunchItems:(id)arg1 notification:(id)arg2 dispatchGroup:(id)arg3 dispatchQueue:(id)arg4 promiseChain:(id)arg5;
- (void)delayHomePageDidFinishLaunch:(id)arg1;
- (void)homePageDidFinishLaunch:(id)arg1;
- (void)defaultHandleLaucherData:(id)arg1 andLauncherType:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

