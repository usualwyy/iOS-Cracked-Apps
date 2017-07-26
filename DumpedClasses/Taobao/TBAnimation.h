//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBAnimation : NSObject
{
    double _duration;
    double _delay;
    unsigned long long _options;
    CDUnknownBlockType _animations;
    CDUnknownBlockType _completion;
}

+ (id)animationWithDuration:(double)arg1 options:(unsigned long long)arg2 animations:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)animationWithDuration:(double)arg1 delay:(double)arg2 options:(unsigned long long)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType animations; // @synthesize animations=_animations;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) double delay; // @synthesize delay=_delay;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)init;

@end

