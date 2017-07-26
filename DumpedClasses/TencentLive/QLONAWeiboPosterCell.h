//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTabelViewCell.h"

@class NSMutableArray, QLHTMLFontLabel, QLJCEONAWeiboPoster, QLONAPosterImageView, UILabel;

@interface QLONAWeiboPosterCell : QLBaseTabelViewCell
{
    _Bool _hasUserList;
    QLONAPosterImageView *_imageContent;
    QLHTMLFontLabel *_titleLabel;
    QLHTMLFontLabel *_subTitleLabel;
    UILabel *_introLabel;
    QLJCEONAWeiboPoster *_weiboPoster;
    UILabel *_lineLabel;
    NSMutableArray *_userList;
}

+ (double)getHeightWithPosterObj:(id)arg1 uInfo:(id)arg2;
@property(nonatomic) _Bool hasUserList; // @synthesize hasUserList=_hasUserList;
@property(copy, nonatomic) NSMutableArray *userList; // @synthesize userList=_userList;
@property(retain, nonatomic) UILabel *lineLabel; // @synthesize lineLabel=_lineLabel;
@property(retain, nonatomic) QLJCEONAWeiboPoster *weiboPoster; // @synthesize weiboPoster=_weiboPoster;
@property(retain, nonatomic) UILabel *introLabel; // @synthesize introLabel=_introLabel;
@property(retain, nonatomic) QLHTMLFontLabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) QLHTMLFontLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) QLONAPosterImageView *imageContent; // @synthesize imageContent=_imageContent;
- (void).cxx_destruct;
- (void)reportShowUp;
- (void)titleClicked:(id)arg1;
- (void)posterClicked:(id)arg1;
- (void)flushImageView:(id)arg1 WithPoster:(id)arg2 thumbStyle:(int)arg3;
- (void)setObject:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
