//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@class HKHealthStore;

@interface TMHealth : WVDynamicHandler
{
    HKHealthStore *_healthStore;
}

+ (unsigned long long)instanceScope;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (void)getStepCount:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)authorizeHealthKitWithCompletion:(CDUnknownBlockType)arg1;

@end

