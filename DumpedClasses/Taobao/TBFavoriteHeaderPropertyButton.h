//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class CAShapeLayer, NSString, UIImageView, UIView;

@interface TBFavoriteHeaderPropertyButton : UIButton
{
    struct CGRect origFrame;
    NSString *_bigSaleImageUrl;
    unsigned long long _propertyButtonSelectType;
    UIView *_bottomWhiteLine;
    CAShapeLayer *_maskLayer;
    CAShapeLayer *_strokeLayer;
    UIImageView *_deleteImageView;
    UIView *_borderView;
}

@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(retain, nonatomic) UIImageView *deleteImageView; // @synthesize deleteImageView=_deleteImageView;
@property(retain, nonatomic) CAShapeLayer *strokeLayer; // @synthesize strokeLayer=_strokeLayer;
@property(retain, nonatomic) CAShapeLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIView *bottomWhiteLine; // @synthesize bottomWhiteLine=_bottomWhiteLine;
@property(nonatomic) unsigned long long propertyButtonSelectType; // @synthesize propertyButtonSelectType=_propertyButtonSelectType;
@property(copy, nonatomic) NSString *bigSaleImageUrl; // @synthesize bigSaleImageUrl=_bigSaleImageUrl;
- (void).cxx_destruct;
- (void)clearStatus;
- (void)setPropertyButtonSelectType:(unsigned long long)arg1 andTitle:(id)arg2 andImageUrl:(id)arg3;
- (void)commonConfig;
- (id)initWithFrame:(struct CGRect)arg1;

@end

