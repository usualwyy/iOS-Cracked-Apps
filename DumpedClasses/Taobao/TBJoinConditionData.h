//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, NSString;

@interface TBJoinConditionData : TBJSONModel
{
    long long _code;
    NSString *_message;
    NSDictionary *_resultMap;
}

@property(retain, nonatomic) NSDictionary *resultMap; // @synthesize resultMap=_resultMap;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long code; // @synthesize code=_code;
- (void).cxx_destruct;

@end

