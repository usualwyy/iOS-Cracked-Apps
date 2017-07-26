//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface LOTAnimationCache : NSObject
{
    NSMutableDictionary *animationsCache_;
    NSMutableArray *lruOrderArray_;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (id)animationForKey:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

