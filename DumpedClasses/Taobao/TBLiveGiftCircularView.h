//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface TBLiveGiftCircularView : UIView
{
    long long _percent;
    long long _totalPercent;
    double _startAngle;
    double _endAngle;
}

@property(nonatomic) double endAngle; // @synthesize endAngle=_endAngle;
@property(nonatomic) double startAngle; // @synthesize startAngle=_startAngle;
@property(nonatomic) long long totalPercent; // @synthesize totalPercent=_totalPercent;
@property(nonatomic) long long percent; // @synthesize percent=_percent;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

