//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBWVBaseController.h"

#import "UIScrollViewDelegate.h"
#import "WindVaneUIWbeViewDelegate.h"

@class NSString, NSTimer, TBSNSWeDetailProgressView;

@interface TBSNSWeDetailChildWebViewController : TBWVBaseController <WindVaneUIWbeViewDelegate, UIScrollViewDelegate>
{
    _Bool _webViewIsLoading;
    _Bool _myProgressViewIsLoading;
    unsigned long long _feedId;
    unsigned long long _feedType;
    id <TBSNSWeDetailChildWebViewControllerDelegate> _childVCDelegate;
    id <UIScrollViewDelegate> _webViewScrollDelegate;
    NSString *_lastUrl;
    TBSNSWeDetailProgressView *_progressView;
    NSTimer *_timer;
}

@property(nonatomic) _Bool myProgressViewIsLoading; // @synthesize myProgressViewIsLoading=_myProgressViewIsLoading;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) TBSNSWeDetailProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSString *lastUrl; // @synthesize lastUrl=_lastUrl;
@property(nonatomic) _Bool webViewIsLoading; // @synthesize webViewIsLoading=_webViewIsLoading;
@property(nonatomic) __weak id <UIScrollViewDelegate> webViewScrollDelegate; // @synthesize webViewScrollDelegate=_webViewScrollDelegate;
@property(nonatomic) __weak id <TBSNSWeDetailChildWebViewControllerDelegate> childVCDelegate; // @synthesize childVCDelegate=_childVCDelegate;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) unsigned long long feedId; // @synthesize feedId=_feedId;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)timerCallback;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (_Bool)webViewContentSizeBiggerThanFrame;
- (void)markScrollViewByTag:(unsigned long long)arg1;
- (void)loadRequestWithURLString:(id)arg1;
- (void)backItemClicked:(id)arg1;
- (void)dealloc;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

