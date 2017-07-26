//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPDataRequest.h"

@interface AMPSyncRequest : AMPDataRequest
{
    _Bool _hasMore;
    unsigned long long _bizRetryCount;
    unsigned long long _messageType;
}

@property(nonatomic) unsigned long long messageType; // @synthesize messageType=_messageType;
@property(nonatomic) unsigned long long bizRetryCount; // @synthesize bizRetryCount=_bizRetryCount;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (id)parseMtopData:(id)arg1;
- (id)generatePacket;
- (void)dbSave:(id)arg1;
- (id)memoryRead:(_Bool *)arg1;
- (id)initWithMessageType:(unsigned long long)arg1;

@end

