//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSSet, NSString;

@protocol UTPlugin <NSObject>
- (NSDictionary *)onBeforeEventDispatchWithPage:(NSString *)arg1 eventId:(NSString *)arg2 arg1:(NSString *)arg3 arg2:(NSString *)arg4 arg3:(NSString *)arg5 args:(NSString *)arg6;
- (NSSet *)getAttentionEventIds;
@end

