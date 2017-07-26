//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class NSString, TBCartEventBase, TBCartMoreCell, TBShopCartUIModel, TBShopCartView;

@interface TBCartTableViewService : NSObject <UITableViewDataSource, UITableViewDelegate>
{
    TBShopCartUIModel *_cartModel;
    TBCartEventBase *_eventBase;
    TBShopCartView *_shopCartView;
    TBCartMoreCell *_moreDataCell;
    long long _lastQuantity;
}

@property(nonatomic) long long lastQuantity; // @synthesize lastQuantity=_lastQuantity;
@property(retain, nonatomic) TBCartMoreCell *moreDataCell; // @synthesize moreDataCell=_moreDataCell;
@property(nonatomic) __weak TBShopCartView *shopCartView; // @synthesize shopCartView=_shopCartView;
@property(retain, nonatomic) TBCartEventBase *eventBase; // @synthesize eventBase=_eventBase;
@property(retain, nonatomic) TBShopCartUIModel *cartModel; // @synthesize cartModel=_cartModel;
- (void).cxx_destruct;
- (void)registHandlerForCell:(id)arg1 withModel:(id)arg2 inIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

