//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@class NSMutableArray, WVTabBarControl;

@interface WVUIFlowBar : WVDynamicHandler
{
    _Bool _autoReset;
    WVTabBarControl *_tabBarView;
    NSMutableArray *_tabBarIds;
}

+ (unsigned long long)instanceScope;
@property(nonatomic) _Bool autoReset; // @synthesize autoReset=_autoReset;
@property(retain, nonatomic) NSMutableArray *tabBarIds; // @synthesize tabBarIds=_tabBarIds;
@property(retain, nonatomic) WVTabBarControl *tabBarView; // @synthesize tabBarView=_tabBarView;
- (void).cxx_destruct;
- (void)resetWVJSBridgeInstance:(id)arg1;
- (void)tabBarAction:(id)arg1;
- (void)releaseTabBar;
- (void)hiddenTabBar:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)showTabBar:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)autoReleaseHandler;
- (void)dealloc;

@end

