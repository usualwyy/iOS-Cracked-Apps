//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeAppComponent.h"

#import "MZTimerLabelDelegate.h"

@class NSString, UILabel, UIView, WeAppMZTimerLabel;

@interface WeAppTimerConntDownComponent : WeAppComponent <MZTimerLabelDelegate>
{
    _Bool _needTimerEnd;
    UIView *_timerCountDownView;
    WeAppMZTimerLabel *_timerLabel;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property(nonatomic) _Bool needTimerEnd; // @synthesize needTimerEnd=_needTimerEnd;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) WeAppMZTimerLabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(retain, nonatomic) UIView *timerCountDownView; // @synthesize timerCountDownView=_timerCountDownView;
- (void).cxx_destruct;
- (void)timerLabel:(id)arg1 finshedCountDownTimerWithTime:(double)arg2;
- (id)timerLabel:(id)arg1 customTextToDisplayAtTime:(double)arg2;
- (void)timerLabel:(id)arg1 countingTo:(double)arg2 timertype:(int)arg3;
- (int)getTimerCountDownHeight:(int)arg1 byMeasureSpec:(int)arg2 byItem:(id)arg3;
- (int)getTimerCountDownWidth:(int)arg1 byMeasureSpec:(int)arg2 byItem:(id)arg3;
- (void)onMeasureWithSpecW:(int)arg1 withSpecH:(int)arg2;
- (void)setCssTimerType:(id)arg1;
- (void)setCssFontSize:(id)arg1;
- (void)setCssTextColor:(id)arg1;
- (void)setCss;
- (void)refreshData;
- (void)layoutSubViews;
- (void)updateFrame;
- (void)setupDataValueAndConditon;
- (void)dealloc;
- (void)setupTimerCountDownViewEvent;
- (id)createView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

