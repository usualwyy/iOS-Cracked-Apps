//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ANXBaseServiceModel.h"

@class NSArray, NSString;

@interface ANXPayPushModel : ANXBaseServiceModel
{
    NSArray *_dynamicIds;
    NSString *_havanaId;
    NSString *_appName;
    NSString *_sid;
    NSString *_pushContext;
}

@property(copy, nonatomic) NSString *pushContext; // @synthesize pushContext=_pushContext;
@property(copy, nonatomic) NSString *sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *havanaId; // @synthesize havanaId=_havanaId;
@property(copy, nonatomic) NSArray *dynamicIds; // @synthesize dynamicIds=_dynamicIds;
- (void).cxx_destruct;
- (unsigned long long)serviceName;
- (id)childHookParams;

@end

