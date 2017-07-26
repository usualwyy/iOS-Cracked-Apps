//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBQRCodeEncoder, TBShareScanCodeModel, UIImageView, UIScrollView;

@interface TBShareScanCodeView : UIView
{
    CDUnknownBlockType _cancel;
    TBShareScanCodeModel *_model;
    TBQRCodeEncoder *_encoder;
    UIView *_qrCodeContainer;
    UIScrollView *_scrollView;
    UIImageView *_defaultImageView;
    double _scrollViewHigh;
}

@property(nonatomic) double scrollViewHigh; // @synthesize scrollViewHigh=_scrollViewHigh;
@property(retain, nonatomic) UIImageView *defaultImageView; // @synthesize defaultImageView=_defaultImageView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *qrCodeContainer; // @synthesize qrCodeContainer=_qrCodeContainer;
@property(retain, nonatomic) TBQRCodeEncoder *encoder; // @synthesize encoder=_encoder;
@property(retain, nonatomic) TBShareScanCodeModel *model; // @synthesize model=_model;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
- (void).cxx_destruct;
- (void)showInView:(id)arg1;
- (void)close;
- (void)showBottomView:(id)arg1;
- (struct CGContext *)createARGBBitmapContextFromImage:(struct CGImage *)arg1;
- (id)convertColor:(id)arg1;
- (void)getShopName;
- (void)itemTextPrice;
- (void)initViews;
- (id)initWithViewModel:(id)arg1;

@end

