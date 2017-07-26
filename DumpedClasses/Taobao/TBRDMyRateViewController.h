//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRDBaseViewController.h"

#import "TBCEventHandleProtocol.h"
#import "TBCPhotoBrowseViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, TBCScrollPageView, TBCView, TBRDMyRateDataController, TBRDMyRateTagSwitchView, TBRDRateListLoadingView;

@interface TBRDMyRateViewController : TBRDBaseViewController <TBCEventHandleProtocol, UIActionSheetDelegate, TBCPhotoBrowseViewDelegate, UIAlertViewDelegate>
{
    TBRDMyRateDataController *_dataController;
    TBCScrollPageView *_pageView;
    TBCView *_headerMainContentView;
    TBRDMyRateTagSwitchView *_tagSwitchView;
    TBRDRateListLoadingView *_loadingView;
}

@property(retain, nonatomic) TBRDRateListLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) TBRDMyRateTagSwitchView *tagSwitchView; // @synthesize tagSwitchView=_tagSwitchView;
@property(retain, nonatomic) TBCView *headerMainContentView; // @synthesize headerMainContentView=_headerMainContentView;
@property(retain, nonatomic) TBCScrollPageView *pageView; // @synthesize pageView=_pageView;
@property(retain, nonatomic) TBRDMyRateDataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)manageOperateHandle:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onHandleEvent:(CDStruct_89ddc8e1)arg1;
- (void)appendRateSuccessNotificationAction:(id)arg1;
- (void)modifySuccessNotificationAction:(id)arg1;
- (id)getRateItemOfContext:(id)arg1;
- (void)switchTapToListData:(id)arg1;
- (void)requestCompleteOfListData:(id)arg1 eventUserInfo:(id)arg2;
- (void)requestWillStartOfListData:(id)arg1;
- (void)registerEventForListEngine:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

