//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class MomViewPickerAttribute, NSArray, NSMutableArray, NSString, UILabel, UIScrollView;

@interface MomViewPicker : UIView <UIScrollViewDelegate>
{
    int _selectedIndex;
    int _visibleCount;
    id <MomViewPickerDelegate> _delegate;
    UIScrollView *_scrollView;
    UIView *_topLine;
    UIView *_bottomLine;
    UILabel *_unitLabel;
    NSMutableArray *_itemViewArray;
    NSArray *_dataSource;
    MomViewPickerAttribute *_viewPickerAttribute;
}

@property(nonatomic) int visibleCount; // @synthesize visibleCount=_visibleCount;
@property(retain, nonatomic) MomViewPickerAttribute *viewPickerAttribute; // @synthesize viewPickerAttribute=_viewPickerAttribute;
@property(retain, nonatomic) NSArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSMutableArray *itemViewArray; // @synthesize itemViewArray=_itemViewArray;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) __weak id <MomViewPickerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateSelectedItem:(int)arg1 previous:(int)arg2;
- (void)setScrollView:(id)arg1 atIndex:(int)arg2 animated:(_Bool)arg3;
- (void)endScroll:(id)arg1;
- (int)getIndexForScrollViewPosition:(id)arg1;
- (void)buildViewPicker;
- (void)buildViewPickerWithDataSource:(id)arg1 withAttribute:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

