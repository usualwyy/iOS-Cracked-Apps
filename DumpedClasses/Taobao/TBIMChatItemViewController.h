//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBIMMessageServiceDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class HUDActivityView, NSArray<TBIMMessageAdapter>, NSMutableArray, NSString, TBModelStatusHandler, UITableView;

@interface TBIMChatItemViewController : TBViewController <UITableViewDelegate, UITableViewDataSource, TBIMMessageServiceDelegate>
{
    id <TBIMSessionAdapter> _session;
    id <TBIMMessageServiceAdapter> _messageService;
    NSMutableArray *_dataFromDay;
    NSArray<TBIMMessageAdapter> *_allData;
    UITableView *_tableView;
    int _serviceType;
    HUDActivityView *_hudView;
    TBModelStatusHandler *_handler;
}

- (void).cxx_destruct;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)messagesFromDay:(id)arg1;
- (id)handler;
- (void)messageLoadShareItemMessageResult:(id)arg1 andMsg:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initTableView;
- (void)initPrivateData;
- (id)initWithSession:(id)arg1 andServiceType:(int)arg2;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

