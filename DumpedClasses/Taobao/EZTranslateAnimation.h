//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EZAnimation.h"

@class EZCatmullRomCurve, EZVector3, NSMutableArray;

@interface EZTranslateAnimation : EZAnimation
{
    EZVector3 *mTmp1;
    EZVector3 *mTmp2;
    EZCatmullRomCurve *mCurve;
    EZVector3 *_from;
    EZVector3 *_to;
    EZVector3 *_current;
    NSMutableArray *_keyFrames;
}

@property(retain, nonatomic) NSMutableArray *keyFrames; // @synthesize keyFrames=_keyFrames;
@property(retain, nonatomic) EZVector3 *current; // @synthesize current=_current;
@property(retain, nonatomic) EZVector3 *to; // @synthesize to=_to;
@property(retain, nonatomic) EZVector3 *from; // @synthesize from=_from;
- (void).cxx_destruct;
- (void)buildCurve;
- (void)mixValueFrom:(float)arg1 to:(float)arg2;
- (id)init;

@end

