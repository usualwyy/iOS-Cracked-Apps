//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBShopCartBasicCell.h"

@class TBTDBannerEngine;

@interface TBShopCartActivityCell : TBShopCartBasicCell
{
    TBTDBannerEngine *_engine;
}

+ (double)cellCalHeight:(id)arg1 forEmptyView:(_Bool)arg2;
+ (double)cellCalHeight:(id)arg1;
@property(retain, nonatomic) TBTDBannerEngine *engine; // @synthesize engine=_engine;
- (void).cxx_destruct;
- (void)registerAction;
- (void)bindCellData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

