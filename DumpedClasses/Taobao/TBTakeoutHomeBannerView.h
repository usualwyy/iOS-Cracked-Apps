//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAShapeLayer, NSArray, TBTakeoutYSNewBannerView;

@interface TBTakeoutHomeBannerView : UIView
{
    CAShapeLayer *_animationLayer;
    id <TBTakeoutHomeBannerViewDelegate> _delegate;
    TBTakeoutYSNewBannerView *_bannerNewView;
    NSArray *_items;
    NSArray *_itemImages;
}

@property(retain, nonatomic) NSArray *itemImages; // @synthesize itemImages=_itemImages;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) TBTakeoutYSNewBannerView *bannerNewView; // @synthesize bannerNewView=_bannerNewView;
@property(nonatomic) __weak id <TBTakeoutHomeBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CAShapeLayer *animationLayer; // @synthesize animationLayer=_animationLayer;
- (void).cxx_destruct;
- (void)commonInit;
- (void)reloadBannerItems:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

