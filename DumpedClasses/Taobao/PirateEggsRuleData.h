//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PirateDataModel.h"

@class NSString, PirateEggsRemoteData;

@interface PirateEggsRuleData : PirateDataModel
{
    unsigned int _probability;
    NSString *_ruleId;
    double _startTime;
    double _endTime;
    NSString *_script;
    PirateEggsRemoteData *_remoteData;
    NSString *_traceLog;
    NSString *_resourceId;
}

@property(retain, nonatomic) NSString *resourceId; // @synthesize resourceId=_resourceId;
@property(retain, nonatomic) NSString *traceLog; // @synthesize traceLog=_traceLog;
@property(retain, nonatomic) PirateEggsRemoteData *remoteData; // @synthesize remoteData=_remoteData;
@property(retain, nonatomic) NSString *script; // @synthesize script=_script;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) unsigned int probability; // @synthesize probability=_probability;
@property(retain, nonatomic) NSString *ruleId; // @synthesize ruleId=_ruleId;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;

@end

