//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UILabel;

@interface MCChatLikeView : UIView
{
    id <MCChatLikeViewDelegate> _delegate;
    UIButton *_likeButton;
    UILabel *_tipLabel;
}

+ (struct CGSize)sizeForChatLikeView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *likeButton; // @synthesize likeButton=_likeButton;
@property(nonatomic) __weak id <MCChatLikeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)likeButtonTap:(id)arg1;
- (void)likeTagTap:(id)arg1;
- (void)updateLikeStatus:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

