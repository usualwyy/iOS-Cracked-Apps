//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "TBSearchTipTitleTagMixedModel.h"

@class NSArray<TBSearchTipTitleTagItemModel>, NSString;

@interface TBSearchTipTitleTagMixedModel : TBJSONModel <TBSearchTipTitleTagMixedModel>
{
    NSString *tagTitle;
    NSArray<TBSearchTipTitleTagItemModel> *tagList;
}

+ (_Bool)strictMode;
@property(retain, nonatomic) NSArray<TBSearchTipTitleTagItemModel> *tagList; // @synthesize tagList;
@property(retain, nonatomic) NSString *tagTitle; // @synthesize tagTitle;
- (void).cxx_destruct;

@end
