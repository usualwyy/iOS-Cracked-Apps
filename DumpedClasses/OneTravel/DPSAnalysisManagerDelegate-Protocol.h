//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@protocol DPSAnalysisManagerDelegate <NSObject>
- (void)DPSAnalysisManagerDidFiredEventWithEventId:(NSString *)arg1 params:(NSMutableDictionary *)arg2;
- (NSString *)DPSAnalysisCurrentProductLineMenuId;
@end
