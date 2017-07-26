//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliPayAuthDelegate.h"

@class NSString, aluMTopService;

@interface aluAlipaySSOHandler : NSObject <AliPayAuthDelegate>
{
    _Bool _requestCancelled;
    aluMTopService *_authTokenLoginInvoker;
    CDUnknownBlockType _callback;
    aluMTopService *_tokenLoginInvoker;
    NSString *_authToken;
}

+ (id)shareInstance;
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(getter=isRequestCancelled) _Bool requestCancelled; // @synthesize requestCancelled=_requestCancelled;
@property(retain, nonatomic) aluMTopService *tokenLoginInvoker; // @synthesize tokenLoginInvoker=_tokenLoginInvoker;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) aluMTopService *authTokenLoginInvoker; // @synthesize authTokenLoginInvoker=_authTokenLoginInvoker;
- (void).cxx_destruct;
- (void)showToastView:(id)arg1;
- (void)handleFinalResult:(id)arg1 err:(id)arg2 reserved:(id)arg3;
- (void)handleWhenRpcCanclled;
- (void)loginWithAlipayAuthToken:(id)arg1 reserved:(id)arg2;
- (_Bool)isCancelled;
- (void)monitorAliPayAuth:(id)arg1 args:(id)arg2;
- (void)cancel;
- (void)aliPayAuthDidCancel;
- (void)aliPayAuthFailure:(unsigned long long)arg1 message:(id)arg2;
- (void)aliPayAuthSuccess:(id)arg1;
- (void)initCallback;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

