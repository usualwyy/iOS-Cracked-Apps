//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBMainThreadRunloopMonitorProtocol.h"

@class NSObject<OS_dispatch_source>, NSString;

@interface TBRunloopObserver : NSObject <TBMainThreadRunloopMonitorProtocol>
{
    float _blockInterval;
    CDUnknownBlockType _handlerBlock;
    NSObject<OS_dispatch_source> *_timerSource;
    CDUnknownBlockType _runLoopObserverInnerBlock;
}

@property(copy, nonatomic) CDUnknownBlockType runLoopObserverInnerBlock; // @synthesize runLoopObserverInnerBlock=_runLoopObserverInnerBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(copy, nonatomic) CDUnknownBlockType handlerBlock; // @synthesize handlerBlock=_handlerBlock;
@property(nonatomic) float blockInterval; // @synthesize blockInterval=_blockInterval;
- (void).cxx_destruct;
- (void)blockTimerFired;
- (void)stopBlockTimer;
- (void)startBlockTimer;
- (struct __CFRunLoopObserver *)addRunloopObserver:(unsigned long long)arg1 order:(long long)arg2 mode:(struct __CFString *)arg3 handlerBlock:(CDUnknownBlockType)arg4;
- (_Bool)removeObserver:(struct __CFRunLoopObserver *)arg1 runloopMode:(struct __CFString *)arg2;
- (struct __CFRunLoopObserver *)addMainThreadRunloopBlockObserver:(CDUnknownBlockType)arg1;
- (struct __CFRunLoopObserver *)addMainThreadRunloopIdleObserver:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

