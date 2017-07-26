//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface YHMulticastDelegateEnumerator : NSObject
{
    unsigned long long _numNodes;
    unsigned long long _currentNodeIndex;
    NSArray *_delegateNodes;
}

- (void).cxx_destruct;
- (_Bool)getNextDelegate:(id *)arg1 delegateQueue:(id *)arg2 forSelector:(SEL)arg3;
- (_Bool)getNextDelegate:(id *)arg1 delegateQueue:(id *)arg2 ofClass:(Class)arg3;
- (_Bool)getNextDelegate:(id *)arg1 delegateQueue:(id *)arg2;
- (unsigned long long)countForSelector:(SEL)arg1;
- (unsigned long long)countOfClass:(Class)arg1;
- (unsigned long long)count;
- (id)initFromDelegateNodes:(id)arg1;

@end

