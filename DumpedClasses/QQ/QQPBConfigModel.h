//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString;

@interface QQPBConfigModel : NSObject <NSCoding>
{
    long long _version;
    long long _dayInterval;
    long long _loginNum;
    long long _dayNum;
    long long _totalNum;
    NSString *_text;
    NSString *_url;
    long long _banner;
    long long _setEntry;
    _Bool _isFirstShown;
    long long _launchNum;
    NSDate *_showTime;
    long long _dayShowNum;
    long long _showNum;
    int _xo;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(nonatomic) long long banner; // @dynamic banner;
@property(nonatomic) long long dayInterval; // @dynamic dayInterval;
@property(nonatomic) long long dayNum; // @dynamic dayNum;
@property(nonatomic) long long dayShowNum; // @dynamic dayShowNum;
@property(nonatomic) _Bool isFirstShown; // @dynamic isFirstShown;
@property(nonatomic) long long launchNum; // @dynamic launchNum;
@property(nonatomic) long long loginNum; // @dynamic loginNum;
@property(nonatomic) long long setEntry; // @dynamic setEntry;
@property(nonatomic) long long showNum; // @dynamic showNum;
@property(retain, nonatomic) NSDate *showTime; // @dynamic showTime;
@property(copy, nonatomic) NSString *text; // @dynamic text;
@property(nonatomic) long long totalNum; // @dynamic totalNum;
@property(copy, nonatomic) NSString *url; // @dynamic url;
@property(nonatomic) long long version; // @dynamic version;

@end

