//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString, NSTextCheckingResult, NSTimeZone, NSURL, TBOTTTAttributedLabel;

@protocol TBOTTTAttributedLabelDelegate <NSObject>

@optional
- (void)attributedLabelTap:(TBOTTTAttributedLabel *)arg1;
- (void)attributedLabel:(TBOTTTAttributedLabel *)arg1 didSelectLinkWithTextCheckingResult:(NSTextCheckingResult *)arg2;
- (void)attributedLabel:(TBOTTTAttributedLabel *)arg1 didSelectLinkWithTransitInformation:(NSDictionary *)arg2;
- (void)attributedLabel:(TBOTTTAttributedLabel *)arg1 didSelectLinkWithDate:(NSDate *)arg2 timeZone:(NSTimeZone *)arg3 duration:(double)arg4;
- (void)attributedLabel:(TBOTTTAttributedLabel *)arg1 didSelectLinkWithDate:(NSDate *)arg2;
- (void)attributedLabel:(TBOTTTAttributedLabel *)arg1 didSelectLinkWithPhoneNumber:(NSString *)arg2;
- (void)attributedLabel:(TBOTTTAttributedLabel *)arg1 didSelectLinkWithAddress:(NSDictionary *)arg2;
- (void)attributedLabel:(TBOTTTAttributedLabel *)arg1 didSelectLinkWithURL:(NSURL *)arg2;
@end

