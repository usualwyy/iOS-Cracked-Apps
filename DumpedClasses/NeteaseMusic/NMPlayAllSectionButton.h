//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIView;

@interface NMPlayAllSectionButton : UIButton
{
    id _sectionView;
    UIButton *_collectAllButton;
    UIView *_fakeBgView;
    _Bool _needBlurView;
    _Bool _needCollectAllButton;
    _Bool _needShowWithFakeSectionHeader;
    id <NMPlayAllSectionButtonDelegate> _delegate;
    long long _songCount;
}

+ (double)height;
@property(nonatomic) _Bool needShowWithFakeSectionHeader; // @synthesize needShowWithFakeSectionHeader=_needShowWithFakeSectionHeader;
@property(nonatomic) _Bool needCollectAllButton; // @synthesize needCollectAllButton=_needCollectAllButton;
@property(nonatomic) _Bool needBlurView; // @synthesize needBlurView=_needBlurView;
@property(nonatomic) long long songCount; // @synthesize songCount=_songCount;
@property(nonatomic) id <NMPlayAllSectionButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)collectAllButtonClicked:(id)arg1;
- (void)selfClick;
- (void)setBottomMarginX:(double)arg1;
- (void)showCount:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithDownloadCount:(long long)arg1;
- (id)initWithSongCount:(long long)arg1;

@end
