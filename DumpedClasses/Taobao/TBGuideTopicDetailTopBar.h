//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface TBGuideTopicDetailTopBar : UIView
{
    NSString *_columnUrl;
    NSString *_columnTitle;
    NSString *_columnDesc;
    NSString *_columnIcon;
    UIView *_cutViewShadow;
    UIImageView *_headView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_iconLabel;
    UIButton *_button;
}

@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) UIView *cutViewShadow; // @synthesize cutViewShadow=_cutViewShadow;
@property(copy, nonatomic) NSString *columnIcon; // @synthesize columnIcon=_columnIcon;
@property(copy, nonatomic) NSString *columnDesc; // @synthesize columnDesc=_columnDesc;
@property(copy, nonatomic) NSString *columnTitle; // @synthesize columnTitle=_columnTitle;
@property(copy, nonatomic) NSString *columnUrl; // @synthesize columnUrl=_columnUrl;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onTopBarCallBack:(id)arg1;

@end

