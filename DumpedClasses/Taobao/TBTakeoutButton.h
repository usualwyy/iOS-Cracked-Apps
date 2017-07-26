//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIColor, UILabel;

@interface TBTakeoutButton : UIView
{
    NSString *_iconfont;
    UIColor *_iconColor;
    NSString *_text;
    UIColor *_textColor;
    CDUnknownBlockType _actionBlock;
    UILabel *_iconLabel;
    UILabel *_textLabel;
}

+ (id)buttonWithFrame:(struct CGRect)arg1 iconFont:(id)arg2 iconColor:(id)arg3 text:(id)arg4 textColor:(id)arg5 action:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(copy, nonatomic) NSString *iconfont; // @synthesize iconfont=_iconfont;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)tap:(id)arg1;
- (void)setText:(id)arg1 withFrame:(struct CGRect)arg2 fontSize:(double)arg3;
- (void)setIconfont:(id)arg1 withFrame:(struct CGRect)arg2 fontSize:(double)arg3;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

