//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBARBaseViewController.h"

@class NSString, TBARCameraViewController;

@interface TBARRealityH5ViewController : TBARBaseViewController
{
    _Bool _realityEnabled;
    CDUnknownBlockType _resultCallback;
    TBARCameraViewController *_cameraViewController;
    NSString *_loadUrl;
}

@property(copy, nonatomic) NSString *loadUrl; // @synthesize loadUrl=_loadUrl;
@property(retain, nonatomic) TBARCameraViewController *cameraViewController; // @synthesize cameraViewController=_cameraViewController;
@property(nonatomic) _Bool realityEnabled; // @synthesize realityEnabled=_realityEnabled;
@property(copy, nonatomic) CDUnknownBlockType resultCallback; // @synthesize resultCallback=_resultCallback;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (void)dealloc;

@end

