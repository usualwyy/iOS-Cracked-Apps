//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface TBICameraHeaderView : UIView
{
    UIButton *_flashButton;
    UIButton *_positionButton;
    CDUnknownBlockType _flashTouchAction;
    CDUnknownBlockType _devicePositionTouchAction;
    _Bool _isOpenFlash;
    unsigned long long _positionType;
}

@property(nonatomic) unsigned long long positionType; // @synthesize positionType=_positionType;
@property(nonatomic) _Bool isOpenFlash; // @synthesize isOpenFlash=_isOpenFlash;
- (void).cxx_destruct;
- (void)positionTouch;
- (void)setDevicePositionTouch:(CDUnknownBlockType)arg1;
- (void)setFlashTouch:(CDUnknownBlockType)arg1;
- (void)setCameraOpen:(_Bool)arg1;
- (void)flashTouch;
- (id)initWithFrame:(struct CGRect)arg1;

@end

