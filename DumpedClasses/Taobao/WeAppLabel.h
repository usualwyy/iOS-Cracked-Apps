//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeAppComponent.h"

@class UICustomLineLabel, UIFont;

@interface WeAppLabel : WeAppComponent
{
    UICustomLineLabel *_label;
    UIFont *_labelFont;
}

@property(retain, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property(retain, nonatomic) UICustomLineLabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (int)getLabelHeight:(int)arg1 byMeasureSpec:(int)arg2 byItem:(id)arg3;
- (int)getLabelWidth:(int)arg1 byMeasureSpec:(int)arg2 byItem:(id)arg3;
- (void)onMeasureWithSpecW:(int)arg1 withSpecH:(int)arg2;
- (void)setCssShadow:(id)arg1;
- (void)setCssFontSize:(id)arg1;
- (void)setCssGravity:(id)arg1;
- (void)setCssNumberOfLines:(id)arg1;
- (void)setCssTextColor:(id)arg1;
- (void)setCss;
- (void)setupLabel;
- (void)refreshImageComponentInList;
- (void)refreshData;
- (void)setupDataValue;
- (void)setupDataValueAndConditon;
- (void)releaseConstrutView;
- (id)createView;

@end

