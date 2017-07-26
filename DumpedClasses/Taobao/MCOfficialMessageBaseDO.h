//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCOfficialMessageDOProtocol.h"

@class NSString;

@interface MCOfficialMessageBaseDO : NSObject <MCOfficialMessageDOProtocol>
{
    _Bool _isRetry;
    unsigned long long _sendStatus;
    id <MCPacketProtocol> _packet;
}

@property(retain, nonatomic) id <MCPacketProtocol> packet; // @synthesize packet=_packet;
@property(nonatomic) unsigned long long sendStatus; // @synthesize sendStatus=_sendStatus;
@property(nonatomic) _Bool isRetry; // @synthesize isRetry=_isRetry;
- (void).cxx_destruct;
- (void)setTemplateid:(id)arg1;
- (id)templateid;
- (void)setMessageCode:(id)arg1;
- (id)messageCode;
- (void)setSenderUserNick:(id)arg1;
- (id)senderUserNick;
- (unsigned long long)direction;
- (void)setOfficialID:(id)arg1;
- (id)officialID;
- (void)setTimeDate:(id)arg1;
- (id)timeDate;
- (void)setSummary:(id)arg1;
- (id)summary;
- (long long)compare:(id)arg1;
- (id)messageID;
- (id)initWithPacket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

