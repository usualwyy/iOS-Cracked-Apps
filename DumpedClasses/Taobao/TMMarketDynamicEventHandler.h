//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DREventProtocol.h"

@class NSString;

@interface TMMarketDynamicEventHandler : NSObject <DREventProtocol>
{
}

- (void)toastWithEvent:(id)arg1 item:(id)arg2;
- (void)alertWithEvent:(id)arg1 item:(id)arg2;
- (void)openURLWithEvent:(id)arg1 item:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

