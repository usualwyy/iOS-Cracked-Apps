//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "MQQECDeepCleanViewControllerDelegate-Protocol.h"
#import "MQQShareControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MQQButton, MQQECDeepCleanViewController, MQQEventAuthorizationTipView, MQQEventCleanerCompletionView, MQQEventCleanerOperationView, MQQEventCleanerScanningView, MQQShareController, NSArray, NSMutableArray, NSString, UITableView, UIView;

@interface MQQEventCleanerViewController : MQQBaseViewController <UITableViewDelegate, UITableViewDataSource, MQQShareControllerDelegate, MQQECDeepCleanViewControllerDelegate>
{
    _Bool _eventNotAuthorized;
    _Bool _reminderNotAuthorized;
    _Bool _unCleanSelected;
    MQQEventCleanerScanningView *_scanningView;
    UIView *_operationContainerView;
    MQQEventCleanerCompletionView *_completionView;
    MQQEventCleanerOperationView *_operationView;
    UITableView *_tableView;
    UIView *_cleanButtonContainerView;
    MQQButton *_cleanButton;
    MQQButton *_skipButton;
    NSArray *_eventGroupArray;
    NSArray *_reminderGroupArray;
    NSMutableArray *_selectedEventGroupArray;
    MQQShareController *_shareController;
    MQQECDeepCleanViewController *_deepCleanViewController;
    MQQEventAuthorizationTipView *_authorizationTipView;
}

@property(retain, nonatomic) MQQEventAuthorizationTipView *authorizationTipView; // @synthesize authorizationTipView=_authorizationTipView;
@property(retain, nonatomic) MQQECDeepCleanViewController *deepCleanViewController; // @synthesize deepCleanViewController=_deepCleanViewController;
@property(retain, nonatomic) MQQShareController *shareController; // @synthesize shareController=_shareController;
@property(retain, nonatomic) NSMutableArray *selectedEventGroupArray; // @synthesize selectedEventGroupArray=_selectedEventGroupArray;
@property(copy, nonatomic) NSArray *reminderGroupArray; // @synthesize reminderGroupArray=_reminderGroupArray;
@property(copy, nonatomic) NSArray *eventGroupArray; // @synthesize eventGroupArray=_eventGroupArray;
@property(retain, nonatomic) MQQButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) MQQButton *cleanButton; // @synthesize cleanButton=_cleanButton;
@property(retain, nonatomic) UIView *cleanButtonContainerView; // @synthesize cleanButtonContainerView=_cleanButtonContainerView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MQQEventCleanerOperationView *operationView; // @synthesize operationView=_operationView;
@property(retain, nonatomic) MQQEventCleanerCompletionView *completionView; // @synthesize completionView=_completionView;
@property(retain, nonatomic) UIView *operationContainerView; // @synthesize operationContainerView=_operationContainerView;
@property(retain, nonatomic) MQQEventCleanerScanningView *scanningView; // @synthesize scanningView=_scanningView;
- (void)didRemovedAllEventsWithDeepCleanController:(id)arg1;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)checkBoxSelected:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)shareController:(id)arg1 didShareToDestination:(long long)arg2 completed:(_Bool)arg3;
- (void)courseItemViewClicked:(id)arg1;
- (void)deepCleanItemViewClicked:(id)arg1;
- (void)stubbornItemViewClicked:(id)arg1;
- (void)shareButtonClicked:(id)arg1;
- (void)rescanButtonClicked:(id)arg1;
- (void)detailButtonClicked:(id)arg1;
- (void)skipButtonClicked:(id)arg1;
- (void)cleanButtonClicked:(id)arg1;
- (void)refreshCleanButton;
- (unsigned long long)eventCountFromEventGroupArray:(id)arg1;
- (void)didCompleteAnimated:(_Bool)arg1;
- (void)willCompleteAnimated:(_Bool)arg1;
- (void)didFailToCleanEvents;
- (void)didFinishCleaningEvents;
- (void)startCleaningEvents;
- (void)startFetchingEvents;
- (void)requestAccess;
- (void)settingAction:(id)arg1;
- (void)hideAuthorizationTipView;
- (void)showAuthorizationTipViewWithTitle:(id)arg1;
- (void)showNotAuthorizedTip;
- (void)checkAuthorization;
- (void)unloadCompletionView;
- (void)loadCompletionViewIfNeeded;
- (void)unloadOperationView;
- (void)loadOperationViewIfNeeded;
- (void)unloadScanningView;
- (void)loadScanningViewIfNeeded;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

