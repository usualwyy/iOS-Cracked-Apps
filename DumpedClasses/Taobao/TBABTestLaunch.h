//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "ABConditionProtocol.h"
#import "TBAppLaunchProtocol.h"

@class NSString;

@interface TBABTestLaunch : UIViewController <ABConditionProtocol, TBAppLaunchProtocol>
{
}

- (void)registerNotification;
- (void)applicationDidBecomeActive;
- (void)homePageDidFinishLaunchingWithConfiguration:(id)arg1;
- (void)adjustABConditionContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

