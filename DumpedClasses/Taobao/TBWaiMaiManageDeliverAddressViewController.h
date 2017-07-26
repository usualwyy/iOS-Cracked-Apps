//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSNumber, NSString, UIButton, UITableView;

@interface TBWaiMaiManageDeliverAddressViewController : TBViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _hideCellSelectView;
    UITableView *_tableView;
    UIButton *_addDeliverAddressButton;
    NSMutableArray *_dataSource;
    NSString *_currDeliverID;
    NSString *_currLocationLatitude;
    NSString *_currLocationLongitude;
    NSString *_currLocationCityName;
    CDUnknownBlockType _callback;
    NSString *_storeID;
    NSNumber *_business;
}

@property(nonatomic) _Bool hideCellSelectView; // @synthesize hideCellSelectView=_hideCellSelectView;
@property(retain, nonatomic) NSNumber *business; // @synthesize business=_business;
@property(retain, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *currLocationCityName; // @synthesize currLocationCityName=_currLocationCityName;
@property(retain, nonatomic) NSString *currLocationLongitude; // @synthesize currLocationLongitude=_currLocationLongitude;
@property(retain, nonatomic) NSString *currLocationLatitude; // @synthesize currLocationLatitude=_currLocationLatitude;
@property(retain, nonatomic) NSString *currDeliverID; // @synthesize currDeliverID=_currDeliverID;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIButton *addDeliverAddressButton; // @synthesize addDeliverAddressButton=_addDeliverAddressButton;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)addDeliverAddressAction:(id)arg1;
- (void)requestDeliverAddress;
- (void)setupSubViews;
- (void)addAddressAction:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)backPanGestureRecoginzed;
- (void)backItemClicked:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

