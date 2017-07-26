//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSArray, NSMutableArray;

@interface AliDetailProductSelectControl : UIScrollView
{
    long long _currentIndex;
    id <AliDetailProductSelectControlDelegate> _selectDelegate;
    NSMutableArray *_imageViews;
    NSArray *_imageUrls;
}

@property(retain, nonatomic) NSArray *imageUrls; // @synthesize imageUrls=_imageUrls;
@property(retain, nonatomic) NSMutableArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) __weak id <AliDetailProductSelectControlDelegate> selectDelegate; // @synthesize selectDelegate=_selectDelegate;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
- (void)setImageView:(id)arg1 state:(_Bool)arg2;
- (void)handleSingleFingerEvent:(id)arg1;
- (id)initWithImgUrls:(id)arg1 width:(double)arg2;

@end

