//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailSkuStageInfo, NSArray<AliDetailSkuContractInfo>;

@interface AliDetailSkuVertical : TBJSONModel
{
    AliDetailSkuStageInfo *_installment;
    NSArray<AliDetailSkuContractInfo> *_contractData;
}

@property(retain, nonatomic) NSArray<AliDetailSkuContractInfo> *contractData; // @synthesize contractData=_contractData;
@property(retain, nonatomic) AliDetailSkuStageInfo *installment; // @synthesize installment=_installment;
- (void).cxx_destruct;

@end

