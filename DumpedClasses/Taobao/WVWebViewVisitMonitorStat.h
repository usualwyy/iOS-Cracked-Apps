//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVMonitorInfoProtocol.h"

@class NSString;

@interface WVWebViewVisitMonitorStat : NSObject <WVMonitorInfoProtocol>
{
    double _sumTime;
    long long _startupCount;
}

+ (id)monitorMeasureRange:(id)arg1;
+ (id)monitorPoint;
@property(readonly, nonatomic) long long startupCount; // @synthesize startupCount=_startupCount;
@property(readonly, nonatomic) double sumTime; // @synthesize sumTime=_sumTime;
@property(readonly, nonatomic) double avgTime;
- (id)initWithSumTime:(double)arg1 withStartupCount:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

