//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBShopBasicComponent.h"

@class NSString, TBShopBodyComponent, TBShopControlModel, TBShopLoftComponent, TBShopNavigatorComponent, TBShopPromptComponent, TBShopStubMenuComponent;

@interface TBShopMainComponent : TBShopBasicComponent
{
    _Bool _isTmall;
    NSString *_shopId;
    NSString *_sellerId;
    NSString *_homePageId;
    NSString *_wangWangLink;
    NSString *_sellerNick;
    NSString *_shopName;
    NSString *_shopLogo;
    NSString *_opaqueData;
    NSString *_introUrl;
    TBShopControlModel *_control;
    TBShopNavigatorComponent *_navigatorComponent;
    TBShopBodyComponent *_bodyComponent;
    TBShopStubMenuComponent *_menuComponent;
    TBShopLoftComponent *_loftComponent;
    TBShopPromptComponent *_promptComponent;
}

@property(retain, nonatomic) TBShopPromptComponent *promptComponent; // @synthesize promptComponent=_promptComponent;
@property(retain, nonatomic) TBShopLoftComponent *loftComponent; // @synthesize loftComponent=_loftComponent;
@property(retain, nonatomic) TBShopStubMenuComponent *menuComponent; // @synthesize menuComponent=_menuComponent;
@property(retain, nonatomic) TBShopBodyComponent *bodyComponent; // @synthesize bodyComponent=_bodyComponent;
@property(retain, nonatomic) TBShopNavigatorComponent *navigatorComponent; // @synthesize navigatorComponent=_navigatorComponent;
@property(retain, nonatomic) TBShopControlModel *control; // @synthesize control=_control;
@property(retain, nonatomic) NSString *introUrl; // @synthesize introUrl=_introUrl;
@property(retain, nonatomic) NSString *opaqueData; // @synthesize opaqueData=_opaqueData;
@property(retain, nonatomic) NSString *shopLogo; // @synthesize shopLogo=_shopLogo;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(retain, nonatomic) NSString *wangWangLink; // @synthesize wangWangLink=_wangWangLink;
@property(nonatomic) _Bool isTmall; // @synthesize isTmall=_isTmall;
@property(retain, nonatomic) NSString *homePageId; // @synthesize homePageId=_homePageId;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (void)prepareWithRawData:(id)arg1;
- (id)initWithData:(id)arg1;

@end

