//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class GDMDIscoveryTagView, GDMTUserListItem, NSString, UIButton, UIImageView, UILabel, UIProgressView;

@interface GDMTUserDoubleView : UIView <UIAlertViewDelegate, UIActionSheetDelegate>
{
    UIImageView *_contentImageView;
    UILabel *_contentLabel;
    UIButton *_mainButton;
    GDMTUserListItem *_item;
    GDMDIscoveryTagView *_priceView;
    UIView *_imgArrayView;
    UIView *_localView;
    UIProgressView *_progressView;
    UILabel *_failIconLabel;
    UILabel *_publisLabel;
    UIButton *_infoTouchBtn;
    NSString *_fail;
    UIView *_delView;
    NSString *_delFeedId;
    id _jumpNavigator;
    NSString *_utPageName;
    id _openUrlTarget;
}

@property __weak id openUrlTarget; // @synthesize openUrlTarget=_openUrlTarget;
@property(retain) NSString *utPageName; // @synthesize utPageName=_utPageName;
@property __weak id jumpNavigator; // @synthesize jumpNavigator=_jumpNavigator;
- (void).cxx_destruct;
- (void)dealloc;
- (void)eventListenerReBuildUploadNotification:(id)arg1;
- (void)onResetCallBack:(id)arg1;
- (void)eventListenerPublishProcessNotification:(id)arg1;
- (void)createLocalCellView;
- (void)setItem:(id)arg1;
- (void)layoutSubviews;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)ondelButtonCallBack:(id)arg1;
- (void)onJumpButtonCallBack:(id)arg1;
- (float)getTextWidth:(id)arg1 maxRect:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)grayImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

