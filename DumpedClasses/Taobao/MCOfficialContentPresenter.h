//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCBasePresenter.h"

#import "MCChatPageDisplayViewDelegate.h"
#import "MCOfficialContentModelDelegate.h"
#import "MCOfficialContentPresenterInterface.h"
#import "MCOfficialContentPresenterProtocol.h"

@class MCChatPageConfig, NSDictionary, NSMutableArray, NSMutableArray<MCOfficialProcessorProtocol>, NSString, UIView<MCChatPageDisplayViewProtocol>, UIView<MCOfficialHeaderViewProtocol>;

@interface MCOfficialContentPresenter : MCBasePresenter <MCOfficialContentModelDelegate, MCChatPageDisplayViewDelegate, MCOfficialContentPresenterInterface, MCOfficialContentPresenterProtocol>
{
    _Bool _isHistoryMessage;
    _Bool _isViewDidLoad;
    _Bool _bMore;
    _Bool _isLoading;
    NSString *_officialID;
    id <MCOfficialContentPresenterHeaderViewDelegate> _headerViewDelegate;
    unsigned long long _sortRules;
    UIView<MCChatPageDisplayViewProtocol> *_officialContentView;
    NSMutableArray *_msgVOList;
    id <MCOfficialContentModelProtocol> _officialContentModel;
    UIView<MCOfficialHeaderViewProtocol> *_headerView;
    id <MCOfficialContentEmptyViewProtocol> _emptyViewDelegate;
    id <MCInputPresenterProtocol> _inputPresenter;
    MCChatPageConfig *_config;
    NSMutableArray<MCOfficialProcessorProtocol> *_processorList;
}

@property _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool bMore; // @synthesize bMore=_bMore;
@property(retain, nonatomic) NSMutableArray<MCOfficialProcessorProtocol> *processorList; // @synthesize processorList=_processorList;
@property(retain, nonatomic) MCChatPageConfig *config; // @synthesize config=_config;
@property(nonatomic) _Bool isViewDidLoad; // @synthesize isViewDidLoad=_isViewDidLoad;
@property(nonatomic) __weak id <MCInputPresenterProtocol> inputPresenter; // @synthesize inputPresenter=_inputPresenter;
@property(nonatomic) __weak id <MCOfficialContentEmptyViewProtocol> emptyViewDelegate; // @synthesize emptyViewDelegate=_emptyViewDelegate;
@property(retain, nonatomic) UIView<MCOfficialHeaderViewProtocol> *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) id <MCOfficialContentModelProtocol> officialContentModel; // @synthesize officialContentModel=_officialContentModel;
@property(nonatomic) _Bool isHistoryMessage; // @synthesize isHistoryMessage=_isHistoryMessage;
@property(retain, nonatomic) NSMutableArray *msgVOList; // @synthesize msgVOList=_msgVOList;
@property(retain, nonatomic) UIView<MCChatPageDisplayViewProtocol> *officialContentView; // @synthesize officialContentView=_officialContentView;
@property(nonatomic) unsigned long long sortRules; // @synthesize sortRules=_sortRules;
@property(nonatomic) __weak id <MCOfficialContentPresenterHeaderViewDelegate> headerViewDelegate; // @synthesize headerViewDelegate=_headerViewDelegate;
@property(retain, nonatomic) NSString *officialID; // @synthesize officialID=_officialID;
- (void).cxx_destruct;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (id)tableFooterViewForTableView:(id)arg1;
- (id)tableHeaderViewForTableView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableViewDidTapped:(id)arg1;
- (void)tableViewDidScrollBottom:(id)arg1;
- (void)tableViewDidScrollTop:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)messageDel:(id)arg1 msgs:(id)arg2;
- (void)deleteMessageFail:(id)arg1 msgs:(id)arg2 error:(id)arg3;
- (void)officalAccountMessages:(id)arg1 hasMore:(_Bool)arg2 error:(id)arg3 officalAccount:(id)arg4 fromMessageId:(id)arg5 isHistoryMessage:(_Bool)arg6;
- (void)officialAccountInfoUpdate:(id)arg1;
- (_Bool)checkServiceAccountInfoIntegrityNeedUpdate:(_Bool)arg1 officialInfo:(id)arg2;
- (void)loadMoreMessageByLastMessage:(id)arg1 count:(unsigned long long)arg2;
- (id)doTransformProcessorData:(id)arg1;
- (void)setupHeaderViewWithOfficialInfo:(id)arg1;
- (void)reloadMessageFromFistMessage;
- (void)reSetupProcessor;
- (id)getView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFrame:(struct CGRect)arg1 model:(id)arg2 view:(id)arg3 baseVC:(id)arg4 bizKey:(id)arg5 officialID:(id)arg6 config:(id)arg7 inputPresenter:(id)arg8;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;

@end

