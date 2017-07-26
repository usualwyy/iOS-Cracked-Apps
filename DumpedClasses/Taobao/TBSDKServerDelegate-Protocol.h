//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString, TBSDKServer;

@protocol TBSDKServerDelegate <NSObject>

@optional
- (NSArray *)requestCache:(TBSDKServer *)arg1 responseHeader:(NSDictionary *)arg2 body:(NSString *)arg3;
- (void)requestFailed:(TBSDKServer *)arg1;
- (void)requestSuccess:(TBSDKServer *)arg1;
- (void)didLoadCache:(TBSDKServer *)arg1 responseHeader:(NSDictionary *)arg2 body:(NSString *)arg3;
- (void)requestReceivedResponseHeaders:(NSDictionary *)arg1;
- (void)requestStarted:(TBSDKServer *)arg1;
@end

