//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AMPNetPacketPRCHeader : NSObject
{
    _Bool _bEnveloped;
    long long _version;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long version; // @synthesize version=_version;
@property(nonatomic) _Bool bEnveloped; // @synthesize bEnveloped=_bEnveloped;
- (id)initWithType:(long long)arg1;

@end

