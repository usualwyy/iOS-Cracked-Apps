//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBInAppPushProtocol.h"

@class NSString;

@interface TBInAppPushService : NSObject <TBInAppPushProtocol>
{
}

- (void)setPushStates:(_Bool)arg1;
- (_Bool)pushStatus;
- (void)pushNotifyMessage:(id)arg1;
- (void)removeBizConfig:(id)arg1;
- (void)addBizConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

