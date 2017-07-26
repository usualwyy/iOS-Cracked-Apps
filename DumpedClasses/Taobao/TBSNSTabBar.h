//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface TBSNSTabBar : UIView
{
    NSMutableArray *_itemsTabView;
    UIView *bottomLine;
    int itemWidth;
    float lineOffset;
    CDUnknownBlockType _touchTabView;
    _Bool _autoMoveLine;
    _Bool _showTitleAsWellAsIcon;
    unsigned long long _selectedIndex;
}

@property(nonatomic) _Bool showTitleAsWellAsIcon; // @synthesize showTitleAsWellAsIcon=_showTitleAsWellAsIcon;
@property(nonatomic) _Bool autoMoveLine; // @synthesize autoMoveLine=_autoMoveLine;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)setLineOffset:(float)arg1;
- (void)setItemsTextColor:(id)arg1 andHTextColor:(id)arg2;
- (void)setItemTitle:(id)arg1 atIndex:(int)arg2;
- (void)touchTabView:(id)arg1;
- (void)setTouchTabView:(CDUnknownBlockType)arg1;
- (void)setItemsIcon:(id)arg1;
- (void)setItemsIcon:(id)arg1 andHighlightedIcon:(id)arg2 andTitle:(id)arg3 andTextColor:(id)arg4 andHTextColor:(id)arg5 andTitleHeight:(double)arg6 andFontSize:(double)arg7 andLineColor:(id)arg8 showBoth:(_Bool)arg9;
- (void)setItemsIcon:(id)arg1 andHighlightedIcon:(id)arg2 andTitle:(id)arg3 andLineColor:(id)arg4;
- (void)setItemsIcon:(id)arg1 andHighlightedIcon:(id)arg2 andLineColor:(id)arg3;
- (void)setItemsIcon:(id)arg1 andHighlightedIcon:(id)arg2;
- (void)setItemsIcon:(id)arg1 andLineColor:(id)arg2;
- (void)setItemsText:(id)arg1;
- (void)setItemsText:(id)arg1 andTitle:(id)arg2 andTextColor:(id)arg3 andHTextColor:(id)arg4 andLine:(_Bool)arg5;
- (void)setItemsText:(id)arg1 andTextColor:(id)arg2 andHTextColor:(id)arg3 andLine:(_Bool)arg4;
- (void)resetViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

