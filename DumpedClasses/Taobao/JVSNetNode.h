//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class JVSNetBuffer;

@interface JVSNetNode : NSObject
{
    id <JVSLayer> _layer;
    JVSNetBuffer *_inputBuffer;
    struct _NSRange _inputRange;
    JVSNetBuffer *_outputBuffer;
    struct _NSRange _outputRange;
}

@property(nonatomic) __weak JVSNetBuffer *outputBuffer; // @synthesize outputBuffer=_outputBuffer;
@property(nonatomic) __weak JVSNetBuffer *inputBuffer; // @synthesize inputBuffer=_inputBuffer;
@property(nonatomic) struct _NSRange outputRange; // @synthesize outputRange=_outputRange;
@property(nonatomic) struct _NSRange inputRange; // @synthesize inputRange=_inputRange;
@property(readonly, nonatomic) id <JVSLayer> layer; // @synthesize layer=_layer;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long hashValue;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) int outputSize;
@property(readonly, nonatomic) int inputSize;
- (id)initWithLayer:(id)arg1;

@end

