//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBMPBPlayerOptions, TBMPBPlayerView;

@interface TBLiveHPPlayer : NSObject
{
    id <TBLiveHPPlayerDelegate> _delegate;
    TBMPBPlayerView *_playerView;
    TBMPBPlayerOptions *_playerOption;
}

@property(retain, nonatomic) TBMPBPlayerOptions *playerOption; // @synthesize playerOption=_playerOption;
@property(retain, nonatomic) TBMPBPlayerView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) __weak id <TBLiveHPPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopPlayBack:(id)arg1;
- (void)unregisteListener;
- (void)registeListener;
- (void)stopPlayerView;
- (void)clearMediaPlayer;
- (void)resetMediaPlayer;
- (void)stopMediaPlayerWithAnimation:(id)arg1;
- (void)setMediaPlayerViewCallback;
- (void)setupMediaPlayer;
- (id)playerSuperView;
- (void)stopPlayerWithAnimation:(_Bool)arg1;
- (void)reloadPlayerWithUrl:(id)arg1;
- (void)reloadPlayerWithUrl:(id)arg1 frame:(struct CGRect)arg2 superView:(id)arg3 aboveSubview:(id)arg4 delay:(double)arg5;
- (void)onRecvMemoryWarning;
- (void)dealloc;
- (id)init;

@end

