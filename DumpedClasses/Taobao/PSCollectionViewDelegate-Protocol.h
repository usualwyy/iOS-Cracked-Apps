//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PSCollectionView, PSCollectionViewCell;

@protocol PSCollectionViewDelegate <NSObject>

@optional
- (Class)collectionView:(PSCollectionView *)arg1 cellClassForRowAtIndex:(long long)arg2;
- (void)collectionView:(PSCollectionView *)arg1 didSelectCell:(PSCollectionViewCell *)arg2 atIndex:(long long)arg3;
@end

