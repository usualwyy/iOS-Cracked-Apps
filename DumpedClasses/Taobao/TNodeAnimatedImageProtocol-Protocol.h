//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, UIImage;

@protocol TNodeAnimatedImageProtocol <NSObject>
@property(readonly, nonatomic) unsigned long long frameCount;
@property(readonly, nonatomic) NSArray *delayTimes;
@property(readonly, nonatomic) unsigned long long loopCount;
- (UIImage *)imageLazilyCachedAtIndex:(unsigned long long)arg1;
@end

