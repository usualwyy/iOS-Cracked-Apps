//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FDCustomIOSAlertViewDelegate.h"

@class NSArray;

@interface FDCustomIOSAlertView : UIView <FDCustomIOSAlertViewDelegate>
{
    double buttonHeight;
    double buttonSpacerHeight;
    _Bool useMotionEffects;
    UIView *parentView;
    UIView *containerView;
    UIView *dialogView;
    CDUnknownBlockType onButtonTouchUpInside;
    id <FDCustomIOSAlertViewDelegate> delegate;
    NSArray *buttonTitles;
}

@property(nonatomic) _Bool useMotionEffects; // @synthesize useMotionEffects;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles;
@property(nonatomic) id <FDCustomIOSAlertViewDelegate> delegate; // @synthesize delegate;
@property(copy) CDUnknownBlockType onButtonTouchUpInside; // @synthesize onButtonTouchUpInside;
@property(retain, nonatomic) UIView *dialogView; // @synthesize dialogView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView;
@property(retain, nonatomic) UIView *parentView; // @synthesize parentView;
- (void).cxx_destruct;
- (void)dealloc;
- (void)applyMotionEffects;
- (struct CGSize)countScreenSize;
- (struct CGSize)countDialogSize;
- (void)addButtonsToView:(id)arg1;
- (id)createContainerView;
- (void)setSubView:(id)arg1;
- (void)close;
- (void)customIOS7dialogButtonTouchUpInside:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)customIOS7dialogButtonTouchUpInside:(id)arg1;
- (void)show;
- (id)init;
- (id)initWithParentView:(id)arg1;

@end

