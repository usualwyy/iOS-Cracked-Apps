//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TMMarketBaseComponent.h"

@class NSString, UILabel, UIView;

@interface TMMarketTitleBComponent : TMMarketBaseComponent
{
    NSString *_dividerColor;
    NSString *_titleColor;
    NSString *_title;
    UILabel *_titleLabel;
    UIView *_leftLine;
    UIView *_rightLine;
}

@property(retain, nonatomic) UIView *rightLine; // @synthesize rightLine=_rightLine;
@property(retain, nonatomic) UIView *leftLine; // @synthesize leftLine=_leftLine;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)calculateLayout;
- (void)componentHasClicked;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *dividerColor; // @synthesize dividerColor=_dividerColor;

@end

