//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBCKRecorderDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSDictionary, NSMutableArray, NSString, NSTimer, TBCKRecorder, TBCKRecorderToolsView, TBWTCameraBottomBar, TBWTCameraProgressBar, TBWTCameraTopBar, UILabel;

@interface TBWTRecoderViewController : TBViewController <TBCKRecorderDelegate, UIAlertViewDelegate>
{
    _Bool _isPush;
    NSDictionary *_outputData;
    TBWTCameraTopBar *_topBar;
    TBWTCameraBottomBar *_bottomBar;
    UILabel *_totalTimeLabel;
    TBWTCameraProgressBar *_segmentsView;
    long long _state;
    NSMutableArray *_segments;
    NSTimer *_timer;
    TBCKRecorderToolsView *_previewView;
    TBCKRecorder *_recorder;
}

@property(nonatomic) _Bool isPush; // @synthesize isPush=_isPush;
@property(retain, nonatomic) TBCKRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) TBCKRecorderToolsView *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableArray *segments; // @synthesize segments=_segments;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) TBWTCameraProgressBar *segmentsView; // @synthesize segmentsView=_segmentsView;
@property(retain, nonatomic) UILabel *totalTimeLabel; // @synthesize totalTimeLabel=_totalTimeLabel;
@property(retain, nonatomic) TBWTCameraBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) TBWTCameraTopBar *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) NSDictionary *outputData; // @synthesize outputData=_outputData;
- (void).cxx_destruct;
- (void)transitionToState:(long long)arg1;
- (void)recorderDidCompleteSession:(id)arg1;
- (void)recorder:(id)arg1 didCompleteSegment:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateAccomplishButtonAlpha:(double)arg1;
- (void)_onTick;
- (void)_updateTotalTimeView;
- (void)_onShutterButtonRelease:(id)arg1;
- (void)_onShutterButtonPress:(id)arg1;
- (void)_onAccomplishButtonClick:(id)arg1;
- (void)_tapBottomBarTap:(id)arg1;
- (void)_onDeleteButtonClick:(id)arg1;
- (void)_onFlipButtonClick:(id)arg1;
- (void)_onLightButtonClick:(id)arg1;
- (void)_close;
- (void)_onCloseButtonClick:(id)arg1;
- (void)_handleShutterPress:(id)arg1;
- (void)_handleShutterLongPress:(id)arg1;
- (double)_totalDuration;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

