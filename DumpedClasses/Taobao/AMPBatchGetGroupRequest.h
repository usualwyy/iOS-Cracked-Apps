//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPDataRequest.h"

@class NSMutableArray;

@interface AMPBatchGetGroupRequest : AMPDataRequest
{
    NSMutableArray *_listGroupId;
    double _expiredTime;
}

@property(nonatomic) double expiredTime; // @synthesize expiredTime=_expiredTime;
@property(retain, nonatomic) NSMutableArray *listGroupId; // @synthesize listGroupId=_listGroupId;
- (void).cxx_destruct;
- (_Bool)isExpiredForGroupInfo:(id)arg1 withCurrentTime:(id)arg2;
- (_Bool)isNotExpiredForGroupInfo:(id)arg1 withCurrentTime:(id)arg2;
- (Class)getDataTypeClass;
- (void)netUpdateFail:(id)arg1;
- (_Bool)isExpired:(id)arg1;
- (id)parseMtopData:(id)arg1;
- (id)generatePacket;
- (void)dbSave:(id)arg1;
- (id)dbRead:(id)arg1;
- (void)memorySave:(id)arg1;
- (id)memoryRead:(_Bool *)arg1;
- (id)initWithId:(id)arg1;

@end

