//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CNLogisticOrderListItem, CNLogisticsItemView;

@interface CNLogisticsGoodsDetailsView : UIView
{
    int showMax;
    _Bool _showMore;
    float _goodsHeight;
    CNLogisticOrderListItem *_bagItem;
    CNLogisticsItemView *_itemView;
}

@property(nonatomic) float goodsHeight; // @synthesize goodsHeight=_goodsHeight;
@property(nonatomic) _Bool showMore; // @synthesize showMore=_showMore;
@property(nonatomic) CNLogisticsItemView *itemView; // @synthesize itemView=_itemView;
@property(nonatomic) CNLogisticOrderListItem *bagItem; // @synthesize bagItem=_bagItem;
- (void)gotoDetailView:(id)arg1;
- (void)showMore:(id)arg1;
- (float)configGoodsInfoCell:(id)arg1 offsety:(double)arg2;
- (float)setupGoodsInfoView;
- (float)getGoodsHeight;
- (void)setupView;
- (id)initWithY:(float)arg1 addView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

