//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBEventSubscriber.h"

@class NSString;

@interface MSOAEventSubscriber : NSObject <TBEventSubscriber>
{
    CDUnknownBlockType _serviceHandler;
}

@property(copy, nonatomic) CDUnknownBlockType serviceHandler; // @synthesize serviceHandler=_serviceHandler;
- (void).cxx_destruct;
- (id)defaultFailResult;
- (id)convertMSOAResult:(id)arg1;
- (id)handleEvent:(id)arg1;
- (id)initWithHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

