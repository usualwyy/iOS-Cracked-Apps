//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CIContext, NSString, UIImageView, UILabel;

@interface ONEUserProfileHeaderView : UIView
{
    UIImageView *_baseBackgroundView;
    UIImageView *_avatarView;
    UIView *_avatarBorderView;
    UILabel *_nameLabel;
    UIImageView *_genderView;
    UILabel *_profileInfoLabel;
    UILabel *_moodPanelLabel;
    CIContext *_ciContext;
    NSString *_avatarURLString;
}

@property(copy, nonatomic) NSString *avatarURLString; // @synthesize avatarURLString=_avatarURLString;
@property(retain, nonatomic) CIContext *ciContext; // @synthesize ciContext=_ciContext;
@property(retain, nonatomic) UILabel *moodPanelLabel; // @synthesize moodPanelLabel=_moodPanelLabel;
@property(retain, nonatomic) UILabel *profileInfoLabel; // @synthesize profileInfoLabel=_profileInfoLabel;
@property(retain, nonatomic) UIImageView *genderView; // @synthesize genderView=_genderView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *avatarBorderView; // @synthesize avatarBorderView=_avatarBorderView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIImageView *baseBackgroundView; // @synthesize baseBackgroundView=_baseBackgroundView;
- (void).cxx_destruct;
- (void)showBigAvatar;
- (id)baseBackgroundImageWithImage:(id)arg1;
- (void)stretchBaseBackgroundView:(double)arg1;
- (void)setMoodPanel:(id)arg1;
- (void)setInfo:(id)arg1;
- (void)setGender:(long long)arg1;
- (void)setName:(id)arg1;
- (void)setAvatarImageURLString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
