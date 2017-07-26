//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface MRVoiceDetector : NSObject
{
    int frameCount;
    unsigned long long gateMuteValue;
    unsigned int gateFrameMuteCount;
    unsigned long long gateMuteTime;
    unsigned int nMuteCount;
    int headVoiceSum;
    int voiceValue;
    unsigned int mRecordTime;
    unsigned int voiceCount;
    unsigned long long detectedFrameCount;
    _Bool mContinuous;
    double nVoiceEnergy;
    int voiceFrameCount;
    int nVoiceContinuous;
    int headFrameSum;
    _Bool _enableStartDetect;
    _Bool _enableStopDetect;
    int _state;
    id <MRVoiceDetectorDelegate> _delegate;
    unsigned long long _minRecordTime;
    unsigned long long _maxRecordTime;
    unsigned long long _maxMuteCount;
    unsigned long long _minMuteValue;
    unsigned long long _maxMuteValue;
    unsigned long long _minVoiceCount;
    NSMutableArray *_frameBuffer;
}

@property int state; // @synthesize state=_state;
@property(retain, nonatomic) NSMutableArray *frameBuffer; // @synthesize frameBuffer=_frameBuffer;
@property(nonatomic) unsigned long long minVoiceCount; // @synthesize minVoiceCount=_minVoiceCount;
@property(nonatomic) unsigned long long maxMuteValue; // @synthesize maxMuteValue=_maxMuteValue;
@property(nonatomic) unsigned long long minMuteValue; // @synthesize minMuteValue=_minMuteValue;
@property(nonatomic) unsigned long long maxMuteCount; // @synthesize maxMuteCount=_maxMuteCount;
@property(nonatomic) unsigned long long maxRecordTime; // @synthesize maxRecordTime=_maxRecordTime;
@property(nonatomic) unsigned long long minRecordTime; // @synthesize minRecordTime=_minRecordTime;
@property(nonatomic) _Bool enableStopDetect; // @synthesize enableStopDetect=_enableStopDetect;
@property(nonatomic) _Bool enableStartDetect; // @synthesize enableStartDetect=_enableStartDetect;
@property(nonatomic) __weak id <MRVoiceDetectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateMuteValueForVoice:(short)arg1;
- (void)_updateMuteValue:(short)arg1;
- (void)_udateVoice:(id)arg1;
- (void)stop;
- (void)update:(id)arg1;
- (void)_update_no_startstop_detect:(id)arg1;
- (void)_update_detect_start_stop:(id)arg1;
- (void)_update_detect_stop_only:(id)arg1;
- (void)setContinuous:(_Bool)arg1;
- (_Bool)isContinuous;
- (void)reset;
- (void)dealloc;
- (id)init;

@end

