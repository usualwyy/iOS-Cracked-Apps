//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIMMessageServiceBase.h"

#import "NSFetchedResultsControllerDelegate.h"
#import "TBIMQueryItemServiceAdapter.h"
#import "TBWangXinManagerDelegate.h"

@class NSDate, NSString, YWConversation;

@interface TBIMMessageServiceWangxin : TBIMMessageServiceBase <NSFetchedResultsControllerDelegate, TBWangXinManagerDelegate, TBIMQueryItemServiceAdapter>
{
    id <TBIMSessionAdapter> _session;
    long long _wantedMessageNum;
    YWConversation *_ywConversation;
    long long _nToalCount;
    id <TBTradeDetailServiceProtocol> _tradeDetailService;
    NSDate *_lastMessageTime;
    long long _count;
}

+ (id)shareService;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) NSDate *lastMessageTime; // @synthesize lastMessageTime=_lastMessageTime;
@property(retain, nonatomic) id <TBTradeDetailServiceProtocol> tradeDetailService; // @synthesize tradeDetailService=_tradeDetailService;
@property(nonatomic) long long nToalCount; // @synthesize nToalCount=_nToalCount;
@property(retain, nonatomic) YWConversation *ywConversation; // @synthesize ywConversation=_ywConversation;
@property(nonatomic) long long wantedMessageNum; // @synthesize wantedMessageNum=_wantedMessageNum;
@property(retain, nonatomic) id <TBIMSessionAdapter> session; // @synthesize session=_session;
- (void).cxx_destruct;
- (void)saveMsgImage:(id)arg1;
- (void)loginSuccess;
- (void)insertNeedSendMessages:(id)arg1;
- (void)reportNewMessages:(_Bool)arg1;
- (void)messageDidChange:(id)arg1 atIndexPath:(id)arg2 forChangeType:(unsigned long long)arg3 newIndexPath:(id)arg4;
- (_Bool)loadImageMessage:(id)arg1 currentMessage:(id)arg2 count:(unsigned long long)arg3 isFront:(_Bool)arg4;
- (_Bool)loadMessage:(id)arg1 lastMessage:(id)arg2 count:(unsigned long long)arg3;
- (void)leaveSession:(id)arg1;
- (void)enterSession:(id)arg1;
- (void)checkMessageUniqueId:(id)arg1;
- (_Bool)deleteMessage:(id)arg1;
- (_Bool)sendMessage:(id)arg1;
- (_Bool)resendMessage:(id)arg1;
- (id)generateVideoWihtLocalUrl:(id)arg1 previewImage:(id)arg2 duration:(long long)arg3 width:(double)arg4 height:(double)arg5 session:(id)arg6;
- (id)generateVoiceMessage:(id)arg1 withLocalAudio:(id)arg2 duration:(long long)arg3 session:(id)arg4;
- (_Bool)failedMessage:(id)arg1;
- (id)generateImageMessage:(id)arg1 session:(id)arg2;
- (id)generateTextMessage:(id)arg1 session:(id)arg2 withAiTaUserIdList:(id)arg3;
- (void)removeDelegate:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

