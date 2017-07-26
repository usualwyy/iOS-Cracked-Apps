//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBTradeProcessor.h"

@class NSMutableArray<TBTradeProcessorWorker>, NSString;

@interface TBBasicRenderProcessor : NSObject <TBTradeProcessor>
{
    NSMutableArray<TBTradeProcessorWorker> *_workers;
}

@property(retain, nonatomic) NSMutableArray<TBTradeProcessorWorker> *workers; // @synthesize workers=_workers;
- (void).cxx_destruct;
- (void)prepareForProcess:(id)arg1;
- (id)name;
- (void)afterReturning:(id)arg1;
- (void)startProcess:(id)arg1;
- (id)run:(id)arg1;
- (void)addWorker:(id)arg1;
- (void)registerWorkers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

