//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMPBlockTask.h"

@class NSArray, NSString;

@interface AMPNotifyMessageBlockTask : NSObject <AMPBlockTask>
{
    _Bool _retryCount;
    _Bool _needSync;
    CDUnknownBlockType _finishAction;
    unsigned long long _messageType;
    NSArray *_notifyMessageList;
    NSString *_taskIdentify;
}

@property(nonatomic) _Bool needSync; // @synthesize needSync=_needSync;
@property(copy, nonatomic) NSString *taskIdentify; // @synthesize taskIdentify=_taskIdentify;
@property(retain, nonatomic) NSArray *notifyMessageList; // @synthesize notifyMessageList=_notifyMessageList;
@property(nonatomic) _Bool retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(copy, nonatomic) CDUnknownBlockType finishAction; // @synthesize finishAction=_finishAction;
- (void).cxx_destruct;
- (void)checkRequestProccess:(id)arg1 needCheckSyncIds:(id)arg2;
- (void)startTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

