//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCDataSourceProtocol.h"

@class IMOfficalAccountInfo<TBIMSessionOfficialAdapter>, NSArray, NSDate, NSDictionary, NSString;

@protocol MCOfficialDataSourceProtocol <MCDataSourceProtocol>
@property(copy, nonatomic) NSString *previewExt;
- (void)clearOfficalAccountNewFriendUnreadedAndExt;
- (NSString *)officalAccountNewFriendMsgTypeId;
- (void)updateOfficalAccountLastMessage:(id <MCOfficialMessageDOProtocol>)arg1 withAccountId:(NSString *)arg2;
- (void)clearOfficialLastMessage:(NSString *)arg1;
- (void)clearOfficalAccountMessage:(NSString *)arg1;
- (void)deleteMessageFromOfficalAccount:(NSString *)arg1 withMessageIds:(NSArray *)arg2;
- (void)messageListWithOfficialAccountId:(NSString *)arg1 fromMessageId:(NSString *)arg2 size:(long long)arg3 isHistoryMessage:(_Bool)arg4;
- (long long)tapTimeCompareResultForMsgTypeId:(NSString *)arg1 needCompareTime:(NSDate *)arg2;
- (void)setTapTimeForMsgTypeId:(NSString *)arg1;
- (_Bool)sendMessage:(id <MCOfficialMessageDOProtocol>)arg1 isRetry:(_Bool)arg2;
- (void)clearOfficalUnreadedWithMessageTypeId:(NSString *)arg1;
- (void)setOfficialAccount:(NSString *)arg1 push:(_Bool)arg2;
- (_Bool)isSubscribedOfficialAccount:(NSString *)arg1;
- (void)unsubscribeOfficialAccount:(NSString *)arg1;
- (void)subscribeOfficialAccount:(NSString *)arg1 param:(NSDictionary *)arg2;
- (void)updateOfficalAccountsStatus:(NSArray *)arg1;
- (void)loadOfficialInfoByID:(NSString *)arg1;
- (IMOfficalAccountInfo<TBIMSessionOfficialAdapter> *)getOfficialByID:(NSString *)arg1;
- (NSArray *)getOfficialInfo;
- (void)getOffcialRecentContactList;
- (void)removeDataSourceDelegate:(id <MCOfficialDataSourceDelegate>)arg1;
- (void)addDataSourceDelegate:(id <MCOfficialDataSourceDelegate>)arg1;
@end

