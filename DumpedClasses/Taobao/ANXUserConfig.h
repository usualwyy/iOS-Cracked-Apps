//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ANXUserConfig : NSObject
{
    NSString *_apdid;
    NSString *_tid;
    NSString *_imei;
    NSString *_imsi;
    NSString *_utdid;
}

@property(copy, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(copy, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(copy, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *apdid; // @synthesize apdid=_apdid;
- (void).cxx_destruct;

@end

