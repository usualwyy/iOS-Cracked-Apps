//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBShopSearchSimilarShopItem, TBXSearchService, UIButton, UIImageView, UILabel;

@interface TBXSearchSimilarShopItemView : UIView
{
    UILabel *_shopLabel;
    UIImageView *_itemImageView;
    UIButton *_btn;
    TBXSearchService *_xSearchService;
    unsigned long long _position;
    TBShopSearchSimilarShopItem *_similarShopItemModel;
}

@property(retain, nonatomic) TBShopSearchSimilarShopItem *similarShopItemModel; // @synthesize similarShopItemModel=_similarShopItemModel;
@property(nonatomic) unsigned long long position; // @synthesize position=_position;
@property(nonatomic) __weak TBXSearchService *xSearchService; // @synthesize xSearchService=_xSearchService;
@property(retain, nonatomic) UIButton *btn; // @synthesize btn=_btn;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
@property(retain, nonatomic) UILabel *shopLabel; // @synthesize shopLabel=_shopLabel;
- (void).cxx_destruct;
- (void)clickSimilarShopItem:(id)arg1;
- (void)configWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

