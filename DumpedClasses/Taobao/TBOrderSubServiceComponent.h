//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOrderComponent.h"

@class TBOrderItemPriceInfo;

@interface TBOrderSubServiceComponent : TBOrderComponent
{
    TBOrderItemPriceInfo *_priceInfo;
}

@property(retain, nonatomic) TBOrderItemPriceInfo *priceInfo; // @synthesize priceInfo=_priceInfo;
- (void).cxx_destruct;
- (_Bool)highlight;
- (_Bool)showArrow;
- (id)pic;
- (id)refundStatus;
- (id)skuText;
- (long long)quantity;
- (id)title;
- (id)initWithData:(id)arg1;

@end

