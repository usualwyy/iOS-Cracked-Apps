//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutNewViewModel.h"

@class NSArray, NSMutableArray, TBTakeoutStoreDetailViewModel, TBTakeoutStoreGetVoucherInfoViewModel, TBTakeoutStoreModel;

@interface TBTakeoutStoreViewModel : TBTakeoutNewViewModel
{
    _Bool _storeDetailDidLoad;
    long long _storeId;
    long long _serviceId;
    double _latitude;
    double _longitude;
    NSArray *_itemsInCartArray;
    NSArray *_menuViewModels;
    TBTakeoutStoreDetailViewModel *_detailViewModel;
    TBTakeoutStoreGetVoucherInfoViewModel *_getVoucherInfoViewModel;
    NSArray *_banners;
    TBTakeoutStoreModel *_model;
    NSMutableArray *_menuViewModelList;
}

@property(retain, nonatomic) NSMutableArray *menuViewModelList; // @synthesize menuViewModelList=_menuViewModelList;
@property(retain, nonatomic) TBTakeoutStoreModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSArray *banners; // @synthesize banners=_banners;
@property(retain, nonatomic) TBTakeoutStoreGetVoucherInfoViewModel *getVoucherInfoViewModel; // @synthesize getVoucherInfoViewModel=_getVoucherInfoViewModel;
@property(retain, nonatomic) TBTakeoutStoreDetailViewModel *detailViewModel; // @synthesize detailViewModel=_detailViewModel;
@property(copy, nonatomic) NSArray *menuViewModels; // @synthesize menuViewModels=_menuViewModels;
@property(nonatomic) _Bool storeDetailDidLoad; // @synthesize storeDetailDidLoad=_storeDetailDidLoad;
@property(retain, nonatomic) NSArray *itemsInCartArray; // @synthesize itemsInCartArray=_itemsInCartArray;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) long long serviceId; // @synthesize serviceId=_serviceId;
@property(nonatomic) long long storeId; // @synthesize storeId=_storeId;
- (void).cxx_destruct;
- (void)prepareForReparse;
- (id)findRealItemViewModel:(id)arg1;
- (void)parseResult:(id)arg1;
- (void)reloadData:(id)arg1;
- (id)serviceApi;
- (id)updateWithCartViewModel:(id)arg1;
@property(readonly, nonatomic) _Bool hasNext;

@end

