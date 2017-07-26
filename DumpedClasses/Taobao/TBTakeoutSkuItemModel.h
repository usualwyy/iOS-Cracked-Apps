//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString;

@interface TBTakeoutSkuItemModel : TBJSONModel
{
    long long _skuId;
    double _price;
    double _promotionPrice;
    long long _quantity;
    long long _limitQuantity;
    NSString *_title;
    NSArray *_tagList;
    long long _amount;
    long long _skuAmount;
}

+ (id)modelContainerClassMapDictioanry;
+ (id)modelWithJSONDictionary:(id)arg1;
@property(nonatomic) long long skuAmount; // @synthesize skuAmount=_skuAmount;
@property(nonatomic) long long amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) long long limitQuantity; // @synthesize limitQuantity=_limitQuantity;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(nonatomic) double promotionPrice; // @synthesize promotionPrice=_promotionPrice;
@property(nonatomic) double price; // @synthesize price=_price;
@property(nonatomic) long long skuId; // @synthesize skuId=_skuId;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

