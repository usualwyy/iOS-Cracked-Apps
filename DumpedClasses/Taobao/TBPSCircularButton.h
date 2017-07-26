//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface TBPSCircularButton : UIButton
{
    double _lineWidth;
    UIColor *_filledColor;
    UIColor *_circleColor;
    UIColor *_circleHighlightedColor;
    double _fillWidth;
}

@property(retain, nonatomic) UIColor *filledColor; // @synthesize filledColor=_filledColor;
@property(nonatomic) double fillWidth; // @synthesize fillWidth=_fillWidth;
@property(retain, nonatomic) UIColor *circleColor; // @synthesize circleColor=_circleColor;
@property(nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

