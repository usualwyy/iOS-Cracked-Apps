//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSString.h"

@interface WXDebugLogSwizz : NSString
{
}

+ (long long)getUsedMemory;
+ (void)wxDebugLog_Memory;
+ (void)hook_monitoringPoint:(unsigned long long)arg1 didFailWithError:(id)arg2 onPage:(id)arg3;
+ (void)wxDebugLog_Error;
+ (void)hook_printPerformance:(id)arg1;
+ (void)hook_performanceFinish:(id)arg1;
+ (void)wxDebugLog_Performance;
+ (void)calculateFPS;
+ (void)pauseDisplayLink:(_Bool)arg1;
+ (void)handleDisplayLink:(id)arg1;
+ (void)wxDebugLog_FPS;
+ (void)printLog:(id)arg1;
+ (void)swizzClass:(id)arg1 selector:(SEL)arg2 withClass:(id)arg3 selector:(SEL)arg4;
+ (void)wxDebugLog:(unsigned long long)arg1;
- (void)hook_destroyInstance;
- (void)hook_renderView:(id)arg1 options:(id)arg2 data:(id)arg3;
- (void)hook_scrollViewDidEndDecelerating:(id)arg1;
- (void)hook_list_scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)hook_list_scrollViewWillBeginDragging:(id)arg1;
- (void)hook_list_scrollViewDidEndDecelerating:(id)arg1;
- (void)hook_scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)hook_scrollViewWillBeginDragging:(id)arg1;

@end

