//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBTakeoutItemAttrModel>, NSString;

@interface TBTakeoutItemListModel : TBJSONModel
{
    NSString *_storeId;
    NSString *_saleCount;
    NSString *_title;
    NSString *_promotionPrice;
    NSString *_price;
    NSString *_serviceId;
    NSString *_itemId;
    NSArray<TBTakeoutItemAttrModel> *_itemAttrList;
}

@property(retain, nonatomic) NSArray<TBTakeoutItemAttrModel> *itemAttrList; // @synthesize itemAttrList=_itemAttrList;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(retain, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSString *promotionPrice; // @synthesize promotionPrice=_promotionPrice;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *saleCount; // @synthesize saleCount=_saleCount;
@property(retain, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
- (void).cxx_destruct;

@end

