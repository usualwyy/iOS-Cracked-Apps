//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBDinamicLog.h"

@class NSString;

@interface TBDinamicLogger : NSObject <TBDinamicLog>
{
    id <TBDinamicLog> _logger;
}

+ (id)sharedLogger;
@property(retain, nonatomic) id <TBDinamicLog> logger; // @synthesize logger=_logger;
- (void).cxx_destruct;
- (void)logError:(id)arg1;
- (void)logDebug:(id)arg1;
- (void)logInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

