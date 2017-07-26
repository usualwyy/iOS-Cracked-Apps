//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MUKSearchCommonViewContoller.h"

#import "MUKSearchCommonViewContollerDelegate.h"
#import "TBIMGroupServiceDelegate.h"
#import "TBIMInputTextPlugin.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIView<MCChatPageInputViewProtocol>, UIViewController;

@interface TBIMGroupAiTaViewController : MUKSearchCommonViewContoller <TBIMGroupServiceDelegate, MUKSearchCommonViewContollerDelegate, TBIMInputTextPlugin>
{
    _Bool _isShowView;
    _Bool _hasAtAll;
    _Bool _needReloadShowTableViewData;
    UIView<MCChatPageInputViewProtocol> *_inputView;
    UIViewController *_responseVC;
    NSMutableDictionary *_callUserNameToCount;
    NSMutableDictionary *_callUserIdToUserName;
    id <TBIMGroupAdapter> _group;
    NSMutableArray *_groupUsers;
    NSMutableArray *_searchResultList;
    struct _NSRange _insetAitaLocation;
}

@property(nonatomic) _Bool needReloadShowTableViewData; // @synthesize needReloadShowTableViewData=_needReloadShowTableViewData;
@property(nonatomic) _Bool hasAtAll; // @synthesize hasAtAll=_hasAtAll;
@property(nonatomic) _Bool isShowView; // @synthesize isShowView=_isShowView;
@property(retain, nonatomic) NSMutableArray *searchResultList; // @synthesize searchResultList=_searchResultList;
@property(retain, nonatomic) NSMutableArray *groupUsers; // @synthesize groupUsers=_groupUsers;
@property(retain, nonatomic) id <TBIMGroupAdapter> group; // @synthesize group=_group;
@property(nonatomic) struct _NSRange insetAitaLocation; // @synthesize insetAitaLocation=_insetAitaLocation;
@property(retain, nonatomic) NSMutableDictionary *callUserIdToUserName; // @synthesize callUserIdToUserName=_callUserIdToUserName;
@property(retain, nonatomic) NSMutableDictionary *callUserNameToCount; // @synthesize callUserNameToCount=_callUserNameToCount;
@property(nonatomic) __weak UIViewController *responseVC; // @synthesize responseVC=_responseVC;
@property(nonatomic) __weak UIView<MCChatPageInputViewProtocol> *inputView; // @synthesize inputView=_inputView;
- (void).cxx_destruct;
- (void)cellDidSelecte:(id)arg1 withCellModel:(id)arg2;
- (void)cellReused:(id)arg1 withCellModel:(id)arg2;
- (id)cellWithCellModel:(id)arg1 tableView:(id)arg2 isShowTableView:(_Bool)arg3;
- (id)sectionHeaderViewForSection:(long long)arg1 isShowTableView:(_Bool)arg2;
- (double)sectionHeaderViewHeightForSection:(long long)arg1 isShowTableView:(_Bool)arg2;
- (void)selectDataVCCancel:(id)arg1;
- (id)navgationBarCenterTitle;
- (id)searchDataWithKey:(id)arg1;
- (id)showData;
- (id)getGroupUsersData;
- (void)removeAiTaUserWithName:(id)arg1;
- (id)checkAndRemoveAiTaAtIndex:(long long)arg1 fromText:(id)arg2;
- (void)cleanData;
- (_Bool)inputView:(id)arg1 changeText:(id)arg2 inRange:(struct _NSRange)arg3;
- (_Bool)inputView:(id)arg1 deleteAtLocation:(struct _NSRange)arg2;
- (void)groupUserDeleteSuccess:(id)arg1;
- (void)groupUserUpdatedSuccess:(id)arg1;
- (_Bool)canHandleAiTaForCheckGroupAdapter:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithGroupId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

