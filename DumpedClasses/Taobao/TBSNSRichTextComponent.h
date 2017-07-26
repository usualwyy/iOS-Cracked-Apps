//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

#import "TBTextLabelDelegate.h"

@class NSArray, NSString, TBSNSCustomRichTextInfos;

@interface TBSNSRichTextComponent : WXComponent <TBTextLabelDelegate>
{
    _Bool _viewInitFinished;
    double _fontSize;
    double _labelHeight;
    double _fontWeight;
    double _lines;
    NSString *_textValue;
    NSString *_fontColor;
    NSArray *_richTextUTParams;
    NSArray *_infoArray;
    TBSNSCustomRichTextInfos *_rtInfos;
}

@property(nonatomic) _Bool viewInitFinished; // @synthesize viewInitFinished=_viewInitFinished;
@property(retain, nonatomic) TBSNSCustomRichTextInfos *rtInfos; // @synthesize rtInfos=_rtInfos;
@property(retain, nonatomic) NSArray *infoArray; // @synthesize infoArray=_infoArray;
@property(retain, nonatomic) NSArray *richTextUTParams; // @synthesize richTextUTParams=_richTextUTParams;
@property(copy, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(copy, nonatomic) NSString *textValue; // @synthesize textValue=_textValue;
@property(nonatomic) double lines; // @synthesize lines=_lines;
@property(nonatomic) double fontWeight; // @synthesize fontWeight=_fontWeight;
@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void).cxx_destruct;
- (void)updateAttributes:(id)arg1;
- (void)updateStyles:(id)arg1;
- (CDUnknownBlockType)measureBlock;
- (void)textLabel:(id)arg1 didTapWithLink:(id)arg2 range:(struct _NSRange)arg3;
- (void)rendRichText;
- (void)setRichTextInfos:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)loadView;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

