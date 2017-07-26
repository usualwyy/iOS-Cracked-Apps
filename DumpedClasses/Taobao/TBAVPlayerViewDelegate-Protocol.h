//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, TBAVPlayerView;

@protocol TBAVPlayerViewDelegate <NSObject>

@optional
- (void)playerViewWillBecomActive:(TBAVPlayerView *)arg1;
- (void)playerViewWillResignActive:(TBAVPlayerView *)arg1;
- (void)playerViewDidTapToPause:(TBAVPlayerView *)arg1;
- (void)playerViewDidTapToPlay:(TBAVPlayerView *)arg1;
- (void)playerViewDidPlay:(TBAVPlayerView *)arg1;
- (void)playerView:(TBAVPlayerView *)arg1 didChangeModeTo:(long long)arg2;
- (void)playerViewDidTap:(TBAVPlayerView *)arg1;
- (void)playerViewPreload:(TBAVPlayerView *)arg1;
- (void)playerViewTimeChanged:(CDStruct_1b6d18a9)arg1;
- (void)playerViewStalled:(TBAVPlayerView *)arg1;
- (void)playerViewShowFailView:(TBAVPlayerView *)arg1 error:(NSError *)arg2;
- (void)playerView:(TBAVPlayerView *)arg1 timeSliderValueDidChanged:(double)arg2;
- (void)playerViewTimeSliderFinishDrag:(TBAVPlayerView *)arg1;
- (void)playerViewTimeSliderStartDrag:(TBAVPlayerView *)arg1;
- (void)playerViewDidLeaveFullscreen:(TBAVPlayerView *)arg1;
- (void)playerViewWillLeaveFullscreen:(TBAVPlayerView *)arg1;
- (void)playerViewDidEnterFullscreen:(TBAVPlayerView *)arg1;
- (void)playerViewWillEnterFullscreen:(TBAVPlayerView *)arg1;
- (void)playerViewDidEndPlaying:(TBAVPlayerView *)arg1;
- (void)playerViewWillEndPlaying:(TBAVPlayerView *)arg1;
- (void)playerViewWillResume:(TBAVPlayerView *)arg1;
- (void)playerViewDidPause:(TBAVPlayerView *)arg1;
- (void)playerViewWillPause:(TBAVPlayerView *)arg1;
- (void)playerViewWillPlay:(TBAVPlayerView *)arg1;
@end

