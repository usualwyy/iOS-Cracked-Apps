//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@class UIColor;

@interface MUKCustomUnderLineLabel : UILabel
{
    _Bool _innerNeedLine;
    double _innerLineSpace;
    UIColor *_innerUnderLineColor;
    double _innerUnderLineWidth;
}

@property(nonatomic) double innerUnderLineWidth; // @synthesize innerUnderLineWidth=_innerUnderLineWidth;
@property(retain, nonatomic) UIColor *innerUnderLineColor; // @synthesize innerUnderLineColor=_innerUnderLineColor;
@property(nonatomic) double innerLineSpace; // @synthesize innerLineSpace=_innerLineSpace;
@property(nonatomic) _Bool innerNeedLine; // @synthesize innerNeedLine=_innerNeedLine;
- (void).cxx_destruct;
- (void)updateFont:(id)arg1 numberOfLines:(long long)arg2 lineSpace:(double)arg3 underLineColor:(id)arg4 underLineWidth:(double)arg5 needLine:(_Bool)arg6;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;

@end

