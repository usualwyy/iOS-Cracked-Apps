//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ASRWebSocketDelegate.h"

@class ASRWebSocket, MRAsrPacketEncoder, NSDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, Reachability;

@interface MRAsrConnector : NSObject <ASRWebSocketDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    _Bool _enableSSL;
    _Bool _forceSSL;
    _Bool _isShutdown;
    int _state;
    id <MRAsrConnectorDelegate> _delegate;
    NSURL *_serviceURL;
    NSString *_appKey;
    NSDictionary *_extraParams;
    NSString *_appSecret;
    double _connectTimeout;
    double _socketTimeout;
    ASRWebSocket *_webSocket;
    MRAsrPacketEncoder *_packetBuffer;
    Reachability *_reachability;
}

@property(retain, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) _Bool isShutdown; // @synthesize isShutdown=_isShutdown;
@property(retain, nonatomic) MRAsrPacketEncoder *packetBuffer; // @synthesize packetBuffer=_packetBuffer;
@property(retain, nonatomic) ASRWebSocket *webSocket; // @synthesize webSocket=_webSocket;
@property int state; // @synthesize state=_state;
@property(nonatomic) double socketTimeout; // @synthesize socketTimeout=_socketTimeout;
@property(nonatomic) double connectTimeout; // @synthesize connectTimeout=_connectTimeout;
@property(copy, nonatomic) NSString *appSecret; // @synthesize appSecret=_appSecret;
@property(retain, nonatomic) NSDictionary *extraParams; // @synthesize extraParams=_extraParams;
@property(nonatomic) _Bool forceSSL; // @synthesize forceSSL=_forceSSL;
@property(nonatomic) _Bool enableSSL; // @synthesize enableSSL=_enableSSL;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSURL *serviceURL; // @synthesize serviceURL=_serviceURL;
@property(nonatomic) __weak id <MRAsrConnectorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_callDelegateMethodWithMessage:(id)arg1;
- (void)_callDelegateMethodCompleteWithResult:(id)arg1;
- (void)_callDelegateMethodFailWithError:(id)arg1;
- (void)webSocket:(id)arg1 didCloseWithCode:(long long)arg2 reason:(id)arg3 wasClean:(_Bool)arg4;
- (void)webSocket:(id)arg1 didFailWithError:(id)arg2;
- (void)webSocketDidOpen:(id)arg1;
- (void)webSocket:(id)arg1 didReceiveMessage:(id)arg2;
- (void)_runSendPacketTask;
- (void)_disconnect:(_Bool)arg1;
- (void)_connect;
- (void)shutdown;
- (void)send:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 appKey:(id)arg2 appSecret:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

