//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface TBSearchTitleView : UIView
{
    UILabel *_titleLabel;
    double _iconTopGap;
    double _titleViewHeightGap;
    UIView *_titleIconView;
    double _titleNumberOfLine;
    double _titleLineHeight;
    double _titleFontSize;
}

@property(nonatomic) double titleFontSize; // @synthesize titleFontSize=_titleFontSize;
@property(nonatomic) double titleLineHeight; // @synthesize titleLineHeight=_titleLineHeight;
@property(nonatomic) double titleNumberOfLine; // @synthesize titleNumberOfLine=_titleNumberOfLine;
@property(retain, nonatomic) UIView *titleIconView; // @synthesize titleIconView=_titleIconView;
@property(nonatomic) double titleViewHeightGap; // @synthesize titleViewHeightGap=_titleViewHeightGap;
@property(nonatomic) double iconTopGap; // @synthesize iconTopGap=_iconTopGap;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)adjustView;
- (void)setNumberOfLine:(long long)arg1 andLineHeight:(double)arg2 andFontSize:(double)arg3;
- (void)setPreIconView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

