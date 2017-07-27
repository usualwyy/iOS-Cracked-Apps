//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ESPShoppingViewController.h"

#import "ESPSearchWordsLayoutDelegate.h"
#import "IGListAdapterDataSource.h"
#import "UIScrollViewDelegate.h"

@class ESPListCollectionView, IGListAdapter, NSArray, NSString;

@interface ESPSearchWordsViewController : ESPShoppingViewController <IGListAdapterDataSource, ESPSearchWordsLayoutDelegate, UIScrollViewDelegate>
{
    _Bool _inDeleteMode;
    CDUnknownBlockType _didSelectWordHandler;
    CDUnknownBlockType _didGetHotSearches;
    ESPListCollectionView *_searchWordsView;
    IGListAdapter *_adapter;
    NSArray *_datas;
    NSArray *_hotSearches;
    NSArray *_historySearches;
    NSString *_currentWordToDelete;
}

@property(copy, nonatomic) NSString *currentWordToDelete; // @synthesize currentWordToDelete=_currentWordToDelete;
@property(nonatomic) _Bool inDeleteMode; // @synthesize inDeleteMode=_inDeleteMode;
@property(copy, nonatomic) NSArray *historySearches; // @synthesize historySearches=_historySearches;
@property(copy, nonatomic) NSArray *hotSearches; // @synthesize hotSearches=_hotSearches;
@property(copy, nonatomic) NSArray *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) IGListAdapter *adapter; // @synthesize adapter=_adapter;
@property(retain, nonatomic) ESPListCollectionView *searchWordsView; // @synthesize searchWordsView=_searchWordsView;
@property(copy, nonatomic) CDUnknownBlockType didGetHotSearches; // @synthesize didGetHotSearches=_didGetHotSearches;
@property(copy, nonatomic) CDUnknownBlockType didSelectWordHandler; // @synthesize didSelectWordHandler=_didSelectWordHandler;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)exitDeletingMode;
- (_Bool)shouldShowDeleteButtonAtIndexPath:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)notifyDidGetHotSearches:(id)arg1;
- (void)saveSearchKeyword:(id)arg1;
- (void)deleteHistory:(id)arg1;
- (void)clearAllSearchKeyword;
- (void)didSelectedClearAllSearchResult;
- (void)constructDataAndReload;
- (void)loadSearchHistory;
- (void)loadPopularSearchIfNeeded;
- (void)viewDidLayoutSubviews;
- (void)loadWordsView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
