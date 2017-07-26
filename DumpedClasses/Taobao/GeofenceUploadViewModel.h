//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NXViewModel.h"

#import "NXStoreProtocol.h"

@class NSString;

@interface GeofenceUploadViewModel : NXViewModel <NXStoreProtocol>
{
    double _latitude;
    double _longitude;
    NSString *_fenceId;
    long long _timestamp;
    NSString *_event;
}

@property(copy, nonatomic) NSString *event; // @synthesize event=_event;
@property(nonatomic) long long timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *fenceId; // @synthesize fenceId=_fenceId;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (id)parameterMapper;
- (void)parse:(id)arg1;
- (Class)modelClass;
- (struct NSDictionary *)api;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

