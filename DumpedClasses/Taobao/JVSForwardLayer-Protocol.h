//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JVSLayer.h"

@class JVSForwardInvocationBuilder, NSArray;

@protocol JVSForwardLayer <JVSLayer>
@property(readonly, nonatomic) struct jvsdimensions dimensions;
@property(readonly, nonatomic) int outputSize;
@property(readonly, nonatomic) int inputSize;
- (NSArray *)forwardInvocations;
- (_Bool)initializeForward:(JVSForwardInvocationBuilder *)arg1 batchSize:(int)arg2;
@end

