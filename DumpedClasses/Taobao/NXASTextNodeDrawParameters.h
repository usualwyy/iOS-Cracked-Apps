//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NXASTextKitRenderer;

@interface NXASTextNodeDrawParameters : NSObject
{
    NXASTextKitRenderer *_renderer;
    struct CGColor *_backgroundColor;
    struct CGPoint _textOrigin;
}

@property(readonly, nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(readonly, nonatomic) struct CGPoint textOrigin; // @synthesize textOrigin=_textOrigin;
@property(readonly, nonatomic) NXASTextKitRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithRenderer:(id)arg1 textOrigin:(struct CGPoint)arg2 backgroundColor:(struct CGColor *)arg3;

@end

