//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class DWCollectLogoSelectMarkView, NSString, UIImageView;

@interface DWCollectLogoItem : UIView <CAAnimationDelegate>
{
    _Bool _collected;
    _Bool _scaled;
    CDUnknownBlockType _clickedBlock;
    CDUnknownBlockType _collectedBlock;
    UIView *_target;
    DWCollectLogoSelectMarkView *_selectMarkView;
    UIImageView *_imageView;
}

@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) DWCollectLogoSelectMarkView *selectMarkView; // @synthesize selectMarkView=_selectMarkView;
@property(nonatomic) _Bool scaled; // @synthesize scaled=_scaled;
@property(nonatomic) __weak UIView *target; // @synthesize target=_target;
@property(copy, nonatomic) CDUnknownBlockType collectedBlock; // @synthesize collectedBlock=_collectedBlock;
@property(copy, nonatomic) CDUnknownBlockType clickedBlock; // @synthesize clickedBlock=_clickedBlock;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setLogoImage:(id)arg1;
- (void)moveToCompletePoint:(struct CGPoint)arg1 origin2:(struct CGPoint)arg2;
- (void)stopShowAnimation;
- (void)startShowAnimation;
- (void)setHidden:(_Bool)arg1;
- (void)collectAnimationEnd;
- (void)collectAnimation:(id)arg1;
- (void)setCollected:(_Bool)arg1;
- (_Bool)collected;
- (void)updateSelectMarkViewFrame;
- (void)setFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

