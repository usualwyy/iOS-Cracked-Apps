//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSArray;

@interface AliDetailMeiLiHui : TBJSONModel
{
    double _endTime;
    double _startTime;
    long long _status;
    NSArray *_tags;
}

@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
- (void).cxx_destruct;

@end

