//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGViewController.h"

#import "RefreshControlDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class KGRefreshController, NSMutableArray, NSString, UITableView, UIView;

@interface TopicViewController : KGViewController <UITableViewDataSource, UITableViewDelegate, RefreshControlDelegate>
{
    _Bool _isLoadingTopics;
    _Bool _hasMoreTopics;
    UITableView *_topicTableView;
    UIView *_noResultView;
    UIView *_loadingView;
    long long _pageSize;
    unsigned long long _pageIndex;
    long long _totalTopics;
    NSMutableArray *_topicList;
    KGRefreshController *_refreshControl;
}

@property(retain, nonatomic) KGRefreshController *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) _Bool hasMoreTopics; // @synthesize hasMoreTopics=_hasMoreTopics;
@property(nonatomic) _Bool isLoadingTopics; // @synthesize isLoadingTopics=_isLoadingTopics;
@property(retain, nonatomic) NSMutableArray *topicList; // @synthesize topicList=_topicList;
@property(nonatomic) long long totalTopics; // @synthesize totalTopics=_totalTopics;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) long long pageSize; // @synthesize pageSize=_pageSize;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIView *noResultView; // @synthesize noResultView=_noResultView;
@property(retain, nonatomic) UITableView *topicTableView; // @synthesize topicTableView=_topicTableView;
- (void).cxx_destruct;
- (void)hideEmptyResultView;
- (void)showEmptyResultView;
- (void)updateLoadingTipWithState:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hideLoadingState;
- (void)showLoadingState;
- (void)reConnectEvent;
- (void)updateRefreshControl;
- (_Bool)networkIsReady;
- (void)getTopicsAtPageIndex:(unsigned long long)arg1;
- (_Bool)hasMoreItems;
- (void)refreshControl:(id)arg1 didEngageRefreshDirection:(int)arg2;
- (void)viewInit;
- (void)viewDidLoad;
- (id)initWithTitle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
