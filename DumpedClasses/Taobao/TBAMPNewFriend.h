//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBAMPNewFriend : NSObject
{
    NSString *_friendUserId;
    NSString *_userIcon;
    NSString *_msgId;
    NSString *_friendUserName;
    NSString *_text;
    long long _sourceType;
    NSString *_feedId;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId=_feedId;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *friendUserName; // @synthesize friendUserName=_friendUserName;
@property(retain, nonatomic) NSString *msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSString *userIcon; // @synthesize userIcon=_userIcon;
@property(retain, nonatomic) NSString *friendUserId; // @synthesize friendUserId=_friendUserId;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

