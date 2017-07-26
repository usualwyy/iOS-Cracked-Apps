//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "WindVaneUIWbeViewDelegate.h"

@class HUDActivityView, NSString, TBCouponAnimatButtonView, TBModelStatusHandler, UIViewController<TBWebViewServiceProtocol>;

@interface TBCouponWebViewController : TBViewController <WindVaneUIWbeViewDelegate>
{
    NSString *_url;
    TBCouponAnimatButtonView *_closedButton;
    HUDActivityView *_dataLoadingView;
    TBModelStatusHandler *_handler;
    UIViewController<TBWebViewServiceProtocol> *_webViewController;
    long long _orzStatusBarStyle;
}

@property long long orzStatusBarStyle; // @synthesize orzStatusBarStyle=_orzStatusBarStyle;
@property(retain, nonatomic) UIViewController<TBWebViewServiceProtocol> *webViewController; // @synthesize webViewController=_webViewController;
@property(retain, nonatomic) TBModelStatusHandler *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) HUDActivityView *dataLoadingView; // @synthesize dataLoadingView=_dataLoadingView;
@property(retain, nonatomic) TBCouponAnimatButtonView *closedButton; // @synthesize closedButton=_closedButton;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)goBack;
- (void)reloadData;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)decideChangeApearance4Festival;
- (void)handleFestivalSwitch:(id)arg1;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

