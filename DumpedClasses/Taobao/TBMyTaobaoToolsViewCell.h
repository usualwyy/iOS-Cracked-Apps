//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class TBMyTaobaoToolsItem, UIImageView, UILabel;

@interface TBMyTaobaoToolsViewCell : UICollectionViewCell
{
    TBMyTaobaoToolsItem *_cellData;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_despLabel;
    UIImageView *_tagView;
}

@property(retain, nonatomic) UIImageView *tagView; // @synthesize tagView=_tagView;
@property(retain, nonatomic) UILabel *despLabel; // @synthesize despLabel=_despLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) TBMyTaobaoToolsItem *cellData; // @synthesize cellData=_cellData;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (id)precessJumpURL:(id)arg1;
- (void)refreshInfo;
- (void)prepareForReuse;

@end

