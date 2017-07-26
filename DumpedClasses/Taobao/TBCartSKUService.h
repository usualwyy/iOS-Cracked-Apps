//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliTradeSKUViewDelegate.h"

@class AliDetailDataEngine, AliTradeSKUView, NSString, UIView;

@interface TBCartSKUService : NSObject <AliTradeSKUViewDelegate>
{
    _Bool _hasOriginalSKU;
    UIView *_view;
    CDUnknownBlockType _callback;
    id <TBCartSKUServiceDelegate> _delegate;
    AliTradeSKUView *_tradeSkuView;
    AliDetailDataEngine *_detailService;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) AliDetailDataEngine *detailService; // @synthesize detailService=_detailService;
@property(retain, nonatomic) AliTradeSKUView *tradeSkuView; // @synthesize tradeSkuView=_tradeSkuView;
@property(nonatomic) __weak id <TBCartSKUServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) _Bool hasOriginalSKU; // @synthesize hasOriginalSKU=_hasOriginalSKU;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)tradeSkuDidFinishChooseSku:(id)arg1 selectedSkuId:(id)arg2;
- (void)tradeSkuView:(id)arg1 dismissSkuViewHandleBlock:(CDUnknownBlockType)arg2;
- (void)showSkuViewWhenSuccess;
- (void)showSKUViewWithItemId:(id)arg1 skuInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

