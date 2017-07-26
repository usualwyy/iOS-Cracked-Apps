//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TBPopLayerConfigManager : NSObject
{
    _Bool _isUpdatingConfig;
    _Bool _isMockConfigEnabled;
    NSString *_configIndexString;
    NSDictionary *_configDictionary;
    NSDictionary *_mockedConfig;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *mockedConfig; // @synthesize mockedConfig=_mockedConfig;
@property(nonatomic) _Bool isMockConfigEnabled; // @synthesize isMockConfigEnabled=_isMockConfigEnabled;
@property(copy, nonatomic) NSDictionary *configDictionary; // @synthesize configDictionary=_configDictionary;
@property(copy, nonatomic) NSString *configIndexString; // @synthesize configIndexString=_configIndexString;
@property(nonatomic) _Bool isUpdatingConfig; // @synthesize isUpdatingConfig=_isUpdatingConfig;
- (void).cxx_destruct;
- (long long)checkConfig:(id)arg1;
- (void)checkConfigArray:(id)arg1 validConfigArrayBlock:(CDUnknownBlockType)arg2;
- (void)changeConfigSource:(_Bool)arg1 withAllConfig:(id)arg2;
- (id)resolveWithJsonString:(id)arg1;
- (void)formatConfig:(id)arg1 insertDict:(id)arg2 andJsonString:(id)arg3;
- (id)configDictionaryFromJsonArray:(id)arg1;
- (id)getJsonArrayWithIDArray:(id)arg1;
- (id)getIDArrayFromConfigIndex:(id)arg1 seperatedByString:(id)arg2;
- (id)getJsonArrayWithConfigIndex:(id)arg1;
- (id)getConfigByKey:(id)arg1;
- (_Bool)hasTmallConfig;
- (void)analyseConfig;
- (void)configChanged:(id)arg1;
- (void)registerObserver;
- (id)getJsonArray;
- (id)getConfigDictionary;
- (id)getConfigIndexString;
- (id)init;

@end

