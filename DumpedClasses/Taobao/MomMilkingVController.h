//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MomFeedingDelegate.h"

@class MomMilkingCupView, NSString, UIButton;

@interface MomMilkingVController : UIViewController <MomFeedingDelegate>
{
    UIButton *_leftButton;
    UIButton *_rightButton;
    MomMilkingCupView *_cupView;
    long long _position;
}

@property(nonatomic) long long position; // @synthesize position=_position;
@property(retain, nonatomic) MomMilkingCupView *cupView; // @synthesize cupView=_cupView;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
- (void).cxx_destruct;
- (void)udapteRecord:(id)arg1;
- (void)onRightTypeButtonClick:(id)arg1;
- (void)onLeftTypeButtonClick:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

