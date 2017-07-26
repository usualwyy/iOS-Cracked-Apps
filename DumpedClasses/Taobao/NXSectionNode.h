//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NXNode.h"

@class NSArray, NXCollectionNode;

@interface NXSectionNode : NXNode
{
    NXCollectionNode *_collection;
    NSArray *_cells;
}

+ (void)static_nxRegister;
@property(readonly) NSArray *cells; // @synthesize cells=_cells;
@property(nonatomic) __weak NXCollectionNode *collection; // @synthesize collection=_collection;
- (void).cxx_destruct;
- (void)removeAllEvents;
- (void)removeSubnode:(id)arg1;
- (void)insertSubNode:(id)arg1 before:(id)arg2;
- (void)insertSubNode:(id)arg1 after:(id)arg2;
- (void)appendSubnode:(id)arg1;
- (id)indexPathsForCells:(id)arg1;
- (id)__removeCell:(id)arg1;
- (id)__insertCell:(id)arg1 before:(id)arg2;
- (id)__insertCell:(id)arg1 after:(id)arg2;
- (id)___appendCell:(id)arg1;
- (id)nodeName;

@end

