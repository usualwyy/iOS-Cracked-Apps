//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIColor;

@interface TMMarketBreadcrumbNavigationView : UIView
{
    _Bool _showNumberic;
    UIColor *_selectedColor;
    UIColor *_normalColor;
    UIColor *_textColor;
    double _textFontSize;
    NSArray *_texts;
    unsigned long long _selectedIndex;
    double _triangleWidth;
    double _paddingWidth;
    unsigned long long _itemCount;
    NSMutableArray *_textLabels;
    NSMutableArray *_numbericLabels;
}

@property(retain, nonatomic) NSMutableArray *numbericLabels; // @synthesize numbericLabels=_numbericLabels;
@property(retain, nonatomic) NSMutableArray *textLabels; // @synthesize textLabels=_textLabels;
@property(nonatomic) unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(nonatomic) double paddingWidth; // @synthesize paddingWidth=_paddingWidth;
@property(nonatomic) double triangleWidth; // @synthesize triangleWidth=_triangleWidth;
@property(nonatomic) _Bool showNumberic; // @synthesize showNumberic=_showNumberic;
@property(nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) NSArray *texts; // @synthesize texts=_texts;
@property(nonatomic) double textFontSize; // @synthesize textFontSize=_textFontSize;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
- (void).cxx_destruct;
- (void)setSelectedIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)drawRect:(struct CGRect)arg1;

@end

