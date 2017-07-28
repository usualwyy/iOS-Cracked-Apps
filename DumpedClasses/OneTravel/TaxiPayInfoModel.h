//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TaxiBaseModel.h"

@class NSNumber<Optional>, NSString<Optional>;

@interface TaxiPayInfoModel : TaxiBaseModel
{
    NSNumber<Optional> *_is_pay;
    NSString<Optional> *_coupon_id;
    NSString<Optional> *_timeout;
    NSString<Optional> *_pay_order_subtitle;
    NSNumber<Optional> *_cost;
    NSNumber<Optional> *_total_fee;
}

@property(retain, nonatomic) NSNumber<Optional> *total_fee; // @synthesize total_fee=_total_fee;
@property(retain, nonatomic) NSNumber<Optional> *cost; // @synthesize cost=_cost;
@property(copy, nonatomic) NSString<Optional> *pay_order_subtitle; // @synthesize pay_order_subtitle=_pay_order_subtitle;
@property(copy, nonatomic) NSString<Optional> *timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString<Optional> *coupon_id; // @synthesize coupon_id=_coupon_id;
@property(retain, nonatomic) NSNumber<Optional> *is_pay; // @synthesize is_pay=_is_pay;
- (void).cxx_destruct;

@end
