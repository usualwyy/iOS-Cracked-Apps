//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

@class NSMutableArray;

@interface WVDevice : WVDynamicHandler
{
    NSMutableArray *_orientationContexts;
}

+ (unsigned long long)instanceScope;
@property(retain, nonatomic) NSMutableArray *orientationContexts; // @synthesize orientationContexts=_orientationContexts;
- (void).cxx_destruct;
- (void)resumeWithContext:(id)arg1;
- (void)pauseWithContext:(id)arg1;
- (void)resetWithContext:(id)arg1 withNextRequest:(id)arg2;
- (void)stopOrientation:(id)arg1 withWVBridgeContext:(id)arg2;
- (void)watchOrientation:(id)arg1 withWVBridgeContext:(id)arg2;
- (id)init;

@end

