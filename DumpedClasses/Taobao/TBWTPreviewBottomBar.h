//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, UIButton, UILabel, UITextView;

@interface TBWTPreviewBottomBar : UIView <UITextViewDelegate>
{
    UIButton *_publicButton;
    UIButton *_backButton;
    UIButton *_shareButton;
    UILabel *_topicLabel;
    UITextView *_descTextView;
    UIView *_lineView;
}

@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UITextView *descTextView; // @synthesize descTextView=_descTextView;
@property(retain, nonatomic) UILabel *topicLabel; // @synthesize topicLabel=_topicLabel;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *publicButton; // @synthesize publicButton=_publicButton;
- (void).cxx_destruct;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)publicSuccessed;
- (void)hidBottomLine;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

