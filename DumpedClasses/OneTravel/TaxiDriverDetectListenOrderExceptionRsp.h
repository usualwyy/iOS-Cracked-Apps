//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface TaxiDriverDetectListenOrderExceptionRsp : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasIsOk; // @dynamic hasIsOk;
@property(nonatomic) _Bool hasListenOrderExceptionType; // @dynamic hasListenOrderExceptionType;
@property(nonatomic) _Bool hasText; // @dynamic hasText;
@property(nonatomic) _Bool hasVcode; // @dynamic hasVcode;
@property(nonatomic) unsigned long long id_p; // @dynamic id_p;
@property(nonatomic) _Bool isOk; // @dynamic isOk;
@property(nonatomic) int listenOrderExceptionType; // @dynamic listenOrderExceptionType;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(copy, nonatomic) NSString *vcode; // @dynamic vcode;

@end
