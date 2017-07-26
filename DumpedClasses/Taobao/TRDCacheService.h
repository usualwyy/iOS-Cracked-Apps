//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBRWQueueProtocol.h"

@class NSString, TBRWQueue, TRDOpConfig, TRDUploadService;

@interface TRDCacheService : NSObject <TBRWQueueProtocol>
{
    _Bool _bCurrentCacheType;
    double _endTime;
    TBRWQueue *_logQueue;
    TRDOpConfig *_cmdConfig;
    struct TRDLogEngine *_pLogEngine;
    TRDUploadService *_uploadService;
}

@property(nonatomic) _Bool bCurrentCacheType; // @synthesize bCurrentCacheType=_bCurrentCacheType;
@property(retain, nonatomic) TRDUploadService *uploadService; // @synthesize uploadService=_uploadService;
@property(nonatomic) struct TRDLogEngine *pLogEngine; // @synthesize pLogEngine=_pLogEngine;
@property(nonatomic) __weak TRDOpConfig *cmdConfig; // @synthesize cmdConfig=_cmdConfig;
@property(retain, nonatomic) TBRWQueue *logQueue; // @synthesize logQueue=_logQueue;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
- (void).cxx_destruct;
- (void)tickReadThreshold:(id)arg1 userInfo:(id)arg2;
- (void)offlineCache:(id)arg1;
- (void)syncCacheToFile;
- (void)cache:(id)arg1;
- (void)setCacheRealTimeSwitch:(_Bool)arg1;
- (void)cleanCacheLogFiles;
- (id)GetStorageFiles:(struct TBundle *)arg1;
- (id)getUploadLocalLogByDayNum:(long long)arg1 andLogType:(id)arg2;
- (id)getUploadLocalLogByTime:(id)arg1 andLogType:(id)arg2;
- (id)initWithConfig:(id)arg1;
- (void)dealloc;
- (void)formatConfig:(struct TBundle *)arg1 andVersion:(long long)arg2 andMaxSize:(long long)arg3 andMaxCnt:(long long)arg4 andNumMax:(long long)arg5 andMemMax:(long long)arg6 andNSModule:(id)arg7 andSubConfig:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

