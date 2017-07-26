//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCOfficialBaseBubble.h"

#import "MCChatBubbleBackgroundViewDelegate.h"

@class MCChatBubbleBackgroundView, NSString, UIImageView, UILabel;

@interface MCOfficialMarketingCardBubble : MCOfficialBaseBubble <MCChatBubbleBackgroundViewDelegate>
{
    MCChatBubbleBackgroundView *_innerBubbleImageView;
    UILabel *_titleLabel;
    UIImageView *_contentImageView;
    UILabel *_contentLabel;
    UILabel *_tipLabel;
    UILabel *_moreLabel;
}

+ (double)imageHeight;
+ (double)imageWidth;
+ (double)contentHeightWithMessageVO:(id)arg1;
+ (double)titleHeightWithMessageVO:(id)arg1;
+ (id)subStyle;
+ (struct CGSize)bubbleSizeWithMessageVO:(id)arg1;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIImageView *contentImageView; // @synthesize contentImageView=_contentImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MCChatBubbleBackgroundView *innerBubbleImageView; // @synthesize innerBubbleImageView=_innerBubbleImageView;
- (void).cxx_destruct;
- (void)chatBubbleBackgroundViewLongPress:(id)arg1;
- (void)chatBubbleBackgroundViewTapped:(id)arg1;
- (void)updateMessageVO:(id)arg1;
- (void)recycle;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

