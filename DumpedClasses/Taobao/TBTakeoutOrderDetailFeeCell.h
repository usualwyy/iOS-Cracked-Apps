//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSMutableArray, TBTakeoutOrderFeeModel, TBTakeoutPriceLabel, UILabel;

@interface TBTakeoutOrderDetailFeeCell : UITableViewCell
{
    TBTakeoutOrderFeeModel *_model;
    UILabel *_totalPriceTextLabel;
    UILabel *_totalPriceLabel;
    UILabel *_hongbaoTextLabel;
    UILabel *_hongbaoLabel;
    UILabel *_actualPaidFeeTextLabel;
    TBTakeoutPriceLabel *_actualPaidFeeLabel;
    NSMutableArray *_extraFeeContentLabels;
    NSMutableArray *_extraFeeLabels;
}

@property(retain, nonatomic) NSMutableArray *extraFeeLabels; // @synthesize extraFeeLabels=_extraFeeLabels;
@property(retain, nonatomic) NSMutableArray *extraFeeContentLabels; // @synthesize extraFeeContentLabels=_extraFeeContentLabels;
@property(retain, nonatomic) TBTakeoutPriceLabel *actualPaidFeeLabel; // @synthesize actualPaidFeeLabel=_actualPaidFeeLabel;
@property(retain, nonatomic) UILabel *actualPaidFeeTextLabel; // @synthesize actualPaidFeeTextLabel=_actualPaidFeeTextLabel;
@property(retain, nonatomic) UILabel *hongbaoLabel; // @synthesize hongbaoLabel=_hongbaoLabel;
@property(retain, nonatomic) UILabel *hongbaoTextLabel; // @synthesize hongbaoTextLabel=_hongbaoTextLabel;
@property(retain, nonatomic) UILabel *totalPriceLabel; // @synthesize totalPriceLabel=_totalPriceLabel;
@property(retain, nonatomic) UILabel *totalPriceTextLabel; // @synthesize totalPriceTextLabel=_totalPriceTextLabel;
@property(nonatomic) __weak TBTakeoutOrderFeeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

