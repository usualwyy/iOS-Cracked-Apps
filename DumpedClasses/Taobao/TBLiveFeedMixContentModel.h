//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray<TBLiveFeedMixContentCardModel>, NSString;

@interface TBLiveFeedMixContentModel : TBJSONModel
{
    NSString *_imgUrl;
    NSString *_location;
    NSString *_url;
    NSString *_buttonTitle;
    NSArray<TBLiveFeedMixContentCardModel> *_contentList;
}

@property(retain, nonatomic) NSArray<TBLiveFeedMixContentCardModel> *contentList; // @synthesize contentList=_contentList;
@property(copy, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;

@end

