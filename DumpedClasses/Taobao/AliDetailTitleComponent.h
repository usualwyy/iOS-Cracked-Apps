//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponent.h"

#import "TBTextLabelDelegate.h"

@class AliDetailTitleModel, NSString, TBTextAttachment, TBTextLabel, UIImageView, UIMenuController;

@interface AliDetailTitleComponent : AliDetailComponent <TBTextLabelDelegate>
{
    _Bool _menuShowed;
    int _fontSize;
    TBTextLabel *_titleLabel;
    TBTextLabel *_subTitleLabel;
    TBTextAttachment *_logo;
    UIImageView *_logoImg;
    UIMenuController *_longPressMenu;
    AliDetailTitleModel *_titleModel;
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
+ (double)getAnswerTitleHeight:(double)arg1 titleModel:(id)arg2;
@property(nonatomic) _Bool menuShowed; // @synthesize menuShowed=_menuShowed;
@property(nonatomic) int fontSize; // @synthesize fontSize=_fontSize;
@property(nonatomic) __weak AliDetailTitleModel *titleModel; // @synthesize titleModel=_titleModel;
@property(retain, nonatomic) UIMenuController *longPressMenu; // @synthesize longPressMenu=_longPressMenu;
@property(retain, nonatomic) UIImageView *logoImg; // @synthesize logoImg=_logoImg;
@property(retain, nonatomic) TBTextAttachment *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) TBTextLabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) TBTextLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)componentActionClicked:(id)arg1;
- (void)copyLabelText;
- (void)shareItem;
- (void)handleLongPress:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)setObject:(id)arg1;
- (void)setTitleAndLogo;
- (void)setAction;
- (void)setLogoImg;
- (void)setStyle;
- (void)layoutSubviews;
- (void)setupComponentSize:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

