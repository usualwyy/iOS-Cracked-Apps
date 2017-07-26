//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRecmdCard.h"

@class TBRecmdMaskImageView, UIImageView, UILabel, UIView;

@interface TBRecmdNews3Card : TBRecmdCard
{
    UIImageView *_bgImgView;
    UIImageView *_itemImgView1;
    UIImageView *_itemImgView2;
    UIImageView *_itemImgView3;
    UIImageView *_tagImgView;
    UILabel *_titleLabel;
    UIImageView *_iconImgView;
    UILabel *_descLabel;
    TBRecmdMaskImageView *_authorImgView;
    UILabel *_authorLabel;
    UIView *_separateLine;
    UIImageView *_viewerIconImgView;
    UILabel *_viewerCountLabel;
    unsigned long long _tagType;
}

+ (double)cardHeight;
+ (double)cardWidth;
@property(nonatomic) unsigned long long tagType; // @synthesize tagType=_tagType;
@property(retain, nonatomic) UILabel *viewerCountLabel; // @synthesize viewerCountLabel=_viewerCountLabel;
@property(retain, nonatomic) UIImageView *viewerIconImgView; // @synthesize viewerIconImgView=_viewerIconImgView;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) TBRecmdMaskImageView *authorImgView; // @synthesize authorImgView=_authorImgView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *iconImgView; // @synthesize iconImgView=_iconImgView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *tagImgView; // @synthesize tagImgView=_tagImgView;
@property(retain, nonatomic) UIImageView *itemImgView3; // @synthesize itemImgView3=_itemImgView3;
@property(retain, nonatomic) UIImageView *itemImgView2; // @synthesize itemImgView2=_itemImgView2;
@property(retain, nonatomic) UIImageView *itemImgView1; // @synthesize itemImgView1=_itemImgView1;
@property(retain, nonatomic) UIImageView *bgImgView; // @synthesize bgImgView=_bgImgView;
- (void).cxx_destruct;
- (id)itemImgView;
- (void)updateLayout;
- (void)prepareForReuse;
- (void)addSubviews;
- (id)init;

@end

