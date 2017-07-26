//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EZAnimation;

@interface EZAnimationLane : NSObject
{
    _Bool _mStateStarted;
    _Bool _mStateEnded;
    int _mRepeatLimitTime;
    float _mStateElapseTimeMS;
    int _mStatePlayCount;
    EZAnimation *_mSegment;
    long long _mOffsetMS;
    long long _mRepeatMode;
}

@property(nonatomic) _Bool mStateEnded; // @synthesize mStateEnded=_mStateEnded;
@property(nonatomic) _Bool mStateStarted; // @synthesize mStateStarted=_mStateStarted;
@property(nonatomic) int mStatePlayCount; // @synthesize mStatePlayCount=_mStatePlayCount;
@property(nonatomic) float mStateElapseTimeMS; // @synthesize mStateElapseTimeMS=_mStateElapseTimeMS;
@property(nonatomic) long long mRepeatMode; // @synthesize mRepeatMode=_mRepeatMode;
@property(nonatomic) int mRepeatLimitTime; // @synthesize mRepeatLimitTime=_mRepeatLimitTime;
@property(nonatomic) long long mOffsetMS; // @synthesize mOffsetMS=_mOffsetMS;
@property(retain, nonatomic) EZAnimation *mSegment; // @synthesize mSegment=_mSegment;
- (void).cxx_destruct;
- (int)getDirection;
- (void)reset;
- (_Bool)updateFlow:(id)arg1 delta:(double)arg2;
- (id)mode:(long long)arg1;
- (id)repeatCount:(int)arg1;
- (id)offset:(long long)arg1;
- (id)fillWith:(id)arg1;
- (id)init;

@end

