//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTURLRequestOperation.h"

@class NSDictionary, NSString;

@interface DTRpcBaseOperation : DTURLRequestOperation
{
    _Bool _isAMRPC;
    _Bool _isProtocolBuffers;
    _Bool _isCDN;
    NSDictionary *_responseJSON;
    NSDictionary *_resultJSON;
    NSDictionary *_addHeaders;
    NSString *_alertErr;
}

@property(retain, nonatomic) NSString *alertErr; // @synthesize alertErr=_alertErr;
@property(retain, nonatomic) NSDictionary *addHeaders; // @synthesize addHeaders=_addHeaders;
@property(nonatomic) _Bool isCDN; // @synthesize isCDN=_isCDN;
@property(nonatomic) _Bool isProtocolBuffers; // @synthesize isProtocolBuffers=_isProtocolBuffers;
@property(nonatomic) _Bool isAMRPC; // @synthesize isAMRPC=_isAMRPC;
@property(retain, nonatomic) NSDictionary *resultJSON; // @synthesize resultJSON=_resultJSON;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (_Bool)checkResultStatus:(id)arg1;
- (id)responseToDictionary:(id)arg1;
- (id)emptyResponseError;
@property(retain, nonatomic) NSDictionary *responseJSON; // @synthesize responseJSON=_responseJSON;

@end

