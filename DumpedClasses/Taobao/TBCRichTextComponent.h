//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCBaseComponent.h"

@class M80AttributedLabel;

@interface TBCRichTextComponent : TBCBaseComponent
{
    M80AttributedLabel *_lbRich;
}

+ (id)defaultFields;
+ (id)defaultStyle;
+ (id)componentTag;
@property(retain, nonatomic) M80AttributedLabel *lbRich; // @synthesize lbRich=_lbRich;
- (void).cxx_destruct;
- (void)loadContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

