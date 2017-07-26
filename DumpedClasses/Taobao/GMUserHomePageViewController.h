//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GDMActionSheetViewDelegate.h"
#import "GMPostMenuViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "YAScrollSegmentControlDelegate.h"

@class GDMDarenMenuView, GDMHomeNavigationBar, GDRecommendFollowsView, GMPostMenuView, GMUserHomePageHeadView, GMUserHomePageInfoModel, GMUserHomePageViewModel, NSArray, NSIndexPath, NSString, UIButton, UITableView, UIView, YAScrollSegmentControl;

@interface GMUserHomePageViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, YAScrollSegmentControlDelegate, GMPostMenuViewDelegate, UIActionSheetDelegate, GDMActionSheetViewDelegate>
{
    NSString *_userId;
    NSString *_listType;
    unsigned long long _listTypeNum;
    long long _currentPage;
    long long _n;
    int __sectionCnt;
    NSIndexPath *__feedId2DeletePath;
    _Bool _isMe;
    _Bool _fromDarenHome;
    unsigned char _isShowRecommendFollowsView;
    UITableView *_tableView;
    GMUserHomePageHeadView *_userHomePageHeadView;
    YAScrollSegmentControl *_scrollTitlesView;
    GMUserHomePageViewModel *_listViewModel;
    UIView *_tabMenu;
    NSArray *_shopItemList;
    GMPostMenuView *_post;
    UIButton *_enterDarenButton;
    GMUserHomePageInfoModel *_homeInfoPageViewModel;
    GDMDarenMenuView *_menuView;
    GDMHomeNavigationBar *_homepageNavBar;
    GDRecommendFollowsView *_recommendFollowsView;
}

@property(nonatomic) unsigned char isShowRecommendFollowsView; // @synthesize isShowRecommendFollowsView=_isShowRecommendFollowsView;
@property(retain, nonatomic) GDRecommendFollowsView *recommendFollowsView; // @synthesize recommendFollowsView=_recommendFollowsView;
@property(retain, nonatomic) GDMHomeNavigationBar *homepageNavBar; // @synthesize homepageNavBar=_homepageNavBar;
@property(retain, nonatomic) GDMDarenMenuView *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) GMUserHomePageInfoModel *homeInfoPageViewModel; // @synthesize homeInfoPageViewModel=_homeInfoPageViewModel;
@property(retain, nonatomic) UIButton *enterDarenButton; // @synthesize enterDarenButton=_enterDarenButton;
@property(retain, nonatomic) GMPostMenuView *post; // @synthesize post=_post;
@property(retain, nonatomic) NSArray *shopItemList; // @synthesize shopItemList=_shopItemList;
@property(retain, nonatomic) UIView *tabMenu; // @synthesize tabMenu=_tabMenu;
@property(retain, nonatomic) GMUserHomePageViewModel *listViewModel; // @synthesize listViewModel=_listViewModel;
@property(retain, nonatomic) YAScrollSegmentControl *scrollTitlesView; // @synthesize scrollTitlesView=_scrollTitlesView;
@property(retain, nonatomic) GMUserHomePageHeadView *userHomePageHeadView; // @synthesize userHomePageHeadView=_userHomePageHeadView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property _Bool fromDarenHome; // @synthesize fromDarenHome=_fromDarenHome;
@property _Bool isMe; // @synthesize isMe=_isMe;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)GDMActionSheetViewUnfollow:(id)arg1;
- (void)GDMActionSheetViewCancel:(id)arg1;
- (void)GMPostMenuView:(id)arg1 tappedBubbleWithIndex:(int)arg2 key:(id)arg3;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)trackingEnterDetailPage:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onSwitchType;
- (void)handleRightSwipes:(id)arg1;
- (void)handleLeftSwipes:(id)arg1;
- (void)bindSwipe:(id)arg1;
- (void)onLoadMoreData;
- (void)onRefreshNewData;
- (id)getNoMoreResultText;
- (void)loadUserHeadInfo;
- (void)feedHeadMoreAction:(id)arg1;
- (void)followAction:(id)arg1;
- (void)showRecommendFollows:(id)arg1;
- (void)contactAction:(id)arg1;
- (void)myFansButtonAction:(id)arg1;
- (void)discoverAction:(id)arg1;
- (void)commentButtonAction:(id)arg1;
- (void)userthumbnailImageViewTap;
- (void)go2ItemTap:(id)arg1;
- (void)go2ItemButtonAction:(id)arg1;
- (void)go2shopTap;
- (void)handleFollowBtnRefreshNotif:(id)arg1;
- (void)enterDarenButtonAction:(id)arg1;
- (void)setListType;
- (void)menuButtonClick:(id)arg1;
- (void)triggerPullToRefreshNewData;
- (void)refreshNewData;
- (void)loadMenuItems;
- (void)createMenuViewWithMenuItems:(id)arg1;
- (void)configRefreshAndLoadView;
- (void)configUserHomePageHeadView:(id)arg1;
- (id)indexPathForView:(id)arg1;
- (void)initPostToEnter;
- (void)initPost:(_Bool)arg1;
- (id)shopMenuView;
- (void)appendNaviBarMoreItem;
- (void)back;
- (void)synchronizeMoreState;
- (void)hideNavibar;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (id)userTrackPageName;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

