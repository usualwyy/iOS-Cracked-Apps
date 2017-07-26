//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface TBTradeRecmdSaleItemView : UIView
{
    UIImageView *_itemImageView;
    UIView *_bottomBackgroundView;
    UIImageView *_logoView;
    UILabel *_logoNameLabel;
    UILabel *_salePointLabel;
    UIButton *_button;
    UIButton *_itemCardButton;
    id <TBTradeRecmdItemViewDelegate> _delegate;
}

@property(nonatomic) __weak id <TBTradeRecmdItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *itemCardButton; // @synthesize itemCardButton=_itemCardButton;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *salePointLabel; // @synthesize salePointLabel=_salePointLabel;
@property(retain, nonatomic) UILabel *logoNameLabel; // @synthesize logoNameLabel=_logoNameLabel;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UIView *bottomBackgroundView; // @synthesize bottomBackgroundView=_bottomBackgroundView;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
- (void).cxx_destruct;
- (void)touchCardButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

