//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBURLActionHandler.h"

@class NSString, TXRechargeCenterViewController;

@interface TBRechargeCenterURLResolver : NSObject <TBURLActionHandler>
{
    TXRechargeCenterViewController *_rechargeVC;
}

@property(retain, nonatomic) TXRechargeCenterViewController *rechargeVC; // @synthesize rechargeVC=_rechargeVC;
- (void).cxx_destruct;
- (_Bool)isForceH5URL;
- (id)handleURLActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

