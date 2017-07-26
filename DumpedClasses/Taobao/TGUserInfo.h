//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface TGUserInfo : NSObject
{
    _Bool _skillPublish;
    NSString *_nick;
    NSString *_userId;
    NSString *_ecode;
    NSString *_sid;
    NSString *_token;
    NSString *_headIcon;
    NSString *_loginTime;
    NSString *_autoLoginToken;
    NSString *_phone;
    NSString *_unreadActionCnt;
    NSString *_unreadNoticeCnt;
    NSString *_groupUpdateCnt;
    long long _groupTip;
    NSString *_unreadActionCreateTime;
    NSString *_unreadNoticeCreateTime;
    NSString *_rateSum;
    NSString *_unreadMessageCnt;
    NSString *_deviceId;
    long long _messageCount;
    NSArray *_publishCode;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSArray *publishCode; // @synthesize publishCode=_publishCode;
@property(nonatomic) long long messageCount; // @synthesize messageCount=_messageCount;
@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(retain, nonatomic) NSString *unreadMessageCnt; // @synthesize unreadMessageCnt=_unreadMessageCnt;
@property(nonatomic) _Bool skillPublish; // @synthesize skillPublish=_skillPublish;
@property(retain, nonatomic) NSString *rateSum; // @synthesize rateSum=_rateSum;
@property(retain, nonatomic) NSString *unreadNoticeCreateTime; // @synthesize unreadNoticeCreateTime=_unreadNoticeCreateTime;
@property(retain, nonatomic) NSString *unreadActionCreateTime; // @synthesize unreadActionCreateTime=_unreadActionCreateTime;
@property(nonatomic) long long groupTip; // @synthesize groupTip=_groupTip;
@property(retain, nonatomic) NSString *groupUpdateCnt; // @synthesize groupUpdateCnt=_groupUpdateCnt;
@property(retain, nonatomic) NSString *unreadNoticeCnt; // @synthesize unreadNoticeCnt=_unreadNoticeCnt;
@property(retain, nonatomic) NSString *unreadActionCnt; // @synthesize unreadActionCnt=_unreadActionCnt;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *autoLoginToken; // @synthesize autoLoginToken=_autoLoginToken;
@property(retain, nonatomic) NSString *loginTime; // @synthesize loginTime=_loginTime;
@property(retain, nonatomic) NSString *headIcon; // @synthesize headIcon=_headIcon;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(retain, nonatomic) NSString *ecode; // @synthesize ecode=_ecode;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
- (void).cxx_destruct;
- (void)onTBLogout:(id)arg1;
- (void)onTBLogin:(id)arg1;
- (void)getPublishCode:(CDUnknownBlockType)arg1;
- (void)getUserInfo;
- (void)clearNSUserDefaults;
- (void)clearGuangInfo;
- (void)setGuangInfo:(id)arg1;
- (void)clearUserInfo;
- (void)setUserInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end

