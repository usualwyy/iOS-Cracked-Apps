//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollViewDelegate.h"

@class UIScrollView, WXSliderView;

@protocol WXSliderViewDelegate <UIScrollViewDelegate>
- (void)sliderView:(WXSliderView *)arg1 didScrollToItemAtIndex:(long long)arg2;
- (void)sliderView:(WXSliderView *)arg1 sliderViewDidScroll:(UIScrollView *)arg2;

@optional
- (void)sliderView:(WXSliderView *)arg1 scrollViewDidEndScrollingAnimation:(UIScrollView *)arg2;
@end

