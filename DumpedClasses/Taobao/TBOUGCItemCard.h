//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDictionary, UIButton, UIImageView, UILabel;

@interface TBOUGCItemCard : UIView
{
    NSDictionary *_itemInfo;
    UIImageView *_iv;
    UILabel *_lbPrice;
    UIButton *_btnSelect;
    UIView *_maskView;
    CDUnknownBlockType _tapFilter;
}

@property(copy, nonatomic) CDUnknownBlockType tapFilter; // @synthesize tapFilter=_tapFilter;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIButton *btnSelect; // @synthesize btnSelect=_btnSelect;
@property(retain, nonatomic) UILabel *lbPrice; // @synthesize lbPrice=_lbPrice;
@property(retain, nonatomic) UIImageView *iv; // @synthesize iv=_iv;
@property(retain, nonatomic) NSDictionary *itemInfo; // @synthesize itemInfo=_itemInfo;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)updateItemCard:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

