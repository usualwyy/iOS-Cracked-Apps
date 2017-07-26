//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASHMonitorProtocol.h"

@class NSString;

@interface NXTMonitorImpl : NSObject <ASHMonitorProtocol>
{
}

- (id)completionDigits:(id)arg1;
- (void)transformEvenID2006To2001inWebPage:(id)arg1;
- (void)updateNextPageSpmUrl:(id)arg1 andSourceID:(id)arg2 andTypeID:(id)arg3;
- (void)updateNextPageSpm:(id)arg1 andScm:(id)arg2;
- (void)updatePageSpm:(id)arg1 Spm:(id)arg2;
- (void)updateNextPageSpm:(id)arg1;
- (void)updateNextPageSpmUrl:(id)arg1 sid:(id)arg2;
- (void)updateNextPageSpmUrl:(id)arg1 spmCnt:(id)arg2 sid:(id)arg3;
- (void)commitEvent:(id)arg1 dict:(id)arg2;
- (void)ctrlClicked:(id)arg1 onPage:(id)arg2 args:(id)arg3;
- (void)ctrlClicked:(id)arg1 onPage:(id)arg2;
- (void)updateUserAccount:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)updateUserAccount:(id)arg1 userid:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)updatePageName:(id)arg1 withPageName:(id)arg2;
- (void)pageDisappear:(id)arg1;
- (void)pageAppear:(id)arg1 withPageName:(id)arg2;
- (void)pageAppear:(id)arg1;
- (void)setupMonitor:(id)arg1 block:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

