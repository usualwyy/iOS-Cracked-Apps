//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBInnerMutexLockWrapper : NSObject
{
    struct _opaque_pthread_mutex_t *_ptrMTLock;
    struct _opaque_pthread_mutex_t _mtLock;
}

@property(nonatomic) struct _opaque_pthread_mutex_t mtLock; // @synthesize mtLock=_mtLock;
@property(nonatomic) struct _opaque_pthread_mutex_t *ptrMTLock; // @synthesize ptrMTLock=_ptrMTLock;
- (void)dealloc;
- (id)init;

@end

