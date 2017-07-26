//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBAddressBookMessageChangeNameInputViewDelegate.h"

@class NSString, TBAddressBookMessageChangeNameInputView, UIButton, UILabel;

@interface TBAddressBookMessageChangeNameView : UIView <TBAddressBookMessageChangeNameInputViewDelegate>
{
    UILabel *_nameLabel;
    TBAddressBookMessageChangeNameInputView *_inputView;
    UIButton *_confirmButton;
}

+ (id)messageChangeNameView;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) TBAddressBookMessageChangeNameInputView *inputView; // @synthesize inputView=_inputView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void).cxx_destruct;
- (void)addressBookMessageChangeNameInputViewExceededMaxCharNum:(id)arg1;
- (void)clearText;
- (void)setMessageChangeNameViewText:(id)arg1;
- (void)hideKeyBoardIfNeed;
- (void)messageChangeNameViewTextFieldBecomeFirstResponder;
- (_Bool)messageChangeNameViewIsFirstResponder;
- (void)clickedConfirmButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

