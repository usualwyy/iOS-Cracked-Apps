//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBIMServicesAdapterMngAdapter.h"

@class NSString;

@interface TBIMServicesAdapterMng : NSObject <TBIMServicesAdapterMngAdapter>
{
    id <TBIMServicesAdapterMngAdapter> _servicesAdapterMngAdapter;
}

+ (id)shareService;
@property(retain, nonatomic) id <TBIMServicesAdapterMngAdapter> servicesAdapterMngAdapter; // @synthesize servicesAdapterMngAdapter=_servicesAdapterMngAdapter;
- (void).cxx_destruct;
- (id)getVirtualGroupServiceAdapter:(int)arg1;
- (id)getAreetingCardsServiceAdapter:(int)arg1;
- (id)getConfigAdapter:(int)arg1;
- (id)getMobileContactService;
- (id)realGetMobileContactService:(int)arg1;
- (id)getBlacklistService:(int)arg1;
- (id)realGetRelationService:(int)arg1;
- (id)getRelationService;
- (id)getInitService:(int)arg1;
- (id)getEmoticonService:(int)arg1;
- (id)getConfigService:(int)arg1;
- (id)getQueryItemService:(int)arg1;
- (id)getGroupServiceByType:(int)arg1;
- (id)getLoginServiceByType:(int)arg1;
- (id)getUserServiceByType:(int)arg1;
- (id)getRecentSessionService:(int)arg1;
- (id)getSessionServiceByType:(int)arg1;
- (id)getMessageServiceByType:(int)arg1;
- (void)startService;
- (void)registerServicesAdapterMngAdapter:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

