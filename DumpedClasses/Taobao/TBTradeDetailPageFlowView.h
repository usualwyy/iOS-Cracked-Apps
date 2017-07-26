//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSString, UIScrollView;

@interface TBTradeDetailPageFlowView : UIView <UIScrollViewDelegate>
{
    id <PagedFlowViewDataSource> _dataSource;
    id <PagedFlowViewDelegate> _delegate;
    double _minimumPageAlpha;
    double _minimumPageScale;
    long long _startPageIndex;
    long long _currentPageIndex;
    UIScrollView *_scrollView;
    long long _pageCount;
    NSMutableArray *_cells;
    NSMutableArray *_reusableCells;
    struct CGSize _pageSize;
    struct _NSRange _visibleRange;
}

@property(nonatomic) struct _NSRange visibleRange; // @synthesize visibleRange=_visibleRange;
@property(retain, nonatomic) NSMutableArray *reusableCells; // @synthesize reusableCells=_reusableCells;
@property(retain, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
@property(nonatomic) long long pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) struct CGSize pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(nonatomic) long long startPageIndex; // @synthesize startPageIndex=_startPageIndex;
@property(nonatomic) double minimumPageScale; // @synthesize minimumPageScale=_minimumPageScale;
@property(nonatomic) double minimumPageAlpha; // @synthesize minimumPageAlpha=_minimumPageAlpha;
@property(nonatomic) __weak id <PagedFlowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PagedFlowViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)scrollToPage:(unsigned long long)arg1;
- (id)dequeueReusableCell;
- (void)reloadData;
- (void)setPagesAtContentOffset:(struct CGPoint)arg1;
- (void)setPageAtIndex:(long long)arg1;
- (void)refreshVisibleCellAppearance;
- (void)removeCellAtIndex:(long long)arg1;
- (void)queueReusableCell:(id)arg1;
- (void)initialize;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

