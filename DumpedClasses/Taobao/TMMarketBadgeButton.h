//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMMarketButton.h"

@class NSString, UIImage;

@interface TMMarketBadgeButton : TMMarketButton
{
    double _badgeIconOverlapWidth;
    UIImage *_icon;
    NSString *_badge;
    CDUnknownBlockType _actionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(copy, nonatomic) NSString *badge; // @synthesize badge=_badge;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)callActionBlock:(id)arg1;
- (void)handleControlEvent:(unsigned long long)arg1 withBlock:(CDUnknownBlockType)arg2;
- (struct CGPoint)iconPointInView:(id)arg1;
- (struct CGSize)titleSize;
- (struct CGSize)iconSize;
@property(nonatomic) double badgeIconOverlapWidth; // @synthesize badgeIconOverlapWidth=_badgeIconOverlapWidth;
- (struct CGRect)imageRectForContentRect:(struct CGRect)arg1;
- (struct CGRect)titleRectForContentRect:(struct CGRect)arg1;
- (void)setIconColor:(id)arg1 badgeBgColor:(id)arg2 badgeTextColor:(id)arg3;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)rejectTMAtmosphereStyle;

@end

