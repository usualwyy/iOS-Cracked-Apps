//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NXASTransitionContextLayoutDelegate.h"

@class NSArray, NSString, NXNode;

@interface NXASLayoutTransition : NSObject <NXASTransitionContextLayoutDelegate>
{
    struct shared_ptr<NXASDN::RecursiveMutex> __instanceLock__;
    _Bool _calculatedSubnodeOperations;
    NSArray *_insertedSubnodes;
    NSArray *_removedSubnodes;
    struct vector<unsigned long, std::__1::allocator<unsigned long>> _insertedSubnodePositions;
    struct vector<unsigned long, std::__1::allocator<unsigned long>> _removedSubnodePositions;
    NXNode *_node;
    shared_ptr_fa46512c _previousLayout;
    shared_ptr_fa46512c _pendingLayout;
}

@property(readonly, nonatomic) shared_ptr_fa46512c pendingLayout; // @synthesize pendingLayout=_pendingLayout;
@property(readonly, nonatomic) shared_ptr_fa46512c previousLayout; // @synthesize previousLayout=_previousLayout;
@property(readonly, nonatomic) __weak NXNode *node; // @synthesize node=_node;
- (id).cxx_construct;
- (void).cxx_destruct;
- (CDStruct_42a63532)transitionContext:(id)arg1 constrainedSizeForKey:(id)arg2;
- (id)transitionContext:(id)arg1 layoutForKey:(id)arg2;
- (id)removedSubnodesWithTransitionContext:(id)arg1;
- (id)insertedSubnodesWithTransitionContext:(id)arg1;
- (id)currentSubnodesWithTransitionContext:(id)arg1;
- (void)calculateSubnodeOperationsIfNeeded;
- (void)applySubnodeRemovals;
- (void)applySubnodeInsertions;
- (void)commitTransition;
@property(readonly, nonatomic) _Bool isSynchronous;
- (id)init;
- (id)initWithNode:(id)arg1 pendingLayout:(shared_ptr_fa46512c)arg2 previousLayout:(shared_ptr_fa46512c)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

