//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVBridgeCallbackContext.h"

@class NSDictionary, NSError, NSMutableArray, NSString, NSURL, UIView, UIView<WVWebViewBasicProtocol>, UIViewController, WVBridge, WVBridgeHandlerInfo, WVBridgeHandlerKey, WXSDKInstance;

@interface WVBridgeInvocation : NSObject <WVBridgeCallbackContext>
{
    _Bool _keepAlive;
    _Bool _tailInvocation;
    _Bool _hasLogged;
    _Bool _isStringParams;
    NSString *_realName;
    NSError *_error;
    WVBridge *_bridge;
    NSURL *_referrer;
    NSString *_pageId;
    WVBridgeHandlerKey *_handlerKey;
    unsigned long long _callbackType;
    NSString *_reqId;
    CDUnknownBlockType _callback;
    NSDictionary *_params;
    WVBridgeHandlerInfo *_handlerInfo;
    unsigned long long _phase;
    NSMutableArray *_resultCallbacks;
}

@property(retain, nonatomic) NSMutableArray *resultCallbacks; // @synthesize resultCallbacks=_resultCallbacks;
@property(nonatomic) unsigned long long phase; // @synthesize phase=_phase;
@property(nonatomic) _Bool isStringParams; // @synthesize isStringParams=_isStringParams;
@property(retain, nonatomic) WVBridgeHandlerInfo *handlerInfo; // @synthesize handlerInfo=_handlerInfo;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSString *reqId; // @synthesize reqId=_reqId;
@property(nonatomic) unsigned long long callbackType; // @synthesize callbackType=_callbackType;
@property(nonatomic) _Bool hasLogged; // @synthesize hasLogged=_hasLogged;
@property(retain, nonatomic) WVBridgeHandlerKey *handlerKey; // @synthesize handlerKey=_handlerKey;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(retain, nonatomic) NSURL *referrer; // @synthesize referrer=_referrer;
@property(nonatomic) __weak WVBridge *bridge; // @synthesize bridge=_bridge;
@property(nonatomic, getter=isTailInvocation) _Bool tailInvocation; // @synthesize tailInvocation=_tailInvocation;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *realName; // @synthesize realName=_realName;
- (void).cxx_destruct;
- (void)addTailInvocation:(id)arg1 className:(id)arg2 params:(id)arg3 withViewController:(id)arg4;
- (void)notifyEvent:(id)arg1 withResult:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)notifyEvent:(id)arg1 withResult:(id)arg2;
- (void)removeDynamicJSBHandler:(id)arg1;
- (void)releaseHandler:(id)arg1;
- (id)addTailInvocation:(id)arg1 withParams:(id)arg2;
- (_Bool)compatibleRedirect:(id)arg1 withParams:(id)arg2 withResultCallback:(CDUnknownBlockType)arg3;
- (_Bool)redirect:(id)arg1 withParams:(id)arg2 withResultCallback:(CDUnknownBlockType)arg3 isIgnorePermission:(_Bool)arg4;
- (_Bool)redirect:(id)arg1 withParams:(id)arg2;
- (_Bool)dispatchEvent:(id)arg1 withParam:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (_Bool)dispatchEvent:(id)arg1 withParam:(id)arg2;
- (_Bool)callbackNotSupported:(id)arg1;
- (_Bool)callbackInvalidParameter:(id)arg1 withMessage:(id)arg2;
- (_Bool)callbackFailure:(id)arg1 withMessage:(id)arg2;
- (void)resultCallback:(id)arg1 withResult:(id)arg2;
- (_Bool)callbackFailure:(id)arg1 withResult:(id)arg2;
- (_Bool)callbackSuccess:(id)arg1;
@property(readonly, copy, nonatomic) CDUnknownBlockType callbackBlock;
@property(nonatomic, getter=isKeepAlive) _Bool keepAlive;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) __weak WXSDKInstance *weexEnv;
@property(readonly, nonatomic) __weak UIView<WVWebViewBasicProtocol> *webViewEnv;
@property(readonly, nonatomic) __weak id env;
@property(readonly, nonatomic) __weak UIViewController *viewController;
@property(readonly, nonatomic) __weak UIView *view;
@property(readonly, nonatomic) NSString *name;
- (void)invokeUnsafe:(id)arg1;
- (void)dealloc;
- (id)invalidParamsTypeError;
- (id)errorWithRet:(id)arg1 withMessage:(id)arg2;
- (_Bool)checkPermission;
- (_Bool)fixParamsType;
- (_Bool)findHandlerInfoUnsafe;
- (_Bool)parseHandlerKeyFromName:(id)arg1;
- (_Bool)convertStringParamsToDictionary:(id)arg1 compatible:(BOOL)arg2;
- (_Bool)parseParamsFromURL:(id)arg1;
- (_Bool)parseHandlerKeyFromURL:(id)arg1;
- (_Bool)checkEnvironment;
- (id)initWithName:(id)arg1 withParams:(id)arg2 withInvocation:(id)arg3 isIgnorePermission:(_Bool)arg4;
- (id)initWithName:(id)arg1 withParams:(id)arg2 withCallback:(CDUnknownBlockType)arg3 withReferrer:(id)arg4 withBridge:(id)arg5;
- (id)initWithName:(id)arg1 withStringParams:(id)arg2 withReqId:(id)arg3 withReferrer:(id)arg4 withBridge:(id)arg5;
- (id)initWithName:(id)arg1 withParams:(id)arg2 withReqId:(id)arg3 withReferrer:(id)arg4 withBridge:(id)arg5;
- (id)initWithURL:(id)arg1 withReferrer:(id)arg2 withBridge:(id)arg3;
- (id)initWithReferrer:(id)arg1 withBridge:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

