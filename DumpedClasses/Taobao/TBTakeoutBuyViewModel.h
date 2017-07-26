//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutNewViewModel.h"

@class NSString, TBLSPOIEntity, TBTakeoutBuyCouponsDetailModel, TBTakeoutBuyListViewModel, TBTakeoutBuyModel, TBTakeoutBuyToolbarViewModel;

@interface TBTakeoutBuyViewModel : TBTakeoutNewViewModel
{
    NSString *_params;
    TBLSPOIEntity *_poiEntity;
    TBTakeoutBuyCouponsDetailModel *_couponsDetail;
    TBTakeoutBuyModel *_buyModel;
    TBTakeoutBuyListViewModel *_listViewModel;
    TBTakeoutBuyToolbarViewModel *_toolbarViewModel;
}

@property(retain, nonatomic) TBTakeoutBuyToolbarViewModel *toolbarViewModel; // @synthesize toolbarViewModel=_toolbarViewModel;
@property(retain, nonatomic) TBTakeoutBuyListViewModel *listViewModel; // @synthesize listViewModel=_listViewModel;
@property(retain, nonatomic) TBTakeoutBuyModel *buyModel; // @synthesize buyModel=_buyModel;
@property(retain, nonatomic) TBTakeoutBuyCouponsDetailModel *couponsDetail; // @synthesize couponsDetail=_couponsDetail;
@property(retain, nonatomic) TBLSPOIEntity *poiEntity; // @synthesize poiEntity=_poiEntity;
@property(retain, nonatomic) NSString *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (id)h5Parameter;
- (void)parseResult:(id)arg1;
- (id)serviceApi;
- (id)init;

@end

