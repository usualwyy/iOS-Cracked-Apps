//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXLoginDelegate.h"

@class NSString;

@protocol WXLoginDelegate_WXClient <WXLoginDelegate>

@optional
- (void)loginBiz:(id <IWXLoginService>)arg1 didLoginWithWrongCheckCode:(NSString *)arg2;
- (void)loginBiz:(id <IWXLoginService>)arg1 didLoginNeedCheckCode:(NSString *)arg2;
@end

