//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YWConversation.h"

@class NSString;

@interface YWConversationUnsupported : YWConversation
{
    NSString *_internalSessionId;
}

+ (id)makeConversationWithWWSession:(id)arg1 baseContext:(id)arg2;
+ (id)fetchConversationByConversationId:(id)arg1 creatIfNotExist:(_Bool)arg2 baseContext:(id)arg3;
@property(copy, nonatomic) NSString *internalSessionId; // @synthesize internalSessionId=_internalSessionId;
- (void).cxx_destruct;
- (id)wwsessionId;
- (id)conversationLatestMessage;
- (id)conversationId;
- (id)initWithConversationId:(id)arg1 baseContext:(id)arg2;

@end

