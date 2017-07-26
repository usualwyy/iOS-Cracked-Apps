//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TMYYLinkedMapNode;

@interface TMYYLinkedMap : NSObject
{
    struct __CFDictionary *_dic;
    unsigned long long _totalCost;
    unsigned long long _totalCount;
    TMYYLinkedMapNode *_head;
    TMYYLinkedMapNode *_tail;
    _Bool _releaseOnMainThread;
    _Bool _releaseAsynchronously;
}

- (void).cxx_destruct;
- (void)removeAll;
- (id)removeTailNode;
- (void)removeNode:(id)arg1;
- (void)bringNodeToHead:(id)arg1;
- (void)insertNodeAtHead:(id)arg1;
- (void)dealloc;
- (id)init;

@end

