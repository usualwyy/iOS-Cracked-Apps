//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AMPDataRequest : NSObject
{
    _Bool _isDbReadAsync;
    _Bool _isNoMemoryCache;
    long long _strategy;
    long long _status;
    CDUnknownBlockType _notifyAction;
    CDUnknownBlockType _failAction;
}

@property(copy, nonatomic) CDUnknownBlockType failAction; // @synthesize failAction=_failAction;
@property(copy, nonatomic) CDUnknownBlockType notifyAction; // @synthesize notifyAction=_notifyAction;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
@property(nonatomic) _Bool isNoMemoryCache; // @synthesize isNoMemoryCache=_isNoMemoryCache;
@property(nonatomic) _Bool isDbReadAsync; // @synthesize isDbReadAsync=_isDbReadAsync;
- (void).cxx_destruct;
- (id)processRequest;
- (_Bool)saveDataToMem:(id)arg1 key:(id)arg2 data:(id)arg3;
- (id)getDataFromMem:(id)arg1 key:(id)arg2;
- (Class)getDataTypeClass;
- (id)calculateChangData:(id)arg1 fromNet:(id)arg2;
- (void)netUpdateFail:(id)arg1;
- (_Bool)isExpired:(id)arg1;
- (id)parseAMPRPCData:(id)arg1;
- (id)parseAcdsData:(id)arg1;
- (id)parseMtopData:(id)arg1;
- (id)generatePacketList;
- (id)generatePacket;
- (void)dbSave:(id)arg1;
- (id)dbRead:(id)arg1;
- (void)memorySave:(id)arg1;
- (id)memoryRead:(_Bool *)arg1;
- (id)init;

@end

