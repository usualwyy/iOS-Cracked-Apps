//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextViewDelegate.h"

@class NSString, UILabel, UITextField;

@interface TBFavDetailListCreateCategoryTableViewCell : UIView <UITextViewDelegate>
{
    id <TextFieldChangedDelegate> _delegate;
    UILabel *_leftLabel;
    UITextField *_rightTextField;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UITextField *rightTextField; // @synthesize rightTextField=_rightTextField;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(nonatomic) __weak id <TextFieldChangedDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addSubViews;
- (void)textFieldDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

