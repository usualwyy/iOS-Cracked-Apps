//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UILabel;

@interface TBVRItemDescView : UIView
{
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_saleCount;
    UILabel *_attr1Rate;
    UILabel *_attr1Title;
}

@property(retain, nonatomic) UILabel *attr1Title; // @synthesize attr1Title=_attr1Title;
@property(retain, nonatomic) UILabel *attr1Rate; // @synthesize attr1Rate=_attr1Rate;
@property(retain, nonatomic) UILabel *saleCount; // @synthesize saleCount=_saleCount;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)setItem:(id)arg1;
- (void)setupView;
- (id)init;

@end

