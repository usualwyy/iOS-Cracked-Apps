//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class TBTradeOrderInfoModel, UIImageView, UILabel;

@interface TBExtBuyOrderInfoCell : TBExtBuyBaseCell
{
    TBTradeOrderInfoModel *_model;
    UILabel *_titleLabel;
    UIImageView *_iconImageView;
}

+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TBTradeOrderInfoModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end

