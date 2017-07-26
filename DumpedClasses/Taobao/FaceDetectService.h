//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABDetectListener.h"

@class NSMutableArray, NSString;

@interface FaceDetectService : NSObject <ABDetectListener>
{
    int _totalFrame;
    id <FaceDetectServiceDelegate> _fdServiceDelegate;
    id <ABLivenessDetector> _livenessDetector;
    NSMutableArray *_detectInfoArray;
}

+ (id)sharedInstance;
@property(nonatomic) int totalFrame; // @synthesize totalFrame=_totalFrame;
@property(retain, nonatomic) NSMutableArray *detectInfoArray; // @synthesize detectInfoArray=_detectInfoArray;
@property(retain, nonatomic) id <ABLivenessDetector> livenessDetector; // @synthesize livenessDetector=_livenessDetector;
@property(nonatomic) __weak id <FaceDetectServiceDelegate> fdServiceDelegate; // @synthesize fdServiceDelegate=_fdServiceDelegate;
- (void).cxx_destruct;
- (_Bool)checkImageRect:(id)arg1;
- (_Bool)moveCheck;
- (void)saveDetectInfoHistory:(id)arg1;
- (int)detectDistance:(struct CGRect)arg1;
- (void)onFrameDetected:(id)arg1 andTimeout:(float)arg2;
- (int)onDetectSuccess:(id)arg1;
- (void)onDetectFailed:(int)arg1;
- (void)restartDetect;
- (_Bool)startDetect;
- (id)getValidFrame;
- (id)getAlgorithmLog;
- (void)changeDetectType:(int)arg1;
- (void)detectWithBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;
- (void)closeDetect;
- (void)reset;
- (void)initDetector;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

