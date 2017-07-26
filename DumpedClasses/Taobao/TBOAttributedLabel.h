//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOTTTAttributedLabel.h"

#import "ABUnknownPersonViewControllerDelegate.h"
#import "TBOTTTAttributedLabelDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSString, TBOAttributeText, TBOMarkupParser, UIWebView;

@interface TBOAttributedLabel : TBOTTTAttributedLabel <TBOTTTAttributedLabelDelegate, UIActionSheetDelegate, ABUnknownPersonViewControllerDelegate>
{
    _Bool _hasMoreText;
    TBOAttributeText *_richTextContent;
    UIWebView *_phoneCallWebView;
    TBOMarkupParser *_parser;
}

@property(retain, nonatomic) TBOMarkupParser *parser; // @synthesize parser=_parser;
@property(retain, nonatomic) UIWebView *phoneCallWebView; // @synthesize phoneCallWebView=_phoneCallWebView;
@property(nonatomic) _Bool hasMoreText; // @synthesize hasMoreText=_hasMoreText;
@property(retain, nonatomic) TBOAttributeText *richTextContent; // @synthesize richTextContent=_richTextContent;
- (void).cxx_destruct;
- (_Bool)unknownPersonViewController:(id)arg1 shouldPerformDefaultActionForPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)unknownPersonViewController:(id)arg1 didResolveToPerson:(void *)arg2;
- (void)showUnknownPersonViewController:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)navigationController;
- (void)attributedLabel:(id)arg1 didSelectLinkWithPhoneNumber:(id)arg2;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (void)setStringToCopy:(id)arg1;
- (void)setLinks:(id)arg1;
- (void)setPicSize:(double)arg1;
- (id)markParserDelegate;
- (id)emojiDic;
- (void)setLinkColor:(id)arg1 activeLinkColor:(id)arg2;
- (id)initWithAttributeText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

