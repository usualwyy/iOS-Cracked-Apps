//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeAppSyncActionExecute.h"

#import "WeAppDataValueObserverProtocal.h"

@class NSString;

@interface WeAppSendRequestActionExecute : WeAppSyncActionExecute <WeAppDataValueObserverProtocal>
{
}

- (void)dealloc;
- (void)apiRequestDidCancel;
- (void)apiRequestDidFail;
- (void)apiRequestDidStart;
- (void)apiRequestDidLoad;
- (void)observeValueForApiRequestPath:(id)arg1 WithDataManager:(id)arg2 changeData:(id)arg3 context:(id)arg4;
- (void)doResponse;
- (void)doSendRequest:(id)arg1 actionItem:(id)arg2;
- (void)actionDoWithConditon:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

