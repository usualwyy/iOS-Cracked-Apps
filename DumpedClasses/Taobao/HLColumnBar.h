//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIColor, UIImageView, UIScrollView;

@interface HLColumnBar : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    NSMutableArray *_itemViews;
    long long _numberOfItems;
    UIView *_bottomLine;
    UIImageView *_focusImageView;
    _Bool _showBottonLine;
    long long _currentIndex;
    long long _previousIndex;
    id <HLColumnBarDelegate> _delegate;
    UIColor *_itemBackgroundColor;
    UIColor *_itemTextColor;
    double _itemFontSize;
    UIColor *_itemSelectTextColor;
    double _itemSelectFontSize;
    double _itemWidth;
    double _itemHeight;
    double _itemSpace;
    double _leftSpace;
    double _rightSpace;
}

@property(nonatomic) _Bool showBottonLine; // @synthesize showBottonLine=_showBottonLine;
@property(nonatomic) double rightSpace; // @synthesize rightSpace=_rightSpace;
@property(nonatomic) double leftSpace; // @synthesize leftSpace=_leftSpace;
@property(nonatomic) double itemSpace; // @synthesize itemSpace=_itemSpace;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) double itemSelectFontSize; // @synthesize itemSelectFontSize=_itemSelectFontSize;
@property(retain, nonatomic) UIColor *itemSelectTextColor; // @synthesize itemSelectTextColor=_itemSelectTextColor;
@property(nonatomic) double itemFontSize; // @synthesize itemFontSize=_itemFontSize;
@property(retain, nonatomic) UIColor *itemTextColor; // @synthesize itemTextColor=_itemTextColor;
@property(retain, nonatomic) UIColor *itemBackgroundColor; // @synthesize itemBackgroundColor=_itemBackgroundColor;
@property(nonatomic) __weak id <HLColumnBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long previousIndex; // @synthesize previousIndex=_previousIndex;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (id)themeGradientLayerFrame:(struct CGRect)arg1;
- (void)focusColumnItem:(long long)arg1;
- (void)moveCurrentIndexToCenter:(_Bool)arg1;
- (void)onItemClick:(id)arg1;
- (void)scrollToItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToItem:(id)arg1 ainmated:(_Bool)arg2;
- (void)scrollToNextItemAnimated:(_Bool)arg1;
- (void)scrollToPrevItemAnimated:(_Bool)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

