//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface TBTaoPasswordBaseView : UIView
{
    UIView *_backgroundView;
    UILabel *_taoView;
    UIImageView *_logoView;
}

@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) UILabel *taoView; // @synthesize taoView=_taoView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 showSelfPasswordSwitch:(_Bool)arg2;

@end

