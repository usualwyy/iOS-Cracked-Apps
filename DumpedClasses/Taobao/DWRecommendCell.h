//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CAAnimationDelegate.h"

@class CAShapeLayer, DWContext, DWVideoRecommendItemModel, NSMutableArray, NSString, UIButton, UIImageView, UILabel;

@interface DWRecommendCell : UIView <CAAnimationDelegate>
{
    _Bool _isAnimating;
    unsigned long long _index;
    UIButton *_playBtn;
    UIImageView *_bgimageView;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    DWContext *_context;
    DWVideoRecommendItemModel *_item;
    UIView *_maskView;
    CAShapeLayer *_lineChartLayer;
    NSMutableArray *_pointArray;
}

@property(retain, nonatomic) NSMutableArray *pointArray; // @synthesize pointArray=_pointArray;
@property(retain, nonatomic) CAShapeLayer *lineChartLayer; // @synthesize lineChartLayer=_lineChartLayer;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) DWVideoRecommendItemModel *item; // @synthesize item=_item;
@property(nonatomic) __weak DWContext *context; // @synthesize context=_context;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bgimageView; // @synthesize bgimageView=_bgimageView;
@property(retain, nonatomic) UIButton *playBtn; // @synthesize playBtn=_playBtn;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)encodeJumpUrl;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setupLineChartLayerAppearance;
- (void)playSelectedVideo;
- (void)setData:(id)arg1 withContext:(id)arg2;
- (void)updateConstraints;
- (void)setUpView;
- (void)addListener;
- (void)dealloc;
- (void)addGesture;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

