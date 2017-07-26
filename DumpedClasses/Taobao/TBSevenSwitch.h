//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class UIColor, UIImage, UIImageView, UIView;

@interface TBSevenSwitch : UIControl
{
    UIView *background;
    UIImageView *backgroundImage;
    UIView *knob;
    UIImageView *knobImageView;
    UIImageView *onImageView;
    UIImageView *offImageView;
    double startTime;
    _Bool isAnimating;
    _Bool isRounded;
    _Bool on;
    UIColor *inactiveColor;
    UIColor *activeColor;
    UIColor *onColor;
    UIColor *borderColor;
    UIColor *knobColor;
    UIColor *shadowColor;
    UIImage *onImage;
    UIImage *offImage;
    UIImage *_inactiveColorImage;
    UIImage *_activeColorImage;
    UIImage *_onColorImage;
}

@property(retain, nonatomic) UIImage *onColorImage; // @synthesize onColorImage=_onColorImage;
@property(retain, nonatomic) UIImage *activeColorImage; // @synthesize activeColorImage=_activeColorImage;
@property(retain, nonatomic) UIImage *inactiveColorImage; // @synthesize inactiveColorImage=_inactiveColorImage;
@property(nonatomic) _Bool on; // @synthesize on;
@property(nonatomic) _Bool isRounded; // @synthesize isRounded;
@property(retain, nonatomic) UIImage *offImage; // @synthesize offImage;
@property(retain, nonatomic) UIImage *onImage; // @synthesize onImage;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor;
@property(retain, nonatomic) UIColor *knobColor; // @synthesize knobColor;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor;
@property(retain, nonatomic) UIColor *onColor; // @synthesize onColor;
@property(retain, nonatomic) UIColor *activeColor; // @synthesize activeColor;
@property(retain, nonatomic) UIColor *inactiveColor; // @synthesize inactiveColor;
- (void).cxx_destruct;
- (void)showOff:(_Bool)arg1;
- (void)showOn:(_Bool)arg1;
- (void)setKnobImageFrame:(struct CGRect)arg1;
- (void)setBGImage:(_Bool)arg1;
- (void)setKnobImage:(_Bool)arg1;
- (_Bool)isOn;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

