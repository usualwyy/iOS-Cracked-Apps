//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class QZJNewestFeedsFeedInfo, UIImageView, UILabel;

@interface RichStateNewestFeedFastView : UIView
{
    UIImageView *_qzLogoImgView;
    UIImageView *_picImgView;
    UILabel *_feedTextLabel;
    QZJNewestFeedsFeedInfo *_feedInfo;
}

- (void).cxx_destruct;
- (id)getFeedText;
- (void)layoutSubviews;
- (void)setFeedTextLabelWithFont:(id)arg1;
- (void)setData:(id)arg1;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
