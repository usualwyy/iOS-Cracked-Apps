//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface AliDetailPriceEntity : TBJSONModel
{
    _Bool _lineThrough;
    float _priceMoney;
    NSString *_priceText;
    NSString *_priceTitle;
    NSString *_priceUnit;
    NSString *_priceChar;
    NSString *_priceDesc;
    NSString *_priceColor;
    NSString *_priceTitleColor;
}

@property(nonatomic) float priceMoney; // @synthesize priceMoney=_priceMoney;
@property(nonatomic) _Bool lineThrough; // @synthesize lineThrough=_lineThrough;
@property(copy, nonatomic) NSString *priceTitleColor; // @synthesize priceTitleColor=_priceTitleColor;
@property(copy, nonatomic) NSString *priceColor; // @synthesize priceColor=_priceColor;
@property(copy, nonatomic) NSString *priceDesc; // @synthesize priceDesc=_priceDesc;
@property(copy, nonatomic) NSString *priceChar; // @synthesize priceChar=_priceChar;
@property(copy, nonatomic) NSString *priceUnit; // @synthesize priceUnit=_priceUnit;
@property(copy, nonatomic) NSString *priceTitle; // @synthesize priceTitle=_priceTitle;
@property(copy, nonatomic) NSString *priceText; // @synthesize priceText=_priceText;
- (void).cxx_destruct;

@end

