//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBHTHomeSelectedShopItemModel : TBJSONModel
{
    NSString *_itemId;
    NSString *_itemName;
    double _price;
    double _promotionPrice;
    NSString *_pic;
    long long _amountCnt;
}

@property(nonatomic) long long amountCnt; // @synthesize amountCnt=_amountCnt;
@property(copy, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(nonatomic) double promotionPrice; // @synthesize promotionPrice=_promotionPrice;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *itemName; // @synthesize itemName=_itemName;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

