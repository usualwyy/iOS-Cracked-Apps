//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBIMRelationServiceDelegate.h"

@class NSString, UIButton, UILabel, UITextField;

@interface TBIMFriendRequestView : UIView <TBIMRelationServiceDelegate>
{
    UIView *_view;
    UILabel *_titleLabel;
    UILabel *_iamLabel;
    UILabel *_tipLabel;
    UITextField *_textField;
    UIView *_textFieldBackgroundView;
    NSString *_selfName;
    UIButton *_deleteButton;
    UILabel *_newTipLabel;
    UIButton *_cancelButton;
    UIButton *_sendButton;
    UIView *_bottomLine;
    UIView *_middleLine;
    NSString *_name;
    NSString *_userId;
    _Bool isNeedRealName;
    CDUnknownBlockType _tapSendBlock;
}

@property(copy, nonatomic) CDUnknownBlockType tapSendBlock; // @synthesize tapSendBlock=_tapSendBlock;
- (void).cxx_destruct;
- (void)friendRequestIsSuccess:(_Bool)arg1 userId:(id)arg2 error:(id)arg3;
- (void)selfRealNameRequest:(id)arg1 success:(_Bool)arg2;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (_Bool)validateContentLength:(id)arg1;
- (void)tapSendButton:(id)arg1;
- (void)tapCancelButton:(id)arg1;
- (void)tapDeleteButton:(id)arg1;
- (void)destroy;
- (void)setupView:(id)arg1;
- (void)showInView:(id)arg1;
- (id)initWithOtherNick:(id)arg1 userId:(id)arg2;
- (id)initWithOtherNick:(id)arg1 userId:(id)arg2 selfName:(id)arg3;
- (id)initCommonWithNick:(id)arg1 userId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

