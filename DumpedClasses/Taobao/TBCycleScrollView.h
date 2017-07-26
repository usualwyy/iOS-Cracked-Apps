//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableArray, NSString, NSTimer, TBColorPageControl, UIScrollView;

@interface TBCycleScrollView : UIView <UIScrollViewDelegate>
{
    NSTimer *_timer;
    UIScrollView *_scrollView;
    TBColorPageControl *_pageControl;
    long long _totalPages;
    long long _curPage;
    NSMutableArray *_curViews;
    id <TBCycleScrollViewDelegate> _delegate;
    id <TBCycleScrollViewDatasource> _datasource;
    _Bool _autoScrollEnabled;
    _Bool _stopScroll;
    _Bool _isPageControlCenter;
    _Bool _disablePageClick;
    int _pageControlStyle;
    unsigned long long _pagegap;
    long long _curViewCount;
}

@property(nonatomic) int pageControlStyle; // @synthesize pageControlStyle=_pageControlStyle;
@property(nonatomic) long long curViewCount; // @synthesize curViewCount=_curViewCount;
@property(nonatomic) unsigned long long pagegap; // @synthesize pagegap=_pagegap;
@property(nonatomic) _Bool disablePageClick; // @synthesize disablePageClick=_disablePageClick;
@property(nonatomic) _Bool isPageControlCenter; // @synthesize isPageControlCenter=_isPageControlCenter;
@property(nonatomic) _Bool stopScroll; // @synthesize stopScroll=_stopScroll;
@property(nonatomic) _Bool autoScrollEnabled; // @synthesize autoScrollEnabled=_autoScrollEnabled;
@property(nonatomic) __weak id <TBCycleScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TBCycleScrollViewDatasource> datasource; // @synthesize datasource=_datasource;
@property(nonatomic) long long curPage; // @synthesize curPage=_curPage;
@property(readonly, nonatomic) TBColorPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleTap:(id)arg1;
- (long long)curViewMiddleIndex;
- (long long)validPageValue:(long long)arg1;
- (void)getDisplayImagesWithCurpage:(int)arg1;
- (void)addGestureRecognizerForView:(id)arg1;
- (void)loadData;
- (void)reloadData;
- (void)autoScroll;
- (void)cancelTimer;
- (void)dealloc;
- (void)willMoveToWindow:(id)arg1;
@property(readonly, nonatomic) NSArray *curViews;
- (void)autoSizePageControl;
- (void)autoSizeScrollViewContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

