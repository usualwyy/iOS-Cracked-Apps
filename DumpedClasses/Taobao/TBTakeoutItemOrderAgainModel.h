//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBTakeoutItemOrderAgainModel : TBJSONModel
{
    NSString *_itemId;
    NSString *_skuId;
    NSString *_skuProperty;
    NSString *_quantity;
    NSString *_itemTitle;
    NSString *_skuTitle;
}

@property(copy, nonatomic) NSString *skuTitle; // @synthesize skuTitle=_skuTitle;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(copy, nonatomic) NSString *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *skuProperty; // @synthesize skuProperty=_skuProperty;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

