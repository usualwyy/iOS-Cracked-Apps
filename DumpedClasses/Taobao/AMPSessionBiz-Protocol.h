//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPBaseBiz.h"

@class NSArray, NSMutableDictionary, NSString, TBAMPSession;

@protocol AMPSessionBiz <AMPBaseBiz>
@property(retain, nonatomic) NSString *currentSessionId;
- (void)creatConversation:(NSString *)arg1 name:(NSString *)arg2 type:(NSString *)arg3 ext:(NSMutableDictionary *)arg4 result:(void (^)(id, NSError *))arg5;
- (void)creatConversation:(NSString *)arg1 name:(NSString *)arg2 type:(NSString *)arg3 itemId:(NSString *)arg4 url:(NSString *)arg5 content:(NSString *)arg6 result:(void (^)(id, NSError *))arg7;
- (NSArray *)batchCheckSession:(NSArray *)arg1;
- (void)setSession:(NSString *)arg1 managerRemind:(_Bool)arg2;
- (void)setSession:(NSString *)arg1 atRemind:(_Bool)arg2;
- (void)setSession:(NSString *)arg1 remind:(_Bool)arg2;
- (void)setSession:(NSString *)arg1 remindType:(int)arg2;
- (_Bool)isSessionExist:(NSString *)arg1;
- (TBAMPSession *)sessionWithId:(NSString *)arg1 needCreat:(_Bool)arg2 local:(_Bool)arg3;
- (TBAMPSession *)sessionWithId:(NSString *)arg1 needCreat:(_Bool)arg2;
- (NSArray *)sessionList;
- (NSArray *)sessionListInMemonry;
- (void)clearShareItemUnreadedCountOfSessionWithId:(NSString *)arg1;
- (void)clearUnreadedCountOnServerWithSessionId:(NSString *)arg1;
- (void)clearAiTaOfSessionWithId:(NSString *)arg1;
- (void)clearUnreadedCountOfSessionWithId:(NSString *)arg1;
- (void)deleteSessionWithSessionIds:(NSArray *)arg1;
- (void)saveSessions:(NSArray *)arg1 needNotify:(_Bool)arg2;
- (void)notifySessions:(NSArray *)arg1;
@end

