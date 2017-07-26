//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MRecognizerDelegate.h"
#import "MozartDecodeHandler.h"
#import "MozartRecordHandler.h"

@class NSArray, NSData, NSMutableDictionary, NSString, NSTimer, TBFenceGatherData, TSpeechRecognizer;

@interface NFIService : NSObject <MozartRecordHandler, MozartDecodeHandler, MRecognizerDelegate>
{
    _Bool _micErr;
    int _timeIndex;
    int _handleCount;
    unsigned long long _type;
    NSTimer *_timer;
    CDUnknownBlockType _handler;
    NSArray *_timetable;
    TBFenceGatherData *_fenceData;
    NSData *_sonicwaveData;
    NSString *_voiceFingerprintType;
    NSString *_waveSceneId;
    TSpeechRecognizer *_recognizer;
    NSMutableDictionary *_speechRecognizeResult;
    NSData *_speechBuffer;
}

+ (id)getInstance;
@property(retain, nonatomic) NSData *speechBuffer; // @synthesize speechBuffer=_speechBuffer;
@property(retain, nonatomic) NSMutableDictionary *speechRecognizeResult; // @synthesize speechRecognizeResult=_speechRecognizeResult;
@property(retain, nonatomic) TSpeechRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) _Bool micErr; // @synthesize micErr=_micErr;
@property(retain, nonatomic) NSString *waveSceneId; // @synthesize waveSceneId=_waveSceneId;
@property(retain, nonatomic) NSString *voiceFingerprintType; // @synthesize voiceFingerprintType=_voiceFingerprintType;
@property(retain, nonatomic) NSData *sonicwaveData; // @synthesize sonicwaveData=_sonicwaveData;
@property(retain, nonatomic) TBFenceGatherData *fenceData; // @synthesize fenceData=_fenceData;
@property(nonatomic) int handleCount; // @synthesize handleCount=_handleCount;
@property(nonatomic) int timeIndex; // @synthesize timeIndex=_timeIndex;
@property(retain, nonatomic) NSArray *timetable; // @synthesize timetable=_timetable;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)stop;
- (void)processMozartDataCollection:(id)arg1;
- (void)processFenceDataCollection:(int)arg1;
- (void)processTimetable;
- (void)handleData:(id)arg1;
- (void)onResultWithSonicwaveData:(id)arg1;
- (void)handleRecordNoPermission;
- (void)speechRecognize:(void *)arg1 withLength:(int)arg2;
- (void)handleRecordInputBuffer:(void *)arg1 withLength:(int)arg2;
- (int)getDecodeAlgorithm;
- (int)getWaveBytesNum;
- (short)getWaveSceneId;
- (void)startWithType:(unsigned long long)arg1 timetable:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)recognizer:(id)arg1 didCompleteRecognizingWithResult:(id)arg2 error:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

