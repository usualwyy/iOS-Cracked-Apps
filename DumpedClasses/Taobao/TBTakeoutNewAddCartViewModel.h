//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutNewViewModel.h"

@class NSIndexPath;

@interface TBTakeoutNewAddCartViewModel : TBTakeoutNewViewModel
{
    long long _itemId;
    long long _skuId;
    NSIndexPath *_indexPath;
}

@property(nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) long long skuId; // @synthesize skuId=_skuId;
@property(nonatomic) long long itemId; // @synthesize itemId=_itemId;
- (id)serviceApi;

@end

