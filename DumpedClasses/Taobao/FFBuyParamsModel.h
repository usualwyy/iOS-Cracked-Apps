//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FFBuyParamsModel : NSObject
{
    NSString *_itemId;
    NSString *_buyQuantity;
    NSString *_measureQuantity;
    NSString *_skuId;
    NSString *_services;
}

@property(copy, nonatomic) NSString *services; // @synthesize services=_services;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *measureQuantity; // @synthesize measureQuantity=_measureQuantity;
@property(copy, nonatomic) NSString *buyQuantity; // @synthesize buyQuantity=_buyQuantity;
@property(copy, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
- (void).cxx_destruct;

@end

