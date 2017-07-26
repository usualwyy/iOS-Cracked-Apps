//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ANXRPCRequestProtocol.h"

@class ANXLogManager, ANXPayACKReq, NSString;

@interface ANXPayACKServiceModel : NSObject <ANXRPCRequestProtocol>
{
    ANXLogManager *_logManager;
    ANXPayACKReq *_payACKReq;
}

@property(retain, nonatomic) ANXPayACKReq *payACKReq; // @synthesize payACKReq=_payACKReq;
@property(retain, nonatomic) ANXLogManager *logManager; // @synthesize logManager=_logManager;
- (void).cxx_destruct;
- (id)ANXRPCComponentBody;
- (id)ANXRPCComponentHeaders;
- (id)ANXRPCComponentMethod;
- (id)initWithParams:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

