//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ACDSSyncMsgSaveCost : NSObject
{
    _Bool _valid;
    NSString *_dsName;
    double _startTime;
    double _checkTime;
    double _saveTime;
    double _totalTime;
}

+ (id)costOf:(id)arg1;
@property(nonatomic) double totalTime; // @synthesize totalTime=_totalTime;
@property(nonatomic) double saveTime; // @synthesize saveTime=_saveTime;
@property(nonatomic) double checkTime; // @synthesize checkTime=_checkTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *dsName; // @synthesize dsName=_dsName;
@property(nonatomic) _Bool valid; // @synthesize valid=_valid;
- (void).cxx_destruct;

@end

