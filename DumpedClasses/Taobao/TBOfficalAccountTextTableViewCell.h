//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOfficalAccountBaseTableViewCell.h"

#import "TBTextLabelDelegate.h"

@class NSString, TBTextLabel, UIImageView, UIView;

@interface TBOfficalAccountTextTableViewCell : TBOfficalAccountBaseTableViewCell <TBTextLabelDelegate>
{
    UIView *_groupBgView;
    UIImageView *_avatarImageView;
    UIImageView *_innerBubbleImageView;
    TBTextLabel *_innerTextLabel;
}

+ (struct CGSize)heightForItemContent:(id)arg1;
+ (double)heightForContent:(id)arg1;
@property(retain, nonatomic) TBTextLabel *innerTextLabel; // @synthesize innerTextLabel=_innerTextLabel;
@property(retain, nonatomic) UIImageView *innerBubbleImageView; // @synthesize innerBubbleImageView=_innerBubbleImageView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIView *groupBgView; // @synthesize groupBgView=_groupBgView;
- (void).cxx_destruct;
- (void)textLabel:(id)arg1 didTapWithLink:(id)arg2 range:(struct _NSRange)arg3;
- (void)configureWithItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

