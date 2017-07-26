//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface UTMCRealTimeLogCaches : NSObject
{
    NSMutableArray *_caches;
    struct _opaque_pthread_mutex_t _caches_lock;
}

@property(nonatomic) struct _opaque_pthread_mutex_t caches_lock; // @synthesize caches_lock=_caches_lock;
@property(retain, nonatomic) NSMutableArray *caches; // @synthesize caches=_caches;
- (void).cxx_destruct;
- (void)clean;
- (id)validLogsWithTimeInterval:(double)arg1;
- (double)validTimeIntervalFromFirstLog;
- (void)removeLogs:(id)arg1;
- (void)addLog:(id)arg1;
- (id)init;

@end

