//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TBSDKServerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSDate, NSDictionary, NSLock, NSMutableArray, NSMutableDictionary, NSString, TMWeAppMockManager, WeAppActionManager, WeAppComponent, WeAppEngine, WeAppImageLoad, WeAppPageItem;

@interface TMWeAppController : UIViewController <UIScrollViewDelegate, TBSDKServerDelegate>
{
    struct CGRect _weAppViewframe;
    WeAppImageLoad *_imageLoadAdapter;
    NSDictionary *_pageData;
    WeAppEngine *_engine;
    NSString *_apiName;
    NSMutableDictionary *_params;
    NSString *_version;
    NSDictionary *_queryParams;
    NSString *_pageKey;
    WeAppComponent *_rootComponent;
    TMWeAppMockManager *_mockData;
    WeAppPageItem *_pageItem;
    NSArray *_moreMenuActions;
    WeAppActionManager *_caActionMgr;
    NSMutableArray *_imageViews;
    NSLock *_menusArrayLock;
    NSDate *_loadStartDate;
    NSDate *_requestStartDate;
    NSDate *_renderStartDate;
    double _loadEndDate;
    double _renderEndDate;
    double _parseEndDate;
    double _requestEndDate;
    long long _shopId;
}

+ (void)registComponent:(id)arg1 forClass:(Class)arg2;
+ (void)initialize;
@property(nonatomic) long long shopId; // @synthesize shopId=_shopId;
@property(nonatomic) double requestEndDate; // @synthesize requestEndDate=_requestEndDate;
@property(nonatomic) double parseEndDate; // @synthesize parseEndDate=_parseEndDate;
@property(nonatomic) double renderEndDate; // @synthesize renderEndDate=_renderEndDate;
@property(nonatomic) double loadEndDate; // @synthesize loadEndDate=_loadEndDate;
@property(retain, nonatomic) NSDate *renderStartDate; // @synthesize renderStartDate=_renderStartDate;
@property(retain, nonatomic) NSDate *requestStartDate; // @synthesize requestStartDate=_requestStartDate;
@property(retain, nonatomic) NSDate *loadStartDate; // @synthesize loadStartDate=_loadStartDate;
@property(retain, nonatomic) NSLock *menusArrayLock; // @synthesize menusArrayLock=_menusArrayLock;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) WeAppActionManager *caActionMgr; // @synthesize caActionMgr=_caActionMgr;
@property(retain, nonatomic) NSArray *moreMenuActions; // @synthesize moreMenuActions=_moreMenuActions;
@property(nonatomic) __weak WeAppPageItem *pageItem; // @synthesize pageItem=_pageItem;
@property(retain, nonatomic) TMWeAppMockManager *mockData; // @synthesize mockData=_mockData;
@property(nonatomic) __weak WeAppComponent *rootComponent; // @synthesize rootComponent=_rootComponent;
@property(retain, nonatomic) NSString *pageKey; // @synthesize pageKey=_pageKey;
@property(retain, nonatomic) NSDictionary *queryParams; // @synthesize queryParams=_queryParams;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSMutableDictionary *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *apiName; // @synthesize apiName=_apiName;
@property(retain, nonatomic) WeAppEngine *engine; // @synthesize engine=_engine;
@property(retain, nonatomic) NSDictionary *pageData; // @synthesize pageData=_pageData;
- (void).cxx_destruct;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (void)parseDidFinish:(id)arg1;
- (void)requestDidFinish;
- (void)hideErrorView;
- (void)showErrorView;
- (void)parsePageItem;
- (id)weappNetwork;
- (id)createEngineByPage:(id)arg1 byFrame:(struct CGRect)arg2;
- (id)getDataPool;
- (void)refreshDataWithDictionaryValue:(id)arg1;
- (void)updateFrame:(struct CGRect)arg1;
- (void)getWeAppViewWithDictionary:(id)arg1 withFrame:(struct CGRect)arg2 complete:(CDUnknownBlockType)arg3;
- (void)getWeAppViewWithPageKey:(id)arg1 userId:(id)arg2 withData:(id)arg3 withFrame:(struct CGRect)arg4 complete:(CDUnknownBlockType)arg5;
- (void)getWeAppViewWithPageKey:(id)arg1 pageDict:(id)arg2 withData:(id)arg3 withFrame:(struct CGRect)arg4 complete:(CDUnknownBlockType)arg5;
- (id)getViewWithConfig:(id)arg1 data:(id)arg2 frame:(struct CGRect)arg3 atPage:(id)arg4;
- (void)getWeAppView:(id)arg1 userId:(id)arg2 inView:(id)arg3 withFrame:(struct CGRect)arg4;
- (id)getWeAppView:(id)arg1 withFrame:(struct CGRect)arg2;
- (id)getViewByJson:(id)arg1 byFrame:(struct CGRect)arg2;
- (void)updateViewCacheConfig:(id)arg1;
- (void)updateModule:(id)arg1;
- (void)createViewByPageJson:(id)arg1;
- (void)getPage;
- (void)registAdapter:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)setViewFrame:(struct CGRect)arg1;
- (id)initWithShopId:(id)arg1;
- (id)init;
- (_Bool)needAlert;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

