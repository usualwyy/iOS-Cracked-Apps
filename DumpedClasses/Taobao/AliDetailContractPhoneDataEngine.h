//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AliDetailSkuContractInfo;

@interface AliDetailContractPhoneDataEngine : NSObject
{
    _Bool _isCompleted;
    AliDetailSkuContractInfo *_contractInfo;
}

+ (id)contractPhoneDataEngineWithContrctInfo:(id)arg1;
@property(nonatomic) __weak AliDetailSkuContractInfo *contractInfo; // @synthesize contractInfo=_contractInfo;
@property(nonatomic) _Bool isCompleted; // @synthesize isCompleted=_isCompleted;
- (void).cxx_destruct;
- (id)selectedDesc;
- (void)checkOpenItemTypeL:(long long)arg1 result:(CDUnknownBlockType)arg2;
- (void)checkOpenItemType:(long long)arg1 result:(CDUnknownBlockType)arg2;
- (id)getPhoneNum;
- (id)getStandardList;
- (id)getPlanList;
- (id)getCityMap;
- (void)setPhoneNumber:(id)arg1;
- (void)setNetStandard:(id)arg1;
- (void)setPlan:(id)arg1;
- (void)setCity:(id)arg1;

@end

