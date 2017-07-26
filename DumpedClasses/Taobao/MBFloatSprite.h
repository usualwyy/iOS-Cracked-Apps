//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MBSprite.h"

@class NSString, UIColor;

@interface MBFloatSprite : MBSprite
{
    double _leftActiveTime;
    double _duration;
    unsigned long long _direction;
    NSString *_text;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    double _fontSize;
    double _borderWidth;
    UIColor *_borderColor;
    double _cornerRadius;
    UIColor *_shadowColor;
    struct CGSize _shadowOffset;
}

@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (id)bindingView;
- (struct CGPoint)originInBounds:(struct CGRect)arg1 withSprites:(id)arg2;
- (_Bool)validWithTime:(double)arg1;
- (double)estimateActiveTime;
- (void)updateWithTime:(double)arg1;
- (id)init;

@end

