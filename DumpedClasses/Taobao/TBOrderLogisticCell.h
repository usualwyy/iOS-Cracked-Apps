//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOrderBasicCell.h"

@class UIImageView, UILabel;

@interface TBOrderLogisticCell : TBOrderBasicCell
{
    UILabel *_message;
    UILabel *_time;
    UIImageView *_icon;
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2 styleKitContext:(id)arg3 controller:(id)arg4;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *time; // @synthesize time=_time;
@property(retain, nonatomic) UILabel *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)bindData:(id)arg1 controller:(id)arg2 styleKitContext:(id)arg3;
- (void)layoutSubviews;
- (void)viewLayout;

@end

