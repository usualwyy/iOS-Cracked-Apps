//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MUKSearchViewController.h"

#import "MUKSearchViewControllerDelegate.h"
#import "TBIMGroupServiceDelegate.h"
#import "TBIMRelationServiceDelegate.h"
#import "TBIMSessionServiceDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UISearchBarDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSArray<TBIMGroupAdapter>, NSArray<TBIMSelectDataModelProtrol>, NSMutableDictionary, NSString;

@interface TBIMForwardingChatSelectedViewController : MUKSearchViewController <UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, UISearchDisplayDelegate, TBIMGroupServiceDelegate, UIAlertViewDelegate, TBIMSessionServiceDelegate, TBIMRelationServiceDelegate, MUKSearchViewControllerDelegate>
{
    _Bool _needSearchRealTime;
    int _servicesType;
    NSString *_searchBarTip;
    id <UITableViewDataSource> _showTableViewDataSource;
    id <UITableViewDelegate> _showTableViewDelegate;
    id <UITableViewDataSource> _searchTableViewDataSource;
    id <UITableViewDelegate> _searchTableViewDelegate;
    id <MUKIndexBarDelegate> _indexBarDelegate;
    id <TBIMMessageAdapter> _message;
    NSArray *_recentSessions;
    NSArray<TBIMGroupAdapter> *_groupList;
    NSArray<TBIMSelectDataModelProtrol> *_friendsSearchData;
    NSArray<TBIMSelectDataModelProtrol> *_friendsSearchResult;
    NSArray<TBIMSelectDataModelProtrol> *_groupListSearchData;
    NSArray<TBIMSelectDataModelProtrol> *_groupListSearchResult;
    NSMutableDictionary *_aidGroupInfoMap;
    NSString *_sessionId;
}

@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) int servicesType; // @synthesize servicesType=_servicesType;
@property(retain, nonatomic) NSMutableDictionary *aidGroupInfoMap; // @synthesize aidGroupInfoMap=_aidGroupInfoMap;
@property(retain, nonatomic) NSArray<TBIMSelectDataModelProtrol> *groupListSearchResult; // @synthesize groupListSearchResult=_groupListSearchResult;
@property(retain, nonatomic) NSArray<TBIMSelectDataModelProtrol> *groupListSearchData; // @synthesize groupListSearchData=_groupListSearchData;
@property(retain, nonatomic) NSArray<TBIMSelectDataModelProtrol> *friendsSearchResult; // @synthesize friendsSearchResult=_friendsSearchResult;
@property(retain, nonatomic) NSArray<TBIMSelectDataModelProtrol> *friendsSearchData; // @synthesize friendsSearchData=_friendsSearchData;
@property(retain, nonatomic) NSArray<TBIMGroupAdapter> *groupList; // @synthesize groupList=_groupList;
@property(retain, nonatomic) NSArray *recentSessions; // @synthesize recentSessions=_recentSessions;
@property(retain, nonatomic) id <TBIMMessageAdapter> message; // @synthesize message=_message;
@property(nonatomic) __weak id <MUKIndexBarDelegate> indexBarDelegate; // @synthesize indexBarDelegate=_indexBarDelegate;
@property(nonatomic) __weak id <UITableViewDelegate> searchTableViewDelegate; // @synthesize searchTableViewDelegate=_searchTableViewDelegate;
@property(nonatomic) __weak id <UITableViewDataSource> searchTableViewDataSource; // @synthesize searchTableViewDataSource=_searchTableViewDataSource;
@property(nonatomic) __weak id <UITableViewDelegate> showTableViewDelegate; // @synthesize showTableViewDelegate=_showTableViewDelegate;
@property(nonatomic) __weak id <UITableViewDataSource> showTableViewDataSource; // @synthesize showTableViewDataSource=_showTableViewDataSource;
@property(copy, nonatomic) NSString *searchBarTip; // @synthesize searchBarTip=_searchBarTip;
@property(nonatomic) _Bool needSearchRealTime; // @synthesize needSearchRealTime=_needSearchRealTime;
- (void).cxx_destruct;
- (void)searchDataWithText:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)taoFriendDataUpdate:(id)arg1;
- (void)SessionChange:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)groupInfoChange:(id)arg1 fail:(unsigned long long)arg2 error:(id)arg3;
- (void)groupInfoChange:(id)arg1 success:(unsigned long long)arg2;
- (void)joinedGroupInfoRequestFinish:(_Bool)arg1 result:(id)arg2 error:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)filterContentForSearchText:(id)arg1;
- (void)sendMessageWithServicesType:(int)arg1 sessionId:(id)arg2;
- (void)handleCompleteActionWithGroupID:(id)arg1;
- (void)handleCompleteActionWithUserID:(id)arg1;
- (void)setUpView;
- (void)loadData;
- (void)fixTaoFriendData:(id)arg1;
- (void)dismiss:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithMessage:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

