//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBCDNImageConfigModel;

@interface TBCDNImageConfigCenter : NSObject
{
    _Bool _needUrlJoin;
    _Bool _needDomainConvergence;
    _Bool _needWebviewSupportWebP;
    _Bool _isWeakNetwork;
    _Bool _defaultImageUseWebp;
    NSString *_configFileName;
    id <TBCDNImageConfigProtocol> _configDelegate;
    id <TBCDNImageAdaptProtocol> _adaptDelegate;
    TBCDNImageConfigModel *_configModel;
    NSString *_defaultImageQualitySuffix;
    NSString *_defaultImageWebpSuffix;
    NSString *_defaultImageSharpenSuffix;
    NSString *_configNotificationName;
    long long _defaultImageQualityValue;
    long long _defaultImageSharpValue;
    double _firstDelay;
    double _sampleInterval;
    double _strongSemaphoreThreshold;
}

+ (id)sharedConfigCenter;
@property(nonatomic) double strongSemaphoreThreshold; // @synthesize strongSemaphoreThreshold=_strongSemaphoreThreshold;
@property(nonatomic) double sampleInterval; // @synthesize sampleInterval=_sampleInterval;
@property(nonatomic) double firstDelay; // @synthesize firstDelay=_firstDelay;
@property(nonatomic) _Bool defaultImageUseWebp; // @synthesize defaultImageUseWebp=_defaultImageUseWebp;
@property(nonatomic) long long defaultImageSharpValue; // @synthesize defaultImageSharpValue=_defaultImageSharpValue;
@property(nonatomic) long long defaultImageQualityValue; // @synthesize defaultImageQualityValue=_defaultImageQualityValue;
@property(copy, nonatomic) NSString *configNotificationName; // @synthesize configNotificationName=_configNotificationName;
@property(copy, nonatomic) NSString *defaultImageSharpenSuffix; // @synthesize defaultImageSharpenSuffix=_defaultImageSharpenSuffix;
@property(copy, nonatomic) NSString *defaultImageWebpSuffix; // @synthesize defaultImageWebpSuffix=_defaultImageWebpSuffix;
@property(copy, nonatomic) NSString *defaultImageQualitySuffix; // @synthesize defaultImageQualitySuffix=_defaultImageQualitySuffix;
@property(retain, nonatomic) TBCDNImageConfigModel *configModel; // @synthesize configModel=_configModel;
@property(retain, nonatomic) id <TBCDNImageAdaptProtocol> adaptDelegate; // @synthesize adaptDelegate=_adaptDelegate;
@property(retain, nonatomic) id <TBCDNImageConfigProtocol> configDelegate; // @synthesize configDelegate=_configDelegate;
@property(nonatomic) NSString *configFileName; // @synthesize configFileName=_configFileName;
@property(nonatomic) _Bool isWeakNetwork; // @synthesize isWeakNetwork=_isWeakNetwork;
@property(readonly, nonatomic) _Bool needWebviewSupportWebP; // @synthesize needWebviewSupportWebP=_needWebviewSupportWebP;
@property(readonly, nonatomic) _Bool needDomainConvergence; // @synthesize needDomainConvergence=_needDomainConvergence;
@property(readonly, nonatomic) _Bool needUrlJoin; // @synthesize needUrlJoin=_needUrlJoin;
- (void).cxx_destruct;
- (id)getConfigDict;
- (void)configChanged:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)networkChanged:(id)arg1;
- (void)onNetworkQualityChanged:(unsigned long long)arg1 withSpeed:(double)arg2;
- (double)levelRatio;
- (id)levelModelXZImageSizes;
- (id)levelModelImageSizes;
- (id)cdnXZImageSizes;
- (id)cdnImageSizes;
- (id)cdnWidthsOf10000Height;
- (id)cdnHeightsOf10000Width;
- (_Bool)useWebpForModule:(id)arg1;
- (id)imageWebpSuffixForModule:(id)arg1;
- (id)domainConvertExcludePath;
- (id)imageDestDomain;
- (id)ossCdnExactExcludeDomain;
- (id)ossCdnFuzzyExcludePath;
- (id)ossCdnDomain;
- (id)aliCdnExactExcludeDomain;
- (id)aliCdnFuzzyExcludePath;
- (id)aliCdnDomain;
- (id)imageQualitySuffixDictForModule:(id)arg1;
- (long long)qualityValueForModule:(id)arg1;
- (id)imageQualitySuffixForModule:(id)arg1;
- (long long)sharpenValueForModule:(id)arg1;
- (id)imageSharpenSuffixForModule:(id)arg1;
- (void)forceLowQualityImage;
- (void)forceHighQualityImage;
- (void)autoConfigImageQuality;
- (void)initNetworkMonitor;
- (void)addFuzzyExcludePath:(id)arg1;
- (void)addExactExcludeDomain:(id)arg1;
- (void)addOssCdnDomain:(id)arg1;
- (void)addAliCdnDomain:(id)arg1;
- (void)addConfigModule:(id)arg1;
- (void)setupDefaultConfigWithUrlJoin:(_Bool)arg1 domainConvergence:(_Bool)arg2 webviewSupportWebP:(_Bool)arg3;
- (void)setupDefaultConfig;
- (void)updateModelFromConfigCenter;
- (void)getModelFromConfigCenter;
- (void)setupDefaultModel;
- (void)dealloc;
- (id)init;

@end

