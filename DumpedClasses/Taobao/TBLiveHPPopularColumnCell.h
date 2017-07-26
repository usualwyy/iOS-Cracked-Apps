//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBLiveTableViewCell.h"

@class TBLiveCPPopularColumnGroupModel, TBLiveHPLeftRightScrollView, UIImageGIFView, UIImageView, UIView;

@interface TBLiveHPPopularColumnCell : TBLiveTableViewCell
{
    UIView *_cellView;
    UIImageGIFView *_gifView;
    UIImageView *_coverView;
    TBLiveHPLeftRightScrollView *_scrollView;
    long long _tagIndex;
    TBLiveCPPopularColumnGroupModel *_popColumnModel;
}

+ (struct CGSize)viewSizeWithModel:(id)arg1;
@property(retain, nonatomic) TBLiveCPPopularColumnGroupModel *popColumnModel; // @synthesize popColumnModel=_popColumnModel;
@property(nonatomic) long long tagIndex; // @synthesize tagIndex=_tagIndex;
@property(retain, nonatomic) TBLiveHPLeftRightScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImageView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIImageGIFView *gifView; // @synthesize gifView=_gifView;
@property(retain, nonatomic) UIView *cellView; // @synthesize cellView=_cellView;
- (void).cxx_destruct;
- (void)refreshWithModel:(id)arg1;
- (void)setupSubViews;
- (void)enableGIFAnimation:(_Bool)arg1;
- (void)setGIFAnimationEnable:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

