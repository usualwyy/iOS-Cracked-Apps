//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol SwarmDeviceService <NSObject>
- (long long)hostApp;
- (NSString *)channel;
- (NSString *)bundleDisplayName;
- (NSString *)bundleVersion;
- (NSString *)bundleShortVersion;
- (NSString *)idfa;
- (NSString *)udid;
- (NSString *)imei;
- (NSString *)diskCapacity;
- (NSString *)netType;
- (NSString *)mem;
- (NSString *)cpu;
@end
