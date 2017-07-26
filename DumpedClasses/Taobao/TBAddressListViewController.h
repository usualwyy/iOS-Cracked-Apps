//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBModelStatusDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSArray, NSMutableArray, NSString, TBModelStatusHandler, TBShippingAddressItem, UIImageView, UITableView;

@interface TBAddressListViewController : TBViewController <UITableViewDataSource, UITableViewDelegate, UIActionSheetDelegate, TBModelStatusDelegate>
{
    _Bool _isLoading;
    _Bool _needBackToUpdateAddress;
    CDUnknownBlockType _addressSuccessBlock;
    CDUnknownBlockType _addressFailureBlock;
    NSString *_addressIdSelected;
    NSString *_orderSellerId;
    NSString *_buyToken;
    NSArray *_sites;
    long long _addressIdSelectedType;
    long long _addressRequestType;
    long long _addressAgencyType;
    NSMutableArray *_itemArray;
    NSArray *_shippingSitesArray;
    long long _shippingSiteSelected;
    UITableView *_tableView;
    UIImageView *_checkedImageView;
    TBModelStatusHandler *_statusHandler;
    TBShippingAddressItem *_itemSelect;
    TBShippingAddressItem *_cachedAddressItem;
    long long _extraCellNumber;
}

@property(nonatomic) long long extraCellNumber; // @synthesize extraCellNumber=_extraCellNumber;
@property(nonatomic) _Bool needBackToUpdateAddress; // @synthesize needBackToUpdateAddress=_needBackToUpdateAddress;
@property(retain, nonatomic) TBShippingAddressItem *cachedAddressItem; // @synthesize cachedAddressItem=_cachedAddressItem;
@property(retain, nonatomic) TBShippingAddressItem *itemSelect; // @synthesize itemSelect=_itemSelect;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(retain, nonatomic) TBModelStatusHandler *statusHandler; // @synthesize statusHandler=_statusHandler;
@property(retain, nonatomic) UIImageView *checkedImageView; // @synthesize checkedImageView=_checkedImageView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long shippingSiteSelected; // @synthesize shippingSiteSelected=_shippingSiteSelected;
@property(retain, nonatomic) NSArray *shippingSitesArray; // @synthesize shippingSitesArray=_shippingSitesArray;
@property(retain, nonatomic) NSMutableArray *itemArray; // @synthesize itemArray=_itemArray;
@property(nonatomic) long long addressAgencyType; // @synthesize addressAgencyType=_addressAgencyType;
@property(nonatomic) long long addressRequestType; // @synthesize addressRequestType=_addressRequestType;
@property(nonatomic) long long addressIdSelectedType; // @synthesize addressIdSelectedType=_addressIdSelectedType;
@property(retain, nonatomic) NSArray *sites; // @synthesize sites=_sites;
@property(retain, nonatomic) NSString *buyToken; // @synthesize buyToken=_buyToken;
@property(retain, nonatomic) NSString *orderSellerId; // @synthesize orderSellerId=_orderSellerId;
@property(retain, nonatomic) NSString *addressIdSelected; // @synthesize addressIdSelected=_addressIdSelected;
@property(copy, nonatomic) CDUnknownBlockType addressFailureBlock; // @synthesize addressFailureBlock=_addressFailureBlock;
@property(copy, nonatomic) CDUnknownBlockType addressSuccessBlock; // @synthesize addressSuccessBlock=_addressSuccessBlock;
- (void).cxx_destruct;
- (SEL)selectorForEmpty;
- (SEL)selectorForError:(id)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
- (void)showFailedView:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)isSelfPickUpAddrSelected;
- (id)configExtraCell:(id)arg1 Title:(id)arg2 buttonTag:(long long)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)currentSelectedAddressChange:(id)arg1;
- (void)jumpToHelp:(id)arg1;
- (void)jumpToFactoringService:(id)arg1;
- (void)setSelectedItemBySelectedDeliverID;
- (unsigned long long)fetchDefaultAddress;
- (id)configFactoringUrlStringForButtonTag:(long long)arg1;
- (id)factoringItem;
- (id)defaultItem;
- (id)configAddressDetailLabelWithText:(id)arg1;
- (void)setupView;
- (void)showEmptyView:(_Bool)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)backItemClicked:(id)arg1;
- (void)showAddressManageView:(id)arg1;
- (void)saveShopStationItemToCache:(id)arg1;
- (void)loadCachedShopStationItem;
- (void)loadData;
- (void)showDataView;
- (void)clear;
- (void)viewDidUnload;
- (void)dealloc;
- (void)didReceiveMemoryWarning;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

