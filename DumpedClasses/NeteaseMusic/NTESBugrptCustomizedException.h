//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSException.h"

@class NSArray, NSDictionary, NSError;

@interface NTESBugrptCustomizedException : NSException
{
    NSException *_exception;
    NSError *_error;
    NSArray *_extraMessage;
    long long _category;
    NSDictionary *_extraInfo;
    NSArray *_callStackReturnSymbols;
    unsigned long long _occurTime;
}

+ (id)backtrace:(unsigned int)arg1 skip:(unsigned int)arg2;
+ (id)exceptionWithType:(long long)arg1 name:(id)arg2 reason:(id)arg3 callStack:(id)arg4 extraInfo:(id)arg5;
+ (id)exceptionWithNSError:(id)arg1 reason:(id)arg2 extraInfo:(id)arg3;
+ (id)exceptionWithNSException:(id)arg1 reason:(id)arg2 extraInfo:(id)arg3;
@property(retain, nonatomic) NSArray *callStackReturnSymbols; // @synthesize callStackReturnSymbols=_callStackReturnSymbols;
@property(nonatomic) long long category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)packetJSCrashData;
- (id)packetLuaCrashData;
- (id)packetCSharpCrashData;
- (id)packetTryCatchCrashData;
- (id)packetUserLogCrashData;
- (id)packetCrashData;
- (void)reportExceptionAndQuit:(_Bool)arg1;
- (_Bool)setCallStackSymbols:(id)arg1 skipFrame:(unsigned int)arg2;
- (id)initWithCategory:(long long)arg1 name:(id)arg2 reason:(id)arg3;

@end

