//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBCartBaseRequest.h"

@class NSArray;

@interface TBCartAddFavRequest : TBCartBaseRequest
{
    unsigned long long _queryType;
    NSArray *_favComponents;
}

@property(retain, nonatomic) NSArray *favComponents; // @synthesize favComponents=_favComponents;
@property(nonatomic) unsigned long long queryType; // @synthesize queryType=_queryType;
- (void).cxx_destruct;
- (id)nextCommandId;
- (id)submitData;

@end

