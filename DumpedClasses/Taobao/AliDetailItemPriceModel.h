//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class AliDetailPriceEntity, NSArray<AliDetailPriceDescModel>, NSArray<AliDetailPriceEntity>, NSArray<AliDetailPriceTagModel>, NSArray<AliDetailShopPromModel>, NSString;

@interface AliDetailItemPriceModel : TBJSONModel
{
    AliDetailPriceEntity *_price;
    AliDetailPriceEntity *_subPrice;
    NSString *_depositText;
    NSString *_depositTextColor;
    NSArray<AliDetailPriceEntity> *_extraPrices;
    NSArray<AliDetailPriceDescModel> *_wholePriceDescs;
    NSString *_limitText;
    long long _limit;
    long long _quantity;
    NSString *_quantityText;
    NSString *_priceTip;
    NSArray<AliDetailPriceTagModel> *_priceTag;
    NSArray<AliDetailShopPromModel> *_shopProm;
}

@property(retain, nonatomic) NSArray<AliDetailShopPromModel> *shopProm; // @synthesize shopProm=_shopProm;
@property(retain, nonatomic) NSArray<AliDetailPriceTagModel> *priceTag; // @synthesize priceTag=_priceTag;
@property(copy, nonatomic) NSString *priceTip; // @synthesize priceTip=_priceTip;
@property(copy, nonatomic) NSString *quantityText; // @synthesize quantityText=_quantityText;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) NSString *limitText; // @synthesize limitText=_limitText;
@property(retain, nonatomic) NSArray<AliDetailPriceDescModel> *wholePriceDescs; // @synthesize wholePriceDescs=_wholePriceDescs;
@property(retain, nonatomic) NSArray<AliDetailPriceEntity> *extraPrices; // @synthesize extraPrices=_extraPrices;
@property(copy, nonatomic) NSString *depositTextColor; // @synthesize depositTextColor=_depositTextColor;
@property(copy, nonatomic) NSString *depositText; // @synthesize depositText=_depositText;
@property(retain, nonatomic) AliDetailPriceEntity *subPrice; // @synthesize subPrice=_subPrice;
@property(retain, nonatomic) AliDetailPriceEntity *price; // @synthesize price=_price;
- (void).cxx_destruct;

@end

