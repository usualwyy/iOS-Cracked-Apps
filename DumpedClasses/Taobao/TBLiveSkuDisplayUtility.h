//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliTradeSKUViewDelegate.h"

@class AliTradeSKUView, NSString, UIView;

@interface TBLiveSkuDisplayUtility : NSObject <AliTradeSKUViewDelegate>
{
    NSString *_accountId;
    NSString *_shareId;
    AliTradeSKUView *_skuView;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) AliTradeSKUView *skuView; // @synthesize skuView=_skuView;
@property(copy, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(copy, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
- (void).cxx_destruct;
- (void)tradeSkuView:(id)arg1 toastText:(id)arg2;
- (void)tradeSkuBuyButtonClicked:(id)arg1;
- (_Bool)cartIsOnTop:(id)arg1;
- (void)tradeSkuView:(id)arg1 dismissSkuViewHandleBlock:(CDUnknownBlockType)arg2;
- (void)showSkuInView:(id)arg1 detailModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

