//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NXControlNode.h"

#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSAttributedString, NSString, NXASHighlightOverlayLayer, NXASTextKitRenderer, UIColor, UILongPressGestureRecognizer;

@interface NXASTextNode : NXControlNode <UIGestureRecognizerDelegate>
{
    struct CGSize _shadowOffset;
    struct CGColor *_shadowColor;
    double _shadowOpacity;
    double _shadowRadius;
    NSArray *_exclusionPaths;
    NSAttributedString *_composedTruncationString;
    NSString *_highlightedLinkAttributeName;
    id _highlightedLinkAttributeValue;
    struct _NSRange _highlightRange;
    NXASHighlightOverlayLayer *_activeHighlightLayer;
    struct RecursiveMutex _rendererLock;
    struct CGSize _constrainedSize;
    NXASTextKitRenderer *_renderer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    _Bool _longPressCancelsTouches;
    _Bool _passthroughNonlinkTouches;
    NSAttributedString *_attributedString;
    NSAttributedString *_truncationAttributedString;
    NSAttributedString *_additionalTruncationMessage;
    long long _truncationMode;
    unsigned long long _maximumNumberOfLines;
    UIColor *_placeholderColor;
    NSArray *_linkAttributeNames;
    unsigned long long _highlightStyle;
    id <NXASTextNodeDelegate> _delegate;
    struct UIEdgeInsets _contentInsets;
    struct UIEdgeInsets _placeholderInsets;
}

+ (struct CGRect)_adjustRendererRect:(struct CGRect)arg1 forShadowPadding:(struct UIEdgeInsets)arg2;
+ (double)_highlightOpacityForStyle:(unsigned long long)arg1;
+ (struct CGColor *)_highlightColorForStyle:(unsigned long long)arg1;
+ (void)drawRect:(struct CGRect)arg1 withParameters:(id)arg2 isCancelled:(CDUnknownBlockType)arg3 isRasterizing:(_Bool)arg4;
@property(nonatomic) _Bool passthroughNonlinkTouches; // @synthesize passthroughNonlinkTouches=_passthroughNonlinkTouches;
@property(nonatomic) _Bool longPressCancelsTouches; // @synthesize longPressCancelsTouches=_longPressCancelsTouches;
@property(nonatomic) __weak id <NXASTextNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long highlightStyle; // @synthesize highlightStyle=_highlightStyle;
@property(copy, nonatomic) NSArray *linkAttributeNames; // @synthesize linkAttributeNames=_linkAttributeNames;
@property(nonatomic) struct UIEdgeInsets placeholderInsets; // @synthesize placeholderInsets=_placeholderInsets;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) unsigned long long maximumNumberOfLines; // @synthesize maximumNumberOfLines=_maximumNumberOfLines;
@property(nonatomic) long long truncationMode; // @synthesize truncationMode=_truncationMode;
@property(copy, nonatomic) NSAttributedString *additionalTruncationMessage; // @synthesize additionalTruncationMessage=_additionalTruncationMessage;
@property(copy, nonatomic) NSAttributedString *truncationAttributedString; // @synthesize truncationAttributedString=_truncationAttributedString;
@property(copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) struct CGSize constrainedSize; // @synthesize constrainedSize=_constrainedSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_prepareTruncationStringForDrawing:(id)arg1;
- (id)_composedTruncationString;
- (struct _NSRange)_additionalTruncationMessageRangeWithVisibleRange:(struct _NSRange)arg1;
- (void)_invalidateTruncationString;
@property(readonly, nonatomic) unsigned long long lineCount;
@property(readonly, nonatomic, getter=isTruncated) _Bool truncated;
@property(readonly, nonatomic) struct UIEdgeInsets shadowPadding;
- (void)setShadowRadius:(double)arg1;
- (double)shadowRadius;
- (void)setShadowOpacity:(double)arg1;
- (double)shadowOpacity;
- (void)setShadowOffset:(struct CGSize)arg1;
- (struct CGSize)shadowOffset;
- (void)setShadowColor:(struct CGColor *)arg1;
- (struct CGColor *)shadowColor;
- (_Bool)_pendingTruncationTap;
- (_Bool)_pendingLinkTap;
- (void)_handleLongPress:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)placeholderImage;
- (struct CGRect)frameForTextRange:(struct _NSRange)arg1;
- (struct CGRect)trailingRect;
- (id)highlightRectsForTextRange:(struct _NSRange)arg1;
- (id)rectsForTextRange:(struct _NSRange)arg1;
- (id)_rectsForTextRange:(struct _NSRange)arg1 measureOption:(unsigned long long)arg2;
- (void)_clearHighlightIfNecessary;
- (void)_setHighlightRange:(struct _NSRange)arg1 forAttributeName:(id)arg2 value:(id)arg3 animated:(_Bool)arg4;
- (void)setHighlightRange:(struct _NSRange)arg1 animated:(_Bool)arg2;
@property(nonatomic) struct _NSRange highlightRange;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)_linkAttributeValueAtPoint:(struct CGPoint)arg1 attributeName:(out id *)arg2 range:(out struct _NSRange *)arg3 inAdditionalTruncationMessage:(out _Bool *)arg4 forHighlighting:(_Bool)arg5;
- (id)linkAttributeValueAtPoint:(struct CGPoint)arg1 attributeName:(out id *)arg2 range:(out struct _NSRange *)arg3;
- (id)drawParametersForAsyncLayer:(id)arg1;
@property(retain, nonatomic) NSArray *exclusionPaths;
- (struct NXASTextKitAttributes)_rendererAttributes;
- (id)_rendererWithBoundsSlow:(struct CGRect)arg1;
- (id)_renderer;
- (void)didLoad;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithViewBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (id)initWithLayerBlock:(CDUnknownBlockType)arg1 didLoadBlock:(CDUnknownBlockType)arg2;
- (void)fillInitialProperties;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool placeholderEnabled; // @dynamic placeholderEnabled;
@property(readonly) Class superclass;

@end

