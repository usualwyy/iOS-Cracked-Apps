//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImageView, UILabel;

@interface TBTakeoutSearchEmptyView : UIView
{
    UIImageView *_emptyImageView;
    UILabel *_titleLabel;
    UIButton *_refreshButton;
    CDUnknownBlockType _refreshBlock;
}

@property(copy, nonatomic) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *emptyImageView; // @synthesize emptyImageView=_emptyImageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refresh;
- (id)initWithFrame:(struct CGRect)arg1;

@end

