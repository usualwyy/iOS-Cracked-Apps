//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIColor;

@interface TBSCActionSheetButton : UIButton
{
    long long _index;
    long long _cornerType;
    UIColor *_originalTextColor;
    UIColor *_highlightTextColor;
    UIColor *_originalBackgroundColor;
    UIColor *_highlightBackgroundColor;
    double _cornerRadian;
    double _margine;
}

@property double margine; // @synthesize margine=_margine;
@property double cornerRadian; // @synthesize cornerRadian=_cornerRadian;
@property(retain) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(retain) UIColor *originalBackgroundColor; // @synthesize originalBackgroundColor=_originalBackgroundColor;
@property(retain) UIColor *highlightTextColor; // @synthesize highlightTextColor=_highlightTextColor;
@property(retain) UIColor *originalTextColor; // @synthesize originalTextColor=_originalTextColor;
@property long long cornerType; // @synthesize cornerType=_cornerType;
@property long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (void)setMaskTo:(id)arg1 byRoundingCorners:(unsigned long long)arg2;
- (void)resizeForLandscapeOrientation;
- (void)resizeForPortraitOrientation;
- (void)setTextColor:(id)arg1;
- (id)initWithAllCornersRounded:(double)arg1;
- (id)initWithBottomCornersRounded:(double)arg1;
- (id)initWithTopCornersRounded:(double)arg1;
- (id)initCommonButtonWithTitleFont:(id)arg1;
- (id)initCommonButton;
- (id)initCancelButtonWithLabelFont:(id)arg1;
- (id)initCancelButton;
- (id)init:(double)arg1;
- (id)init;

@end

