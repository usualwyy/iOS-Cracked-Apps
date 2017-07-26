//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXScrollerComponent.h"

#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "WXCellRenderDelegate.h"
#import "WXHeaderRenderDelegate.h"
#import "WXMultiColumnLayoutDelegate.h"
#import "WXRecyclerUpdateControllerDelegate.h"

@class NSString, UICollectionView, UICollectionViewLayout, WXRecyclerDataController, WXRecyclerUpdateController;

@interface WXRecyclerComponent : WXScrollerComponent <UICollectionViewDataSource, UICollectionViewDelegate, WXMultiColumnLayoutDelegate, WXRecyclerUpdateControllerDelegate, WXCellRenderDelegate, WXHeaderRenderDelegate>
{
    unsigned long long _layoutType;
    UICollectionViewLayout *_collectionViewlayout;
    struct UIEdgeInsets _padding;
    unsigned long long _previousLoadMoreCellNumber;
    WXRecyclerDataController *_dataController;
    WXRecyclerUpdateController *_updateController;
    UICollectionView *_collectionView;
}

@property(readonly, nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) WXRecyclerUpdateController *updateController; // @synthesize updateController=_updateController;
@property(readonly, nonatomic) WXRecyclerDataController *dataController; // @synthesize dataController=_dataController;
- (void).cxx_destruct;
- (void)fixedFlickerSelector;
- (void)fixFlicker;
- (id)_sectionArrayFromComponents:(id)arg1;
- (void)_fillPadding;
- (float)_floatValueForColumnGap:(id)arg1;
- (void)resetLoadmore;
- (unsigned long long)totalNumberOfCells;
- (_Bool)isNeedLoadMore;
- (void)loadMore;
- (void)setLoadmoreretry:(unsigned long long)arg1;
- (void)cell:(id)arg1 didMoveToIndex:(unsigned long long)arg2;
- (void)cellDidRemove:(id)arg1;
- (void)cellDidRendered:(id)arg1;
- (void)cellDidLayout:(id)arg1;
- (float)containerWidthForLayout:(id)arg1;
- (void)headerDidRemove:(id)arg1;
- (void)headerDidLayout:(id)arg1;
- (float)headerWidthForLayout:(id)arg1;
- (double)collectionView:(id)arg1 layout:(id)arg2 isNeedStickyForHeaderInSection:(long long)arg3;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 hasHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 contentWidthForLayout:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 insetForLayout:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)updateController:(id)arg1 didPerformUpdateWithFinished:(_Bool)arg2;
- (void)updateController:(id)arg1 willPerformUpdateWithNewData:(id)arg2;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)_insertSubcomponent:(id)arg1 atIndex:(long long)arg2;
- (void)performUpdatesWithCompletion:(CDUnknownBlockType)arg1;
- (void)scrollToComponent:(id)arg1 withOffset:(double)arg2 animated:(_Bool)arg3;
- (void)_handleFirstScreenTime;
- (void)_updateStylesOnComponentThread:(id)arg1 resetStyles:(id)arg2 isUpdateStyles:(_Bool)arg3;
- (void)adjustSticky;
- (void)setContentSize:(struct CGSize)arg1;
- (void)updateAttributes:(id)arg1;
- (void)viewWillUnload;
- (void)viewDidLoad;
- (id)loadView;
- (void)dealloc;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

