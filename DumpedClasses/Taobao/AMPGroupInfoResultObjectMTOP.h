//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

#import "AMPGroupInfoResultObject.h"

@class NSArray, NSString;

@interface AMPGroupInfoResultObjectMTOP : TBJSONModel <AMPGroupInfoResultObject>
{
    NSString *ccode;
    NSString *dynamicName;
    NSArray *userIdList;
}

@property(retain, nonatomic) NSArray *userIdList; // @synthesize userIdList;
@property(copy, nonatomic) NSString *dynamicName; // @synthesize dynamicName;
@property(copy, nonatomic) NSString *ccode; // @synthesize ccode;
- (void).cxx_destruct;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (id)toJSONDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

