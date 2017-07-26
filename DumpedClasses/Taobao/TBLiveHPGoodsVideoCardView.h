//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBLiveHPBaseCardView.h"

@class TBLiveCPSubVideoDataModel, UIImageView, UILabel;

@interface TBLiveHPGoodsVideoCardView : TBLiveHPBaseCardView
{
    UIImageView *_iconView;
    UILabel *_durationLabel;
    TBLiveCPSubVideoDataModel *_model;
}

@property(retain, nonatomic) TBLiveCPSubVideoDataModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *durationLabel; // @synthesize durationLabel=_durationLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)didTapView;
- (void)refreshWithModel:(id)arg1 isOnlook:(_Bool)arg2;
- (void)setupSubViews;

@end

