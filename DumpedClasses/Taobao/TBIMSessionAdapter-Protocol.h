//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString, NSURL, UIImage;

@protocol TBIMSessionAdapter <NSObject>
- (NSString *)gType;
- (NSString *)gTag;
- (_Bool)SetLastMessage:(id <TBIMMessageAdapter>)arg1;
- (_Bool)setLastmessageInfo:(NSString *)arg1 andTime:(NSDate *)arg2;
- (NSDate *)visitTime;
- (id <TBIMMessageAdapter>)getLastMessage;
- (_Bool)isUserInSession:(id <TBIMUserAdapter>)arg1;
- (_Bool)isEqual:(id <TBIMSessionAdapter>)arg1;
- (id <TBIMUserAdapter>)getUserByTaobaoId:(NSString *)arg1;
- (unsigned long long)getUsersCount;
- (NSArray *)getUsers;
- (UIImage *)defualtHeadImg;
- (UIImage *)getHeadPicImage;
- (NSURL *)getHeadURL;
- (NSString *)draft;
- (unsigned long long)aiTaValue;
- (NSString *)actionURL;
- (NSString *)typeImageName;
- (_Bool)isManagerRemind;
- (_Bool)isATRemind;
- (_Bool)needNotify;
- (NSDate *)lastAitaMessageDate;
- (NSString *)lastAitaMessageCode;
- (NSDate *)lastMessageTime;
- (NSString *)lastMessageContent;
- (NSString *)title;
- (_Bool)needWeakReminder;
- (int)getSessionType;
- (long long)getShareItemUnreadedCount;
- (long long)getRealUnreadCount;
- (long long)getUnreadCount;
- (NSString *)getSessionID;
@end
