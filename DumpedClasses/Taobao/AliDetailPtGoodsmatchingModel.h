//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponentModel.h"

@class NSArray<AliDetailShortItemModel>, NSString;

@interface AliDetailPtGoodsmatchingModel : AliDetailComponentModel
{
    NSString *_picUrl;
    NSString *_matchingTitle;
    NSArray<AliDetailShortItemModel> *_goodsmatchingList;
}

@property(retain, nonatomic) NSArray<AliDetailShortItemModel> *goodsmatchingList; // @synthesize goodsmatchingList=_goodsmatchingList;
@property(retain, nonatomic) NSString *matchingTitle; // @synthesize matchingTitle=_matchingTitle;
@property(retain, nonatomic) NSString *picUrl; // @synthesize picUrl=_picUrl;
- (void).cxx_destruct;

@end

