//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBMagicCubeScrollView;

@protocol TBMagicCubeScrollViewDataSource <NSObject>
- (id <TBMagicCubeLifeCycleProtocol><TBMagicCubeScrollViewItemProtocol>)componentForRowInScrollView:(TBMagicCubeScrollView *)arg1 atIndex:(long long)arg2;
- (double)heightForRowInScrollView:(TBMagicCubeScrollView *)arg1 atIndex:(long long)arg2;
- (long long)numberOfRowsInScrollView:(TBMagicCubeScrollView *)arg1;
@end

