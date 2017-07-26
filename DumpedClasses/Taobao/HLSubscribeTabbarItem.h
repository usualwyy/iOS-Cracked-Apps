//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class HLSubscribeTabbarItemContent, UIImageView;

@interface HLSubscribeTabbarItem : UIButton
{
    _Bool _animationFlag;
    HLSubscribeTabbarItemContent *_tabBarItemContent;
    UIImageView *_refreshView;
    long long _layoutType;
}

@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(retain, nonatomic) UIImageView *refreshView; // @synthesize refreshView=_refreshView;
@property(nonatomic) _Bool animationFlag; // @synthesize animationFlag=_animationFlag;
@property(retain, nonatomic) HLSubscribeTabbarItemContent *tabBarItemContent; // @synthesize tabBarItemContent=_tabBarItemContent;
- (void).cxx_destruct;
- (void)layoutImageTitle;
- (void)layoutSubviews;
- (void)initBarItem;
- (id)initWithFrame:(struct CGRect)arg1;

@end

