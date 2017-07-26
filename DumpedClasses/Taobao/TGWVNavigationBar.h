//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIColor, UILabel;

@interface TGWVNavigationBar : UIView
{
    UIButton *_backBtn;
    UIButton *_rightItem;
    UIButton *_moreItem;
    UILabel *_titleView;
    UIColor *_titleColor;
    id <TGWVNavigationBarDelegate> _delegate;
}

@property(nonatomic) __weak id <TGWVNavigationBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UILabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIButton *moreItem; // @synthesize moreItem=_moreItem;
@property(retain, nonatomic) UIButton *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) UIButton *backBtn; // @synthesize backBtn=_backBtn;
- (void).cxx_destruct;
- (void)onClickBackBtn:(id)arg1;
- (void)onClickMoreItem:(id)arg1;
- (void)onClickRightItem:(id)arg1;
- (void)setNaviBarMoreItem:(id)arg1;
- (void)clearNaviBarRightItem;
- (void)setNaviBarRightItem:(id)arg1;
- (void)setCustomPageTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

