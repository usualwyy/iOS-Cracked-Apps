//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JVSRunner.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface JVSEvaluator : JVSRunner
{
    int _instanceCount;
    NSMutableArray *_instances;
    int _nextInstanceIndex;
    NSObject<OS_dispatch_semaphore> *_inflightSemaphore;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (void)processNodesOfInstance:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)finishInstance:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)evaluate:(CDUnknownBlockType)arg1;
- (void)call:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)callInQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithNet:(id)arg1 device:(id)arg2;

@end

