//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NXActionProtocol.h"
#import "NXJSContextProtocol.h"

@class NSString;

@interface NXAdapter : NSObject <NXActionProtocol, NXJSContextProtocol>
{
}

+ (void)initialize;
+ (id)sharedAdapter;
- (void)evaluateSuccess;
- (void)evaluateWithException:(id)arg1;
- (void)handleAction:(id)arg1 sender:(id)arg2 args:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

