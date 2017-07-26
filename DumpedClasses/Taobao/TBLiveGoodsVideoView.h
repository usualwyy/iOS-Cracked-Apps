//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"
#import "TBLiveGoodsVideoHostInfoViewDelegate.h"
#import "TBLiveGoodsVideoItemViewDelegate.h"

@class NSString, TBLiveGoodsVideoHostInfoView, TBLiveGoodsVideoInterActionView, TBLiveGoodsVideoItemView, TBLiveGoodsVideoPlayer, TBLiveItemVideoData, UILabel;

@interface TBLiveGoodsVideoView : UIView <TBLiveGoodsVideoHostInfoViewDelegate, TBLiveGoodsVideoItemViewDelegate, CAAnimationDelegate>
{
    _Bool _enableSliceDanmu;
    _Bool _playerAutoPlay;
    _Bool _isLivingRoom;
    _Bool _didHint;
    _Bool _isFullScreen;
    long long _videoId;
    long long _sectionIndex;
    NSString *_recommendType;
    long long _videoCellCount;
    UIView *_barrageAreaView;
    TBLiveGoodsVideoPlayer *_videoPlayer;
    TBLiveGoodsVideoHostInfoView *_hostInfoView;
    TBLiveGoodsVideoItemView *_goodCardView;
    TBLiveItemVideoData *_videoData;
    id <TBLiveGoodsVideoViewDelegate> _delegate;
    UIView *_continerView;
    UILabel *_hintLabel;
    TBLiveGoodsVideoInterActionView *_interActionView;
}

@property(retain, nonatomic) TBLiveGoodsVideoInterActionView *interActionView; // @synthesize interActionView=_interActionView;
@property(nonatomic) _Bool isFullScreen; // @synthesize isFullScreen=_isFullScreen;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIView *continerView; // @synthesize continerView=_continerView;
@property(nonatomic) _Bool didHint; // @synthesize didHint=_didHint;
@property(nonatomic) __weak id <TBLiveGoodsVideoViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBLiveItemVideoData *videoData; // @synthesize videoData=_videoData;
@property(retain, nonatomic) TBLiveGoodsVideoItemView *goodCardView; // @synthesize goodCardView=_goodCardView;
@property(retain, nonatomic) TBLiveGoodsVideoHostInfoView *hostInfoView; // @synthesize hostInfoView=_hostInfoView;
@property(retain, nonatomic) TBLiveGoodsVideoPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) UIView *barrageAreaView; // @synthesize barrageAreaView=_barrageAreaView;
@property(nonatomic) long long videoCellCount; // @synthesize videoCellCount=_videoCellCount;
@property(nonatomic) _Bool isLivingRoom; // @synthesize isLivingRoom=_isLivingRoom;
@property(copy, nonatomic) NSString *recommendType; // @synthesize recommendType=_recommendType;
@property(nonatomic) _Bool playerAutoPlay; // @synthesize playerAutoPlay=_playerAutoPlay;
@property(nonatomic) _Bool enableSliceDanmu; // @synthesize enableSliceDanmu=_enableSliceDanmu;
@property(nonatomic) long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) long long videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (void)didTapMaskView;
- (void)didTapBgView;
- (void)clickCloseButtonInView:(id)arg1;
- (void)clickGoodsItemInView:(id)arg1;
- (void)clickAvatarButtonInView:(id)arg1;
- (void)clickGoodsItemView;
- (void)clickAvatarView;
- (void)stopVideo;
- (void)pauseVideo;
- (void)resumeVideo;
- (void)updateVideoPlayerWithUrl:(id)arg1 accountId:(id)arg2 videoId:(id)arg3 feedId:(id)arg4 coverImage:(id)arg5 firstCell:(_Bool)arg6;
- (void)updateGoodsCardImage:(id)arg1 name:(id)arg2 price:(id)arg3;
- (void)updateHostAvatar:(id)arg1 name:(id)arg2 location:(id)arg3 isLiving:(_Bool)arg4;
- (void)removeAllBarrageShowView;
- (void)didEndDisplay;
- (void)didDisplay:(unsigned long long)arg1 firstCellVideoData:(id)arg2;
- (void)willDisplay:(unsigned long long)arg1 videoId:(long long)arg2 coverImageURL:(id)arg3;
- (void)refreshWithModel:(id)arg1;
- (void)refreshGoodsVideo:(id)arg1;
- (void)refreshPreferenceData:(id)arg1;
- (void)setupVideoPlayer;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)addAnimationWithPostionX:(double)arg1 channelIndex:(long long)arg2 showView:(id)arg3;
- (void)resumeAnimations;
- (void)pauseAnimations;
- (void)setupBarrageAreaView;
- (void)addAutoPlayHintLable;
- (void)openCommentInputBox;
- (void)setupInterActionView;
- (void)setupCommonSubView;
- (void)setupFullScreenSubViews;
- (void)setupPopScreenSubViews;
- (void)setupSubViews:(_Bool)arg1;
- (void)setupInit;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

