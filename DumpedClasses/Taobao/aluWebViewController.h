//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVWebViewController.h"

#import "aluNavigationBarAppearance.h"

@class NSDictionary, NSString, Reachability;

@interface aluWebViewController : WVWebViewController <aluNavigationBarAppearance>
{
    _Bool _isNetWorkOK;
    _Bool _isForSSOH5Page;
    _Bool _closeNavBar;
    NSString *_callbackUrl;
    NSDictionary *_extendParms;
    id <aluWebViewDelegate> _delegate;
    NSString *_helpPageUrl;
    Reachability *_wifiReachability;
    Reachability *_internetReachability;
}

@property(retain, nonatomic) Reachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property(retain, nonatomic) Reachability *wifiReachability; // @synthesize wifiReachability=_wifiReachability;
@property(retain, nonatomic) NSString *helpPageUrl; // @synthesize helpPageUrl=_helpPageUrl;
@property(nonatomic) _Bool closeNavBar; // @synthesize closeNavBar=_closeNavBar;
@property(nonatomic) _Bool isForSSOH5Page; // @synthesize isForSSOH5Page=_isForSSOH5Page;
@property(nonatomic) _Bool isNetWorkOK; // @synthesize isNetWorkOK=_isNetWorkOK;
@property(nonatomic) id <aluWebViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *extendParms; // @synthesize extendParms=_extendParms;
@property(copy, nonatomic) NSString *callbackUrl; // @synthesize callbackUrl=_callbackUrl;
- (void).cxx_destruct;
- (void)setControllerBackgroundColor:(id)arg1;
- (void)setNavBarRightBarCustomView:(id)arg1;
- (void)setNavBarLeftBarItemTitleColor:(id)arg1;
- (void)setNavBarLeftBarItemFont:(id)arg1;
- (void)setNavBarLeftBarItemTitle:(id)arg1;
- (void)setNavBarLeftBarItemHighLightImage:(id)arg1;
- (void)setNavBarLeftBarItemImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setNavBarLeftBarItemImage:(id)arg1;
- (void)setNavBarCenterItemTitle:(id)arg1;
- (id)viewController;
- (void)updateNetWorkStatus;
- (void)reachabilityChanged:(id)arg1;
- (void)startLoad;
- (void)openHelpPage:(id)arg1;
- (void)onBack:(id)arg1;
- (void)removeRightButtonInNaviBar;
- (void)addRightButtonInNaviBarWithUrl:(id)arg1;
- (void)setupNaviBar;
- (void)setupNetwork;
- (_Bool)isCallbackUrl:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

