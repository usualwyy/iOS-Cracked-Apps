//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRecursiveLock, NSString;

@interface ACDSRPCFileCacheManager : NSObject
{
    NSRecursiveLock *_lock;
    NSString *_cachePath;
}

+ (id)getMd5:(id)arg1;
+ (_Bool)removeCacheByKey:(id)arg1;
+ (id)readCacheByKey:(id)arg1;
+ (_Bool)writeCache:(id)arg1 byKey:(id)arg2;
+ (id)instance;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath=_cachePath;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void).cxx_destruct;

@end

