//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

@class NSMutableArray, TBFavService, TBFavoriteDoubleGoodsTableView, TBFavoriteGoodModel, TBFavoriteGoodRequestModel, TBFavoriteGoodSearchView, TBFavoriteNewGoodMoreView, TBFavoriteNewGoodRequestModel, TBFavoriteNewGoodsTableView, TBFavoriteNewItemListModel, TBFavoriteNewItemModel, TBSheetController;

@interface TBFavoriteGoodsSearchViewController : TBViewController
{
    _Bool _isLastRequestLoadMore;
    _Bool _isUseDoubleGoods;
    _Bool _hasRecommendItemRequested;
    id <TBFavoriteGoodsSearchViewControllerDelegate> _delegate;
    TBFavService *_favService;
    TBFavoriteGoodSearchView *_searchView;
    TBFavoriteDoubleGoodsTableView *_favDoubleGoodsTableView;
    TBFavoriteNewGoodsTableView *_favGoodsTableView;
    TBFavoriteNewGoodMoreView *_goodCellMoreView4New;
    NSMutableArray *_deletedGoods;
    TBFavoriteGoodModel *_goodUsedToOpenDetail;
    TBFavoriteNewItemModel *_itemUsedToOpenDetail;
    TBSheetController *_sheetController;
    TBFavoriteGoodRequestModel *_favGoodModel;
    TBFavoriteNewGoodRequestModel *_favNewGoodRequestModel;
    TBFavoriteNewItemListModel *_goodListModel;
}

@property(nonatomic) _Bool hasRecommendItemRequested; // @synthesize hasRecommendItemRequested=_hasRecommendItemRequested;
@property(retain, nonatomic) TBFavoriteNewItemListModel *goodListModel; // @synthesize goodListModel=_goodListModel;
@property(retain, nonatomic) TBFavoriteNewGoodRequestModel *favNewGoodRequestModel; // @synthesize favNewGoodRequestModel=_favNewGoodRequestModel;
@property(retain, nonatomic) TBFavoriteGoodRequestModel *favGoodModel; // @synthesize favGoodModel=_favGoodModel;
@property(retain, nonatomic) TBSheetController *sheetController; // @synthesize sheetController=_sheetController;
@property(retain, nonatomic) TBFavoriteNewItemModel *itemUsedToOpenDetail; // @synthesize itemUsedToOpenDetail=_itemUsedToOpenDetail;
@property(retain, nonatomic) TBFavoriteGoodModel *goodUsedToOpenDetail; // @synthesize goodUsedToOpenDetail=_goodUsedToOpenDetail;
@property(retain, nonatomic) NSMutableArray *deletedGoods; // @synthesize deletedGoods=_deletedGoods;
@property(nonatomic) _Bool isUseDoubleGoods; // @synthesize isUseDoubleGoods=_isUseDoubleGoods;
@property(nonatomic) _Bool isLastRequestLoadMore; // @synthesize isLastRequestLoadMore=_isLastRequestLoadMore;
@property(retain, nonatomic) TBFavoriteNewGoodMoreView *goodCellMoreView4New; // @synthesize goodCellMoreView4New=_goodCellMoreView4New;
@property(retain, nonatomic) TBFavoriteNewGoodsTableView *favGoodsTableView; // @synthesize favGoodsTableView=_favGoodsTableView;
@property(retain, nonatomic) TBFavoriteDoubleGoodsTableView *favDoubleGoodsTableView; // @synthesize favDoubleGoodsTableView=_favDoubleGoodsTableView;
@property(retain, nonatomic) TBFavoriteGoodSearchView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) TBFavService *favService; // @synthesize favService=_favService;
@property(retain, nonatomic) id <TBFavoriteGoodsSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)buildAllFavoriteCategoryView;
- (void)hideErrorView;
- (void)showErrorViewWithSelector:(SEL)arg1 error:(id)arg2;
- (void)hideEmptyView;
- (void)showEmptyView;
- (void)loadGoodDataAfterRequestFailure;
- (void)searchKeyword:(id)arg1 isLoadMore:(_Bool)arg2;
- (void)deleteGoodsWithFailureToastText:(id)arg1;
- (void)setupViews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

