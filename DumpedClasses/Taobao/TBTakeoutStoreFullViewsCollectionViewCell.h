//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSArray, UIImageView, UILabel;

@interface TBTakeoutStoreFullViewsCollectionViewCell : UICollectionViewCell
{
    _Bool _isSelected;
    UIImageView *_backgroundImageView;
    UILabel *_titleLabel;
    NSArray *_fullViewImages;
}

@property(copy, nonatomic) NSArray *fullViewImages; // @synthesize fullViewImages=_fullViewImages;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

