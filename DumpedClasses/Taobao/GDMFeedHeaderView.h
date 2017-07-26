//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GDMRedManFeedModel, NSString, UIButton, UIImageView, UILabel;

@interface GDMFeedHeaderView : UIView
{
    int _type;
    id _delegate;
    NSString *_utPageName;
    GDMRedManFeedModel *_viewModel;
    UIImageView *_logoImageView;
    UIImageView *_vImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_recommendTitleLabel;
    UIButton *_followButton;
    UILabel *_tagTitleLabel;
}

+ (double)heightOfFeedHeaderView;
+ (double)heightOfFeedHeaderViewForType:(int)arg1;
@property(retain, nonatomic) UILabel *tagTitleLabel; // @synthesize tagTitleLabel=_tagTitleLabel;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *recommendTitleLabel; // @synthesize recommendTitleLabel=_recommendTitleLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *vImageView; // @synthesize vImageView=_vImageView;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) GDMRedManFeedModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain) NSString *utPageName; // @synthesize utPageName=_utPageName;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)logoImageSide;
- (void)setTagTitleText:(id)arg1;
- (void)showHideStatus;
- (void)showUnfollowedStatus;
- (void)showFollowedStatus;
- (void)updateFollowButtonStatus;
- (void)setModel:(id)arg1;
- (id)parseModel:(id)arg1;
- (void)logoAction:(id)arg1;
- (void)followAction:(id)arg1;
- (void)handleFollowBtnRefreshNotif:(id)arg1;
- (void)setupUI;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithType:(int)arg1;

@end

