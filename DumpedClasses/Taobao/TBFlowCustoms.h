//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AlibcFcUrlNavigationProtocol.h"
#import "TBAppLifeProtocol.h"

@class NSString, UIWindow;

@interface TBFlowCustoms : NSObject <TBAppLifeProtocol, AlibcFcUrlNavigationProtocol>
{
}

- (id)urlTrackWithAppInfo:(id)arg1;
- (void)openPageInAppWithUrl:(id)arg1 appInfo:(id)arg2;
- (id)customControlWithKey:(id)arg1;
- (void)startSDKWithOptions:(id)arg1;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)handleAppDidFinishLaunchingNotification:(id)arg1;
- (void)didReceiveMessageNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

