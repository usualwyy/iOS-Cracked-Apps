//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSArray, TBNaviBar, TBNavigationItem;

@interface UIViewController (TBNaviBar)
+ (_Bool)tbNeedNavibar;
- (void)setLoadProgressValue:(double)arg1;
- (void)didSelectTBMorePopoverItemAtIndex:(long long)arg1;
- (id)pageUserInfo;
- (void)dismissMorePopoverView;
- (void)dismissMorePopoverItemsView;
- (void)updateMorePopoverItemView;
- (void)showMorePopoverItemsView:(_Bool)arg1;
- (void)updateMorePopoverItemsView;
- (_Bool)isShowingPopoverItemView;
- (void)setTbNavigationItem:(id)arg1;
@property(readonly, nonatomic) TBNaviBar *tbNavibar;
- (void)messageViewClicked:(id)arg1;
- (void)statusBarClicked;
@property(nonatomic) long long festivalStyle;
- (id)imageWithImage:(id)arg1 scaledToHeight:(double)arg2;
- (void)stopFestivalDeviceMotion;
@property(nonatomic) struct CGRect tbMorePopViewRect;
@property(nonatomic) _Bool tbEnableTouchStatusBar;
- (id)totalMorePopoverItems;
@property(retain, nonatomic) NSArray *tbMoreCustomItems;
- (void)setTBNaviBarBackgroundHidden;
- (void)setTbBottomLineHidden:(_Bool)arg1;
- (void)setTBNaviBarBlurViewHidden:(_Bool)arg1;
- (void)feedbackButtonItemClicked:(id)arg1;
- (void)moreItemClicked:(id)arg1;
- (void)backItemClicked:(id)arg1;
- (id)defaultMorePopoverItems;
- (void)updateBadgeCount:(long long)arg1 messagetype:(long long)arg2 animation:(_Bool)arg3;
- (id)tbNaviBar_moreMessageView;
- (id)messageViewWith:(id)arg1 wangwangImages:(id)arg2 badgeBackColor:(id)arg3 badgeTextColor:(id)arg4;
- (id)messageViewWith:(id)arg1 wangwangImages:(id)arg2 badgeBackColor:(id)arg3 badgeTextColor:(id)arg4 type:(long long)arg5;
- (id)feedbackButtonItem;
- (id)moreButtonItem;
- (id)backButtonItem;
- (void)setTbNavibarHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) unsigned long long tbNavibarHeight;
@property(nonatomic) float tbOriginY;
@property(nonatomic) _Bool tbNavibarHidden;
@property(readonly, nonatomic) TBNavigationItem *tbNavigationItem;
@end

