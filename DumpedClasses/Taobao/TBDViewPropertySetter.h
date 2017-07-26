//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor;

@interface TBDViewPropertySetter : NSObject
{
    NSString *_tbdWidth;
    NSString *_tbdHeight;
    NSString *_tbdBackgroundColor;
    NSString *_tbdAlpha;
    NSString *_tbdVisibility;
    NSString *_tbdAccessibilityText;
    NSString *_tbdAccessibilityTextHidden;
    NSString *_tbdFocusable;
    NSString *_tbdCorenlRadius;
    NSString *_tbdBorderWidth;
    NSString *_tbdBorderColor;
}

+ (id)KVOViewAttributesKeysWithAttributes:(id)arg1;
+ (void)setKVOPropertyWithAttributes:(id)arg1 inView:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIColor *dBorderColor;
@property(readonly, nonatomic) double dBorderWidth;
@property(readonly, nonatomic) double dCornerRadius;
@property(readonly, nonatomic) _Bool dFocusable;
@property(readonly, nonatomic) _Bool dAccessibilityTextHidden;
@property(readonly, copy, nonatomic) NSString *dAccessibilityText;
@property(readonly, nonatomic) unsigned long long dVisibility;
@property(readonly, nonatomic) double dAlpha;
@property(readonly, nonatomic) UIColor *dBackgroundColor;
@property(readonly, nonatomic) double dHeight;
@property(readonly, nonatomic) double dWidth;
- (id)viewAttributtesKeys;
- (void)setDViewPropertyWithAttributes:(id)arg1 inView:(id)arg2;
- (void)setDViewDefaultPropertyWithView:(id)arg1;
- (void)setPrivateVariablesWithAttributes:(id)arg1;

@end

