//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor, UIToolbar;

@interface ILTranslucentView : UIView
{
    UIView *nonexistentSubview;
    UIView *toolbarContainerClipView;
    UIToolbar *toolBarBG;
    UIView *overlayBackgroundView;
    _Bool initComplete;
    _Bool _translucent;
    double _translucentAlpha;
    UIColor *_translucentTintColor;
    UIColor *_ilColorBG;
    UIColor *_ilDefaultColorBG;
}

@property(copy, nonatomic) UIColor *ilDefaultColorBG; // @synthesize ilDefaultColorBG=_ilDefaultColorBG;
@property(copy, nonatomic) UIColor *ilColorBG; // @synthesize ilColorBG=_ilColorBG;
@property(retain, nonatomic) UIColor *translucentTintColor; // @synthesize translucentTintColor=_translucentTintColor;
@property(nonatomic) _Bool translucent; // @synthesize translucent=_translucent;
@property(nonatomic) double translucentAlpha; // @synthesize translucentAlpha=_translucentAlpha;
- (void).cxx_destruct;
- (void)exchangeSubviewAtIndex:(long long)arg1 withSubviewAtIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)sendSubviewToBack:(id)arg1;
- (id)subviews;
- (void)setBackgroundColor:(id)arg1;
@property(nonatomic) long long translucentStyle;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)isItClearColor:(id)arg1;
- (void)createUI;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

