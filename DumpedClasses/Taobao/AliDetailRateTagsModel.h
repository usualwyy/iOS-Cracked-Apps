//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSArray<AliDetailRateTagItemModel>;

@interface AliDetailRateTagsModel : AliDetailComponentModel
{
    NSArray<AliDetailRateTagItemModel> *_rateTagArray;
}

+ (_Bool)childFilter:(id)arg1 layoutModel:(id)arg2;
@property(retain, nonatomic) NSArray<AliDetailRateTagItemModel> *rateTagArray; // @synthesize rateTagArray=_rateTagArray;
- (void).cxx_destruct;
- (id)getRateGroupItem:(id)arg1;
- (void)getDetailRateGroupModel:(id)arg1;
- (void)parseDataFromDetailModel:(id)arg1;

@end

