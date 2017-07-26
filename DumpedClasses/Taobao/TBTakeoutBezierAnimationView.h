//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class NSString;

@interface TBTakeoutBezierAnimationView : UIView <CAAnimationDelegate>
{
    double _A;
    double _B;
    double _C;
    struct CGPoint _beginPoint;
    struct CGPoint _endPoint;
}

+ (void)showAndAnimationInView:(id)arg1 beginPoint:(struct CGPoint)arg2 endPoint:(struct CGPoint)arg3;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint beginPoint; // @synthesize beginPoint=_beginPoint;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startAnimation;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

