//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NXASCellNode.h"

@class NXNode;

@interface NXCollectionCellNode : NXASCellNode
{
    NXNode *_root;
}

@property(retain, nonatomic) NXNode *root; // @synthesize root=_root;
- (void).cxx_destruct;
- (struct CGSize)calculateSizeThatFits:(struct CGSize)arg1;
- (id)containnode;
- (id)initWithNode:(id)arg1;

@end

