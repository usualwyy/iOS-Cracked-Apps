//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBIMSessionAMP.h"

@class TBAMPGroupInfo;

@interface TBIMSessionGroup : TBIMSessionAMP
{
    TBAMPGroupInfo *_groupInfo;
}

@property(retain, nonatomic) TBAMPGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
- (void).cxx_destruct;
- (id)gType;
- (id)gTag;
- (id)lastMessageContent;
- (_Bool)isUserInSession:(id)arg1;
- (id)defualtHeadImg;
- (id)getHeadPicImage;
- (id)getHeadURL;
- (id)headImgUrl;
- (id)typeImageName;
- (id)ownerId;
- (unsigned long long)aiTaValue;
- (id)title;
- (int)getSessionType;
- (id)getUserByTaobaoId:(id)arg1;
- (unsigned long long)getUsersCount;
- (id)getUsers;
- (id)getGroupAdapter;
- (id)getGroupInfo;
- (id)initWithData:(id)arg1;

@end

