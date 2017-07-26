//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutLocationBaseViewController.h"

#import "TBTakeoutNewViewModelDelegate.h"
#import "TBTakeoutSearchNavigationBarDelegate.h"
#import "TBTakeoutThrowLineToolDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSString, TBModelStatusHandler, TBTakeoutNewCartView, TBTakeoutNewSkuView, TBTakeoutSearchNavigationBar, TBTakeoutStoreDetailViewModel, TBTakeoutStoreSearchItemsViewModel, TBTakeoutStoreSearchNoResultView, TBTakeoutThrowLineTool, UIImageView, UITableView;

@interface TBTakeoutNewStoreSearchItemsViewController : TBTakeoutLocationBaseViewController <TBTakeoutSearchNavigationBarDelegate, UITableViewDelegate, UITableViewDataSource, TBTakeoutNewViewModelDelegate, TBTakeoutThrowLineToolDelegate>
{
    _Bool _isViewAppeared;
    TBTakeoutSearchNavigationBar *_searchNavigationBar;
    UITableView *_searchTableView;
    TBTakeoutNewCartView *_cartView;
    UIImageView *_redView;
    TBTakeoutNewSkuView *_skuView;
    NSArray *_cellsHeight;
    long long _currentPage;
    TBTakeoutStoreSearchNoResultView *_emptyView;
    NSArray *_searchResultArray;
    TBTakeoutStoreSearchItemsViewModel *_viewModel;
    TBTakeoutStoreDetailViewModel *_storeDetailViewModel;
    TBModelStatusHandler *_errorUIModelStatusHdlr;
    TBTakeoutThrowLineTool *_throwLineTool;
    NSString *_storeId;
    NSString *_keyword;
    NSString *_amount;
}

@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(nonatomic) _Bool isViewAppeared; // @synthesize isViewAppeared=_isViewAppeared;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(copy, nonatomic) NSString *storeId; // @synthesize storeId=_storeId;
@property(retain, nonatomic) TBTakeoutThrowLineTool *throwLineTool; // @synthesize throwLineTool=_throwLineTool;
@property(retain, nonatomic) TBModelStatusHandler *errorUIModelStatusHdlr; // @synthesize errorUIModelStatusHdlr=_errorUIModelStatusHdlr;
@property(retain, nonatomic) TBTakeoutStoreDetailViewModel *storeDetailViewModel; // @synthesize storeDetailViewModel=_storeDetailViewModel;
@property(retain, nonatomic) TBTakeoutStoreSearchItemsViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) NSArray *searchResultArray; // @synthesize searchResultArray=_searchResultArray;
@property(retain, nonatomic) TBTakeoutStoreSearchNoResultView *emptyView; // @synthesize emptyView=_emptyView;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(copy, nonatomic) NSArray *cellsHeight; // @synthesize cellsHeight=_cellsHeight;
@property(retain, nonatomic) TBTakeoutNewSkuView *skuView; // @synthesize skuView=_skuView;
@property(retain, nonatomic) UIImageView *redView; // @synthesize redView=_redView;
@property(retain, nonatomic) TBTakeoutNewCartView *cartView; // @synthesize cartView=_cartView;
@property(retain, nonatomic) UITableView *searchTableView; // @synthesize searchTableView=_searchTableView;
@property(retain, nonatomic) TBTakeoutSearchNavigationBar *searchNavigationBar; // @synthesize searchNavigationBar=_searchNavigationBar;
- (void).cxx_destruct;
- (id)storeDetailModel;
- (void)searchButtonClicked:(id)arg1;
- (void)searchKeywordAction:(id)arg1;
- (void)backItemClicked;
- (void)finsihEditing;
- (void)finsihChangingSearchFeild;
- (void)updateItemWithCartItemViewModel:(id)arg1;
- (void)handlerItemCellEvent:(id)arg1 eventObj:(id)arg2;
- (id)calculateItemTagListFrame:(id)arg1;
- (double)calculateItemTagsHeight:(id)arg1;
- (double)calculateItemTagCellHeight:(id)arg1;
- (void)calculateSearchTableCellsHeights:(id)arg1;
- (void)loadData;
- (void)viewModel:(id)arg1 didLoadError:(id)arg2;
- (void)viewModelDidLoad:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)animationDidFinish;
- (float)tbOriginY;
- (_Bool)tbNavibarHidden;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)onUpdateLocationFailed;
- (void)onUpdateLocation:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

