//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSDKConfigurationPrivate.h"

@class NSMutableDictionary, NSString, TBSDKAccountInfo, TBSDKConfigurationHelper, TBSDKMTOPEnvConfig, TBSDKThreadSafeMutableDictionary;

@interface TBSDKConfiguration : NSObject <TBSDKConfigurationPrivate>
{
    _Bool _safeSecret;
    _Bool _supportOpenAccsOut;
    int _environment;
    NSString *_appVersion;
    double _timestampOffset;
    NSString *_deviceID;
    NSString *_appKey;
    NSString *_securityAppKey;
    NSString *_appName;
    NSString *_wapTTID;
    NSString *_wapAPIURL;
    NSString *_topAPIURL;
    NSString *_oldDeviceId;
    TBSDKAccountInfo *_accountInfo;
    NSString *_mtopOriginalUrl;
    NSString *_topOriginalUrl;
    NSString *_tproject;
    NSString *_wapAPISecurityURL;
    NSString *_debugId;
    NSString *_defaultDomain;
    NSString *_utdid;
    NSString *_uid;
    unsigned long long _features;
    double _longitude;
    double _latitude;
    NSString *_customErrorMessage;
    TBSDKThreadSafeMutableDictionary *_globalCustomHeader;
    TBSDKThreadSafeMutableDictionary *_globalExtData;
    TBSDKConfigurationHelper *_configurationHelper;
    TBSDKMTOPEnvConfig *_mtopConfig;
    NSMutableDictionary *_applicationHeaders;
    struct _opaque_pthread_rwlock_t _rwlock;
}

+ (id)timeStampFixedWithServer;
+ (void)addEcodeSignAPI:(id)arg1;
+ (id)shareInstance;
@property(nonatomic) struct _opaque_pthread_rwlock_t rwlock; // @synthesize rwlock=_rwlock;
@property(retain, nonatomic) NSMutableDictionary *applicationHeaders; // @synthesize applicationHeaders=_applicationHeaders;
@property(retain, nonatomic) TBSDKMTOPEnvConfig *mtopConfig; // @synthesize mtopConfig=_mtopConfig;
@property(retain, nonatomic) TBSDKConfigurationHelper *configurationHelper; // @synthesize configurationHelper=_configurationHelper;
@property(retain, nonatomic) TBSDKThreadSafeMutableDictionary *globalExtData; // @synthesize globalExtData=_globalExtData;
@property(retain, nonatomic) TBSDKThreadSafeMutableDictionary *globalCustomHeader; // @synthesize globalCustomHeader=_globalCustomHeader;
@property(retain, nonatomic) NSString *customErrorMessage; // @synthesize customErrorMessage=_customErrorMessage;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) _Bool supportOpenAccsOut; // @synthesize supportOpenAccsOut=_supportOpenAccsOut;
@property(readonly) unsigned long long features; // @synthesize features=_features;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(retain, nonatomic) NSString *defaultDomain; // @synthesize defaultDomain=_defaultDomain;
@property(retain, nonatomic) NSString *debugId; // @synthesize debugId=_debugId;
@property(retain, nonatomic) NSString *wapAPISecurityURL; // @synthesize wapAPISecurityURL=_wapAPISecurityURL;
@property(retain, nonatomic) NSString *tproject; // @synthesize tproject=_tproject;
@property(retain, nonatomic) NSString *topOriginalUrl; // @synthesize topOriginalUrl=_topOriginalUrl;
@property(retain, nonatomic) NSString *mtopOriginalUrl; // @synthesize mtopOriginalUrl=_mtopOriginalUrl;
@property(nonatomic) _Bool safeSecret; // @synthesize safeSecret=_safeSecret;
@property(retain, nonatomic) TBSDKAccountInfo *accountInfo; // @synthesize accountInfo=_accountInfo;
@property(retain, nonatomic) NSString *oldDeviceId; // @synthesize oldDeviceId=_oldDeviceId;
@property(retain, nonatomic) NSString *topAPIURL; // @synthesize topAPIURL=_topAPIURL;
@property(retain, nonatomic) NSString *wapAPIURL; // @synthesize wapAPIURL=_wapAPIURL;
@property(retain, nonatomic) NSString *wapTTID; // @synthesize wapTTID=_wapTTID;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(nonatomic) int environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *securityAppKey; // @synthesize securityAppKey=_securityAppKey;
@property(readonly, nonatomic) double timestampOffset; // @synthesize timestampOffset=_timestampOffset;
- (void).cxx_destruct;
- (void)setAppkeyIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long appkeyIndex;
- (void)loadAVCV;
- (id)getStorageKeyForCV;
- (id)getStorageKeyForAV;
@property(retain, nonatomic) NSString *networkSDKOldDeviceId;
@property(retain, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (void)setTimestampOffset:(double)arg1;
@property(readonly, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void)removeAllApplicationRequestHeader;
- (void)removeApplicationRequestHeader:(id)arg1;
- (id)getCurrentApplicationRequestHeader;
- (id)getApplicationRequestHeader:(id)arg1;
- (void)setApplicationRequestHeader:(id)arg1 forKey:(id)arg2;
- (void)disableAllSiteHttps;
- (void)enableAllSiteHttps;
- (void)loadDataFromOldStorage;
- (void)unableWhiteSecurity;
@property(retain, nonatomic) NSString *authCode;
- (void)enableWhiteSecurity;
- (void)enableUnitFeatures;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

