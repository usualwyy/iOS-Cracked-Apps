//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol IAppStatusDelegate <NSObject>
- (void)onFinishLaunching;

@optional
- (void)onNetEnvSwitched;
- (void)onLogoutForUserId:(NSString *)arg1 manual:(_Bool)arg2;
- (void)onLoginFailedForUserId:(NSString *)arg1;
- (void)onLoginSuccessForUserId:(NSString *)arg1;
- (void)onPreLoginForUserId:(NSString *)arg1;
- (void)onWillEnterForeground;
- (void)onDidEnterBackground;
@end

