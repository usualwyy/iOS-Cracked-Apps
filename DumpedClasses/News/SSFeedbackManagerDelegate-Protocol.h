//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSError, SSFeedbackManager;

@protocol SSFeedbackManagerDelegate <NSObject>

@optional
- (void)feedbackManager:(SSFeedbackManager *)arg1 postMsgUserInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)feedbackManager:(SSFeedbackManager *)arg1 fetchedNewModels:(NSArray *)arg2 userInfo:(NSDictionary *)arg3 error:(NSError *)arg4;
@end
