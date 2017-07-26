//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBPSAdapterCenter : NSObject
{
    id <TBShareServiceProtocol> _shareService;
}

+ (id)localConfigure:(id)arg1 key:(id)arg2;
+ (id)platform;
+ (void)addPerformancePhaseEnd:(id)arg1 onPage:(id)arg2 eventType:(id)arg3 eventId:(int)arg4 userInfo:(id)arg5;
+ (void)addPerformancePhaseBegin:(id)arg1 onPage:(id)arg2 eventType:(id)arg3 eventId:(int)arg4 userInfo:(id)arg5;
+ (void)endPerformanceUserTrackOnPage:(id)arg1 eventType:(id)arg2 eventId:(int)arg3 userInfo:(id)arg4;
+ (void)startPerformanceUserTrackOnPage:(id)arg1 eventType:(id)arg2 eventId:(int)arg3 userInfo:(id)arg4;
+ (void)openURL:(id)arg1 fromTarget:(id)arg2 param:(id)arg3;
+ (void)openURL:(id)arg1 fromTarget:(id)arg2;
+ (void)updatePageName:(id)arg1 pageName:(id)arg2;
+ (void)ctrlClicked:(id)arg1 onPage:(id)arg2 args:(id)arg3;
+ (void)ctrlClicked:(id)arg1 onPage:(id)arg2;
+ (id)sharedCenter;
- (void).cxx_destruct;
- (void)parseTextFromImage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)shareService;

@end

