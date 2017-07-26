//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DWPlayerView, NSError;

@protocol DWPlayerViewDelegate <NSObject>

@optional
- (void)fullscreenButtonClicked;
- (void)playerViewDidTapToPause:(DWPlayerView *)arg1;
- (void)playerViewDidTapToPlay:(DWPlayerView *)arg1;
- (void)playerViewWillBecomActive:(DWPlayerView *)arg1;
- (void)playerViewWillResignActive:(DWPlayerView *)arg1;
- (void)playerViewDidTap:(DWPlayerView *)arg1;
- (void)playerViewPreload:(DWPlayerView *)arg1;
- (void)playerViewTimeChanged:(double)arg1;
- (void)playerViewStalled:(DWPlayerView *)arg1;
- (void)playerViewShowFailView:(DWPlayerView *)arg1 error:(NSError *)arg2;
- (void)playerView:(DWPlayerView *)arg1 timeSliderValueDidChanged:(double)arg2;
- (void)playerViewTimeSliderFinishDrag:(DWPlayerView *)arg1;
- (void)playerViewTimeSliderStartDrag:(DWPlayerView *)arg1;
- (void)playerViewDidEndPlaying:(DWPlayerView *)arg1;
- (void)playerViewWillEndPlaying:(DWPlayerView *)arg1;
- (void)playerViewWillResume:(DWPlayerView *)arg1;
- (void)playerViewDidPause:(DWPlayerView *)arg1;
- (void)playerViewWillPause:(DWPlayerView *)arg1;
- (void)playerViewWillPlay:(DWPlayerView *)arg1;
@end

