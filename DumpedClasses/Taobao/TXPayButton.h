//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, UIColor, UIFont, UIImage, UIView;

@interface TXPayButton : UIButton
{
    NSString *_originalPrice;
    NSString *_price;
    NSString *_titleTip;
    UIFont *_fontOfOriginalPrice;
    UIFont *_fontOfPrice;
    UIColor *_colorOfOriginalPrice;
    UIColor *_colorOfPrice;
    NSString *_bgImageUrl;
    UIImage *_bgImage;
    NSString *_iconUrl;
    UIImage *_iconImage;
    UIColor *_bgColorForNormal;
    UIColor *_bgColorForHighlighted;
    UIColor *_bgColorForDisable;
    UIView *_highlightedMaskView;
}

@property(retain, nonatomic) UIView *highlightedMaskView; // @synthesize highlightedMaskView=_highlightedMaskView;
@property(retain, nonatomic) UIColor *bgColorForDisable; // @synthesize bgColorForDisable=_bgColorForDisable;
@property(retain, nonatomic) UIColor *bgColorForHighlighted; // @synthesize bgColorForHighlighted=_bgColorForHighlighted;
@property(retain, nonatomic) UIColor *bgColorForNormal; // @synthesize bgColorForNormal=_bgColorForNormal;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIImage *bgImage; // @synthesize bgImage=_bgImage;
@property(copy, nonatomic) NSString *bgImageUrl; // @synthesize bgImageUrl=_bgImageUrl;
@property(retain, nonatomic) UIColor *colorOfPrice; // @synthesize colorOfPrice=_colorOfPrice;
@property(retain, nonatomic) UIColor *colorOfOriginalPrice; // @synthesize colorOfOriginalPrice=_colorOfOriginalPrice;
@property(retain, nonatomic) UIFont *fontOfPrice; // @synthesize fontOfPrice=_fontOfPrice;
@property(retain, nonatomic) UIFont *fontOfOriginalPrice; // @synthesize fontOfOriginalPrice=_fontOfOriginalPrice;
@property(copy, nonatomic) NSString *titleTip; // @synthesize titleTip=_titleTip;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *originalPrice; // @synthesize originalPrice=_originalPrice;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)getSubAttributedString;
- (id)getMainAttributedString;
- (id)subTitleStr;
- (id)mainTitleStr;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)createImageWithColor:(id)arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

