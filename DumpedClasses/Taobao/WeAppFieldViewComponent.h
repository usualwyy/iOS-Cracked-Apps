//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeAppComponent.h"

#import "UITextFieldDelegate.h"

@class NSString, UIFont, WeAppBasicFieldView;

@interface WeAppFieldViewComponent : WeAppComponent <UITextFieldDelegate>
{
    _Bool _needBeginEditing;
    _Bool _needChange;
    _Bool _needEndEditing;
    _Bool _needEndEditingAndChange;
    WeAppBasicFieldView *_textView;
    NSString *_imageOldUrl;
    NSString *_textOldValue;
    NSString *_placeholderValue;
    UIFont *_labelFont;
}

@property(nonatomic) _Bool needEndEditingAndChange; // @synthesize needEndEditingAndChange=_needEndEditingAndChange;
@property(nonatomic) _Bool needEndEditing; // @synthesize needEndEditing=_needEndEditing;
@property(nonatomic) _Bool needChange; // @synthesize needChange=_needChange;
@property(nonatomic) _Bool needBeginEditing; // @synthesize needBeginEditing=_needBeginEditing;
@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(retain, nonatomic) NSString *placeholderValue; // @synthesize placeholderValue=_placeholderValue;
@property(retain, nonatomic) NSString *textOldValue; // @synthesize textOldValue=_textOldValue;
@property(retain, nonatomic) NSString *imageOldUrl; // @synthesize imageOldUrl=_imageOldUrl;
@property(retain, nonatomic) WeAppBasicFieldView *textView; // @synthesize textView=_textView;
- (void).cxx_destruct;
- (int)getLabelHeight:(int)arg1 byMeasureSpec:(int)arg2 byItem:(id)arg3;
- (int)getLabelWidth:(int)arg1 byMeasureSpec:(int)arg2 byItem:(id)arg3;
- (void)onMeasureWithSpecW:(int)arg1 withSpecH:(int)arg2;
- (_Bool)doValidateWithModel:(unsigned long long)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setCssKeyBordType:(id)arg1;
- (void)setCssBackgroundUrl:(id)arg1;
- (void)setCssFontSize:(id)arg1;
- (void)setCssGravity:(id)arg1;
- (void)setCssPlaceholderTextColor:(id)arg1;
- (void)setCssTextColor:(id)arg1;
- (void)setTextViewBackgroundColor:(id)arg1;
- (void)setCss;
- (void)setupTextView;
- (void)refreshImageComponentInList;
- (void)refreshData;
- (void)setupDataValue;
- (void)setupDataValueAndConditon;
- (void)setupTextViewEvent;
- (void)dealloc;
- (id)createView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

