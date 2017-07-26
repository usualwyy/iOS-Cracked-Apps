//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

@class NSArray, NSOperationQueue, TBErrorView, TBFavDetailedListTemplate, TBFavGoodsQueryByDataSourceOperation, TBFavoriteCategoryModel, TBFavoriteGoodListModel;

@interface TBFavGoodsPickerCollectionView : UICollectionView
{
    NSOperationQueue *_operationQueue;
    TBFavGoodsQueryByDataSourceOperation *_goodsQueryOperation;
    long long _goodsQueryDataSource;
    TBFavoriteGoodListModel *_goodList;
    NSArray *_keywords;
    TBFavoriteCategoryModel *_category;
    TBFavDetailedListTemplate *_aTemplate;
    unsigned long long _currentPageCount;
    TBErrorView *_errorView;
}

@property(retain, nonatomic) TBErrorView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) unsigned long long currentPageCount; // @synthesize currentPageCount=_currentPageCount;
@property(retain, nonatomic) TBFavDetailedListTemplate *aTemplate; // @synthesize aTemplate=_aTemplate;
@property(retain, nonatomic) TBFavoriteCategoryModel *category; // @synthesize category=_category;
@property(retain, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) TBFavoriteGoodListModel *goodList; // @synthesize goodList=_goodList;
@property(nonatomic) long long goodsQueryDataSource; // @synthesize goodsQueryDataSource=_goodsQueryDataSource;
@property(retain, nonatomic) TBFavGoodsQueryByDataSourceOperation *goodsQueryOperation; // @synthesize goodsQueryOperation=_goodsQueryOperation;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)dealloc;
- (void)triggerLoadGoods:(_Bool)arg1;
- (void)hideErrorView;
- (void)showErrorView;

@end

