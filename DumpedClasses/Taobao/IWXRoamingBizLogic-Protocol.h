//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString, WWTribeMessage, WXRoamingTimeLine;

@protocol IWXRoamingBizLogic <NSObject>
@property(retain, nonatomic) WXRoamingTimeLine *roamingTimeLine;
@property(nonatomic) long long roamingServiceState;
- (void)deleteAllRecentContactsWithDelegate:(id <WXRoamingBizLogicV2Delegate>)arg1;
- (void)deleteRecentContactsForSellerWithContactId:(NSArray *)arg1 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg2;
- (void)deleteRecentContactsWithContactId:(NSArray *)arg1 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg2;
- (void)manualRoamRecentContactsForSellerWithCount:(unsigned long long)arg1 withDelegate:(id <WXRoamingBizLogicV2Delegate>)arg2;
- (void)manualRoamRecentContactsWithCount:(unsigned long long)arg1 withDelegate:(id <WXRoamingBizLogicV2Delegate>)arg2;
- (void)roamBatchP2PReceiverReadFlag:(NSString *)arg1 WithMessageInfo:(NSArray *)arg2 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg3;
- (void)autoRoamP2PChatLogExForSellerWithContactId:(NSString *)arg1 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg2;
- (void)manualRoamP2PChatLogExForSellerWithContactId:(NSString *)arg1 andEndTime:(NSDate *)arg2 andCount:(unsigned long long)arg3 andNextKey:(NSString *)arg4 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg5;
- (void)autoRoamP2PChatLogExForBuyerWithContactId:(NSString *)arg1 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg2;
- (void)manualRoamP2PChatLogExForBuyerWithContactId:(NSString *)arg1 andEndTime:(NSDate *)arg2 andCount:(unsigned long long)arg3 andNextKey:(NSString *)arg4 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg5;
- (void)autoRoamP2PChatLogWithContactId:(NSString *)arg1 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg2;
- (void)manualRoamP2PChatLogWithContactId:(NSString *)arg1 andEndTime:(NSDate *)arg2 andCount:(unsigned long long)arg3 andNextKey:(NSString *)arg4 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg5;
- (void)setPasswordOfQueryChatLog:(NSString *)arg1 withDelegate:(id <WXRoamingBizLogicV2Delegate>)arg2;
- (void)checkePasswordOfQueryChatLog:(NSString *)arg1 withDelegate:(id <WXRoamingBizLogicV2Delegate>)arg2;
- (void)resetRoamingService;
- (void)setServiceState:(long long)arg1 withDelegate:(id <WXRoamingBizLogicV2Delegate>)arg2;
- (void)getServiceStateWithDelegate:(id <WXRoamingBizLogicV2Delegate>)arg1;

@optional
- (void)roamBatchTribeChatLogWithTribeId:(NSArray *)arg1 andCount:(unsigned long long)arg2 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg3;
- (void)autoRoamTribeChatLogWithTribeId:(NSString *)arg1 andEndTime:(NSDate *)arg2 andCount:(unsigned long long)arg3 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg4;
- (void)roamTribeContextChatLogForTribeMessage:(WWTribeMessage *)arg1 count:(unsigned long long)arg2 rangFlag:(int)arg3 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg4;
- (void)roamReadAndUnreadMemberListOfTribeAtMessage:(WWTribeMessage *)arg1 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg2;
- (void)roamReadAndUnreadCountOfTribeAtMessages:(NSArray *)arg1 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg2;
- (void)roamReadAndUnreadCountOfTribes;
- (void)roamTribeAtMessagesWithTribeId:(NSString *)arg1 andEndTime:(NSDate *)arg2 andCount:(unsigned long long)arg3 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg4;
- (void)autoRoamTribeChatLogWithTribeId:(NSString *)arg1 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg2;
- (void)manualRoamTribeChatLogWithTribeId:(NSString *)arg1 andEndTime:(NSDate *)arg2 andCount:(unsigned long long)arg3 andNextKey:(NSString *)arg4 andDelegate:(id <WXRoamingBizLogicV2Delegate>)arg5;
@end

