//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RangerTagProtocol.h"

@class NSString;

@interface RangerBodyTag : NSObject <RangerTagProtocol>
{
}

- (void)configTagAfterLayout:(id)arg1 view:(id)arg2;
- (void)configTagBeforeLayout:(id)arg1 view:(id)arg2 result:(CDUnknownBlockType)arg3;
- (void)configWithRangerAtributes:(id)arg1 view:(id)arg2;
- (id)viewForRangerTagWithAttributes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

