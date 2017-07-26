//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface MomViewPickerAttribute : NSObject
{
    _Bool _showSelectedLine;
    _Bool _showUnitLabel;
    double _itemHeight;
    UIFont *_normalFont;
    UIFont *_selectedFont;
    UIColor *_normalColor;
    UIColor *_selectedColor;
    UIColor *_selectedLineColor;
    double _selectedLineHeight;
    UIFont *_unitFont;
    NSString *_unitString;
}

@property(retain, nonatomic) NSString *unitString; // @synthesize unitString=_unitString;
@property(retain, nonatomic) UIFont *unitFont; // @synthesize unitFont=_unitFont;
@property(nonatomic) _Bool showUnitLabel; // @synthesize showUnitLabel=_showUnitLabel;
@property(nonatomic) double selectedLineHeight; // @synthesize selectedLineHeight=_selectedLineHeight;
@property(retain, nonatomic) UIColor *selectedLineColor; // @synthesize selectedLineColor=_selectedLineColor;
@property(nonatomic) _Bool showSelectedLine; // @synthesize showSelectedLine=_showSelectedLine;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *normalColor; // @synthesize normalColor=_normalColor;
@property(retain, nonatomic) UIFont *selectedFont; // @synthesize selectedFont=_selectedFont;
@property(retain, nonatomic) UIFont *normalFont; // @synthesize normalFont=_normalFont;
@property(nonatomic) double itemHeight; // @synthesize itemHeight=_itemHeight;
- (void).cxx_destruct;

@end

