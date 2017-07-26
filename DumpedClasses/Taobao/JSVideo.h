//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "DWPlayerLifecycleProtocol.h"
#import "TNodeComponentProtocol.h"
#import "TNodeMessageHandler.h"

@class DWGIFInstance, DWInstance, NSString, UIButton, UIImageView;

@interface JSVideo : UIView <TNodeComponentProtocol, DWPlayerLifecycleProtocol, TNodeMessageHandler>
{
    _Bool _autoPlay;
    _Bool _toggleFullScreen;
    _Bool _cycle;
    _Bool _showPlayButton;
    _Bool _fullScreen;
    _Bool _videoPlayComplete;
    UIImageView *_coverImageView;
    UIButton *_playButton;
    DWInstance *_instance;
    DWGIFInstance *_gifInstance;
    NSString *_videoUrl;
    NSString *_coverUrl;
    NSString *_bizCode;
    NSString *_videoId;
    NSString *_userId;
    NSString *_interactiveId;
    NSString *_contentId;
    unsigned long long _mode;
    NSString *_scale;
    double _ratio;
    NSString *_clicked;
}

+ (void)attrsTNodeMapper:(id)arg1;
+ (struct UIView *)makeTNodeComponent:(id)arg1;
@property(nonatomic) _Bool videoPlayComplete; // @synthesize videoPlayComplete=_videoPlayComplete;
@property(copy, nonatomic) NSString *clicked; // @synthesize clicked=_clicked;
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(copy, nonatomic) NSString *scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(nonatomic) _Bool showPlayButton; // @synthesize showPlayButton=_showPlayButton;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(nonatomic) _Bool cycle; // @synthesize cycle=_cycle;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
@property(copy, nonatomic) NSString *interactiveId; // @synthesize interactiveId=_interactiveId;
@property(nonatomic) _Bool toggleFullScreen; // @synthesize toggleFullScreen=_toggleFullScreen;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *bizCode; // @synthesize bizCode=_bizCode;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) DWGIFInstance *gifInstance; // @synthesize gifInstance=_gifInstance;
@property(retain, nonatomic) DWInstance *instance; // @synthesize instance=_instance;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)videoInfo;
- (id)interactiveInfo;
- (id)utParamsDictionary;
- (void)playButtonClicked;
- (void)onVideoStart;
- (void)onVideoComplete;
- (void)onVideoFullScreen;
- (_Bool)onHandlerTNodeMessage:(struct TNodeMsg *)arg1;
- (id)superViewWithClass:(Class)arg1;
- (void)gifDestroy:(id)arg1;
- (void)instanceDestory:(id)arg1 videoUrl:(id)arg2;
- (void)componentWillDisapper;
- (void)removeMonitor:(struct UIView *)arg1;
- (void)addMonitor:(struct UIView *)arg1;
- (void)componentWillAppear;
- (void)monitorContainerViewDidScroll:(id)arg1;
- (void)listViewDidScrollToTop:(id)arg1;
- (void)listDidEndDecelerating:(id)arg1;
- (void)listDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)willPlayVideo:(id)arg1;
- (void)playVideo;
- (void)resumeWithInstance:(id)arg1;
- (void)fullScreenDidClicked;
- (void)layoutSubviews;
- (void)willMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

