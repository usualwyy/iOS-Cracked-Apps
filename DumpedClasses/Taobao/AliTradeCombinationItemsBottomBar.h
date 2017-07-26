//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBDetailUIButton, UILabel;

@interface AliTradeCombinationItemsBottomBar : UIView
{
    CDUnknownBlockType _buyBlock;
    CDUnknownBlockType _cartBlock;
    TBDetailUIButton *_buyBtn;
    TBDetailUIButton *_cartBtn;
    UIView *_divisionLine;
    UILabel *_mainPrice;
    UILabel *_subPrice;
    double _buttonWidth;
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(retain, nonatomic) UILabel *subPrice; // @synthesize subPrice=_subPrice;
@property(retain, nonatomic) UILabel *mainPrice; // @synthesize mainPrice=_mainPrice;
@property(retain, nonatomic) UIView *divisionLine; // @synthesize divisionLine=_divisionLine;
@property(retain, nonatomic) TBDetailUIButton *cartBtn; // @synthesize cartBtn=_cartBtn;
@property(retain, nonatomic) TBDetailUIButton *buyBtn; // @synthesize buyBtn=_buyBtn;
@property(copy, nonatomic) CDUnknownBlockType cartBlock; // @synthesize cartBlock=_cartBlock;
@property(copy, nonatomic) CDUnknownBlockType buyBlock; // @synthesize buyBlock=_buyBlock;
- (void).cxx_destruct;
- (id)appendToAttributeString:(id)arg1 withString:(id)arg2 font:(id)arg3 color:(id)arg4;
- (void)cartClick;
- (void)buyClick;
- (void)layoutSubviews;
- (void)updateBottomBarText:(id)arg1 state:(id)arg2;
- (void)setPriceModel:(id)arg1;
- (void)conifgWithType:(unsigned long long)arg1 detailModel:(id)arg2 combinationItemsModel:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

