//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary;

@protocol AMPBodyObject <NSObject>
@property(nonatomic) long long packTargetId;
- (void)parseFromDict:(NSDictionary *)arg1;
- (void)parseFromData:(NSData *)arg1;
@end

