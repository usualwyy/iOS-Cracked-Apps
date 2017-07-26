//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

#import "TBSNSBasicServiceDelegate.h"
#import "TBSNSWeDetailChildWebViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class AppMonitorTable, NSArray, NSLock, NSMutableDictionary, NSString, NSURL, TBIconFontButton, TBSNSActionBarView, TBSNSWeDetailBaseItem, TBSNSWeDetailBaseService, TBSNSWeDetailChildWebViewController, TBSNSWeDetailCommentTableView, TBSNSWeDetailDataLoader, TBSNSWeDetailHeadView, UIView;

@interface TBSNSWeDetailBaseScrollView : UIScrollView <TBSNSWeDetailChildWebViewControllerDelegate, UIScrollViewDelegate, TBSNSBasicServiceDelegate>
{
    double firstPageStartTime;
    double firstPageEndTime;
    double webViewStartTime;
    double webViewEndTime;
    int isWebViewSuccess;
    _Bool _noComment;
    _Bool _commentIsShow;
    _Bool _checkComment;
    _Bool _isLoadData;
    _Bool _isFirstInit;
    _Bool _isDegrade;
    _Bool _isCache;
    _Bool _needPassParams;
    _Bool _shouldPushTableViewToTop;
    _Bool _hasGotoCommentArea;
    _Bool _shouldOpenCommentArea;
    _Bool _webViewContentSizeSmallerThanFrame;
    _Bool _isWebViewFinish;
    NSMutableDictionary *_queryParams;
    NSURL *_URL;
    TBSNSWeDetailHeadView *_baseHeadView;
    TBSNSActionBarView *_actionBar;
    TBSNSWeDetailCommentTableView *_tableView;
    TBSNSWeDetailBaseItem *_baseItem;
    TBSNSWeDetailBaseService *_baseService;
    TBSNSWeDetailChildWebViewController *_webViewController;
    TBSNSWeDetailDataLoader *_dataLoader;
    TBIconFontButton *_titleBtn;
    AppMonitorTable *_performanceMonitorTable;
    UIView *_webViewshadowUPLine;
    UIView *_webViewshadowDownLine;
    UIView *_lineDown;
    unsigned long long _feedId;
    unsigned long long _accountId;
    NSString *_shareUrl;
    NSString *_shareTitle;
    NSString *_shareCover;
    NSArray *_feedTypeAry;
    NSLock *_lock;
    UIView *_textView;
}

@property(nonatomic) _Bool isWebViewFinish; // @synthesize isWebViewFinish=_isWebViewFinish;
@property(nonatomic) _Bool webViewContentSizeSmallerThanFrame; // @synthesize webViewContentSizeSmallerThanFrame=_webViewContentSizeSmallerThanFrame;
@property(nonatomic) _Bool shouldOpenCommentArea; // @synthesize shouldOpenCommentArea=_shouldOpenCommentArea;
@property(nonatomic) _Bool hasGotoCommentArea; // @synthesize hasGotoCommentArea=_hasGotoCommentArea;
@property(nonatomic) _Bool shouldPushTableViewToTop; // @synthesize shouldPushTableViewToTop=_shouldPushTableViewToTop;
@property(nonatomic) _Bool needPassParams; // @synthesize needPassParams=_needPassParams;
@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) UIView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(nonatomic) _Bool isDegrade; // @synthesize isDegrade=_isDegrade;
@property(nonatomic) _Bool isFirstInit; // @synthesize isFirstInit=_isFirstInit;
@property(nonatomic) _Bool isLoadData; // @synthesize isLoadData=_isLoadData;
@property(nonatomic) _Bool checkComment; // @synthesize checkComment=_checkComment;
@property(nonatomic) _Bool commentIsShow; // @synthesize commentIsShow=_commentIsShow;
@property(nonatomic) _Bool noComment; // @synthesize noComment=_noComment;
@property(retain, nonatomic) NSArray *feedTypeAry; // @synthesize feedTypeAry=_feedTypeAry;
@property(copy, nonatomic) NSString *shareCover; // @synthesize shareCover=_shareCover;
@property(copy, nonatomic) NSString *shareTitle; // @synthesize shareTitle=_shareTitle;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(nonatomic) unsigned long long accountId; // @synthesize accountId=_accountId;
@property(nonatomic) unsigned long long feedId; // @synthesize feedId=_feedId;
@property(retain, nonatomic) UIView *lineDown; // @synthesize lineDown=_lineDown;
@property(retain, nonatomic) UIView *webViewshadowDownLine; // @synthesize webViewshadowDownLine=_webViewshadowDownLine;
@property(retain, nonatomic) UIView *webViewshadowUPLine; // @synthesize webViewshadowUPLine=_webViewshadowUPLine;
@property(retain, nonatomic) AppMonitorTable *performanceMonitorTable; // @synthesize performanceMonitorTable=_performanceMonitorTable;
@property(retain, nonatomic) TBIconFontButton *titleBtn; // @synthesize titleBtn=_titleBtn;
@property(retain, nonatomic) TBSNSWeDetailDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(retain, nonatomic) TBSNSWeDetailChildWebViewController *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) TBSNSWeDetailBaseService *baseService; // @synthesize baseService=_baseService;
@property(retain, nonatomic) TBSNSWeDetailBaseItem *baseItem; // @synthesize baseItem=_baseItem;
@property(retain, nonatomic) TBSNSWeDetailCommentTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) TBSNSActionBarView *actionBar; // @synthesize actionBar=_actionBar;
@property(retain, nonatomic) TBSNSWeDetailHeadView *baseHeadView; // @synthesize baseHeadView=_baseHeadView;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSMutableDictionary *queryParams; // @synthesize queryParams=_queryParams;
- (void).cxx_destruct;
- (void)updatePerformanceTable;
- (void)registerPerformanceTable;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)scrollViewDidScroll:(id)arg1;
- (void)childWebViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)childWebViewControllerDidFinishLoad:(id)arg1;
- (void)moveTableView;
- (void)commentClicked;
- (void)commentClickedWithAnimationTime:(double)arg1;
- (void)sendComment;
- (void)removeCommentWithAnimateDuring:(double)arg1;
- (void)removeCommentWithAnimate;
- (void)showCommentWithAnimateDuring:(double)arg1;
- (void)showCommentWithAnimate;
- (void)updateNextPageUTByItem:(id)arg1;
- (void)handleViewDidAppear;
- (id)safeStringOf:(id)arg1;
- (void)dealWithSpotlight:(id)arg1;
- (void)setBaseVar:(id)arg1;
- (void)dealloc;
- (void)loadCommentWithComplete:(CDUnknownBlockType)arg1;
- (void)loadWebViewRequest;
- (void)setWebViewFrame;
- (void)updateViewData;
- (void)updateActionBar:(id)arg1;
- (void)jumpToShop;
- (void)updateNavBar;
- (void)updateTmpComment:(id)arg1;
- (void)loadComment;
- (void)setUpView;
- (void)letWebViewGoBack;
- (_Bool)webViewCanGoback;
- (_Bool)isFeedTypeDegrade;
- (void)readDataFromOrange;
- (void)dealWith302;
- (void)loadBaseItemDataWithFeedId:(unsigned long long)arg1 sellerId:(unsigned long long)arg2 type:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 baseItem:(id)arg2 goToComment:(_Bool)arg3 openCommentArea:(_Bool)arg4;
- (id)initWithFrame:(struct CGRect)arg1 baseItem:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 feedId:(unsigned long long)arg2 sellerId:(unsigned long long)arg3 type:(id)arg4 goToComment:(_Bool)arg5 openCommentArea:(_Bool)arg6;
- (id)initWithFrame:(struct CGRect)arg1 feedId:(unsigned long long)arg2 sellerId:(unsigned long long)arg3 type:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

