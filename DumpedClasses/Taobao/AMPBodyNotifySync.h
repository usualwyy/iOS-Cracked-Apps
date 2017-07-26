//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AMPBodyObject.h"

@class NSString;

@interface AMPBodyNotifySync : NSObject <AMPBodyObject>
{
    long long _bizId;
    long long _userId;
    long long _syncId;
    long long _time;
    long long _packTargetId;
}

@property(nonatomic) long long packTargetId; // @synthesize packTargetId=_packTargetId;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(nonatomic) long long syncId; // @synthesize syncId=_syncId;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
@property(nonatomic) long long bizId; // @synthesize bizId=_bizId;
- (void)parseFromData:(id)arg1;
- (void)parseFromDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

