//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AppMonitorMeasureValueSet, NSString, TBVPMMediaInfo;

@interface TBVPMTransaction : NSObject
{
    TBVPMMediaInfo *_mediaInfo;
    NSString *_name;
    AppMonitorMeasureValueSet *_mvs;
}

@property(retain, nonatomic) AppMonitorMeasureValueSet *mvs; // @synthesize mvs=_mvs;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) TBVPMMediaInfo *mediaInfo; // @synthesize mediaInfo=_mediaInfo;
- (void).cxx_destruct;
- (void)commit;
- (void)addSegmentWithSegmentName:(id)arg1 Duration:(double)arg2;
- (id)initWithTransactionName:(id)arg1 MediaInfo:(id)arg2;

@end

