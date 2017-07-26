//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBTradeRecmdItemViewDelegate.h"
#import "TBTradeRecmdManager.h"

@class NSMutableArray<TBTradeRecmdManager>, NSString, TBTradeRecmdContext, TBTradeRecmdItemModel, UIView;

@interface TBTradeRecmdItemManager : NSObject <TBTradeRecmdItemViewDelegate, TBTradeRecmdManager>
{
    NSString *_identifier;
    _Bool _detailButtonIsSelected;
    id <TBTradeRecmdManager> _parent;
    NSMutableArray<TBTradeRecmdManager> *childManagers;
    double _itemHeight;
    UIView *_view;
    TBTradeRecmdItemModel *_model;
    TBTradeRecmdContext *_context;
    struct CGSize _requiredSize;
}

@property(nonatomic) _Bool detailButtonIsSelected; // @synthesize detailButtonIsSelected=_detailButtonIsSelected;
@property(nonatomic) struct CGSize requiredSize; // @synthesize requiredSize=_requiredSize;
@property(retain, nonatomic) TBTradeRecmdContext *context; // @synthesize context=_context;
@property(retain, nonatomic) TBTradeRecmdItemModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
@property(retain, nonatomic) NSMutableArray<TBTradeRecmdManager> *childManagers; // @synthesize childManagers;
@property(nonatomic) __weak id <TBTradeRecmdManager> parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)itemView:(id)arg1 didTouchedCardButton:(id)arg2;
- (void)itemView:(id)arg1 didTouchedDetailButton:(id)arg2;
- (void)updateCell:(id)arg1;
- (void)updateCartReasonItemView:(id)arg1;
- (void)updateSaleItemView:(id)arg1;
- (void)updateShopGuideOrInteractionItemView:(id)arg1;
- (void)updateSingleImageItemView:(id)arg1;
- (void)updateItemView:(id)arg1;
- (void)updateView:(id)arg1;
- (id)childManagerAtIndex:(long long)arg1;
- (id)cell;
- (id)totalView;
- (void)freeView;
- (double)totalItemHeight;
- (void)setTotalItemHeight:(double)arg1;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithData:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

