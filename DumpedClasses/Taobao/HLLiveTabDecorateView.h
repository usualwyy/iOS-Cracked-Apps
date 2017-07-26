//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HLLiveDecorateViewProtocol.h"

@class TBHLLiveLikeAnimationView, UIImageView, UILabel;

@interface HLLiveTabDecorateView : UIView <HLLiveDecorateViewProtocol>
{
    UIView *_roundCornerView;
    UILabel *_viewNumLabel;
    UIImageView *_statusImageView;
    UIImageView *_audioImageView;
    TBHLLiveLikeAnimationView *_likeView;
    UIImageView *_likeOffImageView;
}

@property(retain, nonatomic) UIImageView *likeOffImageView; // @synthesize likeOffImageView=_likeOffImageView;
@property(retain, nonatomic) TBHLLiveLikeAnimationView *likeView; // @synthesize likeView=_likeView;
@property(retain, nonatomic) UIImageView *audioImageView; // @synthesize audioImageView=_audioImageView;
@property(retain, nonatomic) UIImageView *statusImageView; // @synthesize statusImageView=_statusImageView;
@property(retain, nonatomic) UILabel *viewNumLabel; // @synthesize viewNumLabel=_viewNumLabel;
@property(retain, nonatomic) UIView *roundCornerView; // @synthesize roundCornerView=_roundCornerView;
- (void).cxx_destruct;
- (void)addLikeView:(id)arg1;
- (void)updateData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

