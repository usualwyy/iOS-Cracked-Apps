//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIButton, UIColor, UIImage, UILabel;

@interface TBContactTabBarItem : UIView
{
    CDUnknownBlockType _touchTabItemView;
    _Bool _isSelected;
    NSString *_itemText;
    UIColor *_textColor;
    UIColor *_highlightedColor;
    UIButton *_itemIconView;
    UIImage *_iconImage;
    UIImage *_highlightedIconImage;
    UILabel *_itemLabel;
    UIView *_linkView;
}

@property(nonatomic) __weak UIView *linkView; // @synthesize linkView=_linkView;
@property(retain, nonatomic) UILabel *itemLabel; // @synthesize itemLabel=_itemLabel;
@property(retain, nonatomic) UIImage *highlightedIconImage; // @synthesize highlightedIconImage=_highlightedIconImage;
@property(retain, nonatomic) UIImage *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) UIButton *itemIconView; // @synthesize itemIconView=_itemIconView;
@property(retain, nonatomic) UIColor *highlightedColor; // @synthesize highlightedColor=_highlightedColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *itemText; // @synthesize itemText=_itemText;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setTouchTabItemView:(CDUnknownBlockType)arg1;
- (void)setItemIcon:(id)arg1 title:(id)arg2 titleHeight:(double)arg3 fontSize:(double)arg4;
- (void)setItemIcon:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

