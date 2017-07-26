//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKTMsgBusHelp.h"

#import "AMPPreLoadBiz.h"

@class NSString;

@interface AMPPreLoadBiz : MKTMsgBusHelp <AMPPreLoadBiz>
{
}

- (void)notifyGroupChange:(id)arg1;
- (void)notifyUserChange:(id)arg1;
- (void)notifyMessageChange:(id)arg1;
- (void)deleteSessionFile:(id)arg1;
- (void)deleteMessageFile:(id)arg1;
- (void)fetchOfficalHeadFileWithMsgTypeId:(id)arg1 headImageUrl:(id)arg2;
- (id)getOfficalHeadFileWithMsgTypeId:(id)arg1 headImageUrl:(id)arg2;
- (void)fetchGroupHeadFile:(id)arg1;
- (id)getGroupHeadFile:(id)arg1;
- (id)getWeexCardTempleteWithMsg:(id)arg1;
- (id)getDynamicCardWithCardCode:(id)arg1;
- (void)fetchUserHeadFile:(id)arg1;
- (id)getUserHeadFile:(id)arg1;
- (void)fetchVoiceFile:(id)arg1;
- (id)getVoiceFile:(id)arg1;
- (void)voiceMessageCome:(id)arg1;
- (void)textMessagePaser:(id)arg1 withCurrentVersion:(long long)arg2 withCustomParser:(id)arg3;
- (void)textMessageCome:(id)arg1;
- (void)fetchVideoPreviewFile:(id)arg1;
- (id)getVideoPreviewFile:(id)arg1;
- (void)videoMessageCome:(id)arg1;
- (void)systemMessageCome:(id)arg1;
- (void)fetchEmoticonFile:(id)arg1 priority:(long long)arg2;
- (id)getEmoticonFile:(id)arg1;
- (void)emotionMessageCome:(id)arg1 bWeak:(_Bool)arg2;
- (struct CGSize)bigSizeForMessage:(id)arg1;
- (void)fetchImageFile:(id)arg1 priority:(long long)arg2 plan:(long long)arg3;
- (id)getMaskImageFile:(id)arg1 haveBig:(_Bool *)arg2;
- (id)getOrigImageFile:(id)arg1 haveBig:(_Bool *)arg2;
- (void)imageMessageCome:(id)arg1 bWeak:(_Bool)arg2;
- (void)ampGroupInfoUpdated:(id)arg1 changeFlag:(id)arg2;
- (void)ampMessageClearInSession:(id)arg1;
- (void)ampUserUpdated:(id)arg1;
- (void)ampMessageLoad:(id)arg1 weakReminder:(_Bool)arg2;
- (void)ampMessageLoad:(id)arg1;
- (void)ampMessageDidChange:(id)arg1 changeType:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

