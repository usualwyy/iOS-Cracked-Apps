//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ConnectionDataCollection : NSObject
{
    _Bool _isRequest;
    int _connRetrys;
    int _ticketReused;
    int _proxy;
    long long _connBegin;
    long long _connEnd;
    long long _sslHandShakeBegin;
    long long _sslHandShakeEnd;
    long long _sslHandShakeCal;
}

@property _Bool isRequest; // @synthesize isRequest=_isRequest;
@property(nonatomic) int proxy; // @synthesize proxy=_proxy;
@property(nonatomic) int ticketReused; // @synthesize ticketReused=_ticketReused;
@property(nonatomic) int connRetrys; // @synthesize connRetrys=_connRetrys;
@property(nonatomic) long long sslHandShakeCal; // @synthesize sslHandShakeCal=_sslHandShakeCal;
@property(nonatomic) long long sslHandShakeEnd; // @synthesize sslHandShakeEnd=_sslHandShakeEnd;
@property(nonatomic) long long sslHandShakeBegin; // @synthesize sslHandShakeBegin=_sslHandShakeBegin;
@property(nonatomic) long long connEnd; // @synthesize connEnd=_connEnd;
@property(nonatomic) long long connBegin; // @synthesize connBegin=_connBegin;
- (id)getDictionary;

@end
