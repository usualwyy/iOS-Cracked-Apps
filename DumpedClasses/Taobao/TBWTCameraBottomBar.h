//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBWTShutterButton, UIButton;

@interface TBWTCameraBottomBar : UIView
{
    TBWTShutterButton *_shutterButton;
    UIButton *_deleteButton;
    UIButton *_accomplishButton;
}

@property(retain, nonatomic) UIButton *accomplishButton; // @synthesize accomplishButton=_accomplishButton;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) TBWTShutterButton *shutterButton; // @synthesize shutterButton=_shutterButton;
- (void).cxx_destruct;
- (void)_setupUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

