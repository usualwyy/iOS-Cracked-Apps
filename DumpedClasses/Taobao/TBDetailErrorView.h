//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "AliDetailLoadingStatusViewProtocol.h"

@class NSString, TBDetailUIButton, UIActivityIndicatorView, UIImageView, UILabel, UIView;

@interface TBDetailErrorView : UIScrollView <AliDetailLoadingStatusViewProtocol>
{
    _Bool _showLoadingIndicator;
    CDUnknownBlockType _callback;
    unsigned long long _state;
    UIImageView *_iconImgView;
    UILabel *_errorTitle;
    UILabel *_errorSubTitle;
    TBDetailUIButton *_reloadButton;
    UIView *_parentView;
    UIActivityIndicatorView *_loadingIndicator;
}

@property(nonatomic) _Bool showLoadingIndicator; // @synthesize showLoadingIndicator=_showLoadingIndicator;
@property(retain, nonatomic) UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) __weak UIView *parentView; // @synthesize parentView=_parentView;
@property(retain, nonatomic) TBDetailUIButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) UILabel *errorSubTitle; // @synthesize errorSubTitle=_errorSubTitle;
@property(retain, nonatomic) UILabel *errorTitle; // @synthesize errorTitle=_errorTitle;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)reloadButtonClicked:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setSubTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setIcon:(id)arg1 title:(id)arg2 subTitle:(id)arg3 buttonTitle:(id)arg4 bounds:(struct CGRect)arg5;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateWithTBState:(int)arg1;
- (void)updateWithState:(long long)arg1 preferredhintText:(id)arg2 hintIcon:(id)arg3;
- (void)configParentContentView:(id)arg1 loadingViewInsets:(struct UIEdgeInsets)arg2 action:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

