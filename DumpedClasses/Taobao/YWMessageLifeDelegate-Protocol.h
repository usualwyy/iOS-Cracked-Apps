//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSString, YWMessageLifeContext;

@protocol YWMessageLifeDelegate <NSObject>

@optional
- (void)messageLifeDidSend:(NSString *)arg1 conversationId:(NSString *)arg2 result:(NSError *)arg3;
- (YWMessageLifeContext *)messageLifeWillSend:(YWMessageLifeContext *)arg1;
@end

