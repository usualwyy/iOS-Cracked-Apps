//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBTakeoutGrouponTime>, NSString, TBTakeoutBuyFengNiaoTipsModel, TBTakeoutBuyPriceDetailModel, TBTakeoutBuyTitleIconModel;

@interface TBTakeoutBuyDeliveryModel : TBJSONModel
{
    NSString *_title;
    TBTakeoutBuyTitleIconModel *_promiseInfo;
    TBTakeoutBuyFengNiaoTipsModel *_birdDelivery;
    TBTakeoutBuyPriceDetailModel *_grouponTips;
    NSArray<TBTakeoutGrouponTime> *_grouponTimes;
    long long _seletedTimeIndex;
}

+ (id)jsonToModelKeyMapDictionary;
@property(nonatomic) long long seletedTimeIndex; // @synthesize seletedTimeIndex=_seletedTimeIndex;
@property(retain, nonatomic) NSArray<TBTakeoutGrouponTime> *grouponTimes; // @synthesize grouponTimes=_grouponTimes;
@property(retain, nonatomic) TBTakeoutBuyPriceDetailModel *grouponTips; // @synthesize grouponTips=_grouponTips;
@property(retain, nonatomic) TBTakeoutBuyFengNiaoTipsModel *birdDelivery; // @synthesize birdDelivery=_birdDelivery;
@property(retain, nonatomic) TBTakeoutBuyTitleIconModel *promiseInfo; // @synthesize promiseInfo=_promiseInfo;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1;

@end

