//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarItem.h"

@class UIColor, UIView;

@interface UITabBarItem (TBUICore)
+ (id)tbuicore_tabbarItemWithTitle:(id)arg1 iconName:(id)arg2 selectedIconName:(id)arg3;
+ (id)tbuicore_tabbarItemWithTitle:(id)arg1 titleFont:(id)arg2 iconText:(id)arg3 selectedIconText:(id)arg4 iconFont:(id)arg5 color:(id)arg6 selectedColor:(id)arg7;
- (void)tbuicore_resetAnimation;
- (void)tbuicore_playSelectAnimation;
- (void)tbuicore_updateWithSelectedAnimationName:(id)arg1;
- (void)tbuicore_setAnimationView:(id)arg1;
- (id)animationView;
- (void)tbuicore_dismissOverlay;
- (void)tbuicore_presentOverlay:(id)arg1 hideBottomView:(_Bool)arg2;
- (void)tbuicore_presentOverlay:(id)arg1;
- (void)tbuicore_presentOverlay;
@property(retain, nonatomic) UIView *tbuicore_overlay;
- (void)overlayClicked;
- (void)tbuicore_updateBadgeWithCount:(unsigned long long)arg1;
- (void)tbuicore_updateBadgeWithText:(id)arg1;
- (void)tbuicore_updateBadgeWithLabel:(id)arg1;
- (void)tbuicore_setBadgeLabel:(id)arg1;
- (id)tbuicore_badgeLabel;
- (void)tbuicore_updateWithSelectedIconName:(id)arg1;
- (void)tbuicore_updateWithSelectedIconName:(id)arg1 color:(id)arg2;
- (void)tbuicore_updateWithIconName:(id)arg1;
- (void)tbuicore_updateWithIconName:(id)arg1 color:(id)arg2;
- (void)tbuicore_updateTitleWithColor:(id)arg1 selectedColor:(id)arg2;
@property(retain, nonatomic) UIColor *tbuicore_badgeBorderColor;
@property(retain, nonatomic) UIColor *tbuicore_badgeColor;
@property(nonatomic, getter=isTbuicore_titleHidden) _Bool tbuicore_titleHidden;
@end

