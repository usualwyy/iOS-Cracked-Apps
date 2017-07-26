//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TMViewTrackerCommitProtocol.h"
#import "UTExposureViewProtocol.h"

@class ATTrackerManager, NSString;

@interface ATTrackerDynamicProxy : NSObject <TMViewTrackerCommitProtocol, UTExposureViewProtocol>
{
    ATTrackerManager *_trackerManager;
}

@property(nonatomic) __weak ATTrackerManager *trackerManager; // @synthesize trackerManager=_trackerManager;
- (void).cxx_destruct;
- (id)exposureViewPropertiesWithView:(id)arg1 andUrl:(id)arg2;
- (id)getUTTrackBlockFromConfigItem:(id)arg1;
- (id)exposureViewTagWithView:(id)arg1 andUrl:(id)arg2;
- (_Bool)shouldExposeView:(id)arg1 withUrl:(id)arg2;
- (id)getSpmParamFromConfigItem:(id)arg1 contextView:(id)arg2;
- (id)prepareArgumentsForView:(id)arg1 url:(id)arg2 type:(id)arg3;
- (id)prepareArgumentsForView:(id)arg1 type:(id)arg2;
- (_Bool)hasConfigOfView:(id)arg1 type:(id)arg2;
- (id)pageNameForView:(id)arg1;
- (id)pageNameForPage:(id)arg1;
- (void)commitExposureEventForView:(id)arg1 withPageName:(id)arg2 eventID:(int)arg3 arg1:(id)arg4 arg2:(id)arg5 arg3:(id)arg6 args:(id)arg7;
- (void)commitClickEventForView:(id)arg1 withControlName:(id)arg2 andArgs:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
