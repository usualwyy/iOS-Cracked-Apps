//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class StyleKitContext, UIImageView, UILabel;

@interface TBOrderPayDetailView : UIView
{
    UILabel *_name;
    UILabel *_value;
    UIImageView *_icon;
    StyleKitContext *_styleKitContext;
    id _modelData;
    id _controller;
}

+ (double)cellHeight:(id)arg1 withWidth:(double)arg2 styleKitContext:(id)arg3;
@property(nonatomic) __weak id controller; // @synthesize controller=_controller;
@property(nonatomic) __weak id modelData; // @synthesize modelData=_modelData;
@property(retain, nonatomic) StyleKitContext *styleKitContext; // @synthesize styleKitContext=_styleKitContext;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *value; // @synthesize value=_value;
@property(retain, nonatomic) UILabel *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setData:(id)arg1 controller:(id)arg2;
- (id)initWithContext:(id)arg1;

@end

