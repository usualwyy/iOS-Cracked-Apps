//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMotionManager, NSMutableArray, NSOperationQueue;

@interface ShakeSensor : NSObject
{
    float lastAccess[3];
    _Bool _isShakeEnabled;
    CMMotionManager *_motionManager;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_registerModules;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableArray *registerModules; // @synthesize registerModules=_registerModules;
@property _Bool isShakeEnabled; // @synthesize isShakeEnabled=_isShakeEnabled;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
- (void).cxx_destruct;
- (void)config;
- (void)requestDetection;
- (void)unregisterService;
- (void)registerService:(CDUnknownBlockType)arg1;
- (void)registerService:(CDUnknownBlockType)arg1 shakeConfig:(id)arg2;
- (void)unregisterService:(id)arg1;
- (void)registerService:(CDUnknownBlockType)arg1 shakeConfig:(id)arg2 withModule:(id)arg3;

@end

