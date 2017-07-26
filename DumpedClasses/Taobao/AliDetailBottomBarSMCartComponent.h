//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBDetailUIButton.h"

#import "AliDetailBottomBarItemProtocol.h"

@class AliDetailASYIService, AliDetailApiUnit, AliDetailBottomBarSMCartModel, AliDetailPriceLabel, AliDetailPriceViewModel, AliDetailServiceContext, NSMutableDictionary, NSString, UILabel;

@interface AliDetailBottomBarSMCartComponent : TBDetailUIButton <AliDetailBottomBarItemProtocol>
{
    int _groupItemType;
    AliDetailPriceLabel *_priceLabel;
    UILabel *_textLabel;
    UILabel *_cartLabel;
    AliDetailASYIService *_asyiService;
    AliDetailServiceContext *_context;
    AliDetailApiUnit *_apiUnit;
    NSMutableDictionary *_params;
    NSString *_price;
    AliDetailBottomBarSMCartModel *_itemModel;
    AliDetailPriceViewModel *_priceModel;
}

@property(retain, nonatomic) AliDetailPriceViewModel *priceModel; // @synthesize priceModel=_priceModel;
@property(retain, nonatomic) AliDetailBottomBarSMCartModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) AliDetailApiUnit *apiUnit; // @synthesize apiUnit=_apiUnit;
@property(retain, nonatomic) AliDetailServiceContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AliDetailASYIService *asyiService; // @synthesize asyiService=_asyiService;
@property(retain, nonatomic) UILabel *cartLabel; // @synthesize cartLabel=_cartLabel;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) AliDetailPriceLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) int groupItemType; // @synthesize groupItemType=_groupItemType;
- (void).cxx_destruct;
- (void)updateSMCartPrice:(id)arg1;
- (void)gotoSMCartPage:(id)arg1;
- (void)setContentStyle;
- (void)setToolItemModel:(id)arg1;
- (_Bool)drawLine;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

