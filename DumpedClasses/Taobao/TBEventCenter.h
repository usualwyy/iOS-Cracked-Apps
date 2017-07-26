//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, TBEventSubscription;

@interface TBEventCenter : NSObject
{
    _Bool _destroyed;
    NSMutableDictionary *_subscriptions;
    TBEventSubscription *_defaultSubscription;
}

+ (void)destroyInstanceByName:(id)arg1;
+ (void)destroyInstanceByToken:(long long *)arg1;
+ (id)instanceByName:(id)arg1;
+ (id)instanceByToken:(long long *)arg1;
+ (id)sharedInstance;
@property(nonatomic) _Bool destroyed; // @synthesize destroyed=_destroyed;
@property(retain, nonatomic) TBEventSubscription *defaultSubscription; // @synthesize defaultSubscription=_defaultSubscription;
@property(retain, nonatomic) NSMutableDictionary *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void).cxx_destruct;
- (void)invokeSubscriber:(id)arg1 event:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)postToSubscription:(id)arg1 event:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)postEvent:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)postEvent:(id)arg1;
- (void)unregisterDefaultSubscribe;
- (void)unregisterWithEventId:(unsigned long long)arg1 subscriber:(id)arg2;
- (void)unregisterWithEventId:(unsigned long long)arg1;
- (void)registerDefaultSubscribe:(id)arg1;
- (void)registerWithEventId:(unsigned long long)arg1 subscriber:(id)arg2 filter:(id)arg3;
- (void)registerWithEventId:(unsigned long long)arg1 subscriber:(id)arg2;

@end

