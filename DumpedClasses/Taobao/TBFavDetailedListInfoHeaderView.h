//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface TBFavDetailedListInfoHeaderView : UIView
{
    UIButton *_editButton;
    UILabel *_nameLabel;
    UILabel *_subtitleLabel;
    UILabel *_infoLabel;
}

@property(retain, nonatomic) UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIButton *editButton; // @synthesize editButton=_editButton;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)layoutSubviews;
- (void)configWithCategory:(id)arg1;

@end

