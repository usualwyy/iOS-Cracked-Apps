//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliDBSQLExtProcessor.h"

@class AliDB, NSString;

@interface MKTVfsDBAdapter : NSObject <AliDBSQLExtProcessor>
{
    AliDB *_db;
}

+ (id)vfsDatasetToArray:(id)arg1;
+ (void)openDBWithCallback:(CDUnknownBlockType)arg1;
+ (void)asyncQuerySql:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)procUpdateSql:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (void)asyncUpdateSql:(id)arg1 withCallback:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
@property(retain, nonatomic) AliDB *db; // @synthesize db=_db;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

