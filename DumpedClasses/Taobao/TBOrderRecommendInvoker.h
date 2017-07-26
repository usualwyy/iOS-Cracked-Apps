//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBOrderRecommendProtocol.h"
#import "TBOrderRecommendViewDelegate.h"

@class NSString, TBOrderRecommendView, TBOrderStorageComponent;

@interface TBOrderRecommendInvoker : NSObject <TBOrderRecommendViewDelegate, TBOrderRecommendProtocol>
{
    TBOrderRecommendView *_recommendView;
    TBOrderStorageComponent *_storageModel;
    NSString *_orderId;
    CDUnknownBlockType _recommendFinishBlock;
}

@property(copy, nonatomic) CDUnknownBlockType recommendFinishBlock; // @synthesize recommendFinishBlock=_recommendFinishBlock;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) TBOrderStorageComponent *storageModel; // @synthesize storageModel=_storageModel;
@property(retain, nonatomic) TBOrderRecommendView *recommendView; // @synthesize recommendView=_recommendView;
- (void).cxx_destruct;
- (void)customCellDidSelected:(id)arg1;
- (id)customCell:(id)arg1 indexPath:(id)arg2;
- (double)customCellHeight:(id)arg1;
- (long long)customCellNumberOfRowsInSection:(long long)arg1;
- (long long)customCellNumberOfSections;
- (void)showRecommendWithOrderId:(id)arg1 storage:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (_Bool)orangeSwitchRecommend;
- (void)recommendViewLoadFinished;
- (void)registRecmdEngine;
- (void)initRecommend;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

