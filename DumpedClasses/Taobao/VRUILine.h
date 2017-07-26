//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VRUINode.h"

@interface VRUILine : VRUINode
{
    float _during;
    float _alphaUpLimit;
    _Bool _alphaFinish;
    float _red;
    float _green;
    float _blue;
}

@property float blue; // @synthesize blue=_blue;
@property float green; // @synthesize green=_green;
@property float red; // @synthesize red=_red;
- (void)dealloc;
- (void)doAnimationWithGazeInput:(_Bool)arg1;
- (void)resetAlpha;
- (void)setAlphaUpLimit:(float)arg1;
- (void)setDuring:(float)arg1;
- (void)setLineWidth:(float)arg1;
- (void)setLineColor:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (void)drawInContext:(struct VRContext)arg1;
- (void)setupContext;
- (void)releaseVAO;
- (void)createVAO;
- (void)buildProgram;
- (id)initWithID:(long long)arg1 startPoint:(union _GLKVector3)arg2 endPoint:(union _GLKVector3)arg3;

@end

