//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ANXHTTPRequestProtocol.h"

@class NSData, NSString;

@interface ANXLogRequest : NSObject <ANXHTTPRequestProtocol>
{
    NSData *_bodyData;
    NSData *_des3Key;
}

@property(retain, nonatomic) NSData *des3Key; // @synthesize des3Key=_des3Key;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
- (void).cxx_destruct;
- (void)checkPublicKeyUpdateWithEnvelop:(id)arg1;
@property(readonly, copy, nonatomic) NSString *RSAPublicKey;
- (id)envelopData;
- (id)encryptedWithSource:(id)arg1 key:(id)arg2;
- (void)initializeWithLog:(id)arg1;
- (id)ANXHTTPComponentBody;
- (id)ANXHTTPComponentHeaders;
- (id)ANXHTTPComponentURL;
- (void)buildWithResponseData:(id)arg1 headers:(id)arg2;
- (id)initWithLog:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

