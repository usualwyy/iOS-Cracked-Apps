//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOCoreFeedView.h"

@class TBOFeed, TBOMultiImageRender, UIView;

@interface TBOFeedPicView : TBOCoreFeedView
{
    UIView *_multiImageContainer;
    TBOMultiImageRender *_imageRender;
    TBOFeed *_localFeedData;
}

@property(retain, nonatomic) TBOFeed *localFeedData; // @synthesize localFeedData=_localFeedData;
@property(retain, nonatomic) TBOMultiImageRender *imageRender; // @synthesize imageRender=_imageRender;
@property(retain, nonatomic) UIView *multiImageContainer; // @synthesize multiImageContainer=_multiImageContainer;
- (void).cxx_destruct;
- (void)refreshDataForView:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

