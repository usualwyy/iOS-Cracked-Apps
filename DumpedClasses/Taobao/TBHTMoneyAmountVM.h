//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface TBHTMoneyAmountVM : NSObject <NSCopying>
{
    int _currency;
    double _amount;
}

+ (id)moneyByAmount:(double)arg1 Currency:(int)arg2;
@property(nonatomic) int currency; // @synthesize currency=_currency;
@property(nonatomic) double amount; // @synthesize amount=_amount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)display;

@end

