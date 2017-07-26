//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ACDSRPCJson4StreamWriterState, NSMutableArray, NSMutableDictionary, NSString;

@interface ACDSRPCJson4StreamWriter : NSObject
{
    NSMutableDictionary *cache;
    _Bool _humanReadable;
    _Bool _sortKeys;
    ACDSRPCJson4StreamWriterState *_state;
    NSMutableArray *_stateStack;
    id <ACDSRPCJson4StreamWriterDelegate> _delegate;
    unsigned long long _maxDepth;
    CDUnknownBlockType _sortKeysComparator;
    NSString *_error;
}

+ (void)initialize;
@property(copy, nonatomic) NSString *error; // @synthesize error=_error;
@property(copy, nonatomic) CDUnknownBlockType sortKeysComparator; // @synthesize sortKeysComparator=_sortKeysComparator;
@property(nonatomic) _Bool sortKeys; // @synthesize sortKeys=_sortKeys;
@property(nonatomic) _Bool humanReadable; // @synthesize humanReadable=_humanReadable;
@property(nonatomic) unsigned long long maxDepth; // @synthesize maxDepth=_maxDepth;
@property(nonatomic) __weak id <ACDSRPCJson4StreamWriterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSMutableArray *stateStack; // @synthesize stateStack=_stateStack;
@property(nonatomic) __weak ACDSRPCJson4StreamWriterState *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (_Bool)writeDate:(id)arg1;
- (_Bool)writeNumber:(id)arg1;
- (_Bool)writeString:(id)arg1;
- (_Bool)writeValue:(id)arg1;
- (_Bool)writeBool:(_Bool)arg1;
- (_Bool)writeNull;
- (_Bool)writeArrayClose;
- (_Bool)writeArrayOpen;
- (_Bool)writeObjectClose;
- (_Bool)writeObjectOpen;
- (_Bool)writeArray:(id)arg1;
- (_Bool)writeObject:(id)arg1;
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)init;

@end

