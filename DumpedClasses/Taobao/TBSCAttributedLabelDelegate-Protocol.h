//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSTextCheckingResult, TBSCAttributedLabel, UIColor;

@protocol TBSCAttributedLabelDelegate <NSObject>

@optional
- (UIColor *)colorForLink:(NSTextCheckingResult *)arg1 underlineStyle:(int *)arg2;
- (void)attributedLabel:(TBSCAttributedLabel *)arg1 didFollowLink:(NSTextCheckingResult *)arg2;
- (_Bool)attributedLabel:(TBSCAttributedLabel *)arg1 shouldFollowLink:(NSTextCheckingResult *)arg2;
@end

