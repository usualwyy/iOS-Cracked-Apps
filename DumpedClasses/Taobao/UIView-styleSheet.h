//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIStyleSheet;

@interface UIView (styleSheet)
+ (id)initWithFrame:(struct CGRect)arg1 styleName:(id)arg2;
+ (id)initWithStyleName:(id)arg1;
- (void)applyStyleSheet:(id)arg1;
- (void)applyStyleSheet;
- (void)reapplyStyleSheet;
@property(retain, nonatomic) UIStyleSheet *styleSheet;
@property(retain, nonatomic) NSString *styleName;
- (void)setLastStyleSheet:(id)arg1;
- (id)lastStyleSheet;
@end

