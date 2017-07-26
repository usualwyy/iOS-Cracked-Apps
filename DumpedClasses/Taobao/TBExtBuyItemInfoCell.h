//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class TBExtBuyTagView, TBTradeItemInfoCellModel, UIImageView, UILabel;

@interface TBExtBuyItemInfoCell : TBExtBuyBaseCell
{
    TBTradeItemInfoCellModel *_model;
    UIImageView *_itemImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_priceLabel;
    UILabel *_skuLevelInfoLabel;
    UILabel *_quantityLabel;
    UILabel *_weightLabel;
    UILabel *_giftLabel;
    UIImageView *_activityIcon;
    UIImageView *_activityIcon2;
    TBExtBuyTagView *_tagView;
}

+ (id)tagsFromeItemInfo:(id)arg1;
+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) TBExtBuyTagView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UIImageView *activityIcon2; // @synthesize activityIcon2=_activityIcon2;
@property(retain, nonatomic) UIImageView *activityIcon; // @synthesize activityIcon=_activityIcon;
@property(retain, nonatomic) UILabel *giftLabel; // @synthesize giftLabel=_giftLabel;
@property(retain, nonatomic) UILabel *weightLabel; // @synthesize weightLabel=_weightLabel;
@property(retain, nonatomic) UILabel *quantityLabel; // @synthesize quantityLabel=_quantityLabel;
@property(retain, nonatomic) UILabel *skuLevelInfoLabel; // @synthesize skuLevelInfoLabel=_skuLevelInfoLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
@property(nonatomic) __weak TBTradeItemInfoCellModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end

