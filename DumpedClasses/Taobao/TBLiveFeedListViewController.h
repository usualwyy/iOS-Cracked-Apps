//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBLiveBaseViewController.h"

#import "TBLiveSegmentedControlDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableDictionary, NSString, TBLiveCircularProgressBarView, TBLiveConventionUtility, TBLiveHPSegmentedControl, TBLiveHomePageBaseListView, TBLiveMenuModel, TBLiveMenuModelV2, UIButton, UIScrollView, UIView;

@interface TBLiveFeedListViewController : TBLiveBaseViewController <TBLiveSegmentedControlDelegate, UIScrollViewDelegate>
{
    long long _resignActiveTime;
    _Bool _useOldVersionHomePage;
    _Bool _isListViewShow;
    _Bool _switchingChannle;
    _Bool _publishRight;
    TBLiveHPSegmentedControl *_headerControl;
    UIScrollView *_containerScrollView;
    TBLiveHomePageBaseListView *_currentFeedListView;
    UIButton *_publishButton;
    TBLiveCircularProgressBarView *_trafficBarView;
    UIView *_trafficBarBackView;
    TBLiveConventionUtility *_conventionUtility;
    TBLiveMenuModel *_menuModel;
    TBLiveMenuModelV2 *_menuModelV2;
    NSMutableDictionary *_feedListsInfo;
    long long _urlParamIndex;
    NSString *_fromTBHomePageContentId;
    NSString *_chnlIdList;
    NSString *_selectedChnlId;
    double _trafficViewPointX;
}

+ (_Bool)feedListShowPV;
+ (long long)displayChannelId;
@property(nonatomic) _Bool publishRight; // @synthesize publishRight=_publishRight;
@property(nonatomic) _Bool switchingChannle; // @synthesize switchingChannle=_switchingChannle;
@property(nonatomic) double trafficViewPointX; // @synthesize trafficViewPointX=_trafficViewPointX;
@property(nonatomic) _Bool isListViewShow; // @synthesize isListViewShow=_isListViewShow;
@property(nonatomic) _Bool useOldVersionHomePage; // @synthesize useOldVersionHomePage=_useOldVersionHomePage;
@property(retain, nonatomic) NSString *selectedChnlId; // @synthesize selectedChnlId=_selectedChnlId;
@property(retain, nonatomic) NSString *chnlIdList; // @synthesize chnlIdList=_chnlIdList;
@property(retain, nonatomic) NSString *fromTBHomePageContentId; // @synthesize fromTBHomePageContentId=_fromTBHomePageContentId;
@property(nonatomic) long long urlParamIndex; // @synthesize urlParamIndex=_urlParamIndex;
@property(retain, nonatomic) NSMutableDictionary *feedListsInfo; // @synthesize feedListsInfo=_feedListsInfo;
@property(retain, nonatomic) TBLiveMenuModelV2 *menuModelV2; // @synthesize menuModelV2=_menuModelV2;
@property(retain, nonatomic) TBLiveMenuModel *menuModel; // @synthesize menuModel=_menuModel;
@property(retain, nonatomic) TBLiveConventionUtility *conventionUtility; // @synthesize conventionUtility=_conventionUtility;
@property(retain, nonatomic) UIView *trafficBarBackView; // @synthesize trafficBarBackView=_trafficBarBackView;
@property(retain, nonatomic) TBLiveCircularProgressBarView *trafficBarView; // @synthesize trafficBarView=_trafficBarView;
@property(retain, nonatomic) UIButton *publishButton; // @synthesize publishButton=_publishButton;
@property(retain, nonatomic) TBLiveHomePageBaseListView *currentFeedListView; // @synthesize currentFeedListView=_currentFeedListView;
@property(retain, nonatomic) UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(retain, nonatomic) TBLiveHPSegmentedControl *headerControl; // @synthesize headerControl=_headerControl;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)gotoSearchPage;
- (id)barButtonItemWithIconFont:(id)arg1 fontSize:(double)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)setupNavigationRightItems;
- (void)setupMoreCustomItems;
- (id)dataForUserTrack;
- (void)showFeedListV2AtIndex:(long long)arg1 needUpdateOffset:(_Bool)arg2;
- (void)showFeedListV1AtIndex:(long long)arg1 needUpdateOffset:(_Bool)arg2;
- (void)showFeedListAtIndex:(long long)arg1 needUpdateOffset:(_Bool)arg2;
- (void)joinApplyButtonClicked;
- (void)myPageButtonClicked;
- (void)chargeButtonClicked:(id)arg1;
- (void)onReloadErrorCallBack;
- (void)requestMenuContentV2;
- (void)requestMenuContentV1;
- (void)requestMenuContent;
- (void)gotoPublishPage;
- (void)showPulishButton;
- (void)removeTrafficView;
- (void)showNetworkTrafficView:(id)arg1;
- (void)onActionCloseLive:(id)arg1;
- (void)requestNetworkTraffic:(id)arg1;
- (void)checkABTest;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)parseURLParamQuery:(id)arg1;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

