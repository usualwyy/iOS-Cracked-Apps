//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBTradeDetailRecommendHomeView, TBTradeDetailViewController, UIImage, UIImageView, UIView;

@interface TBMiniDetailBuilder : NSObject
{
    _Bool _isShowingMiniDetail;
    TBTradeDetailViewController *_detailVC;
    TBTradeDetailRecommendHomeView *_recommendView;
    UIView *_contentView;
    UIView *_bottomCoverView;
    UIImageView *_meetingEntryView;
    NSString *_targetUrl;
    UIImage *_resizedImage;
    UIImageView *_blurImageView;
}

@property(retain, nonatomic) UIImageView *blurImageView; // @synthesize blurImageView=_blurImageView;
@property(retain, nonatomic) UIImage *resizedImage; // @synthesize resizedImage=_resizedImage;
@property(retain, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(retain, nonatomic) UIImageView *meetingEntryView; // @synthesize meetingEntryView=_meetingEntryView;
@property(retain, nonatomic) UIView *bottomCoverView; // @synthesize bottomCoverView=_bottomCoverView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TBTradeDetailRecommendHomeView *recommendView; // @synthesize recommendView=_recommendView;
@property(nonatomic) _Bool isShowingMiniDetail; // @synthesize isShowingMiniDetail=_isShowingMiniDetail;
@property(nonatomic) __weak TBTradeDetailViewController *detailVC; // @synthesize detailVC=_detailVC;
- (void).cxx_destruct;
- (void)performPullDownAnimation;
- (void)touchBottomCoverView:(id)arg1;
- (void)touchMeetingEntryView:(id)arg1;
- (id)resizedImageFromHeaderPic;
- (void)configBlurImageForContentView;
- (id)blurImageWithOriginalImage:(id)arg1;
- (id)reSizeImage:(id)arg1 toSize:(struct CGSize)arg2;
- (id)scaleImage:(id)arg1 toScale:(float)arg2;
- (void)adjustRecommendViewPosition;
- (id)requestParams;
- (void)openNewPageWithTargetURL:(id)arg1;
- (void)dismissOverlayAndOpenURL:(id)arg1;
- (void)addMeetingEntryView;
- (_Bool)validate;
- (id)viewBuilder;
- (id)eventToken;
- (id)view;
- (id)dataSource;
- (void)showMiniDetail;

@end

