//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface WXPerformanceMonitor : NSObject
{
    NSMutableDictionary *_timingDict;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *timingDict; // @synthesize timingDict=_timingDict;
- (void).cxx_destruct;
- (void)applicationDidEnterBackgroundHandler:(id)arg1;
- (long long)endTimingWithKey:(id)arg1;
- (void)startTimingWithKey:(id)arg1;
- (void)dealloc;
- (id)init;

@end

