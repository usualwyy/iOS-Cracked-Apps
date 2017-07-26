//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UIImage, UIImageView, UILabel;

@interface TMMarketPullToRefreshBackgroundView : UIView
{
    UIColor *_hintColor;
    NSString *_hint;
    UIImage *_img;
    double _imgWidth;
    double _imgHeight;
    double _imgOffsetOfBottom;
    UIImageView *_backgroundImageView;
    UILabel *_hintLabel;
}

@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) double imgOffsetOfBottom; // @synthesize imgOffsetOfBottom=_imgOffsetOfBottom;
@property(nonatomic) double imgHeight; // @synthesize imgHeight=_imgHeight;
@property(nonatomic) double imgWidth; // @synthesize imgWidth=_imgWidth;
@property(retain, nonatomic) UIImage *img; // @synthesize img=_img;
@property(retain, nonatomic) NSString *hint; // @synthesize hint=_hint;
@property(retain, nonatomic) UIColor *hintColor; // @synthesize hintColor=_hintColor;
- (void).cxx_destruct;
- (void)hiddenHint;
- (void)showHint;
- (id)initWithFrame:(struct CGRect)arg1;

@end

