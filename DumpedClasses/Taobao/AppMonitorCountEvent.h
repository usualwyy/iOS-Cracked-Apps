//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AppMonitorEvent.h"

@interface AppMonitorCountEvent : AppMonitorEvent
{
    long long _count;
    double _value;
}

@property double value; // @synthesize value=_value;
@property long long count; // @synthesize count=_count;
- (id)jsonDict;
- (void)addValue:(double)arg1 commitTime:(long long)arg2;
- (id)initWithEventId:(id)arg1 module:(id)arg2 monitorPoint:(id)arg3;

@end

