//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBLiveColleagueProtocol.h"

@class NSMutableArray, NSString;

@interface TBLiveSwitchDataModelController : NSObject <TBLiveColleagueProtocol>
{
    long long _refreshLiveOrEnterLive;
    unsigned long long _capacity;
    unsigned long long _count;
    unsigned long long _start;
    long long _current;
    NSMutableArray *_dataItems;
}

+ (id)identifier;
@property(retain, nonatomic) NSMutableArray *dataItems; // @synthesize dataItems=_dataItems;
@property(nonatomic) long long current; // @synthesize current=_current;
@property(nonatomic) unsigned long long start; // @synthesize start=_start;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
@property(nonatomic) unsigned long long capacity; // @synthesize capacity=_capacity;
@property(nonatomic) long long refreshLiveOrEnterLive; // @synthesize refreshLiveOrEnterLive=_refreshLiveOrEnterLive;
- (void).cxx_destruct;
- (void)requestNewDataModel;
- (id)buildStayTimesString;
- (void)clearStayTimes;
- (void)updateStayTimes:(id)arg1 stayTimes:(unsigned long long)arg2;
- (id)getImgeURLPair;
- (id)getNextDataMoldel;
- (id)getPrevDataMoldel;
- (void)needRequestNewData;
- (void)pushObject:(id)arg1;
- (void)addDataModel:(id)arg1 type:(long long)arg2;
- (void)receivemsg:(id)arg1 params:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)setupInit;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

