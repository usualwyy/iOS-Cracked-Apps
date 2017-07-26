//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionView.h"

#import "NXASBatchFetchingScrollView.h"
#import "NXASCALayerExtendedDelegate.h"
#import "NXASCellNodeInteractionDelegate.h"
#import "NXASCollectionDataControllerSource.h"
#import "NXASDataControllerEnvironmentDelegate.h"
#import "NXASDelegateProxyInterceptor.h"
#import "NXASRangeControllerDataSource.h"
#import "NXASRangeControllerDelegate.h"

@class CALayer, NSMutableArray, NSMutableSet, NSString, NXASBatchContext, NXASCollectionDataController, NXASCollectionNode, NXASCollectionViewLayoutController, NXASCollectionViewProxy, NXASRangeController;

@interface NXASCollectionView : UICollectionView <NXASRangeControllerDataSource, NXASRangeControllerDelegate, NXASCollectionDataControllerSource, NXASCellNodeInteractionDelegate, NXASDelegateProxyInterceptor, NXASBatchFetchingScrollView, NXASDataControllerEnvironmentDelegate, NXASCALayerExtendedDelegate>
{
    NXASCollectionViewProxy *_proxyDataSource;
    NXASCollectionViewProxy *_proxyDelegate;
    NXASCollectionDataController *_dataController;
    NXASRangeController *_rangeController;
    NXASCollectionViewLayoutController *_layoutController;
    id <NXASCollectionViewLayoutInspecting> _defaultLayoutInspector;
    id <NXASCollectionViewLayoutInspecting> _layoutInspector;
    NSMutableSet *_cellsForVisibilityUpdates;
    id <NXASCollectionViewLayoutFacilitatorProtocol> _layoutFacilitator;
    _Bool _performingBatchUpdates;
    unsigned long long _superBatchUpdateCount;
    NSMutableArray *_batchUpdateBlocks;
    _Bool _isDeallocating;
    NXASBatchContext *_batchContext;
    struct CGSize _lastBoundsSizeUsedForMeasuringNodes;
    _Bool _ignoreNextBoundsSizeChangeForMeasuringNodes;
    NSMutableSet *_registeredSupplementaryKinds;
    struct CGPoint _deceleratingVelocity;
    unsigned long long _nextLayoutInvalidationStyle;
    CALayer *_retainedLayer;
    _Bool _superIsPendingDataLoad;
    struct {
        unsigned int asyncDelegateScrollViewDidScroll:1;
        unsigned int asyncDelegateScrollViewWillBeginDragging:1;
        unsigned int asyncDelegateScrollViewDidEndDragging:1;
        unsigned int asyncDelegateScrollViewWillEndDraggingWithVelocityTargetContentOffset:1;
        unsigned int asyncDelegateCollectionViewWillDisplayNodeForItemAtIndexPath:1;
        unsigned int asyncDelegateCollectionViewWillDisplayNodeForItemAtIndexPathDeprecated:1;
        unsigned int asyncDelegateCollectionViewDidEndDisplayingNodeForItemAtIndexPath:1;
        unsigned int asyncDelegateCollectionViewWillBeginBatchFetchWithContext:1;
        unsigned int asyncDelegateShouldBatchFetchForCollectionView:1;
    } _asyncDelegateFlags;
    struct {
        unsigned int asyncDataSourceNodeForItemAtIndexPath:1;
        unsigned int asyncDataSourceNodeBlockForItemAtIndexPath:1;
        unsigned int asyncDataSourceNumberOfSectionsInCollectionView:1;
        unsigned int asyncDataSourceContextForSection:1;
    } _asyncDataSourceFlags;
    struct {
        unsigned int layoutInspectorDidChangeCollectionViewDataSource:1;
        unsigned int layoutInspectorDidChangeCollectionViewDelegate:1;
    } _layoutInspectorFlags;
    _Bool _zeroContentInsets;
    NXASCollectionNode *_collectionNode;
    id <NXASCollectionDelegate> _asyncDelegate;
    id <NXASCollectionDataSource> _asyncDataSource;
    double _leadingScreensForBatching;
    NXASCollectionNode *_strongCollectionNode;
}

+ (Class)layerClass;
@property(retain, nonatomic) NXASCollectionNode *strongCollectionNode; // @synthesize strongCollectionNode=_strongCollectionNode;
@property(nonatomic) _Bool zeroContentInsets; // @synthesize zeroContentInsets=_zeroContentInsets;
@property(nonatomic) double leadingScreensForBatching; // @synthesize leadingScreensForBatching=_leadingScreensForBatching;
@property(nonatomic) __weak id <NXASCollectionDataSource> asyncDataSource; // @synthesize asyncDataSource=_asyncDataSource;
@property(nonatomic) __weak id <NXASCollectionDelegate> asyncDelegate; // @synthesize asyncDelegate=_asyncDelegate;
@property(nonatomic) __weak NXASCollectionNode *collectionNode; // @synthesize collectionNode=_collectionNode;
- (void).cxx_destruct;
- (void)layer:(id)arg1 didChangeBoundsWithOldValue:(struct CGRect)arg2 newValue:(struct CGRect)arg3;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)clearFetchedData;
- (void)clearContents;
- (void)nodeDidRelayout:(id)arg1 sizeChanged:(_Bool)arg2;
- (void)nodeHighlightedStateDidChange:(id)arg1;
- (void)nodeSelectedStateDidChange:(id)arg1;
- (void)rangeController:(id)arg1 didDeleteSectionsAtIndexSet:(id)arg2 withAnimationOptions:(unsigned long long)arg3;
- (void)rangeController:(id)arg1 didInsertSectionsAtIndexSet:(id)arg2 withAnimationOptions:(unsigned long long)arg3;
- (void)rangeController:(id)arg1 didDeleteNodes:(id)arg2 atIndexPaths:(id)arg3 withAnimationOptions:(unsigned long long)arg4;
- (void)rangeController:(id)arg1 didInsertNodes:(id)arg2 atIndexPaths:(id)arg3 withAnimationOptions:(unsigned long long)arg4;
- (void)didCompleteUpdatesInRangeController:(id)arg1;
- (void)rangeController:(id)arg1 didEndUpdatesAnimated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)didBeginUpdatesInRangeController:(id)arg1;
- (id)nameForRangeControllerDataSource;
- (id)rangeController:(id)arg1 nodeAtIndexPath:(id)arg2;
- (unsigned long long)interfaceStateForRangeController:(id)arg1;
- (struct CGSize)viewportSizeForRangeController:(id)arg1;
- (long long)scrollDirectionForRangeController:(id)arg1;
- (id)visibleNodeIndexPathsForRangeController:(id)arg1;
- (id)rangeController;
- (id)dataController:(id)arg1 contextForSection:(long long)arg2;
- (unsigned long long)dataController:(id)arg1 supplementaryNodesOfKind:(id)arg2 inSection:(unsigned long long)arg3;
- (CDStruct_42a63532)dataController:(id)arg1 constrainedSizeForSupplementaryNodeOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)supplementaryNodeKindsInDataController:(id)arg1;
- (id)dataController:(id)arg1 supplementaryNodeOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)dataControllerEnvironment;
- (unsigned long long)numberOfSectionsInDataController:(id)arg1;
- (unsigned long long)dataController:(id)arg1 rowsInSection:(unsigned long long)arg2;
- (CDStruct_42a63532)dataController:(id)arg1 constrainedSizeForNodeAtIndexPath:(id)arg2;
- (CDUnknownBlockType)dataController:(id)arg1 nodeBlockAtIndexPath:(id)arg2;
- (void)_beginBatchFetching;
- (void)_beginBatchFetchingIfNeededWithScrollView:(id)arg1 forScrollDirection:(long long)arg2 contentOffset:(struct CGPoint)arg3;
- (void)_checkForBatchFetching;
- (void)_scheduleCheckForBatchFetchingForNumberOfChanges:(unsigned long long)arg1;
- (_Bool)canBatchFetch;
- (id)batchContext;
- (void)layoutSubviews;
- (long long)nonFlowLayoutScrollableDirections;
- (long long)flowLayoutScrollableDirections:(id)arg1;
@property(readonly, nonatomic) long long scrollableDirections;
- (long long)_scrollDirectionForVelocity:(struct CGPoint)arg1;
@property(readonly, nonatomic) long long scrollDirection;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)__reuseIdentifierForKind:(id)arg1;
- (void)moveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)reloadItemsAtIndexPaths:(id)arg1;
- (void)deleteItemsAtIndexPaths:(id)arg1;
- (void)insertItemsAtIndexPaths:(id)arg1;
- (id)contextForSection:(long long)arg1;
- (void)moveSection:(long long)arg1 toSection:(long long)arg2;
- (void)reloadSections:(id)arg1;
- (void)deleteSections:(id)arg1;
- (void)insertSections:(id)arg1;
- (void)registerSupplementaryNodeOfKind:(id)arg1;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performBatchAnimated:(_Bool)arg1 updates:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)dataController;
- (void)_superPerformBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2 scrollPosition:(unsigned long long)arg3;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)visibleNodes;
- (id)indexPathForNode:(id)arg1;
- (id)supplementaryNodeForElementKind:(id)arg1 atIndexPath:(id)arg2;
- (id)nodeForItemAtIndexPath:(id)arg1;
- (id)completedNodes;
- (struct CGSize)calculatedSizeForNodeAtIndexPath:(id)arg1;
- (CDStruct_2c43369c)tuningParametersForRangeMode:(unsigned long long)arg1 rangeType:(long long)arg2;
- (void)setTuningParameters:(CDStruct_2c43369c)arg1 forRangeMode:(unsigned long long)arg2 rangeType:(long long)arg3;
- (CDStruct_2c43369c)tuningParametersForRangeType:(long long)arg1;
- (void)setTuningParameters:(CDStruct_2c43369c)arg1 forRangeType:(long long)arg2;
@property(nonatomic) __weak id <NXASCollectionViewLayoutInspecting> layoutInspector;
- (void)setCollectionViewLayout:(id)arg1;
- (void)proxyTargetHasDeallocated:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)waitUntilAllUpdatesAreCommitted;
- (void)relayoutItems;
- (void)reloadDataImmediately;
- (void)reloadData;
- (void)reloadDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)_initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 layoutFacilitator:(id)arg3 ownedByNode:(_Bool)arg4;
- (id)_initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2 ownedByNode:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;
- (id)initWithCollectionViewLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

