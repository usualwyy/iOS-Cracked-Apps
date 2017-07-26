//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

@class MBProgressHUD, NSMutableArray, NSString, UIButton, UIView, WXSDKInstance;

@interface TBCatchBaseViewController : TBViewController
{
    MBProgressHUD *_activeHud;
    _Bool _useCache;
    _Bool _useDefault;
    _Bool _needsFullSceen;
    _Bool _loaded;
    _Bool _transitionAnmiationed;
    NSString *_fullUrl;
    NSString *_jsurl;
    NSMutableArray *_bgColors;
    WXSDKInstance *_instance;
    UIView *_weexView;
    UIView *_weexContainerView;
    CDUnknownBlockType _becomeActiveCallback;
    CDUnknownBlockType _enterBackgroundCallback;
    id <NSObject> _activeObserve;
    id <NSObject> _backgroundObserve;
    UIButton *_backButton;
    UIView *_failView;
    UIView *_fromView;
    long long _use3DTransition;
    double _transitionDuration;
    double _transitionReverseDuration;
}

+ (void)registerWeex;
@property(nonatomic) double transitionReverseDuration; // @synthesize transitionReverseDuration=_transitionReverseDuration;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
@property(nonatomic) long long use3DTransition; // @synthesize use3DTransition=_use3DTransition;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(nonatomic) _Bool transitionAnmiationed; // @synthesize transitionAnmiationed=_transitionAnmiationed;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(retain, nonatomic) UIView *failView; // @synthesize failView=_failView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) id <NSObject> backgroundObserve; // @synthesize backgroundObserve=_backgroundObserve;
@property(retain, nonatomic) id <NSObject> activeObserve; // @synthesize activeObserve=_activeObserve;
@property(copy, nonatomic) CDUnknownBlockType enterBackgroundCallback; // @synthesize enterBackgroundCallback=_enterBackgroundCallback;
@property(copy, nonatomic) CDUnknownBlockType becomeActiveCallback; // @synthesize becomeActiveCallback=_becomeActiveCallback;
@property(nonatomic) _Bool needsFullSceen; // @synthesize needsFullSceen=_needsFullSceen;
@property(retain, nonatomic) UIView *weexContainerView; // @synthesize weexContainerView=_weexContainerView;
@property(retain, nonatomic) UIView *weexView; // @synthesize weexView=_weexView;
@property(retain, nonatomic) WXSDKInstance *instance; // @synthesize instance=_instance;
@property(nonatomic) _Bool useDefault; // @synthesize useDefault=_useDefault;
@property(retain, nonatomic) NSMutableArray *bgColors; // @synthesize bgColors=_bgColors;
@property(nonatomic) _Bool useCache; // @synthesize useCache=_useCache;
@property(copy, nonatomic) NSString *jsurl; // @synthesize jsurl=_jsurl;
@property(retain, nonatomic) NSString *fullUrl; // @synthesize fullUrl=_fullUrl;
- (void).cxx_destruct;
- (id)setupFailViewWithString:(id)arg1;
- (void)retry;
- (void)setupBackButton;
- (void)backAction:(long long)arg1 duration:(double)arg2;
- (void)backAction;
- (void)_updateInstanceState:(long long)arg1;
- (void)render;
- (void)hideHud;
- (void)toastHudOnView:(id)arg1;
- (void)refreshWeex;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setupBackgroundColor;
- (void)viewDidLoad;
- (_Bool)forbidbackPanGestureRecognized;
- (void)dealloc;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end

