//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class TBLiveCommentModel, UILabel, UIView;

@interface TBLiveCommentCell : UITableViewCell
{
    UILabel *_contentLabel;
    UIView *_contentBgView;
    TBLiveCommentModel *_model;
}

+ (double)cellWidth;
@property(retain, nonatomic) TBLiveCommentModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *contentBgView; // @synthesize contentBgView=_contentBgView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)bindCellData:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

