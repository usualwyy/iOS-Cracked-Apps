//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray<TBMTBDeliveryItem>, NSDictionary, NSString, TBMTBDataSource, TBMTBOrderCount, TBMTBTrade;

@interface TBMyTaobaoMainViewService : NSObject
{
    TBMTBDataSource *_dataSource;
    NSDictionary *_statusIconFontDic;
    TBMTBOrderCount *_orderCount;
    NSArray<TBMTBDeliveryItem> *_deliveryList;
    TBMTBTrade *_trade;
    NSString *_logisticsString;
    NSString *_listenerUuid;
    id <TBMyTaobaoMainViewServiceDelegate> _delegate;
}

+ (id)shareInstance;
@property(retain, nonatomic) id <TBMyTaobaoMainViewServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *listenerUuid; // @synthesize listenerUuid=_listenerUuid;
@property(retain, nonatomic) NSString *logisticsString; // @synthesize logisticsString=_logisticsString;
@property(retain, nonatomic) TBMTBTrade *trade; // @synthesize trade=_trade;
@property(retain, nonatomic) NSArray<TBMTBDeliveryItem> *deliveryList; // @synthesize deliveryList=_deliveryList;
@property(retain, nonatomic) TBMTBOrderCount *orderCount; // @synthesize orderCount=_orderCount;
@property(retain, nonatomic) NSDictionary *statusIconFontDic; // @synthesize statusIconFontDic=_statusIconFontDic;
- (void).cxx_destruct;
- (_Bool)removeObjectFromCachePath:(id)arg1;
- (_Bool)removeObjectFromCacheName:(id)arg1;
- (id)getObjectFromCachePatch:(id)arg1;
- (id)getObjcetFromCache:(id)arg1;
- (void)setObjectToCache:(id)arg1 object:(id)arg2;
- (id)normalCachePath:(id)arg1;
- (void)removeCacheDataValueForKey:(id)arg1;
- (id)getCaheDataForKey:(id)arg1;
- (void)saveCacheDataValue:(id)arg1 forKey:(id)arg2;
- (_Bool)isExpiredWithKey:(id)arg1 DefaultTimeInterval:(long long)arg2;
- (void)updateDeliveryList;
- (void)updateOrderCount;
- (_Bool)strictCheckDataSource:(id)arg1;
- (_Bool)checkDataSource:(id)arg1;
@property(retain, nonatomic) TBMTBDataSource *dataSource; // @synthesize dataSource=_dataSource;
- (id)convertDicToModuleData:(id)arg1;
- (id)combineWithDataSource:(id)arg1;
- (void)requestDeliveryListWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestMyTaobaoDataIsForceRefresh:(_Bool)arg1 isFirstLoad:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)fetchACDSOrderCountWithCompletion;
- (void)callCompletionBlockisSuccess:(_Bool)arg1 withData:(id)arg2 withType:(unsigned long long)arg3;
- (void)dealloc;
- (id)init;
- (void)fixErrorGetData;
- (void)expireGetData;
- (void)resetProperty;
- (void)removeAllCacheData;

@end

