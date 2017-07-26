//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBContactReceivedService : NSObject
{
    _Bool _isReadShareMessagesing;
    _Bool _isReadSentMessagesing;
}

@property(nonatomic) _Bool isReadSentMessagesing; // @synthesize isReadSentMessagesing=_isReadSentMessagesing;
@property(nonatomic) _Bool isReadShareMessagesing; // @synthesize isReadShareMessagesing=_isReadShareMessagesing;
- (void)deleteShareMessageWithFeedId:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)agreeFriendWithShareUserId:(id)arg1 operation:(id)arg2 channel:(id)arg3 feedId:(id)arg4 successBlock:(CDUnknownBlockType)arg5 failBlock:(CDUnknownBlockType)arg6;
- (void)readSentMessagesWithStartPage:(id)arg1 cursorStr:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (void)readShareMessagesWithStartPage:(id)arg1 cursorStr:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;
- (id)init;
- (void)dealloc;

@end

