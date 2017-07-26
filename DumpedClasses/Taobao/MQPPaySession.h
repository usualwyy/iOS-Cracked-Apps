//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MQPTrackModel, NSDate, NSDictionary, NSString;

@interface MQPPaySession : NSObject
{
    _Bool _isFirstRequest;
    _Bool _isServerAskLogin;
    NSString *_orderStr;
    NSDictionary *_orderDic;
    NSDictionary *_bizContext;
    MQPTrackModel *_track;
    NSString *_sessionId;
    NSString *_bizType;
    NSString *_mspParams;
    NSString *_cookie;
    NSString *_traceId;
    NSString *_synch;
    NSString *_trade_no;
    NSDate *_openCashierDate;
    NSString *_openCashierTime;
    unsigned long long _checkLoginMode;
    NSString *_currView;
    NSString *_lastErrorMsg;
}

+ (id)orderDicFromOrderStr:(id)arg1;
+ (id)sessionWithOrder:(id)arg1;
@property(nonatomic) _Bool isServerAskLogin; // @synthesize isServerAskLogin=_isServerAskLogin;
@property(copy, nonatomic) NSString *lastErrorMsg; // @synthesize lastErrorMsg=_lastErrorMsg;
@property(copy, nonatomic) NSString *currView; // @synthesize currView=_currView;
@property(nonatomic) _Bool isFirstRequest; // @synthesize isFirstRequest=_isFirstRequest;
@property(nonatomic) unsigned long long checkLoginMode; // @synthesize checkLoginMode=_checkLoginMode;
@property(copy, nonatomic) NSString *openCashierTime; // @synthesize openCashierTime=_openCashierTime;
@property(retain, nonatomic) NSDate *openCashierDate; // @synthesize openCashierDate=_openCashierDate;
@property(copy, nonatomic) NSString *trade_no; // @synthesize trade_no=_trade_no;
@property(copy, nonatomic) NSString *synch; // @synthesize synch=_synch;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(copy, nonatomic) NSString *cookie; // @synthesize cookie=_cookie;
@property(copy, nonatomic) NSString *mspParams; // @synthesize mspParams=_mspParams;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) MQPTrackModel *track; // @synthesize track=_track;
@property(retain, nonatomic) NSDictionary *bizContext; // @synthesize bizContext=_bizContext;
@property(retain, nonatomic) NSDictionary *orderDic; // @synthesize orderDic=_orderDic;
@property(copy, nonatomic) NSString *orderStr; // @synthesize orderStr=_orderStr;
- (void).cxx_destruct;
- (id)fetchMspParams;
@property(readonly, nonatomic) _Bool isBizPayIntegration;
- (void)showAlertNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

