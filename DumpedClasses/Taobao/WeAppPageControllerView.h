//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIScrollViewDelegate.h"
#import "WeAppPageControlProtocol.h"

@class NSArray, NSString, UIScrollView, WeAppPageControl;

@interface WeAppPageControllerView : UIView <UIScrollViewDelegate, WeAppPageControlProtocol>
{
    _Bool _pageControlUsed;
    _Bool _showPageControl;
    _Bool _autoScroll;
    _Bool _isLazyLoadOpen;
    _Bool _isScrollViewHorizontal;
    _Bool _isPageArray;
    id <TBPageControlViewDelegate> _delegate;
    UIScrollView *_scrollView;
    WeAppPageControl *_pageControl;
    unsigned long long _pageNumber;
    NSArray *_pageArray;
}

@property(retain, nonatomic) NSArray *pageArray; // @synthesize pageArray=_pageArray;
@property(nonatomic) unsigned long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(nonatomic) _Bool isPageArray; // @synthesize isPageArray=_isPageArray;
@property(nonatomic) _Bool isScrollViewHorizontal; // @synthesize isScrollViewHorizontal=_isScrollViewHorizontal;
@property(nonatomic) _Bool isLazyLoadOpen; // @synthesize isLazyLoadOpen=_isLazyLoadOpen;
@property(nonatomic) _Bool autoScroll; // @synthesize autoScroll=_autoScroll;
@property(nonatomic) _Bool showPageControl; // @synthesize showPageControl=_showPageControl;
@property(nonatomic) _Bool pageControlUsed; // @synthesize pageControlUsed=_pageControlUsed;
@property(retain, nonatomic) WeAppPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) __weak id <TBPageControlViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pageTurnNextPageWithAnimated:(_Bool)arg1;
- (void)pageTurn:(unsigned long long)arg1 withAnimated:(_Bool)arg2;
- (void)pageTurnWithSystemAnimated:(unsigned long long)arg1;
- (void)pageTurn:(unsigned long long)arg1;
- (unsigned long long)getPageControlPreDisplayedPage;
- (void)setPageControlPreDisplayedPage:(unsigned long long)arg1;
- (unsigned long long)getPageControlCurrentPage;
- (void)setPageControlCurrentPage:(unsigned long long)arg1;
- (unsigned long long)getPageControlNumberOfPages;
- (void)setPageControlNumberOfPages:(unsigned long long)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned long long)caculateCurrentPageWithContentOffset:(struct CGPoint)arg1;
- (unsigned long long)caculateNextPage;
- (unsigned long long)caculateCurrentPage;
- (void)loadScrollViewWithPage:(unsigned long long)arg1;
- (void)setPageScrollViewArray:(id)arg1 withPage:(unsigned long long)arg2;
- (unsigned long long)getNumberOfPages;
- (unsigned long long)getCuttentPage;
- (void)setCurrentPage:(unsigned long long)arg1;
- (void)resetPageControlView;
- (void)refreshAllPages;
- (void)refreshPage:(int)arg1;
- (void)reloadData;
- (void)setScollViewFrame:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setupView;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

