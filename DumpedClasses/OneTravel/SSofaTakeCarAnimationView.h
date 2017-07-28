//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAAnimationGroup, UIImageView;

@interface SSofaTakeCarAnimationView : UIView
{
    UIImageView *_annimationView;
    UIImageView *_secondAnnimationView;
    CAAnimationGroup *_animationGroup;
    CAAnimationGroup *_secondAnimationGroup;
    _Bool _disabled;
    struct CLLocationCoordinate2D _locationCoor;
}

@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) struct CLLocationCoordinate2D locationCoor; // @synthesize locationCoor=_locationCoor;
- (void).cxx_destruct;
- (void)dealloc;
- (void)hiddenAnimationInView;
- (void)secondCircleAnimatiom;
- (void)firstCircleAnimatiom;
- (void)showAnimationInView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withImageStr:(id)arg2;

@end
