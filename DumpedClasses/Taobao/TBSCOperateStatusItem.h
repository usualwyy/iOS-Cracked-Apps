//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@interface TBSCOperateStatusItem : TBJSONModel
{
    long long _interactType;
    long long _commentPraiseCount;
    long long _commentNoLikeCount;
    unsigned long long _fansId;
    long long _targetType;
    long long _subType;
    unsigned long long _targetId;
    unsigned long long _accountId;
}

@property(nonatomic) unsigned long long accountId; // @synthesize accountId=_accountId;
@property(nonatomic) unsigned long long targetId; // @synthesize targetId=_targetId;
@property(nonatomic) long long subType; // @synthesize subType=_subType;
@property(nonatomic) long long targetType; // @synthesize targetType=_targetType;
@property(nonatomic) unsigned long long fansId; // @synthesize fansId=_fansId;
@property(nonatomic) long long commentNoLikeCount; // @synthesize commentNoLikeCount=_commentNoLikeCount;
@property(nonatomic) long long commentPraiseCount; // @synthesize commentPraiseCount=_commentPraiseCount;
@property(nonatomic) long long interactType; // @synthesize interactType=_interactType;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

