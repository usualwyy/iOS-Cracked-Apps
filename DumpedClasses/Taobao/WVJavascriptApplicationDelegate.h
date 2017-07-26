//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVJSBridgeCallbackDelegate.h"

@class NSMutableDictionary, NSString;

@interface WVJavascriptApplicationDelegate : NSObject <WVJSBridgeCallbackDelegate>
{
    NSMutableDictionary *_instanceMap;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *instanceMap; // @synthesize instanceMap=_instanceMap;
- (void).cxx_destruct;
- (void)onFireEvent:(id)arg1 withParam:(id)arg2;
- (void)onFailure:(id)arg1 withRet:(id)arg2 withResult:(id)arg3;
- (void)onSuccess:(id)arg1 withRet:(id)arg2 withResult:(id)arg3;
- (void)setInstance:(id)arg1 forKey:(id)arg2;
- (id)URL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

