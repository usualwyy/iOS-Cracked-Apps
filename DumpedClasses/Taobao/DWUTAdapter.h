//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DWUserTrackProtocol.h"

@class NSString;

@interface DWUTAdapter : NSObject <DWUserTrackProtocol>
{
}

+ (id)sharedInstance;
- (id)utdid;
- (void)log:(id)arg1 message:(id)arg2;
- (void)pageDisAppeaPageObject:(id)arg1;
- (void)pageAppear:(id)arg1 pageObject:(id)arg2;
- (void)commitAppMonitorAlarm:(id)arg1 monitorPoint:(id)arg2 success:(_Bool)arg3 errorCode:(id)arg4 errorMsg:(id)arg5 arg:(id)arg6;
- (void)commitAppMonitorArgs:(id)arg1;
- (void)commit:(int)arg1 name:(id)arg2 comName:(id)arg3 param:(id)arg4;
- (void)commit:(int)arg1 arg1:(id)arg2 arg2:(id)arg3 arg3:(id)arg4 args:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

