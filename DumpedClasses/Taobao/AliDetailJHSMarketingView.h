//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AliDetailJHSMarketingModel, NSString, TBSDKMTOPServer, UITableView;

@interface AliDetailJHSMarketingView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    NSString *_eventToken;
    NSString *_itemId;
    id <AliDetailLoadingStatusViewProtocol> _loadingStatusViewImpl;
    UITableView *_tableView;
    AliDetailJHSMarketingModel *_marketingModel;
    TBSDKMTOPServer *_mtopServer;
    long long _state;
}

@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) TBSDKMTOPServer *mtopServer; // @synthesize mtopServer=_mtopServer;
@property(retain, nonatomic) AliDetailJHSMarketingModel *marketingModel; // @synthesize marketingModel=_marketingModel;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) id <AliDetailLoadingStatusViewProtocol> loadingStatusViewImpl; // @synthesize loadingStatusViewImpl=_loadingStatusViewImpl;
@property(retain, nonatomic) NSString *itemId; // @synthesize itemId=_itemId;
@property(retain, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
- (void).cxx_destruct;
- (void)actionBtnAction:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)updateLoadingStatus;
- (void)beginRequest;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

