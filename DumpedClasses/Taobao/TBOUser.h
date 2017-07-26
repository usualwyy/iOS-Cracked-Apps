//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSMutableArray<TBOTag>, NSString;

@interface TBOUser : TBJSONModel
{
    _Bool _seller;
    _Bool _daren;
    NSString *_userId;
    NSString *_nick;
    NSString *_logo;
    NSString *_dayNum;
    NSString *_publishedTopicNum;
    long long _subscribedTopicNum;
    long long _subscribedCommunityNum;
    long long _feedNum;
    NSString *_firstDate;
    double _lastPost;
    NSString *_text;
    NSMutableArray<TBOTag> *_userTags;
    NSString *_accountUrl;
}

@property(nonatomic) _Bool daren; // @synthesize daren=_daren;
@property(retain, nonatomic) NSString *accountUrl; // @synthesize accountUrl=_accountUrl;
@property(retain, nonatomic) NSMutableArray<TBOTag> *userTags; // @synthesize userTags=_userTags;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) double lastPost; // @synthesize lastPost=_lastPost;
@property(retain, nonatomic) NSString *firstDate; // @synthesize firstDate=_firstDate;
@property(nonatomic) _Bool seller; // @synthesize seller=_seller;
@property(nonatomic) long long feedNum; // @synthesize feedNum=_feedNum;
@property(nonatomic) long long subscribedCommunityNum; // @synthesize subscribedCommunityNum=_subscribedCommunityNum;
@property(nonatomic) long long subscribedTopicNum; // @synthesize subscribedTopicNum=_subscribedTopicNum;
@property(retain, nonatomic) NSString *publishedTopicNum; // @synthesize publishedTopicNum=_publishedTopicNum;
@property(retain, nonatomic) NSString *dayNum; // @synthesize dayNum=_dayNum;
@property(retain, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end

