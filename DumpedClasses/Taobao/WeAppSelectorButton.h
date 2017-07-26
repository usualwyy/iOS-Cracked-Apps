//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeAppBasicMenuItemView.h"

@class UIButton, UIImageView, UILabel;

@interface WeAppSelectorButton : WeAppBasicMenuItemView
{
    _Bool _isSelected;
    UIImageView *_selectorIcon;
    UIImageView *_selectorPoint;
    UIImageView *_selectorNumImage;
    UIButton *_imageButton;
    UILabel *_numberLabel;
    UILabel *_textLabel;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UIImageView *selectorNumImage; // @synthesize selectorNumImage=_selectorNumImage;
@property(retain, nonatomic) UIImageView *selectorPoint; // @synthesize selectorPoint=_selectorPoint;
@property(retain, nonatomic) UIImageView *selectorIcon; // @synthesize selectorIcon=_selectorIcon;
- (void).cxx_destruct;
- (void)setCssFontSize:(id)arg1 isSelect:(_Bool)arg2;
- (void)setCssGravity:(id)arg1 isSelect:(_Bool)arg2;
- (void)setCssTextColor:(id)arg1 isSelect:(_Bool)arg2;
- (void)setCssBackgroundColor:(id)arg1 isSelect:(_Bool)arg2;
- (void)setCssItem:(id)arg1 isSelect:(_Bool)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 forParam:(id)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSelectorIcon:(id)arg1 forState:(unsigned long long)arg2 forParam:(id)arg3;
- (void)setSelectorIcon:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)hideSelectorNumImage:(_Bool)arg1;
- (void)setNumber:(unsigned long long)arg1 formatType:(id)arg2 precision:(id)arg3 andNeedPoint:(_Bool)arg4;
- (void)setNumber:(unsigned long long)arg1 andNeedPoint:(_Bool)arg2;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)initSelectorIcon;
- (void)initLabelAndPoint;
- (void)initButton;
- (void)initLabel;
- (void)setupView;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

