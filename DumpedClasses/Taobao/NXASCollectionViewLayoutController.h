//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NXASAbstractLayoutController.h"

@class NXASCollectionView, UICollectionViewLayout;

@interface NXASCollectionViewLayoutController : NXASAbstractLayoutController
{
    NXASCollectionView *_collectionView;
    UICollectionViewLayout *_collectionViewLayout;
    long long _scrollableDirections;
}

- (void).cxx_destruct;
- (struct CGRect)rangeBoundsWithScrollDirection:(long long)arg1 rangeTuningParameters:(CDStruct_2c43369c)arg2;
- (id)indexPathsForItemsWithinRangeBounds:(struct CGRect)arg1;
- (id)indexPathsForScrolling:(long long)arg1 rangeMode:(unsigned long long)arg2 rangeType:(long long)arg3;
- (id)initWithCollectionView:(id)arg1;

@end

