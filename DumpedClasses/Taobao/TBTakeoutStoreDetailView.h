//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutStoreBasicView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSMutableArray, NSString, TBHUDActivityView, TBTakeoutStoreDetailViewModel, UIImageView, UITableView;

@interface TBTakeoutStoreDetailView : TBTakeoutStoreBasicView <UITableViewDataSource, UITableViewDelegate>
{
    TBTakeoutStoreDetailViewModel *_viewModel;
    UITableView *_tableView;
    NSMutableArray *_storeInfo;
    NSMutableArray *_storeActivity;
    NSMutableArray *_serviceList;
    UIImageView *_imageView;
    TBHUDActivityView *_hud;
}

@property(retain, nonatomic) TBHUDActivityView *hud; // @synthesize hud=_hud;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) NSMutableArray *serviceList; // @synthesize serviceList=_serviceList;
@property(retain, nonatomic) NSMutableArray *storeActivity; // @synthesize storeActivity=_storeActivity;
@property(retain, nonatomic) NSMutableArray *storeInfo; // @synthesize storeInfo=_storeInfo;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak TBTakeoutStoreDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)imageTap:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)setupActivityCell:(id)arg1;
- (void)contact:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setTopPadding:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

