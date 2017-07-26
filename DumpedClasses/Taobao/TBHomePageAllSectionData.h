//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<RTBehaviorStrategy>, NSArray<TBHomePageOneSectionData>, NSDictionary, NSString;

@interface TBHomePageAllSectionData : TBJSONModel
{
    _Bool _hasSecondRequest;
    long long _expireIntervalTimeMillis;
    NSArray<TBHomePageOneSectionData> *_sections;
    NSDictionary *_currentePageParam;
    NSArray<RTBehaviorStrategy> *_realTimeStrategy;
    double _cacheStartTime;
    double _cacheEndTime;
    NSString *_homeScriptUrl;
    NSString *_homeScriptVersion;
    NSString *_homeScriptMd5;
    double _lastSecondRequestFailTimeInterval;
    unsigned long long _pageNum;
    unsigned long long _pageTotal;
    NSString *_isLastPage;
    unsigned long long _itemLastCount;
}

@property(nonatomic) unsigned long long itemLastCount; // @synthesize itemLastCount=_itemLastCount;
@property(copy, nonatomic) NSString *isLastPage; // @synthesize isLastPage=_isLastPage;
@property(nonatomic) unsigned long long pageTotal; // @synthesize pageTotal=_pageTotal;
@property(nonatomic) unsigned long long pageNum; // @synthesize pageNum=_pageNum;
@property double lastSecondRequestFailTimeInterval; // @synthesize lastSecondRequestFailTimeInterval=_lastSecondRequestFailTimeInterval;
@property _Bool hasSecondRequest; // @synthesize hasSecondRequest=_hasSecondRequest;
@property(copy, nonatomic) NSString *homeScriptMd5; // @synthesize homeScriptMd5=_homeScriptMd5;
@property(copy, nonatomic) NSString *homeScriptVersion; // @synthesize homeScriptVersion=_homeScriptVersion;
@property(copy, nonatomic) NSString *homeScriptUrl; // @synthesize homeScriptUrl=_homeScriptUrl;
@property(nonatomic) double cacheEndTime; // @synthesize cacheEndTime=_cacheEndTime;
@property(nonatomic) double cacheStartTime; // @synthesize cacheStartTime=_cacheStartTime;
@property(retain, nonatomic) NSArray<RTBehaviorStrategy> *realTimeStrategy; // @synthesize realTimeStrategy=_realTimeStrategy;
@property(retain, nonatomic) NSDictionary *currentePageParam; // @synthesize currentePageParam=_currentePageParam;
@property(retain, nonatomic) NSArray<TBHomePageOneSectionData> *sections; // @synthesize sections=_sections;
@property(nonatomic) long long expireIntervalTimeMillis; // @synthesize expireIntervalTimeMillis=_expireIntervalTimeMillis;
- (void).cxx_destruct;
- (id)JSONRepresentation;
- (_Bool)isUsingMunionSDKData;

@end

