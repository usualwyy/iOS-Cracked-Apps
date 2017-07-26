//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface TBTakeoutAddCartMenuButton : UIView
{
    _Bool _enabled;
    _Bool _cutEnabled;
    _Bool _animation;
    _Bool _isInSkuMenu;
    _Bool _hasSku;
    _Bool _isSellout;
    CDUnknownBlockType _actionBlock;
    long long _cartNum;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _sizeChangeBlock;
    UIButton *_addButton;
    UIButton *_reduceButton;
    UIButton *_chooseButton;
    UILabel *_cartNumLabel;
    UILabel *_selloutLabel;
    struct CGSize _buttonSize;
    struct UIEdgeInsets _padding;
}

@property(nonatomic) _Bool isSellout; // @synthesize isSellout=_isSellout;
@property(nonatomic) _Bool hasSku; // @synthesize hasSku=_hasSku;
@property(retain, nonatomic) UILabel *selloutLabel; // @synthesize selloutLabel=_selloutLabel;
@property(retain, nonatomic) UILabel *cartNumLabel; // @synthesize cartNumLabel=_cartNumLabel;
@property(retain, nonatomic) UIButton *chooseButton; // @synthesize chooseButton=_chooseButton;
@property(retain, nonatomic) UIButton *reduceButton; // @synthesize reduceButton=_reduceButton;
@property(retain, nonatomic) UIButton *addButton; // @synthesize addButton=_addButton;
@property(copy, nonatomic) CDUnknownBlockType sizeChangeBlock; // @synthesize sizeChangeBlock=_sizeChangeBlock;
@property(nonatomic) _Bool isInSkuMenu; // @synthesize isInSkuMenu=_isInSkuMenu;
@property(nonatomic) struct CGSize buttonSize; // @synthesize buttonSize=_buttonSize;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long cartNum; // @synthesize cartNum=_cartNum;
@property(nonatomic) _Bool animation; // @synthesize animation=_animation;
@property(nonatomic) _Bool cutEnabled; // @synthesize cutEnabled=_cutEnabled;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
- (void).cxx_destruct;
- (void)choose:(id)arg1;
- (void)reduceFromCart;
- (void)reduce:(id)arg1;
- (void)addToCart;
- (void)add:(id)arg1;
- (void)reset;
- (void)config;
- (void)reloadViewWithAnimate:(_Bool)arg1;
- (void)setupWithCartNum:(long long)arg1 hasSku:(_Bool)arg2 isSellout:(_Bool)arg3;
- (void)layoutSubviews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

