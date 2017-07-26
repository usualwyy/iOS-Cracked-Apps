//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UTMCConfig.h"

@class NSMutableArray, NSMutableDictionary, NSString, UTMCKeyValueEntity;

@interface UTMCConfigBusiness : NSObject <UTMCConfig>
{
    NSString *configName;
    NSString *tableCols;
    _Bool _hasSetTable;
    NSMutableArray *flatTable;
    NSMutableDictionary *treeTable;
    struct dispatch_queue_s *mMethodQueue;
    id mOptLock;
    struct dispatch_semaphore_s *_hasreadDB;
    UTMCKeyValueEntity *ltimestamp;
}

@property(nonatomic) _Bool hasSetTable; // @synthesize hasSetTable=_hasSetTable;
@property struct dispatch_semaphore_s *hasreadDB; // @synthesize hasreadDB=_hasreadDB;
- (void).cxx_destruct;
- (id)flatTableToTreeTable:(id)arg1;
- (void)treeTableToFlatTable:(id)arg1;
- (id)getFlatTable;
- (id)getTreeTable;
- (void)onAdashConfFail:(id)arg1;
- (void)onNoAdashConfArrived:(id)arg1;
- (void)onAdashConfArrived:(id)arg1 confContent:(id)arg2;
- (id)getConfigName;
- (id)getConfigEntityFromTable:(id)arg1 mainKey:(id)arg2 with:(id)arg3;
- (void)setTableFromDB;
- (_Bool)hasTable:(id)arg1;
- (id)queryConfigs:(id)arg1 withCols:(id)arg2 withEntity:(id)arg3 condition:(id)arg4;
- (id)queryConfigs:(id)arg1 withCols:(id)arg2 withEntity:(id)arg3;
- (void)storeConfigs:(id)arg1;
- (void)createTableInDB:(id)arg1 cols:(id)arg2;
- (void)createTableInDB:(id)arg1;
- (void)dropTable:(id)arg1;
- (void)onConfigUpdate:(id)arg1 withNameSpace:(id)arg2;
- (void)onConfigArrived:(id)arg1 withNameSpace:(id)arg2 setTimeStamp:(CDUnknownBlockType)arg3;
- (void)setTimeStamp:(id)arg1 withKey:(id)arg2;
- (void)initTimeStamp:(id)arg1;
- (void)configItemDecode:(id)arg1 withKey:(id)arg2;
- (void)configDecode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

