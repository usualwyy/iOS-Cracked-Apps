//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface TBHLLiveStarAnimation : UIView
{
    int _positionRange;
    float _duration;
    float _speedRange;
    float _durationRange;
    int _swingRange;
    double _iconSide;
    double _interval;
    NSString *_timingFunction;
    unsigned long long _staticLikeStarIndex;
    struct CGPoint _animationStartPoint;
    struct CGPoint _animationStopPoint;
}

+ (id)animationView;
@property(nonatomic) unsigned long long staticLikeStarIndex; // @synthesize staticLikeStarIndex=_staticLikeStarIndex;
@property(nonatomic) int swingRange; // @synthesize swingRange=_swingRange;
@property(nonatomic) float durationRange; // @synthesize durationRange=_durationRange;
@property(nonatomic) float speedRange; // @synthesize speedRange=_speedRange;
@property(copy, nonatomic) NSString *timingFunction; // @synthesize timingFunction=_timingFunction;
@property(nonatomic) float duration; // @synthesize duration=_duration;
@property(nonatomic) int positionRange; // @synthesize positionRange=_positionRange;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(nonatomic) double iconSide; // @synthesize iconSide=_iconSide;
@property(nonatomic) struct CGPoint animationStopPoint; // @synthesize animationStopPoint=_animationStopPoint;
@property(nonatomic) struct CGPoint animationStartPoint; // @synthesize animationStartPoint=_animationStartPoint;
- (void).cxx_destruct;
- (void)popStarAnimationWithCount:(int)arg1 useDefaultImgs:(_Bool)arg2 scene:(id)arg3 step:(_Bool)arg4;
- (void)popStarAnimation:(_Bool)arg1 defaultImgs:(_Bool)arg2 scene:(id)arg3 step:(_Bool)arg4;
- (id)starImage;
- (id)scaleYAnimation;
- (id)scaleXAnimation;
- (id)opacityAnimation;
- (id)translationYStepAnimationWithPosition:(struct CGPoint)arg1;
- (id)translationYLinearAnimationWithPosition:(struct CGPoint)arg1;
- (id)translationXAnimationWithPosition:(struct CGPoint)arg1;
- (id)animatinWithPosition:(struct CGPoint)arg1 step:(_Bool)arg2;
- (struct CGPoint)startPosition;
- (id)initWithFrame:(struct CGRect)arg1;

@end

