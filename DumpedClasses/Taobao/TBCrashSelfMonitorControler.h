//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSString;

@interface TBCrashSelfMonitorControler : NSObject
{
    NSString *_crashProductLogDirectory;
    NSLock *_lock;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (_Bool)purgePendingRepeatCrashReportAndReturnError:(id *)arg1;
- (id)loadPendingRepeatCrashReportDataAndReturnError:(id *)arg1;
- (_Bool)hasPendingRepeatCrashReport;
- (_Bool)copyCrashRepeatReport;
- (id)crashProductLogPath:(id)arg1;
- (id)crashProductLogDirectory;
- (_Bool)createLogFilePath;
- (void)sendToServer:(id)arg1 eventId:(int)arg2 arg1:(id)arg3 arg2:(id)arg4 arg3:(id)arg5 args:(id)arg6;
- (id)readFromFile;
- (void)writeToFileWithObject:(id)arg1;
- (void)resetRepeatFlag;
- (int)getCrashTimes;
- (_Bool)isNeedSendWithTrigger:(id)arg1;
- (_Bool)isRepeatWithCrashThread:(id)arg1;
- (id)readUserNick;
- (void)updateUserNick:(id)arg1;
- (id)readVersion;
- (void)updateVersion:(id)arg1;
- (void)resetSendFlag;
- (int)updateSendFlag;
- (id)init;

@end

