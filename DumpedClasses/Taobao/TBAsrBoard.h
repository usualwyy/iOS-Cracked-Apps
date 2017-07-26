//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, UIImageView;

@interface TBAsrBoard : UIView
{
    NSTimer *timer;
    float vel;
    float curHeight;
    int status;
    int radius;
    int curSize;
    float targetHeight;
    float voiceHeight;
    float startAngle;
    float centralAngle;
    _Bool isLoading;
    struct XPeakVertex m_vertexArray[5];
    UIImageView *micView;
    UIImageView *clickView;
    int downCount;
    id <TBAsrBoardDelegate> _delegate;
}

@property(nonatomic) id <TBAsrBoardDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
- (void)ticker;
- (void)startLoading;
- (void)getResult;
- (void)stop;
- (void)startRecording;
- (void)start;
- (void)setVolume:(int)arg1;
- (void)asrMicClicked:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 Offset:(float)arg2 Delegate:(id)arg3;

@end
