//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@interface TBSNSFeedCountItem : TBJSONModel
{
    long long _commentCount;
    long long _praiseCount;
    long long _favoriteCount;
}

@property(nonatomic) long long favoriteCount; // @synthesize favoriteCount=_favoriteCount;
@property(nonatomic) long long praiseCount; // @synthesize praiseCount=_praiseCount;
@property(nonatomic) long long commentCount; // @synthesize commentCount=_commentCount;
- (id)toJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end

