//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableArray;

@interface NWPolicyDNSCache : NSObject
{
    NSLock *log_Lock;
    NSMutableArray *connArray;
}

+ (void)asyncSchemeHandler:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (void)schemaHandler:(id)arg1;
+ (id)shareInstance;
- (void).cxx_destruct;
- (id)init;

@end

