//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMUser, NSNumber, NSString, UIImage;

@interface NMComment : NSObject
{
    _Bool _zaned;
    _Bool _isMusicianTop;
    NSString *_commentId;
    NSString *_combindId;
    NSString *_beRepliedContent;
    NSString *_content;
    long long _time;
    long long _resourceType;
    long long _beRepliedStatus;
    NSNumber *_eventTypeNumber;
    NSString *_resourceJson;
    NSString *_resourceName;
    NMUser *_user;
    NMUser *_beRepliedUser;
    long long _zanCount;
    NSString *_threadId;
    NSString *_threadResourceId;
    NSString *_resourceUserId;
    double _height;
    id _commentResource;
    UIImage *_sharedImage;
}

+ (_Bool)isSharable:(long long)arg1;
@property(retain, nonatomic) UIImage *sharedImage; // @synthesize sharedImage=_sharedImage;
@property(nonatomic) _Bool isMusicianTop; // @synthesize isMusicianTop=_isMusicianTop;
@property(retain, nonatomic) id commentResource; // @synthesize commentResource=_commentResource;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) NSString *resourceUserId; // @synthesize resourceUserId=_resourceUserId;
@property(retain, nonatomic) NSString *threadResourceId; // @synthesize threadResourceId=_threadResourceId;
@property(retain, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(nonatomic) long long zanCount; // @synthesize zanCount=_zanCount;
@property(nonatomic) _Bool zaned; // @synthesize zaned=_zaned;
@property(retain, nonatomic) NMUser *beRepliedUser; // @synthesize beRepliedUser=_beRepliedUser;
@property(retain, nonatomic) NMUser *user; // @synthesize user=_user;
@property(retain, nonatomic) NSString *resourceName; // @synthesize resourceName=_resourceName;
@property(retain, nonatomic) NSString *resourceJson; // @synthesize resourceJson=_resourceJson;
@property(retain, nonatomic) NSNumber *eventTypeNumber; // @synthesize eventTypeNumber=_eventTypeNumber;
@property(nonatomic) long long beRepliedStatus; // @synthesize beRepliedStatus=_beRepliedStatus;
@property(nonatomic) long long resourceType; // @synthesize resourceType=_resourceType;
@property(nonatomic) long long time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *beRepliedContent; // @synthesize beRepliedContent=_beRepliedContent;
@property(retain, nonatomic) NSString *combindId; // @synthesize combindId=_combindId;
@property(retain, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
- (void).cxx_destruct;
- (_Bool)isLegalType;
- (void)fillResourceInfo;
- (void)parseResourceJsonDic:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end
