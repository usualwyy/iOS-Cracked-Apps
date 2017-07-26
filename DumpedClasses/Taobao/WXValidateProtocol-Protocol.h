//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, NSURL, WXComponentValidateResult, WXModuleValidateResult, WXSDKInstance;

@protocol WXValidateProtocol <NSObject>
- (WXComponentValidateResult *)validateWithWXSDKInstance:(WXSDKInstance *)arg1 component:(NSString *)arg2;
- (WXModuleValidateResult *)validateWithWXSDKInstance:(WXSDKInstance *)arg1 module:(NSString *)arg2 method:(NSString *)arg3 args:(NSArray *)arg4;
- (_Bool)needValidate:(NSURL *)arg1;
@end

