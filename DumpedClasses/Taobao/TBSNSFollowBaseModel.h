//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBSNSFollowBaseModel : TBJSONModel
{
    _Bool _followed;
    _Bool _dynamic;
    _Bool _quiet;
    _Bool _noQuiet;
    _Bool _noRemove;
    NSString *_index;
    NSString *_logoUrl;
    NSString *_accountNick;
    NSString *_desc;
    NSString *_backgroundImg;
    long long _accountType;
    long long _followedTime;
    NSString *_certTypeNew;
    NSString *_certTitleNew;
    NSString *_certIcon;
    NSString *_timestamp;
    NSString *_redirectTargetUrl;
}

+ (id)modelKeyMapper;
+ (id)modelKeyMapperDictionary;
@property(retain, nonatomic) NSString *redirectTargetUrl; // @synthesize redirectTargetUrl=_redirectTargetUrl;
@property(nonatomic) _Bool noRemove; // @synthesize noRemove=_noRemove;
@property(nonatomic) _Bool noQuiet; // @synthesize noQuiet=_noQuiet;
@property(nonatomic) _Bool quiet; // @synthesize quiet=_quiet;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy, nonatomic) NSString *certIcon; // @synthesize certIcon=_certIcon;
@property(copy, nonatomic) NSString *certTitleNew; // @synthesize certTitleNew=_certTitleNew;
@property(copy, nonatomic) NSString *certTypeNew; // @synthesize certTypeNew=_certTypeNew;
@property(nonatomic) long long followedTime; // @synthesize followedTime=_followedTime;
@property(nonatomic) long long accountType; // @synthesize accountType=_accountType;
@property(nonatomic) _Bool dynamic; // @synthesize dynamic=_dynamic;
@property(nonatomic) _Bool followed; // @synthesize followed=_followed;
@property(copy, nonatomic) NSString *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *accountNick; // @synthesize accountNick=_accountNick;
@property(copy, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(retain, nonatomic) NSString *index; // @synthesize index=_index;
- (void).cxx_destruct;
- (id)requestAPI:(id)arg1 version:(id)arg2 paramters:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)requestRemoveFollowWithCompletion:(CDUnknownBlockType)arg1;
- (id)requestAddFollowWithCompletion:(CDUnknownBlockType)arg1;
- (id)requestChangePushSwitcherWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

