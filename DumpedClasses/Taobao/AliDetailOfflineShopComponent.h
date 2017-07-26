//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliProductDetailComponent.h"

@class AliDetailStoreModel, AlidetailOfflineShopButton, UIImageView, UILabel;

@interface AliDetailOfflineShopComponent : AliProductDetailComponent
{
    UIImageView *_backgroundImageView;
    UILabel *_lblStorDesc;
    UILabel *_lblStorName;
    AlidetailOfflineShopButton *_button;
    UIImageView *_maskImageView;
    AliDetailStoreModel *_storeModel;
}

+ (struct CGSize)getComponentSize:(id)arg1 constrainedToSize:(struct CGSize)arg2;
@property(retain, nonatomic) AliDetailStoreModel *storeModel; // @synthesize storeModel=_storeModel;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) AlidetailOfflineShopButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *lblStorName; // @synthesize lblStorName=_lblStorName;
@property(retain, nonatomic) UILabel *lblStorDesc; // @synthesize lblStorDesc=_lblStorDesc;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)click:(id)arg1;
- (void)renderView;
- (void)setObject:(id)arg1;
- (struct CGSize)getComponentSize:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

