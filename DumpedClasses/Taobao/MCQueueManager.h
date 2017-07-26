//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface MCQueueManager : NSObject
{
    NSObject<OS_dispatch_queue> *_mutiCastDelegateSerialQueue;
    NSObject<OS_dispatch_queue> *_timerSerialQueue;
    NSObject<OS_dispatch_queue> *_receiveMessageSerialQueue;
    NSObject<OS_dispatch_queue> *_sendMessageSerialQueue;
    NSObject<OS_dispatch_queue> *_backgroundSerialQueue;
}

+ (id)getSendMessageSerialQueue;
+ (id)getReceiveMessageSerialQueue;
+ (id)getTimerSerialQueue;
+ (id)getMutiCastDelegateSerialQueue;
+ (id)shareInstance;
- (void).cxx_destruct;
- (id)init;

@end

