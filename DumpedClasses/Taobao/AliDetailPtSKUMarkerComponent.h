//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailPidVidPair, AliDetailPtSkuMarkerModel, AliTradeDetailSKUService, UIButton, UILabel;

@interface AliDetailPtSKUMarkerComponent : AliDetailComponent
{
    _Bool _skuSelected;
    _Bool _hasAddObserver;
    UIButton *_skuButton;
    UILabel *_iconLabel;
    AliDetailPidVidPair *_pidVidPair;
    AliDetailPtSkuMarkerModel *_skuMarkerModel;
    AliTradeDetailSKUService *_skuService;
}

@property(nonatomic) _Bool hasAddObserver; // @synthesize hasAddObserver=_hasAddObserver;
@property(retain, nonatomic) AliTradeDetailSKUService *skuService; // @synthesize skuService=_skuService;
@property(nonatomic) __weak AliDetailPtSkuMarkerModel *skuMarkerModel; // @synthesize skuMarkerModel=_skuMarkerModel;
@property(retain, nonatomic) AliDetailPidVidPair *pidVidPair; // @synthesize pidVidPair=_pidVidPair;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) UIButton *skuButton; // @synthesize skuButton=_skuButton;
@property(nonatomic) _Bool skuSelected; // @synthesize skuSelected=_skuSelected;
- (void).cxx_destruct;
- (void)skuButtonTaped:(id)arg1;
- (_Bool)checkItemQuantityWithPVPair:(id)arg1;
- (void)cancelOtherSKUMarker;
- (void)updateButtonTitleWithSelectStatus:(_Bool)arg1;
- (void)createPidVidInfo;
- (void)skuViewDidChanged:(id)arg1;
- (void)adjustPosition;
- (void)registerObserver;
- (void)layoutSubviews;
- (void)dealloc;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

