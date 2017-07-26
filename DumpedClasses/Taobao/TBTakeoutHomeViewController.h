//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutHomeBaseViewController.h"

#import "TBTakeoutHomeHeaderViewModelDelegate.h"
#import "TBTakeoutHomeNavigationBarDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSString, TBTakeoutActivityViewModel, TBTakeoutHomeErrorHandler, TBTakeoutHomeGuideManager, TBTakeoutHomeHeaderView, TBTakeoutHomeNavigationBar, TBTakeoutLocationErrorHandler;

@interface TBTakeoutHomeViewController : TBTakeoutHomeBaseViewController <TBTakeoutHomeHeaderViewModelDelegate, TBTakeoutHomeNavigationBarDelegate, UIScrollViewDelegate>
{
    _Bool _dispatchOnProgress;
    _Bool _shouldStopPolling;
    _Bool _isViewDidAppeared;
    TBTakeoutHomeNavigationBar *_takeoutNavigationBar;
    TBTakeoutHomeHeaderView *_headerView;
    TBTakeoutHomeErrorHandler *_homeErrorhandler;
    TBTakeoutLocationErrorHandler *_locationErrorhandler;
    TBTakeoutHomeGuideManager *_guideManager;
    TBTakeoutActivityViewModel *_activityViewModel;
    long long _lastTimeDelayInterval;
    long long _activityMaxRetryTimes;
    NSString *_lastAddressId;
    NSString *_floatingUrl;
}

@property(copy, nonatomic) NSString *floatingUrl; // @synthesize floatingUrl=_floatingUrl;
@property(nonatomic) _Bool isViewDidAppeared; // @synthesize isViewDidAppeared=_isViewDidAppeared;
@property(copy, nonatomic) NSString *lastAddressId; // @synthesize lastAddressId=_lastAddressId;
@property(nonatomic) _Bool shouldStopPolling; // @synthesize shouldStopPolling=_shouldStopPolling;
@property(nonatomic) _Bool dispatchOnProgress; // @synthesize dispatchOnProgress=_dispatchOnProgress;
@property(nonatomic) long long activityMaxRetryTimes; // @synthesize activityMaxRetryTimes=_activityMaxRetryTimes;
@property(nonatomic) long long lastTimeDelayInterval; // @synthesize lastTimeDelayInterval=_lastTimeDelayInterval;
@property(retain, nonatomic) TBTakeoutActivityViewModel *activityViewModel; // @synthesize activityViewModel=_activityViewModel;
@property(retain, nonatomic) TBTakeoutHomeGuideManager *guideManager; // @synthesize guideManager=_guideManager;
@property(retain, nonatomic) TBTakeoutLocationErrorHandler *locationErrorhandler; // @synthesize locationErrorhandler=_locationErrorhandler;
@property(retain, nonatomic) TBTakeoutHomeErrorHandler *homeErrorhandler; // @synthesize homeErrorhandler=_homeErrorhandler;
@property(retain, nonatomic) TBTakeoutHomeHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) TBTakeoutHomeNavigationBar *takeoutNavigationBar; // @synthesize takeoutNavigationBar=_takeoutNavigationBar;
- (void).cxx_destruct;
- (void)renderWeexViewIfNeeded;
- (void)dismissErrorView;
- (void)navigationBarAddressFieldClicked:(id)arg1;
- (void)navigationBarSearchFieldClicked:(id)arg1;
- (void)viewModel:(id)arg1 didLoadError:(id)arg2;
- (void)viewModelDidLoadCache:(id)arg1;
- (void)shopListLoadBiz;
- (void)tabbarLoadBiz;
- (void)updateHeaderView;
- (void)updateThemeBiz;
- (void)updateNavBar;
- (void)activityViewLoadBiz;
- (void)headerViewLoadBiz;
- (void)checkHomeFloatingShow:(id)arg1;
- (void)viewModelDidLoad:(id)arg1;
- (void)showSuspendImageView;
- (void)hideSuspendImageView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)onBackgroundResume;
- (void)resetHomeBundleKey;
- (void)setHomeBundleKey;
- (void)readDataFromWVFilePath;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)createSuspendWindow;
- (void)viewWillAppear:(_Bool)arg1;
- (void)jumpUrl:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

