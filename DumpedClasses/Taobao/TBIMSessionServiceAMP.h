//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIMSessionServiceBase.h"

#import "MCDataSourceProtocol.h"

@class NSString;

@interface TBIMSessionServiceAMP : TBIMSessionServiceBase <MCDataSourceProtocol>
{
}

- (void)ampSessionLoadFromNetWork:(id)arg1;
- (void)ampUserUpdated:(id)arg1;
- (void)ampSessionChanged:(id)arg1 changeType:(id)arg2;
- (_Bool)removeSession:(id)arg1;
- (id)getSessionById:(id)arg1;
- (void)reset;
- (void)start;
- (id)getProtocol;
- (id)getBizKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

