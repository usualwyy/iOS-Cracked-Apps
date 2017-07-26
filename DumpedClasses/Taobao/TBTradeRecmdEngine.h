//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TBTradeRecmdConfiguration, TBTradeRecmdProcessor;

@interface TBTradeRecmdEngine : NSObject
{
    NSString *_sourceChannel;
    TBTradeRecmdProcessor *_processor;
}

@property(retain, nonatomic) TBTradeRecmdProcessor *processor; // @synthesize processor=_processor;
@property(retain, nonatomic) NSString *sourceChannel; // @synthesize sourceChannel=_sourceChannel;
- (void).cxx_destruct;
- (id)latestQueryResponse;
- (id)extralModel;
- (unsigned long long)recmdItemCount;
- (id)groupModelArray;
- (id)groupManagerArray;
- (id)recmdBrandModel;
- (id)recmdBrandManager;
- (void)removeActionBlockForKey:(unsigned long long)arg1;
- (void)registerActionBlock:(CDUnknownBlockType)arg1 forKey:(unsigned long long)arg2;
- (void)queryTradeRecommendWithCurrentPage:(unsigned long long)arg1 pageSize:(unsigned long long)arg2 specailParam:(id)arg3;
- (void)free;
- (void)setPageName:(id)arg1;
- (id)initWithSoureChannel:(id)arg1;
- (id)init;
@property(retain, nonatomic) TBTradeRecmdConfiguration *config;
- (id)itemManagerOfItemIndex:(unsigned long long)arg1 inCellManagerIndex:(unsigned long long)arg2 ofGroupManagerIndex:(unsigned long long)arg3;
- (id)cellManagerOfCellIndex:(unsigned long long)arg1 inGroupManagerIndex:(unsigned long long)arg2;
- (id)groupManagerOfGroupIndex:(unsigned long long)arg1;
- (id)cellManagerOfIndexPath:(id)arg1;
- (void)didSelectRowAtIndexPath:(id)arg1 inTableView:(id)arg2;
- (long long)numberOfRowsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)viewForHeaderInSection:(long long)arg1 inTableView:(id)arg2;
- (void)prepareTableView:(id)arg1;
- (double)heightForHeaderInSection:(long long)arg1;
- (double)heightForRowAtIndexPath:(id)arg1;
- (id)cellForRowAtIndexPath:(id)arg1 inTableView:(id)arg2;

@end

