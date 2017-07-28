//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DGPAnimateRealtimeImageView, UIImageView, UILabel;

@interface DGPTransitRetalTimeView : UIView
{
    UILabel *_stopNameLabel;
    UIImageView *_dotLeftImageView;
    DGPAnimateRealtimeImageView *_realtimeImageView;
    UILabel *_realTimeLabel;
    UIImageView *_dotRightImageView;
    UILabel *_stationNameLabel;
}

@property(retain, nonatomic) UILabel *stationNameLabel; // @synthesize stationNameLabel=_stationNameLabel;
@property(retain, nonatomic) UIImageView *dotRightImageView; // @synthesize dotRightImageView=_dotRightImageView;
@property(retain, nonatomic) UILabel *realTimeLabel; // @synthesize realTimeLabel=_realTimeLabel;
@property(retain, nonatomic) DGPAnimateRealtimeImageView *realtimeImageView; // @synthesize realtimeImageView=_realtimeImageView;
@property(retain, nonatomic) UIImageView *dotLeftImageView; // @synthesize dotLeftImageView=_dotLeftImageView;
@property(retain, nonatomic) UILabel *stopNameLabel; // @synthesize stopNameLabel=_stopNameLabel;
- (void).cxx_destruct;
- (void)setHiddenRealtimeImage:(_Bool)arg1;
- (void)setHiddenRealtime:(_Bool)arg1;
- (void)alreadyAtTheStationWithStr:(id)arg1 stationName:(id)arg2 lineName:(id)arg3;
- (void)refreshContentWithLineName:(id)arg1 time:(id)arg2 statusName:(id)arg3;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
