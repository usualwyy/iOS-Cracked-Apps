//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class TBFavoriteCategoryItemModel, TBPriceTextView, UIImageView, UILabel, UIView;

@interface TBFavoriteCategoryCollectionViewCell : UICollectionViewCell
{
    _Bool _isSelectedAs2BDeleted;
    _Bool _isDeleting;
    TBFavoriteCategoryItemModel *_item;
    UIImageView *_selectImageView;
    UIImageView *_imageView;
    TBPriceTextView *_priceTextView;
    UILabel *_promotionPriceTextView;
    UIView *_strikethroughLineView;
    UIImageView *_unselectImageView;
    UIImageView *_double11Icon;
}

@property(retain, nonatomic) UIImageView *double11Icon; // @synthesize double11Icon=_double11Icon;
@property(retain, nonatomic) UIImageView *unselectImageView; // @synthesize unselectImageView=_unselectImageView;
@property(retain, nonatomic) UIView *strikethroughLineView; // @synthesize strikethroughLineView=_strikethroughLineView;
@property(retain, nonatomic) UILabel *promotionPriceTextView; // @synthesize promotionPriceTextView=_promotionPriceTextView;
@property(retain, nonatomic) TBPriceTextView *priceTextView; // @synthesize priceTextView=_priceTextView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(nonatomic) _Bool isDeleting; // @synthesize isDeleting=_isDeleting;
@property(nonatomic) _Bool isSelectedAs2BDeleted; // @synthesize isSelectedAs2BDeleted=_isSelectedAs2BDeleted;
@property(retain, nonatomic) TBFavoriteCategoryItemModel *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (_Bool)isPriceTextDecimal;
- (void)updateSelectOrUnselectView;
- (void)exitDeletingMode;
- (void)enterDeletingMode;
- (void)prepareForReuse;
- (void)refreshSubviews;

@end

