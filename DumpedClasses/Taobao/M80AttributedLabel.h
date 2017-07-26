//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class M80AttributedLabelURL, NSMutableArray, NSMutableAttributedString, UIColor, UIFont;

@interface M80AttributedLabel : UIView
{
    NSMutableArray *_attachments;
    NSMutableArray *_linkLocations;
    struct __CTFrame *_textFrame;
    double _fontAscent;
    double _fontDescent;
    double _fontHeight;
    _Bool _underLineForLink;
    _Bool _autoDetectLinks;
    unsigned char _textAlignment;
    unsigned char _lineBreakMode;
    _Bool _copyingEnabled;
    _Bool _linkDetected;
    _Bool _ignoreRedraw;
    id <M80AttributedLabelDelegate> _delegate;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_highlightColor;
    UIColor *_linkColor;
    long long _numberOfLines;
    double _lineSpacing;
    double _paragraphSpacing;
    NSMutableAttributedString *_attributedString;
    M80AttributedLabelURL *_touchedLink;
}

+ (void)setCustomDetectMethod:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool ignoreRedraw; // @synthesize ignoreRedraw=_ignoreRedraw;
@property(nonatomic) _Bool linkDetected; // @synthesize linkDetected=_linkDetected;
@property(retain, nonatomic) M80AttributedLabelURL *touchedLink; // @synthesize touchedLink=_touchedLink;
@property(retain, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(nonatomic) _Bool copyingEnabled; // @synthesize copyingEnabled=_copyingEnabled;
@property(nonatomic) double paragraphSpacing; // @synthesize paragraphSpacing=_paragraphSpacing;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) unsigned char lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) unsigned char textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(nonatomic) _Bool autoDetectLinks; // @synthesize autoDetectLinks=_autoDetectLinks;
@property(nonatomic) _Bool underLineForLink; // @synthesize underLineForLink=_underLineForLink;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) __weak id <M80AttributedLabelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)menuWillHidden:(id)arg1;
- (void)setBackHighlightColor:(_Bool)arg1;
- (void)handleTap:(id)arg1;
- (void)attachTapHandler;
- (void)mycopy:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)touchEventResponse;
- (id)responderEvent;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)labelTapGR:(id)arg1;
- (void)addAutoDetectedLink:(id)arg1;
- (void)computeLink:(id)arg1 sync:(_Bool)arg2;
- (void)recomputeLinksIfNeeded;
- (_Bool)onLabelClick:(struct CGPoint)arg1;
- (void)drawAttachments;
- (void)drawText:(id)arg1 rect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawHighlightWithRect:(struct CGRect)arg1;
- (void)prepareTextFrame:(id)arg1 rect:(struct CGRect)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)addCustomLink:(id)arg1 forRange:(struct _NSRange)arg2 linkColor:(id)arg3;
- (void)addCustomLink:(id)arg1 forRange:(struct _NSRange)arg2;
- (void)appendView:(id)arg1 margin:(struct UIEdgeInsets)arg2 alignment:(int)arg3;
- (void)appendView:(id)arg1 margin:(struct UIEdgeInsets)arg2;
- (void)appendView:(id)arg1;
- (void)appendImage:(id)arg1 maxSize:(struct CGSize)arg2 margin:(struct UIEdgeInsets)arg3 alignment:(int)arg4;
- (void)appendImage:(id)arg1 maxSize:(struct CGSize)arg2 margin:(struct UIEdgeInsets)arg3;
- (void)appendImage:(id)arg1 maxSize:(struct CGSize)arg2;
- (void)appendImage:(id)arg1;
- (void)appendAttributedText:(id)arg1;
- (void)appendText:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setText:(id)arg1;
- (void)appendAttachment:(id)arg1;
- (struct CGRect)rectForRange:(struct _NSRange)arg1 inLine:(struct __CTLine *)arg2 lineOrigin:(struct CGPoint)arg3;
- (id)linkAtIndex:(long long)arg1;
- (struct CGRect)getLineBounds:(struct __CTLine *)arg1 point:(struct CGPoint)arg2;
- (struct CGAffineTransform)transformForCoreText;
- (id)linkDataForPoint:(struct CGPoint)arg1;
- (id)urlForPoint:(struct CGPoint)arg1;
- (id)attributedStringForDraw;
- (long long)numberOfDisplayedLines;
- (id)attributedString:(id)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)resetFont;
- (void)resetTextFrame;
- (void)cleanAll;
- (void)commonInit;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

