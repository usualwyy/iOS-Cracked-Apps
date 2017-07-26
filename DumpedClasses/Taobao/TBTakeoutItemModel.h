//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray, NSString, TBTakeoutItemMultAttrPropertyModel;

@interface TBTakeoutItemModel : TBJSONModel
{
    _Bool _promotioned;
    _Bool _bestSelling;
    _Bool _hasSku;
    long long _stock;
    NSArray *_activityValueList;
    NSString *_itemDesc;
    NSString *_storeId;
    NSString *_serviceId;
    double _promotionPrice;
    NSString *_title;
    double _price;
    NSString *_itemPicts;
    NSString *_shopId;
    NSString *_saleCount;
    unsigned long long _itemCateId;
    NSArray *_skuList;
    long long _itemId;
    long long _limitQuantity;
    NSArray *_tagList;
    NSArray *_itemAttrList;
    TBTakeoutItemMultAttrPropertyModel *_multiAttr;
}

+ (id)modelContainerClassMapDictioanry;
+ (id)jsonToModelKeyMapDictionary;
+ (id)modelWithJSONDictionary:(id)arg1;
@property(copy, nonatomic) TBTakeoutItemMultAttrPropertyModel *multiAttr; // @synthesize multiAttr=_multiAttr;
@property(copy, nonatomic) NSArray *itemAttrList; // @synthesize itemAttrList=_itemAttrList;
@property(copy, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(nonatomic) long long limitQuantity; // @synthesize limitQuantity=_limitQuantity;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSArray *skuList; // @synthesize skuList=_skuList;
@property(nonatomic) _Bool hasSku; // @synthesize hasSku=_hasSku;
@property(nonatomic) unsigned long long itemCateId; // @synthesize itemCateId=_itemCateId;
@property(copy, nonatomic) NSString *saleCount; // @synthesize saleCount=_saleCount;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(copy, nonatomic) NSString *itemPicts; // @synthesize itemPicts=_itemPicts;
@property(nonatomic) double price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) double promotionPrice; // @synthesize promotionPrice=_promotionPrice;
@property(nonatomic) _Bool bestSelling; // @synthesize bestSelling=_bestSelling;
@property(nonatomic) _Bool promotioned; // @synthesize promotioned=_promotioned;
@property(copy, nonatomic) NSString *serviceId; // @synthesize serviceId=_serviceId;
@property(copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(copy, nonatomic) NSString *itemDesc; // @synthesize itemDesc=_itemDesc;
@property(copy, nonatomic) NSArray *activityValueList; // @synthesize activityValueList=_activityValueList;
@property(nonatomic) long long stock; // @synthesize stock=_stock;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

