//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBXSearchComboViewModelBase.h"

@class NSString, TBSearchOnesearchNXConfigManager, TBXSearchService;

@interface TBXSearchComboOnesearchViewModel : TBXSearchComboViewModelBase
{
    NSString *_oneSearchUrl;
    NSString *_abtest;
    NSString *_rn;
    TBSearchOnesearchNXConfigManager *_onesearchNXConfigManager;
    TBXSearchService *_itemSearchService;
    struct CGSize _oneSearchSize;
}

@property(retain, nonatomic) TBXSearchService *itemSearchService; // @synthesize itemSearchService=_itemSearchService;
@property(retain, nonatomic) TBSearchOnesearchNXConfigManager *onesearchNXConfigManager; // @synthesize onesearchNXConfigManager=_onesearchNXConfigManager;
@property(retain, nonatomic) NSString *rn; // @synthesize rn=_rn;
@property(retain, nonatomic) NSString *abtest; // @synthesize abtest=_abtest;
@property(nonatomic) struct CGSize oneSearchSize; // @synthesize oneSearchSize=_oneSearchSize;
@property(retain, nonatomic) NSString *oneSearchUrl; // @synthesize oneSearchUrl=_oneSearchUrl;
- (void).cxx_destruct;
- (id)getUTParamsDict;
- (id)getUTParamString;
- (void)processData;
- (id)initWithSearchService:(id)arg1 andOnesearchNXConfigManager:(id)arg2;

@end

