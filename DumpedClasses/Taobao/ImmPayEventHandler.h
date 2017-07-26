//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ImmPayBizLocEvent, ImmPayBizNetEvent, ImmPayFlyBird, ImmPayViewHandler, ImmersionPayService, MQPResult;

@interface ImmPayEventHandler : NSObject
{
    ImmersionPayService *_payService;
    ImmPayFlyBird *_flyBird;
    ImmPayViewHandler *_viewHandler;
    MQPResult *_result;
    ImmPayBizNetEvent *_bizNetEvent;
    ImmPayBizLocEvent *_bizLocEvent;
}

@property(retain, nonatomic) ImmPayBizLocEvent *bizLocEvent; // @synthesize bizLocEvent=_bizLocEvent;
@property(retain, nonatomic) ImmPayBizNetEvent *bizNetEvent; // @synthesize bizNetEvent=_bizNetEvent;
@property(retain, nonatomic) MQPResult *result; // @synthesize result=_result;
@property(retain, nonatomic) ImmPayViewHandler *viewHandler; // @synthesize viewHandler=_viewHandler;
@property(retain, nonatomic) ImmPayFlyBird *flyBird; // @synthesize flyBird=_flyBird;
@property(nonatomic) __weak ImmersionPayService *payService; // @synthesize payService=_payService;
- (void).cxx_destruct;
- (void)doRetryNetEvent;
- (void)onEvents:(id)arg1;
- (void)onEvent:(long long)arg1 event:(id)arg2 param:(id)arg3;
- (void)onEvent:(id)arg1 param:(id)arg2;
- (void)setAsNetErrResult;
- (void)setMemo:(id)arg1 status:(id)arg2 result:(id)arg3;
- (void)close;
- (id)initWithPayService:(id)arg1;
- (void)locViFailWithError:(id)arg1;
- (void)locSwloadWithStatus:(id)arg1 time:(long long)arg2 andLoadText:(id)arg3;
- (void)locLoading:(_Bool)arg1 withText:(id)arg2;
- (void)locWndWithType:(id)arg1 msg:(id)arg2 andAction:(id)arg3;
- (void)locBncb:(id)arg1;
- (void)locBncbWithStatus:(id)arg1 andTip:(id)arg2;
- (void)locBncbWithLoading:(_Bool)arg1;
- (void)locBackNoAnimation;
- (void)locBncbFailVIWithError:(id)arg1;
- (void)locBack;
- (void)locExit;

@end

