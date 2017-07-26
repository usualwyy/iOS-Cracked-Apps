//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBTextParser.h"

@class NSArray, NSDictionary, NSString, UIColor, UIFont;

@interface TBIMSystemTemplateParser : NSObject <TBTextParser>
{
    NSDictionary *_templateDict;
    NSArray *_activeList;
    UIColor *_linkColor;
    UIFont *_linkFont;
}

@property(retain, nonatomic) UIFont *linkFont; // @synthesize linkFont=_linkFont;
@property(retain, nonatomic) UIColor *linkColor; // @synthesize linkColor=_linkColor;
@property(retain, nonatomic) NSArray *activeList; // @synthesize activeList=_activeList;
@property(retain, nonatomic) NSDictionary *templateDict; // @synthesize templateDict=_templateDict;
- (void).cxx_destruct;
- (void)handleAttributedText:(id)arg1 replaceRange:(struct _NSRange)arg2 replaceText:(id)arg3 linkUrl:(id)arg4;
- (void)parseAttributedText:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

