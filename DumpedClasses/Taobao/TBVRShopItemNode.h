//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUINode.h"

@class TBVRUIManager, TBVRWorldItemNode;

@interface TBVRShopItemNode : VUINode
{
    id <TBVRShopItemNodeDelegate> _delegate;
    TBVRWorldItemNode *_item;
    TBVRUIManager *_manager;
}

@property(nonatomic) __weak TBVRUIManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) TBVRWorldItemNode *item; // @synthesize item=_item;
@property(nonatomic) __weak id <TBVRShopItemNodeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleFootPrintTouchUpInside:(id)arg1;
- (void)handleFootPrintSelected:(id)arg1;
- (void)handleRedDotButtonTouchUpInside:(id)arg1;
- (void)handleRedDotButtonSelected:(id)arg1;
- (void)createItemNodes;
- (void)createFootPrintItem;
- (id)initWithItem:(id)arg1 manager:(id)arg2;

@end

