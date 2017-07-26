//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ANXLogManager, ANXOTPManager, ANXRuntimeConfig, NSString;

@interface ANXGenCodeServiceModel : NSObject
{
    ANXLogManager *_logManager;
    ANXRuntimeConfig *_runtimeConfig;
    NSString *_insidePushKey;
    NSString *_appKey;
    NSString *_havanaId;
    NSString *_alipayUserId;
    NSString *_isTrojan;
    NSString *_isPrisonBreak;
    NSString *_currentOperateMobile;
    ANXOTPManager *_otpManager;
}

@property(retain, nonatomic) ANXOTPManager *otpManager; // @synthesize otpManager=_otpManager;
@property(copy, nonatomic) NSString *currentOperateMobile; // @synthesize currentOperateMobile=_currentOperateMobile;
@property(copy, nonatomic) NSString *isPrisonBreak; // @synthesize isPrisonBreak=_isPrisonBreak;
@property(copy, nonatomic) NSString *isTrojan; // @synthesize isTrojan=_isTrojan;
@property(copy, nonatomic) NSString *alipayUserId; // @synthesize alipayUserId=_alipayUserId;
@property(copy, nonatomic) NSString *havanaId; // @synthesize havanaId=_havanaId;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSString *insidePushKey; // @synthesize insidePushKey=_insidePushKey;
@property(retain, nonatomic) ANXRuntimeConfig *runtimeConfig; // @synthesize runtimeConfig=_runtimeConfig;
@property(retain, nonatomic) ANXLogManager *logManager; // @synthesize logManager=_logManager;
- (void).cxx_destruct;
- (void)buildRuntimeConfig;
- (id)generateBarCodeWithError:(id *)arg1;
- (_Bool)validateParams;
- (id)initWithParams:(id)arg1;

@end

