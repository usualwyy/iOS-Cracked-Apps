//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface GodeyeResponseData : NSObject
{
    long long _responseCode;
    NSString *_reason;
    NSDictionary *_extraData;
}

@property(copy, nonatomic) NSDictionary *extraData; // @synthesize extraData=_extraData;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) long long responseCode; // @synthesize responseCode=_responseCode;
- (void).cxx_destruct;
- (id)init:(long long)arg1 reason:(id)arg2 extraData:(id)arg3;

@end

