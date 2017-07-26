//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXMessengerTCPRequest.h"

#import "WXMessengerResponseDelegate.h"

@class NSDictionary, NSString;

@interface WXRoamingTCPRequest : WXMessengerTCPRequest <WXMessengerResponseDelegate>
{
    NSDictionary *_resultData;
}

+ (void)removeRequestObjectInCache:(id)arg1;
+ (void)cacheRequestObject:(id)arg1;
+ (id)cacheForAllRequests;
@property(retain, nonatomic) NSDictionary *resultData; // @synthesize resultData=_resultData;
- (void).cxx_destruct;
- (void)didReceiveRsponse:(id)arg1 fromService:(unsigned long long)arg2 ofCommand:(unsigned long long)arg3 andError:(id)arg4;
@property(retain, nonatomic) id <WXRoamingResultHandlerProtocal><WXMessengerResultHandlerProtocol> resultHandler;
- (_Bool)isSuccess;
- (void)handResultString:(id)arg1;
- (void)sendRequest;
- (unsigned long long)serviceCode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

