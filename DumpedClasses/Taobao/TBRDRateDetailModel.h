//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class TBRDRateDetailItemModel, TBRDRateDetailRaterModel;

@interface TBRDRateDetailModel : TBJSONModel
{
    TBRDRateDetailItemModel *_rateItem;
    TBRDRateDetailRaterModel *_rater;
}

+ (id)jsonToModelKeyMapDictionary;
@property(retain, nonatomic) TBRDRateDetailRaterModel *rater; // @synthesize rater=_rater;
@property(retain, nonatomic) TBRDRateDetailItemModel *rateItem; // @synthesize rateItem=_rateItem;
- (void).cxx_destruct;

@end

