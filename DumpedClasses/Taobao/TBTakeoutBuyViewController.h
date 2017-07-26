//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBTakeoutBuyViewDelegate.h"
#import "TBTakeoutNewViewModelDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, TBTakeoutAddressViewModel, TBTakeoutBuyToolbar, TBTakeoutBuyView, TBTakeoutBuyViewModel, TBTakeoutCreateOrderViewModel, TBTakeoutLabel;

@interface TBTakeoutBuyViewController : TBViewController <TBTakeoutNewViewModelDelegate, TBTakeoutBuyViewDelegate, UIAlertViewDelegate>
{
    _Bool _isOnlinePaid;
    TBTakeoutBuyView *_buyView;
    TBTakeoutBuyToolbar *_toolbar;
    TBTakeoutLabel *_addressLabel;
    TBTakeoutAddressViewModel *_addressViewModel;
    TBTakeoutBuyViewModel *_viewModel;
    TBTakeoutCreateOrderViewModel *_createOrderViewModel;
}

@property(nonatomic) _Bool isOnlinePaid; // @synthesize isOnlinePaid=_isOnlinePaid;
@property(retain, nonatomic) TBTakeoutCreateOrderViewModel *createOrderViewModel; // @synthesize createOrderViewModel=_createOrderViewModel;
@property(retain, nonatomic) TBTakeoutBuyViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) TBTakeoutAddressViewModel *addressViewModel; // @synthesize addressViewModel=_addressViewModel;
@property(retain, nonatomic) TBTakeoutLabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) TBTakeoutBuyToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property(retain, nonatomic) TBTakeoutBuyView *buyView; // @synthesize buyView=_buyView;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewModel:(id)arg1 didLoadError:(id)arg2;
- (void)viewModelDidLoad:(id)arg1;
- (void)reloadByCouponsDetail:(id)arg1;
- (void)quitBuyViewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (void)popViewController;
- (void)loadBuildOrderData:(id)arg1;
- (void)refreshView;
- (struct CGSize)tbTakeout_sizeWithString:(id)arg1 andFont:(id)arg2 andMaxSize:(struct CGSize)arg3;
- (void)handleKeyboardWillHide:(id)arg1;
- (void)handleKeyboardWillShow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

