//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, Tip, UIColor, UILabel;

@interface TMBabyTipsView : UIView
{
    UIColor *_themeColor;
    UILabel *_tipsLabelView;
    UIView *_lineView;
    UILabel *_keyworldsTitleView;
    UILabel *_keyworldsView;
    UILabel *_rightArrowView;
    Tip *_tipModel;
    NSString *_url;
}

@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak Tip *tipModel; // @synthesize tipModel=_tipModel;
@property(nonatomic) __weak UILabel *rightArrowView; // @synthesize rightArrowView=_rightArrowView;
@property(nonatomic) __weak UILabel *keyworldsView; // @synthesize keyworldsView=_keyworldsView;
@property(nonatomic) __weak UILabel *keyworldsTitleView; // @synthesize keyworldsTitleView=_keyworldsTitleView;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(nonatomic) __weak UILabel *tipsLabelView; // @synthesize tipsLabelView=_tipsLabelView;
@property(nonatomic) __weak UIColor *themeColor; // @synthesize themeColor=_themeColor;
- (void).cxx_destruct;
- (void)openKeyworldH5Url:(id)arg1;
- (id)keyworldH5Url;
- (void)addTouchEventHandler;
- (void)renderWithTipsModel:(id)arg1 babyModel:(id)arg2 babyStep:(id)arg3 themeColor:(id)arg4;
- (void)buildSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

