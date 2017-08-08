//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;

@interface GWOperateViewPageControl : UIView
{
    UIColor *_defaultColor;
    UIColor *_selectedColor;
    long long _count;
    double _currentIndex;
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) double currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(retain, nonatomic) UIColor *selectedColor; // @synthesize selectedColor=_selectedColor;
@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
- (void).cxx_destruct;
- (void)scrollToIndex:(long long)arg1;
- (void)updatePageCount:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
