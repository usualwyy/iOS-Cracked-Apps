//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSIndexPath, NSString, UICollectionReusableView, UICollectionView;

@protocol NXASCommonCollectionViewDataSource <NSObject>
- (long long)collectionView:(UICollectionView *)arg1 numberOfItemsInSection:(long long)arg2;

@optional
- (UICollectionReusableView *)collectionView:(UICollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (long long)numberOfSectionsInCollectionView:(UICollectionView *)arg1;
@end

