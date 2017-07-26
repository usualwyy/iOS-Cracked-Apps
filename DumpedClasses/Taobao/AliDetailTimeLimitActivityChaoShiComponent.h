//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailComponent.h"

@class AliDetailTimeLimitActivityChaoShiModel, NSMutableArray, TBDetailTimerView, UIControl, UIImageView, UILabel, UIView;

@interface AliDetailTimeLimitActivityChaoShiComponent : AliDetailComponent
{
    UIImageView *_logoImageView;
    TBDetailTimerView *_timerView;
    UILabel *_timerTitleLabel;
    UIView *_activityView;
    UIControl *_countDownView;
    AliDetailTimeLimitActivityChaoShiModel *_tlaModel;
    NSMutableArray *_itemViews;
}

+ (double)componentHeightForObj:(id)arg1 preferredWidth:(double)arg2;
@property(retain, nonatomic) NSMutableArray *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) AliDetailTimeLimitActivityChaoShiModel *tlaModel; // @synthesize tlaModel=_tlaModel;
@property(retain, nonatomic) UIControl *countDownView; // @synthesize countDownView=_countDownView;
@property(retain, nonatomic) UIView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UILabel *timerTitleLabel; // @synthesize timerTitleLabel=_timerTitleLabel;
@property(retain, nonatomic) TBDetailTimerView *timerView; // @synthesize timerView=_timerView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void).cxx_destruct;
- (double)countdownWidth;
- (void)gotoMiaoshaActivityPage;
- (void)goCountDownActivity:(id)arg1;
- (void)layoutSubviews;
- (void)setObject:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

