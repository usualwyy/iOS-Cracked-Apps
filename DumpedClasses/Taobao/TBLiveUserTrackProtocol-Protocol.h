//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol TBLiveUserTrackProtocol <NSObject>
- (void)commitAppMonitorAlarm:(NSString *)arg1 monitorPoint:(NSString *)arg2 success:(_Bool)arg3 errorCode:(NSString *)arg4 errorMsg:(NSString *)arg5 arg:(NSString *)arg6;
- (void)commitAppMonitorArgs:(NSDictionary *)arg1;
- (void)tlog:(NSString *)arg1 level:(long long)arg2 exception:(NSString *)arg3 content:(NSString *)arg4;
- (void)commit:(int)arg1 name:(NSString *)arg2 comName:(NSString *)arg3 param:(NSDictionary *)arg4;
@end

