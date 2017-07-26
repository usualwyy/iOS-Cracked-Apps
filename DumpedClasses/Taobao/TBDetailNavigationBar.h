//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AliDetailUpdateMessageDelegate.h"

@class AliDetailBadgeButton, CAGradientLayer, NSString, TBDetailNavigationBarViewModel, TBDetailNavigationItem, TBDetailNavigationTab, UIImageView;

@interface TBDetailNavigationBar : UIView <AliDetailUpdateMessageDelegate>
{
    double lastAlpa;
    _Bool _isDetailHome;
    TBDetailNavigationItem *_leftItem;
    TBDetailNavigationItem *_rightItem;
    TBDetailNavigationItem *_centerItem;
    TBDetailNavigationItem *_customItem;
    TBDetailNavigationTab *_navigationTab;
    TBDetailNavigationBarViewModel *_navibarModel;
    UIView *_divisionLine;
    AliDetailBadgeButton *_badageButton;
    UIImageView *_backgroudImageView;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *backgroudImageView; // @synthesize backgroudImageView=_backgroudImageView;
@property(retain, nonatomic) AliDetailBadgeButton *badageButton; // @synthesize badageButton=_badageButton;
@property(retain, nonatomic) UIView *divisionLine; // @synthesize divisionLine=_divisionLine;
@property(nonatomic) _Bool isDetailHome; // @synthesize isDetailHome=_isDetailHome;
@property(retain, nonatomic) TBDetailNavigationBarViewModel *navibarModel; // @synthesize navibarModel=_navibarModel;
@property(retain, nonatomic) TBDetailNavigationTab *navigationTab; // @synthesize navigationTab=_navigationTab;
@property(retain, nonatomic) TBDetailNavigationItem *customItem; // @synthesize customItem=_customItem;
@property(retain, nonatomic) TBDetailNavigationItem *centerItem; // @synthesize centerItem=_centerItem;
@property(retain, nonatomic) TBDetailNavigationItem *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) TBDetailNavigationItem *leftItem; // @synthesize leftItem=_leftItem;
- (void).cxx_destruct;
- (void)badageButtonClicked;
- (id)createNewItem:(id)arg1;
- (void)setDefaultActions;
- (void)setButtonBGAlpa:(double)arg1;
- (void)clearItem:(id)arg1;
- (void)setAccessibleTextForRightItem;
- (void)updateBadgeCount:(long long)arg1 messagetype:(long long)arg2 animation:(_Bool)arg3;
- (void)changeStatusBarColor:(double)arg1;
- (void)setAlphaForNavigationItem:(double)arg1;
- (void)setBackgroundAlpa:(double)arg1;
- (void)restoreRatioWhenBackToHome;
- (void)changeHeight:(double)arg1;
- (void)setChangingRatio:(double)arg1;
- (void)updateCurrentPageName:(id)arg1;
- (void)setBackgroundImage;
- (void)setNavibarBackgroundColor:(double)arg1;
- (void)setBackground;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

