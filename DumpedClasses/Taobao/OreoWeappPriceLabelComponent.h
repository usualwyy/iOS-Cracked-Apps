//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeAppComponent.h"

@class OreoPriceLabel;

@interface OreoWeappPriceLabelComponent : WeAppComponent
{
    OreoPriceLabel *_priceLabel;
}

@property(retain, nonatomic) OreoPriceLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
- (void).cxx_destruct;
- (void)onMeasureWithSpecW:(int)arg1 withSpecH:(int)arg2;
- (void)setupLabel;
- (void)refreshImageComponentInList;
- (void)refreshData;
- (void)setupDataValue;
- (void)setupDataValueAndConditon;
- (id)createView;

@end

