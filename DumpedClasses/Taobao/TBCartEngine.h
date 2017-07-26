//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBCartEngine : NSObject
{
}

+ (_Bool)clearCartCache;
+ (void)registerServiceMockDelegate:(id)arg1;
+ (void)registerProcessorDelegate:(id)arg1;
+ (void)gainCoupon:(id)arg1 promotionType:(id)arg2 activityId:(id)arg3 userInfo:(id)arg4;
+ (void)queryCoupon:(id)arg1 withShop:(id)arg2 userInfo:(id)arg3;
+ (unsigned long long)checkSubmitType:(id *)arg1 nativeHost:(id *)arg2 items:(id)arg3;
+ (id)groupCommitData;
+ (_Bool)isNeedGroupCommit;
+ (id)checkSubmitRules;
+ (id)buyItemIds:(id)arg1;
+ (id)buyCartIds:(id)arg1;
+ (id)buyItemIds;
+ (id)buyCartIds;
+ (id)selectedItems;
+ (id)feature;
+ (id)excludes;
+ (id)pageMeta;
+ (_Bool)isUpgradeSettlement;
+ (_Bool)isSettlementAlone;
+ (_Bool)isRemoteCheck;
+ (id)control;
+ (_Bool)isPreLoadOpen;
+ (id)version;
+ (_Bool)isEndPage;
+ (id)outputs;
+ (void)checkAll:(_Bool)arg1 isEditing:(_Bool)arg2 userInfo:(id)arg3;
+ (void)checkAll:(_Bool)arg1;
+ (_Bool)isCheckAll;
+ (void)registerSuccessBlock:(CDUnknownBlockType)arg1 FailedBlock:(CDUnknownBlockType)arg2 withAction:(unsigned long long)arg3;
+ (void)registerFailedBlock:(CDUnknownBlockType)arg1 withAction:(unsigned long long)arg2;
+ (void)registerSuccessBlock:(CDUnknownBlockType)arg1 withAction:(unsigned long long)arg2;
+ (void)switchDivision:(id)arg1;
+ (void)switchClient:(id)arg1;
+ (void)free;
+ (_Bool)isEditing;
+ (void)editCart:(_Bool)arg1;
+ (long long)totalCount;
+ (id)allItems;
+ (long long)maxSubmitSize;
+ (id)validItems;
+ (id)invalidItems;
+ (void)clearInvalidItems:(id)arg1;
+ (void)checkCart:(id)arg1 withChecked:(_Bool)arg2 isEditing:(_Bool)arg3 userInfo:(id)arg4;
+ (void)deleteSelectedItems:(id)arg1;
+ (void)deleteItem:(id)arg1 isValid:(_Bool)arg2 userInfo:(id)arg3;
+ (void)updateQuantity:(id)arg1 userInfo:(id)arg2;
+ (void)updateSku:(id)arg1 userInfo:(id)arg2;
+ (void)addSelectedItems2Favorite:(id)arg1;
+ (void)addFavorite:(id)arg1 userInfo:(id)arg2;
+ (unsigned long long)requestNetType:(unsigned long long)arg1;
+ (void)queryCart:(unsigned long long)arg1 isFirst:(_Bool)arg2 isPage:(_Bool)arg3 forceUpate:(_Bool)arg4 netType:(unsigned long long)arg5 userInfo:(id)arg6 pushCartId:(id)arg7;
+ (void)queryCart:(unsigned long long)arg1 isFirst:(_Bool)arg2 isPage:(_Bool)arg3 forceUpate:(_Bool)arg4 netType:(unsigned long long)arg5 userInfo:(id)arg6;
+ (void)queryCart:(unsigned long long)arg1 isFirst:(_Bool)arg2 forceUpate:(_Bool)arg3 netType:(unsigned long long)arg4 userInfo:(id)arg5 pushCartId:(id)arg6;
+ (void)queryCart:(unsigned long long)arg1 isFirst:(_Bool)arg2 forceUpate:(_Bool)arg3 netType:(unsigned long long)arg4 userInfo:(id)arg5;
+ (void)addItem2Cart:(id)arg1 withQuantity:(int)arg2 skuId:(id)arg3 exParams:(id)arg4 from:(id)arg5;

@end

