//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSURLProtocol.h"

#import "NSURLConnectionDataDelegate.h"
#import "NSURLConnectionDelegate.h"

@class NSLock, NSMutableDictionary, NSString, NSURLConnection;

@interface WVURLProtocol : NSURLProtocol <NSURLConnectionDelegate, NSURLConnectionDataDelegate>
{
    NSLock *protocolLock;
    _Bool isStop;
    _Bool _isPageRequest;
    NSURLConnection *_connection;
    double _connectionStartTime;
    id <WVURLProtocolInterface> _protocolHandler;
    NSMutableDictionary *_externalHeaders;
    unsigned long long _dataSize;
}

+ (long long)serverIntervalToLocal:(long long)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
@property(nonatomic) unsigned long long dataSize; // @synthesize dataSize=_dataSize;
@property(nonatomic) _Bool isPageRequest; // @synthesize isPageRequest=_isPageRequest;
@property(retain, nonatomic) NSMutableDictionary *externalHeaders; // @synthesize externalHeaders=_externalHeaders;
@property(retain, nonatomic) id <WVURLProtocolInterface> protocolHandler; // @synthesize protocolHandler=_protocolHandler;
@property(nonatomic) double connectionStartTime; // @synthesize connectionStartTime=_connectionStartTime;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (void)timeRectifying:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connectionShouldUseCredentialStorage:(id)arg1;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)deleteNetworkInfoWithURL:(id)arg1;
- (void)protocolDidFailed:(id)arg1;
- (void)protocolDidFinish:(id)arg1;
- (void)protocolDidLoadData:(id)arg1;
- (void)protocolDidReceiveResponse:(id)arg1 withRequest:(id)arg2 fromType:(long long)arg3;
- (void)stopLoading;
- (void)loadRequestOnline:(id)arg1;
- (void)startLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

