//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSearchJSONModel.h"

@class NSString;

@interface TBShopSearchSimilarShopItem : TBSearchJSONModel
{
    NSString *_sellerId;
    NSString *_shopName;
    NSString *_itemPic;
    NSString *_RN;
    NSString *_abtest;
}

@property(retain, nonatomic) NSString *abtest; // @synthesize abtest=_abtest;
@property(retain, nonatomic) NSString *RN; // @synthesize RN=_RN;
@property(retain, nonatomic) NSString *itemPic; // @synthesize itemPic=_itemPic;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
- (void).cxx_destruct;

@end

