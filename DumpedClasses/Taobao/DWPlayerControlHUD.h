//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel, UIProgressView;

@interface DWPlayerControlHUD : UIView
{
    UIImageView *_iconImageView;
    UILabel *_progressInfoLabel;
    UIProgressView *_valueProgressView;
    UIImageView *_negtiveIcon;
    UIImageView *_positiveIcon;
}

@property(retain, nonatomic) UIImageView *positiveIcon; // @synthesize positiveIcon=_positiveIcon;
@property(retain, nonatomic) UIImageView *negtiveIcon; // @synthesize negtiveIcon=_negtiveIcon;
@property(retain, nonatomic) UIProgressView *valueProgressView; // @synthesize valueProgressView=_valueProgressView;
@property(retain, nonatomic) UILabel *progressInfoLabel; // @synthesize progressInfoLabel=_progressInfoLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)setHidden:(_Bool)arg1;
- (void)updateWithStatus:(long long)arg1 info:(id)arg2;
- (id)init;

@end

