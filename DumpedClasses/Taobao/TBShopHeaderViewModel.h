//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBShopBasicViewModel.h"

@class NSAttributedString, NSString, TBShopFollowViewModel, TBShopHeaderComponent, TBShopImageViewModel;

@interface TBShopHeaderViewModel : TBShopBasicViewModel
{
    _Bool _zoomForPull;
    TBShopImageViewModel *_bgImageViewModel;
    NSAttributedString *_shopNameString;
    TBShopImageViewModel *_shopLogoViewModel;
    TBShopImageViewModel *_bizShopLogoViewModel;
    TBShopImageViewModel *_levelIconViewModel;
    TBShopImageViewModel *_iconDecoViewModel;
    TBShopImageViewModel *_hintPullViewModel;
    NSAttributedString *_fansString;
    NSString *_fansDesc;
    TBShopFollowViewModel *_followViewModel;
    TBShopHeaderComponent *_component;
}

@property(retain, nonatomic) TBShopHeaderComponent *component; // @synthesize component=_component;
@property(nonatomic) _Bool zoomForPull; // @synthesize zoomForPull=_zoomForPull;
@property(retain, nonatomic) TBShopFollowViewModel *followViewModel; // @synthesize followViewModel=_followViewModel;
@property(retain, nonatomic) NSString *fansDesc; // @synthesize fansDesc=_fansDesc;
@property(retain, nonatomic) NSAttributedString *fansString; // @synthesize fansString=_fansString;
@property(retain, nonatomic) TBShopImageViewModel *hintPullViewModel; // @synthesize hintPullViewModel=_hintPullViewModel;
@property(retain, nonatomic) TBShopImageViewModel *iconDecoViewModel; // @synthesize iconDecoViewModel=_iconDecoViewModel;
@property(retain, nonatomic) TBShopImageViewModel *levelIconViewModel; // @synthesize levelIconViewModel=_levelIconViewModel;
@property(retain, nonatomic) TBShopImageViewModel *bizShopLogoViewModel; // @synthesize bizShopLogoViewModel=_bizShopLogoViewModel;
@property(retain, nonatomic) TBShopImageViewModel *shopLogoViewModel; // @synthesize shopLogoViewModel=_shopLogoViewModel;
@property(retain, nonatomic) NSAttributedString *shopNameString; // @synthesize shopNameString=_shopNameString;
@property(retain, nonatomic) TBShopImageViewModel *bgImageViewModel; // @synthesize bgImageViewModel=_bgImageViewModel;
- (void).cxx_destruct;
- (void)removeKVOForCurrentModel;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)fansStringWithFansNum:(long long)arg1;
- (id)cellIdentifier;
- (void)constrcutWithModel:(id)arg1;
- (id)initWithModel:(id)arg1;

@end

