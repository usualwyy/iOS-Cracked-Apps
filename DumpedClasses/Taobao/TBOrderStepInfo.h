//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOrderObject.h"

@class NSMutableArray;

@interface TBOrderStepInfo : TBOrderObject
{
    NSMutableArray *_orderPriceDetails;
    NSMutableArray *_payDetails;
    NSMutableArray *_labels;
}

@property(retain, nonatomic) NSMutableArray *labels; // @synthesize labels=_labels;
@property(retain, nonatomic) NSMutableArray *payDetails; // @synthesize payDetails=_payDetails;
@property(retain, nonatomic) NSMutableArray *orderPriceDetails; // @synthesize orderPriceDetails=_orderPriceDetails;
- (void).cxx_destruct;
- (_Bool)notShowValue;
- (id)statusMemo;
- (_Bool)current;
- (id)status;
- (id)totalFee;
- (unsigned long long)quantity;
- (id)name;
- (unsigned long long)num;
- (id)initWithData:(id)arg1;

@end

