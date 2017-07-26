//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ACDSRPCHandler.h"

@class NSString;

@interface ACDSRPCBizHandlerVoid : NSObject <ACDSRPCHandler>
{
    _Bool _needLoginBox;
    unsigned long long _strategy;
    NSString *_cacheKey;
    unsigned long long _retryCnt;
    unsigned long long _codeType;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) unsigned long long codeType; // @synthesize codeType=_codeType;
@property(nonatomic) unsigned long long retryCnt; // @synthesize retryCnt=_retryCnt;
@property(copy, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(nonatomic) unsigned long long strategy; // @synthesize strategy=_strategy;
@property(nonatomic) _Bool needLoginBox; // @synthesize needLoginBox=_needLoginBox;
- (void).cxx_destruct;
- (void)onFailed:(id)arg1;
- (void)onSuccessVoid;
- (void)onSuccess:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

