//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface TBLiveAdLayerBaseCell : UIView
{
    UIView *_contentView;
    UIView *_emptyView;
}

@property(retain, nonatomic) UIView *emptyView; // @synthesize emptyView=_emptyView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (id)buildEmptyView;
- (id)buildContentView;
- (id)buildHeaderView;
- (double)minCellHeight;
- (void)refreshViewWithModel:(id)arg1;
- (void)setupSubViews;
- (void)setViewConfig;
- (id)initWithFrame:(struct CGRect)arg1;

@end

