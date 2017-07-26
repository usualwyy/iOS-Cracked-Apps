//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "OrangeRetry.h"

@class NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString, NSTimer;

@interface OrangeGroupConfigManager : NSObject <OrangeRetry>
{
    _Bool _timeout;
    NSMutableDictionary *_groupConfigReqeustDict;
    NSMutableDictionary *_groupConfigModelDict;
    NSOperationQueue *_queue;
    NSRecursiveLock *_locker;
    NSMutableDictionary *_initializeNamespaceDict;
    NSTimer *_timer;
}

+ (void)initialize;
+ (id)shareInstance;
@property _Bool timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSMutableDictionary *initializeNamespaceDict; // @synthesize initializeNamespaceDict=_initializeNamespaceDict;
@property(retain, nonatomic) NSRecursiveLock *locker; // @synthesize locker=_locker;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *groupConfigModelDict; // @synthesize groupConfigModelDict=_groupConfigModelDict;
@property(retain, nonatomic) NSMutableDictionary *groupConfigReqeustDict; // @synthesize groupConfigReqeustDict=_groupConfigReqeustDict;
- (void).cxx_destruct;
- (void)postNotificationWithGroupName:(id)arg1 groupConfig:(id)arg2 ret:(_Bool)arg3;
- (void)retryUpdateIndexIfNeed;
- (id)getIndexFileName:(id)arg1;
- (id)getGroupConfigByNamespace:(id)arg1;
- (void)setGroupConfigModelUpateTime:(id)arg1;
- (void)batchUpdateNamespaceAck;
- (void)apiServerUpdateGroupConfigWithRequest:(id)arg1;
- (void)cdnUpdateGroupConfigWithReqeust:(id)arg1;
- (void)updateWithRequest:(id)arg1;
- (void)updateGroupConfigWithOrangeIndexNamespaceModel:(id)arg1 url:(id)arg2 protocol:(id)arg3;
- (void)initializeNamespace:(id)arg1;
- (void)updateInitializeNamespace;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

