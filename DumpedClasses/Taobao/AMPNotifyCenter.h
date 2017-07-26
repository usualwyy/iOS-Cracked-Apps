//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>;

@interface AMPNotifyCenter : NSObject
{
    NSObject<OS_dispatch_queue> *_proccessQueue;
    NSMutableArray *_dataArray;
    CDUnknownBlockType _callbackBlock;
}

+ (id)sharedCenter;
@property(copy, nonatomic) CDUnknownBlockType callbackBlock; // @synthesize callbackBlock=_callbackBlock;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
- (void).cxx_destruct;
- (void)clear;
- (void)enqueueNotifyData:(id)arg1;
- (void)registerCallBack:(CDUnknownBlockType)arg1 offlineCallback:(CDUnknownBlockType)arg2;
- (void)dispatchSafeSync:(CDUnknownBlockType)arg1;
- (id)init;

@end

