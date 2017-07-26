//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>;

@interface NXASAsyncTransaction : NSObject
{
    NSObject<OS_dispatch_group> *_group;
    NSMutableArray *_operations;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    CDUnknownBlockType _completionBlock;
    unsigned long long _state;
}

@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
- (void).cxx_destruct;
- (void)_ensureTransactionData;
- (void)waitUntilComplete;
- (void)completeTransaction;
- (void)commit;
- (void)cancel;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addAsyncOperationWithBlock:(CDUnknownBlockType)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithCallbackQueue:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

