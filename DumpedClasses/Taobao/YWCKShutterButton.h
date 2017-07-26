//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class UIImage, UIImageView;

@interface YWCKShutterButton : UIButton
{
    UIImageView *_outerView;
    UIImageView *_innerView;
    UIImage *_innerViewNormalImage;
    UIImage *_innerViewSelectedImage;
}

@property(retain, nonatomic) UIImage *innerViewSelectedImage; // @synthesize innerViewSelectedImage=_innerViewSelectedImage;
@property(retain, nonatomic) UIImage *innerViewNormalImage; // @synthesize innerViewNormalImage=_innerViewNormalImage;
@property(retain, nonatomic) UIImageView *innerView; // @synthesize innerView=_innerView;
@property(retain, nonatomic) UIImageView *outerView; // @synthesize outerView=_outerView;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)startAnimation;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

