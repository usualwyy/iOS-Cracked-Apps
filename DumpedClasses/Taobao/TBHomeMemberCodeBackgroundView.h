//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBHomeMemberCodeData, UIImageView, UILabel;

@interface TBHomeMemberCodeBackgroundView : UIView
{
    TBHomeMemberCodeData *_data;
    UIImageView *_backgroundView;
    UIImageView *_maskView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIImageView *_tag1View;
    UIImageView *_tag2View;
}

@property(retain, nonatomic) UIImageView *tag2View; // @synthesize tag2View=_tag2View;
@property(retain, nonatomic) UIImageView *tag1View; // @synthesize tag1View=_tag1View;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) TBHomeMemberCodeData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

