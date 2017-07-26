//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBDetailEventBaseSubscriber.h"

#import "AliDetailMultimediaBrowserDelegate.h"

@class AliDetailConsumerProtectionView, AliDetailCouponViewController, AliDetailInterSizingChartModalView, AliDetailMultimediaBrowserViewControl, AliDetailMultimediaBrowserViewController, AliDetailPromotionView, NSString;

@interface TBDetailWidgetSubscriber : TBDetailEventBaseSubscriber <AliDetailMultimediaBrowserDelegate>
{
    AliDetailConsumerProtectionView *_comsumerProtection;
    AliDetailCouponViewController *_couponVC;
    AliDetailInterSizingChartModalView *_chartView;
    AliDetailPromotionView *_promotionView;
    AliDetailMultimediaBrowserViewControl *_browserViewModel;
    AliDetailMultimediaBrowserViewController *_bigBrowserVC;
    NSString *_areaId;
}

@property(retain, nonatomic) NSString *areaId; // @synthesize areaId=_areaId;
@property(retain, nonatomic) AliDetailMultimediaBrowserViewController *bigBrowserVC; // @synthesize bigBrowserVC=_bigBrowserVC;
@property(retain, nonatomic) AliDetailMultimediaBrowserViewControl *browserViewModel; // @synthesize browserViewModel=_browserViewModel;
@property(retain, nonatomic) AliDetailPromotionView *promotionView; // @synthesize promotionView=_promotionView;
@property(retain, nonatomic) AliDetailInterSizingChartModalView *chartView; // @synthesize chartView=_chartView;
@property(retain, nonatomic) AliDetailCouponViewController *couponVC; // @synthesize couponVC=_couponVC;
@property(retain, nonatomic) AliDetailConsumerProtectionView *comsumerProtection; // @synthesize comsumerProtection=_comsumerProtection;
- (void).cxx_destruct;
- (void)dismissCouponVC;
- (void)openCouponInfoView:(id)arg1;
- (id)handleShowTaxDescView:(id)arg1;
- (id)handleProductSkuClicked:(id)arg1;
- (id)handleOpenCustomProtectView:(id)arg1;
- (id)handleOpenConsumerProtectionOld:(id)arg1;
- (id)handleOpenConsumerProtection:(id)arg1;
- (id)handleOpenPromotionView:(id)arg1;
- (id)handleOpenInterSizingChartView:(id)arg1;
- (id)handleOpenProductAttrView:(id)arg1;
- (id)handleOpenCouponInfoView:(id)arg1;
- (id)handleShowMenuEvent:(id)arg1;
- (id)handleShowHintView:(id)arg1;
- (id)handleShowAreaChooserEvent:(id)arg1;
- (struct _NSRange)eventRange;
- (id)handleEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

