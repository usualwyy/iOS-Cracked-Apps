//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBShopCartBasicCell.h"

@class TBBlockButton, UIImageView, UILabel;

@interface TBShopCartGroupPromotionCell : TBShopCartBasicCell
{
    UILabel *_titleLabel;
    TBBlockButton *_nextBtn;
    UILabel *_nextTitleLabel;
    UIImageView *_arrowImgView;
    UIImageView *_iconImgView;
}

+ (double)cellCalHeight:(id)arg1;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) UILabel *nextTitleLabel; // @synthesize nextTitleLabel=_nextTitleLabel;
@property(retain, nonatomic) TBBlockButton *nextBtn; // @synthesize nextBtn=_nextBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)registerAction;
- (void)bindCellData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

