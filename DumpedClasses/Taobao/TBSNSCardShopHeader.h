//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSCardView.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface TBSNSCardShopHeader : TBSNSCardView
{
    UIImageView *_avata;
    UIImageView *_avataBg;
    UIImageView *_avataConnerMark;
    UIImageView *_connerMark;
    UIImageView *_icon;
    UILabel *_title;
    UILabel *_time;
    UILabel *_tag;
    UIButton *_iconBtn;
    UIButton *_titleBtn;
    UIButton *_btnTag;
    UIButton *_more;
    UIButton *_btnMore;
    UIButton *_btn;
    UIImageView *_topPin;
    UILabel *_top;
    _Bool _isRecommend;
    UIView *_line;
}

+ (struct CGSize)fixedSize;
- (void).cxx_destruct;
- (void)setBkColor:(id)arg1;
- (void)setIsRecommend:(_Bool)arg1;
- (void)setTopHidden:(_Bool)arg1;
- (void)setMoreHide:(_Bool)arg1;
- (void)reset;
- (void)setMoreCallback:(SEL)arg1 andTarget:(id)arg2;
- (void)setTagCallback:(SEL)arg1 andTarget:(id)arg2;
- (void)setHeaderIconOrTitleCallback:(SEL)arg1 andTarget:(id)arg2;
- (void)setHeaderSpaceCallback:(SEL)arg1 andTarget:(id)arg2;
- (void)updateTagRect;
- (void)setTag:(id)arg1 andColor:(id)arg2;
- (void)setTime:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setIcon:(id)arg1 withSize:(struct CGSize)arg2;
- (void)setCornerMarkImage:(id)arg1 withSize:(struct CGSize)arg2;
- (void)setAvataCornerMarkImage:(id)arg1;
- (void)setAvataImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

