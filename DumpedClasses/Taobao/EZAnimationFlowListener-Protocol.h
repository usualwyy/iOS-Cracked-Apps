//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EZAnimation, EZAnimationFlow;

@protocol EZAnimationFlowListener <NSObject>

@optional
- (void)onAnimationRepeat:(EZAnimationFlow *)arg1 animation:(EZAnimation *)arg2 currentRepeatCount:(int)arg3 direction:(int)arg4;
- (void)onAnimationEnd:(EZAnimationFlow *)arg1 animation:(EZAnimation *)arg2;
- (void)onAnimationStart:(EZAnimationFlow *)arg1 animation:(EZAnimation *)arg2;
- (void)onResume:(EZAnimationFlow *)arg1;
- (void)onPause:(EZAnimationFlow *)arg1;
- (void)onCancel:(EZAnimationFlow *)arg1;
- (void)onEnd:(EZAnimationFlow *)arg1;
- (void)onStart:(EZAnimationFlow *)arg1;
@end

