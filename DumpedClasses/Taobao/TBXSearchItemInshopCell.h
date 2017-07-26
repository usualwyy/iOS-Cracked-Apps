//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBXSearchItemCellBase.h"

@class TBLongPressButton, TBLongPressView, TBSearchWapItem, UILabel;

@interface TBXSearchItemInshopCell : TBXSearchItemCellBase
{
    UILabel *_feeLabel;
    UILabel *_couponLabel;
    TBLongPressView *_longPressView;
    TBLongPressButton *_favButton;
}

@property(retain, nonatomic) TBLongPressButton *favButton; // @synthesize favButton=_favButton;
@property(retain, nonatomic) TBLongPressView *longPressView; // @synthesize longPressView=_longPressView;
@property(retain, nonatomic) UILabel *couponLabel; // @synthesize couponLabel=_couponLabel;
@property(retain, nonatomic) UILabel *feeLabel; // @synthesize feeLabel=_feeLabel;
- (void).cxx_destruct;
- (void)setCellAccessibilty;
- (void)adjustViews;
- (void)render;
- (void)changeTitleColorToGray;
- (void)didSelect;
- (void)removeMaskView:(id)arg1;
- (void)hideMask;
- (void)doCollected:(_Bool)arg1;
- (void)highlight:(_Bool)arg1;
- (_Bool)hadFavorite;
- (void)doFavorite:(id)arg1;
- (void)nonFav;
- (void)addFavSuccess;
- (void)showFavoriteMaskView;
- (void)longPress:(id)arg1;
- (void)cellMoreButtonClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) TBSearchWapItem *model; // @dynamic model;

@end

