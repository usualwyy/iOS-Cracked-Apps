//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VIEngine : NSObject
{
    double _taskTimeoutInterval;
}

+ (id)envStringWithOptions:(unsigned long long)arg1 params:(id)arg2;
+ (id)certSnByKey:(id)arg1;
+ (id)VIVersionString;
+ (id)bioDataWithParams:(id)arg1;
+ (id)envData;
+ (id)bioInfo;
+ (void)registAppContext:(id)arg1;
+ (id)engine;
+ (id)sharedInstance;
@property(nonatomic) double taskTimeoutInterval; // @synthesize taskTimeoutInterval=_taskTimeoutInterval;
- (void)monitorStartSDKByToken:(id)arg1 verifyId:(id)arg2 sceneId:(id)arg3 bizId:(id)arg4 verifyType:(id)arg5;
- (void)enqueueTask:(id)arg1;
- (void)startWithUniversalParams:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)convertToStanderTypeWithVerifyId:(id)arg1 extParams:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)startWithVerifyId:(id)arg1 verifyData:(id)arg2 extParams:(id)arg3 bizRequestData:(id)arg4 rpcProxy:(CDUnknownBlockType)arg5 onComplete:(CDUnknownBlockType)arg6;
- (void)startWithVerifyId:(id)arg1 verifyData:(id)arg2 extParams:(id)arg3 bizRequestData:(id)arg4 onComplete:(CDUnknownBlockType)arg5;
- (void)fastVerifyWithModuleRequest:(id)arg1 rpcProxy:(CDUnknownBlockType)arg2 onComplete:(CDUnknownBlockType)arg3;
- (void)fastVerifyWithModuleRequest:(id)arg1 onComplete:(CDUnknownBlockType)arg2;
- (void)startByKeyParams:(id)arg1 extParams:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
- (id)init;
- (void)setUp;

@end

