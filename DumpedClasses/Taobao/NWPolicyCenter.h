//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NWNetworkConfiguration, NWPolicyInternel, NWReachabilityManager;

@interface NWPolicyCenter : NSObject
{
    NWReachabilityManager *_reachabilityManager;
    NWPolicyInternel *_pi;
    NWNetworkConfiguration *_nc;
}

+ (id)shareInstance;
@property(retain, nonatomic) NWNetworkConfiguration *nc; // @synthesize nc=_nc;
@property(retain, nonatomic) NWPolicyInternel *pi; // @synthesize pi=_pi;
@property(retain, nonatomic) NWReachabilityManager *reachabilityManager; // @synthesize reachabilityManager=_reachabilityManager;
- (void).cxx_destruct;
- (_Bool)hostBelongAserver:(id)arg1;
- (void)updatePolicy:(id)arg1 withUpdateType:(int)arg2 withStatus:(_Bool)arg3 withIsLast:(_Bool)arg4;
- (id)searchPoliciesWithHost:(id)arg1 withScheme:(id)arg2 withType:(int)arg3;
- (id)getCNameWithHost:(id)arg1;
- (void)queryPolicyFromAMDC:(id)arg1 force:(_Bool)arg2;
- (id)getPolicyModelSchema:(id)arg1;
- (void)convertSchema:(id)arg1;
- (id)init;

@end

