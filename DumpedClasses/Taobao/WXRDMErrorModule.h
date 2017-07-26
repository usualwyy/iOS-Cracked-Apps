//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WXModuleProtocol.h"

@class NSString, WXSDKInstance;

@interface WXRDMErrorModule : NSObject <WXModuleProtocol>
{
    WXSDKInstance *weexInstance;
    NSString *_filter;
    CDUnknownBlockType _errorCallback;
}

+ (id)wx_export_method_24;
@property(copy, nonatomic) CDUnknownBlockType errorCallback; // @synthesize errorCallback=_errorCallback;
@property(copy, nonatomic) NSString *filter; // @synthesize filter=_filter;
@property(nonatomic) __weak WXSDKInstance *weexInstance; // @synthesize weexInstance;
- (void).cxx_destruct;
- (void)onError:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)onErrorCallback:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

