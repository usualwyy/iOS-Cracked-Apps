//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSearchBaseCell.h"

#import "NXActionProtocol.h"
#import "TBSearchItemCellMaskDelegate.h"

@class NSMutableArray, NSString, TBXSearchItemCellLongPressManager, TBXSearchItemCellMaskBase, TBXSearchNXComponent;

@interface TBXSearchNXCell : TBSearchBaseCell <NXActionProtocol, TBSearchItemCellMaskDelegate>
{
    NSMutableArray *_viewArray;
    TBXSearchNXComponent *_component;
    id <NXActionProtocol> _delegate;
    TBXSearchItemCellMaskBase *_maskView;
    TBXSearchItemCellLongPressManager *_lpmanager;
}

+ (struct CGSize)cellSizeWithModel:(id)arg1 searchService:(id)arg2 layoutStyle:(int)arg3;
@property(retain, nonatomic) TBXSearchItemCellLongPressManager *lpmanager; // @synthesize lpmanager=_lpmanager;
@property(retain, nonatomic) TBXSearchItemCellMaskBase *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) __weak id <NXActionProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBXSearchNXComponent *component; // @synthesize component=_component;
@property(retain, nonatomic) NSMutableArray *viewArray; // @synthesize viewArray=_viewArray;
- (void).cxx_destruct;
- (void)addcart;
- (void)longPress;
- (void)longPressForNXCell:(id)arg1;
- (void)removeMaskView:(id)arg1;
- (void)hideMask;
- (void)showMore:(double)arg1 info:(id)arg2;
- (void)switchToTab:(id)arg1 withAppendingParams:(id)arg2;
- (void)renderWithStatus:(id)arg1;
- (void)dealloc;
- (void)didSelect;
- (void)layoutSubviews;
- (void)handleAction:(id)arg1 sender:(id)arg2 args:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

