//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMMarketComponentBaseModel.h"

@class NSString;

@interface TMMarketComponentTodaySeckillActivity : TMMarketComponentBaseModel
{
    NSString *_customTitleImg;
    NSString *_startTime;
    NSString *_endTime;
    NSString *_staticPrice;
    NSString *_price;
    NSString *_priceTitle;
}

@property(copy, nonatomic) NSString *priceTitle; // @synthesize priceTitle=_priceTitle;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *staticPrice; // @synthesize staticPrice=_staticPrice;
@property(copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(copy, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *customTitleImg; // @synthesize customTitleImg=_customTitleImg;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

