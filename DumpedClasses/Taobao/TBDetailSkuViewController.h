//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class AliDetailSkuControl, TBDetailSkuVCModel;

@interface TBDetailSkuViewController : UIViewController
{
    AliDetailSkuControl *_skuControl;
    TBDetailSkuVCModel *_skuVCModel;
}

@property(retain, nonatomic) TBDetailSkuVCModel *skuVCModel; // @synthesize skuVCModel=_skuVCModel;
@property(retain, nonatomic) AliDetailSkuControl *skuControl; // @synthesize skuControl=_skuControl;
- (void).cxx_destruct;
- (void)commonInit:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNativeParames:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

@end

