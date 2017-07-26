//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, UIImageView, UILabel;

@interface TB3DBizSelectionView : UIView
{
    _Bool _folded;
    _Bool _animating;
    int _selectedIndex;
    id <TB3DBizSelectionViewDelegate> _delegate;
    NSArray *_titles;
    NSArray *_keys;
    double _titleLabelWidth;
    double _titleLabelHeight;
    UIView *_selectedInfo;
    UILabel *_selectedTitleLabel;
    UILabel *_triangleLabel;
    UILabel *_checkLabel;
    UIView *_optionsContainerView;
    UIImageView *_optionsBackgroundView;
    UIView *_optionsView;
}

@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) _Bool folded; // @synthesize folded=_folded;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) UIView *optionsView; // @synthesize optionsView=_optionsView;
@property(retain, nonatomic) UIImageView *optionsBackgroundView; // @synthesize optionsBackgroundView=_optionsBackgroundView;
@property(retain, nonatomic) UIView *optionsContainerView; // @synthesize optionsContainerView=_optionsContainerView;
@property(retain, nonatomic) UILabel *checkLabel; // @synthesize checkLabel=_checkLabel;
@property(retain, nonatomic) UILabel *triangleLabel; // @synthesize triangleLabel=_triangleLabel;
@property(retain, nonatomic) UILabel *selectedTitleLabel; // @synthesize selectedTitleLabel=_selectedTitleLabel;
@property(retain, nonatomic) UIView *selectedInfo; // @synthesize selectedInfo=_selectedInfo;
@property(nonatomic) double titleLabelHeight; // @synthesize titleLabelHeight=_titleLabelHeight;
@property(nonatomic) double titleLabelWidth; // @synthesize titleLabelWidth=_titleLabelWidth;
@property(copy, nonatomic) NSArray *keys; // @synthesize keys=_keys;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) __weak id <TB3DBizSelectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tap:(id)arg1;
- (void)setSelectedKey:(id)arg1;
- (void)shouldSelectedIndex:(int)arg1;
- (void)dismissOptions;
- (void)showOptions;
- (id)titleLabelWithText:(id)arg1;
- (void)setupSelectedInfo;
- (void)setupOptionsView;
- (void)genTitleLabelSize;
- (void)commonInit;
- (id)initWithTitles:(id)arg1 forKeys:(id)arg2;

@end

