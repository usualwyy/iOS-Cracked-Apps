//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface DWAdapterMgr : NSObject
{
    NSMutableDictionary *_adapterMap;
    NSLock *_moduleLock;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSLock *moduleLock; // @synthesize moduleLock=_moduleLock;
@property(retain, nonatomic) NSMutableDictionary *adapterMap; // @synthesize adapterMap=_adapterMap;
- (void).cxx_destruct;
- (id)classWithAdapterName:(id)arg1;
- (void)registerNewAdapter:(id)arg1 withClass:(id)arg2;
- (void)registerAdapter:(id)arg1 withClass:(id)arg2;

@end

