//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ACDSUpdateLogDBManager : NSObject
{
}

+ (void)removeUpdateLogItemOfUser:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)getClearUpdateLogSql:(id)arg1;
+ (id)getClearUpdateLogSql:(id)arg1 withUserID:(id)arg2;
+ (void)removeUpdateLogItem:(id)arg1 withUserID:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)removeSpecificUpdateLogItem:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)updateUpdateLogItem:(id)arg1 withProcessCnt:(int)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)readAllUpdateLogItemOfUser:(id)arg1 withCnt:(int)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)readSpecificUpdateLogItem:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)readUpdateLogItem:(id)arg1 withUserID:(id)arg2 withCnt:(int)arg3 withCallback:(CDUnknownBlockType)arg4;
+ (void)insertUpdateLogItem:(id)arg1 withUserID:(id)arg2 withUpdateLogID:(id)arg3 withDatasource:(id)arg4 withCallback:(CDUnknownBlockType)arg5;

@end

