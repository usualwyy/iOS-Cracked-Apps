//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollViewDelegate.h"

@class TBMagicCubeScrollView;

@protocol TBMagicCubeScrollViewDelegate <UIScrollViewDelegate>

@optional
- (void)componentDidOnTop:(TBMagicCubeScrollView *)arg1 atIndex:(long long)arg2 direction:(int)arg3;
- (void)componentDidDisplayInScrollView:(TBMagicCubeScrollView *)arg1 atIndex:(long long)arg2;
- (void)componentWillDisplayInScrollView:(TBMagicCubeScrollView *)arg1 atIndex:(long long)arg2;
- (void)componentDidEndDisplayInScrollView:(TBMagicCubeScrollView *)arg1 atIndex:(long long)arg2;
- (void)componentWillEndDisplayInScrollView:(TBMagicCubeScrollView *)arg1 atIndex:(long long)arg2;
@end

