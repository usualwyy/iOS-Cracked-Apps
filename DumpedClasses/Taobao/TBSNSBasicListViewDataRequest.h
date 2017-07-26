//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSNSBasicServiceDelegate.h"

@class NSString, TBSNSBasicListViewDataContainer, TBSNSListNetService;

@interface TBSNSBasicListViewDataRequest : NSObject <TBSNSBasicServiceDelegate>
{
    int pageSize;
    long long curRequestState;
    _Bool isLoading;
    id <TBSNSBasicListViewDataRequestDelegate> x_delegate;
    TBSNSBasicListViewDataContainer *dataContainer;
    TBSNSListNetService *service;
    long long _reloadCount;
}

+ (id)dataRequest;
@property(nonatomic) long long reloadCount; // @synthesize reloadCount=_reloadCount;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading;
@property(retain, nonatomic) TBSNSListNetService *service; // @synthesize service;
@property(retain, nonatomic) TBSNSBasicListViewDataContainer *dataContainer; // @synthesize dataContainer;
@property(nonatomic) __weak id <TBSNSBasicListViewDataRequestDelegate> delegate; // @synthesize delegate=x_delegate;
- (void).cxx_destruct;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)serviceDidCancelLoad:(id)arg1;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidStartLoad:(id)arg1;
- (_Bool)isReloading;
- (_Bool)isNextPageLoading;
- (_Bool)isRefreshLoading;
- (id)getLastDataItem;
- (id)getFirstDataItem;
- (id)getDataAtIndex:(long long)arg1;
- (long long)getDataCount;
- (void)reset;
- (void)nextPage;
- (void)update;
- (void)reloadData;
- (void)loadCacheData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

