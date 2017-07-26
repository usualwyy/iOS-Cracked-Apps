//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSDKServerDelegate.h"

@class NSMutableArray, NSString, TBHTLocationResponseData, TBSDKMTOPServer;

@interface TBHTLocationManager : NSObject <TBSDKServerDelegate>
{
    NSMutableArray *_supportedLocations;
    TBHTLocationResponseData *tempLocation;
    TBSDKMTOPServer *_locationMtopRequest;
}

+ (id)getIPAddresses;
+ (_Bool)isValidatIP:(id)arg1;
+ (id)getIPAddress:(_Bool)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) TBSDKMTOPServer *locationMtopRequest; // @synthesize locationMtopRequest=_locationMtopRequest;
@property(retain, nonatomic) TBHTLocationResponseData *tempLocation; // @synthesize tempLocation;
- (void).cxx_destruct;
- (_Bool)isForeignUser;
- (id)mapToSupportedLocation:(id)arg1;
- (id)getGlobalLocation;
- (id)getDefaultSupportedLocation;
- (id)getSupportedLocationList;
- (_Bool)isSupportedLocation:(id)arg1;
- (void)getLocation:(CDUnknownBlockType)arg1;
- (void)handleUpdateLocation:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)getCachedLocation;
- (void)updateLocation:(CDUnknownBlockType)arg1;
- (void)saveActualLocation:(id)arg1;
- (void)saveUserPreferLocation:(id)arg1;
- (id)getUserPreferLocation;
- (id)getActualLocation;
- (void)initSupportedLocations;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

