//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBDetailJHSTimerView, UIColor;

@protocol TBDetailJHSTimerViewDelegate <NSObject>
- (void)timerViewUpdateForegroudColor:(UIColor *)arg1;
- (void)timerViewUpdateBackgroudColor:(UIColor *)arg1;
- (void)timerViewUpdateTimer:(double)arg1;
- (double)timerViewScheduleInterval;
- (void)timerViewLayoutSubviews;
- (void)timerViewAddSubviews:(TBDetailJHSTimerView *)arg1;
- (struct CGSize)timerViewSize;
@end

