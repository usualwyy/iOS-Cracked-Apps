//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTradeComponentModel.h"

@class NSMutableArray;

@interface TBTradeCouponModel : TBTradeComponentModel
{
    NSMutableArray *_options;
}

@property(retain, nonatomic) NSMutableArray *options; // @synthesize options=_options;
- (void).cxx_destruct;
- (void)loadOptionArray:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (_Bool)selected;
- (id)url;
- (id)title;
- (id)detailIcon;
- (id)totalValue;
- (id)icon;
- (void)reload:(id)arg1;
- (id)initWithData:(id)arg1 withBuyEngine:(id)arg2;

@end

