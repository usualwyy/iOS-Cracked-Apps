//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, TBMy3DClothDO, UIButton, UIImageView, UILabel;

@interface TBMy3DShopTagView : UIView
{
    _Bool isHide;
    id <TBMy3DShopTagViewDelegate> _delegate;
    TBMy3DClothDO *_clothData;
    UIButton *_shopTitleButton;
    UIImageView *_shopLogo;
    UILabel *_shopLabel;
    NSString *_shopId;
}

@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(retain, nonatomic) UILabel *shopLabel; // @synthesize shopLabel=_shopLabel;
@property(retain, nonatomic) UIImageView *shopLogo; // @synthesize shopLogo=_shopLogo;
@property(retain, nonatomic) UIButton *shopTitleButton; // @synthesize shopTitleButton=_shopTitleButton;
@property(retain, nonatomic) TBMy3DClothDO *clothData; // @synthesize clothData=_clothData;
@property(nonatomic) __weak id <TBMy3DShopTagViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)updateShopId:(id)arg1;
- (void)shopTagOperation:(_Bool)arg1 ShopName:(id)arg2 ShopId:(id)arg3 ShopLogo:(id)arg4;
- (id)initWithShopTagView:(_Bool)arg1 ShopName:(id)arg2 ShopId:(id)arg3;
- (void)handleShopLinkTap:(id)arg1;
- (void)setUpView;
- (id)initWithShopData;

@end

