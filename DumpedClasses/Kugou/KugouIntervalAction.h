//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UserActionRecord.h"

@class NSString;

@interface KugouIntervalAction : UserActionRecord
{
    unsigned long long _errorCode;
    NSString *_functionName;
    double _interval;
    NSString *_fromSource;
}

@property(copy, nonatomic) NSString *fromSource; // @synthesize fromSource=_fromSource;
@property(nonatomic) double interval; // @synthesize interval=_interval;
@property(copy, nonatomic) NSString *functionName; // @synthesize functionName=_functionName;
@property(nonatomic) unsigned long long errorCode; // @synthesize errorCode=_errorCode;
- (void)coding;
- (void)dealloc;

@end
