//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface NXASTextKitShadower : NSObject
{
    struct UIEdgeInsets _calculatedShadowPadding;
    UIColor *_shadowColor;
    double _shadowOpacity;
    double _shadowRadius;
    struct CGSize _shadowOffset;
}

@property(readonly, nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(readonly, nonatomic) double shadowOpacity; // @synthesize shadowOpacity=_shadowOpacity;
@property(readonly, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(readonly, nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
- (void).cxx_destruct;
- (struct CGPoint)offsetPointWithExternalPoint:(struct CGPoint)arg1;
- (struct CGPoint)offsetPointWithInternalPoint:(struct CGPoint)arg1;
- (struct CGRect)offsetRectWithInternalRect:(struct CGRect)arg1;
- (struct CGRect)outsetRectWithInsetRect:(struct CGRect)arg1;
- (struct CGSize)outsetSizeWithInsetSize:(struct CGSize)arg1;
- (struct CGRect)insetRectWithConstrainedRect:(struct CGRect)arg1;
- (struct CGSize)insetSizeWithConstrainedSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)shadowPadding;
- (void)setShadowInContext:(struct CGContext *)arg1;
- (_Bool)_shouldDrawShadow;
- (id)initWithShadowOffset:(struct CGSize)arg1 shadowColor:(id)arg2 shadowOpacity:(double)arg3 shadowRadius:(double)arg4;

@end

