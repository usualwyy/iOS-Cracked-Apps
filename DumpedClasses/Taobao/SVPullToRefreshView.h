//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSDate, NSDateFormatter, NSMutableArray, TBAnimationView, UIActivityIndicatorView, UIColor, UIImageView, UILabel, UIScrollView;

@interface SVPullToRefreshView : UIView
{
    _Bool _showsPullToRefresh;
    _Bool _isDynamicSetClipsToBounds;
    _Bool _wasTriggerNotByDrag;
    _Bool _wasTriggeredByUser;
    _Bool _needPlaySound;
    _Bool _showsDateLabel;
    _Bool _isObserving;
    CDUnknownBlockType pullToRefreshActionHandler;
    UIColor *textColor;
    long long activityIndicatorViewStyle;
    NSDate *lastUpdatedDate;
    NSDateFormatter *dateFormatter;
    unsigned long long _state;
    UIScrollView *_scrollView;
    UIImageView *_arrow;
    UIActivityIndicatorView *_activityIndicatorView;
    UILabel *_titleLabel;
    UILabel *_dateLabel;
    UILabel *_bottomLabel;
    double _originalTopInset;
    TBAnimationView *_animationView;
    UILabel *_subtitleLabel;
    NSMutableArray *_titles;
    NSMutableArray *_subtitles;
    NSMutableArray *_viewForState;
    NSMutableArray *_animatioinForState;
}

@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(nonatomic) _Bool showsDateLabel; // @synthesize showsDateLabel=_showsDateLabel;
@property(nonatomic) _Bool needPlaySound; // @synthesize needPlaySound=_needPlaySound;
@property(nonatomic) _Bool wasTriggeredByUser; // @synthesize wasTriggeredByUser=_wasTriggeredByUser;
@property(retain, nonatomic) NSMutableArray *animatioinForState; // @synthesize animatioinForState=_animatioinForState;
@property(retain, nonatomic) NSMutableArray *viewForState; // @synthesize viewForState=_viewForState;
@property(retain, nonatomic) NSMutableArray *subtitles; // @synthesize subtitles=_subtitles;
@property(retain, nonatomic) NSMutableArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(nonatomic) _Bool wasTriggerNotByDrag; // @synthesize wasTriggerNotByDrag=_wasTriggerNotByDrag;
@property(retain, nonatomic) TBAnimationView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) _Bool isDynamicSetClipsToBounds; // @synthesize isDynamicSetClipsToBounds=_isDynamicSetClipsToBounds;
@property(nonatomic) double originalTopInset; // @synthesize originalTopInset=_originalTopInset;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(nonatomic) _Bool showsPullToRefresh; // @synthesize showsPullToRefresh=_showsPullToRefresh;
@property(nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate;
@property(copy, nonatomic) CDUnknownBlockType pullToRefreshActionHandler; // @synthesize pullToRefreshActionHandler;
- (void).cxx_destruct;
- (void)rotateArrow:(float)arg1 hide:(_Bool)arg2;
- (void)stopAnimating;
- (void)playSound;
- (void)startAnimating;
- (void)triggerRefresh;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter;
@property(nonatomic) long long activityIndicatorViewStyle; // @synthesize activityIndicatorViewStyle;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor;
- (void)setCustomView:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSubtitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setArrowColor:(id)arg1;
- (id)arrowColor;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(readonly, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
- (void)scrollViewDidScroll:(struct CGPoint)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setScrollViewContentInset:(struct UIEdgeInsets)arg1;
- (void)setScrollViewContentInsetForLoading;
- (void)resetScrollViewContentInset;
- (void)layoutSubviews;
- (void)willMoveToSuperview:(id)arg1;
- (void)showCustomAnimation;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

