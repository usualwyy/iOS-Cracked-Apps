//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString;

@interface TBWangXinCommTokenLoginInfo : NSObject
{
    NSString *_userNick;
    NSString *_ssoToken;
    NSDate *_submitTime;
}

+ (id)loginInfoWithUserNick:(id)arg1 ssoToken:(id)arg2;
@property(retain, nonatomic) NSDate *submitTime; // @synthesize submitTime=_submitTime;
@property(retain, nonatomic) NSString *ssoToken; // @synthesize ssoToken=_ssoToken;
@property(retain, nonatomic) NSString *userNick; // @synthesize userNick=_userNick;
- (void).cxx_destruct;
- (_Bool)isLoginValid;

@end

