//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

#import "UITextFieldDelegate.h"

@class NSString, NSTimer, TBTradeVerificationCodeModel, UIButton, UILabel, UITextField;

@interface TBExtBuyVerificationCodeCell : TBExtBuyBaseCell <UITextFieldDelegate>
{
    TBTradeVerificationCodeModel *_model;
    UILabel *_titleLabel;
    UITextField *_textField;
    UIButton *_sendButton;
    NSTimer *_sendBtnTimer;
}

@property(retain, nonatomic) NSTimer *sendBtnTimer; // @synthesize sendBtnTimer=_sendBtnTimer;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak TBTradeVerificationCodeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)sendVerificationCode:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)bindData:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initCell;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

