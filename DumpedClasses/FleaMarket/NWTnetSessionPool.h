//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface NWTnetSessionPool : NSObject
{
    NSMutableDictionary *_dict;
    NSRecursiveLock *_lock;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *dict; // @synthesize dict=_dict;
- (void).cxx_destruct;
- (_Bool)hasValidSession:(id)arg1 withScheme:(id)arg2 asyncCreate:(_Bool)arg3;
- (_Bool)isExist:(id)arg1 policy:(id)arg2;
- (void)disconnectWithUrls:(id)arg1 scenes:(id)arg2;
- (void)disconnectWithHost:(id)arg1 withoutIps:(id)arg2;
- (void)suspendAll;
- (void)remove:(id)arg1 hostUrl:(id)arg2;
- (id)get:(id)arg1 nilAutoInit:(_Bool)arg2;
- (id)get:(id)arg1;
- (id)init;

@end
