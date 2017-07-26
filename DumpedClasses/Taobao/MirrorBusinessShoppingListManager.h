//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MirrorBusinessPhotoCellDelegate.h"
#import "MirrorBusinessProductCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MirrorBusinessFooterView, MirrorBusinessPhotoCell, MirrorNetworkAdapter, NSArray, NSMutableArray, NSString, UIImage, UITableView;

@interface MirrorBusinessShoppingListManager : NSObject <UITableViewDataSource, UITableViewDelegate, MirrorBusinessProductCellDelegate, MirrorBusinessPhotoCellDelegate>
{
    _Bool _useCompareBtn;
    _Bool _isLoadingData;
    _Bool _hasMore;
    _Bool _isEmpty;
    id <MirrorBusinessShoppingListManagerDelegate> _delegate;
    id <MirrorBusinessControllerDelegate> _mainDelegate;
    UITableView *_tableView;
    UIImage *_photoImage;
    UIImage *_originalPhotoImage;
    MirrorBusinessPhotoCell *_photoCell;
    NSArray *_products;
    NSString *_shop;
    NSArray *_params;
    MirrorNetworkAdapter *_netMgr;
    NSMutableArray *_data;
    MirrorBusinessFooterView *_footerView;
    long long _pageNum;
    long long _totalCount;
    NSMutableArray *_items;
    NSArray *_shareData;
}

@property(nonatomic) _Bool isEmpty; // @synthesize isEmpty=_isEmpty;
@property(retain, nonatomic) NSArray *shareData; // @synthesize shareData=_shareData;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) long long totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) long long pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(retain, nonatomic) MirrorBusinessFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSMutableArray *data; // @synthesize data=_data;
@property(nonatomic) _Bool useCompareBtn; // @synthesize useCompareBtn=_useCompareBtn;
@property(retain, nonatomic) MirrorNetworkAdapter *netMgr; // @synthesize netMgr=_netMgr;
@property(retain, nonatomic) NSArray *params; // @synthesize params=_params;
@property(retain, nonatomic) NSString *shop; // @synthesize shop=_shop;
@property(retain, nonatomic) NSArray *products; // @synthesize products=_products;
@property(nonatomic) __weak MirrorBusinessPhotoCell *photoCell; // @synthesize photoCell=_photoCell;
@property(retain, nonatomic) UIImage *originalPhotoImage; // @synthesize originalPhotoImage=_originalPhotoImage;
@property(retain, nonatomic) UIImage *photoImage; // @synthesize photoImage=_photoImage;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <MirrorBusinessControllerDelegate> mainDelegate; // @synthesize mainDelegate=_mainDelegate;
@property(nonatomic) __weak id <MirrorBusinessShoppingListManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onCompare;
- (void)requestPage:(long long)arg1 success:(CDUnknownBlockType)arg2 fail:(CDUnknownBlockType)arg3;
- (void)addToShopCartAnimationFinished:(id)arg1;
- (void)performAnimationWithImageView:(id)arg1 scaleValue:(double)arg2 endPoint:(struct CGPoint)arg3;
- (void)ensuerLogin:(CDUnknownBlockType)arg1 cancel:(CDUnknownBlockType)arg2;
- (void)onShoppingProduct:(id)arg1 index:(long long)arg2 cell:(id)arg3;
- (void)updateFooterViewFrame;
- (void)delayRetry;
- (void)loadMoreData;
- (void)updateFooterView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)getShareData;
- (id)checkCategoryAndCreateSectionData:(id)arg1 lastCategory:(id)arg2 data:(id)arg3;
- (void)buildData:(id)arg1 items:(id)arg2 data:(id)arg3;
- (void)reloadTable;
- (void)setupEmptyView;
- (void)notifyLoadFirstPageStatusChange:(long long)arg1;
- (void)reloadFirstPage;
- (void)requtestFirstPage;
- (void)trackEvent:(id)arg1;
- (void)postMsg:(id)arg1 type:(long long)arg2;
- (void)setup;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

