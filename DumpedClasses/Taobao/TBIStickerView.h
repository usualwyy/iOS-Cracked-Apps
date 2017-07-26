//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSDictionary, NSString, TBIWatermarkDO, UIColor, UIImage, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface TBIStickerView : UIView <UIGestureRecognizerDelegate>
{
    long long defaultInset;
    long long defaultMinimumSize;
    struct CGPoint beginningPoint;
    struct CGPoint beginningCenter;
    struct CGRect initialBounds;
    struct CGRect initialContentBounds;
    double initialDistance;
    double deltaAngle;
    UIImage *shotImage;
    _Bool _enableClose;
    _Bool _enableRotate;
    _Bool _enableFlip;
    _Bool _showEditingHandlers;
    id <TBIStickerViewDelegate> _delegate;
    UIView *_contentView;
    long long _minimumSize;
    UIColor *_outlineBorderColor;
    NSDictionary *_userInfo;
    TBIWatermarkDO *_markInfo;
    UIPanGestureRecognizer *_moveGesture;
    UIImageView *_rotateImageView;
    UIPanGestureRecognizer *_rotateGesture;
    UIImageView *_closeImageView;
    UITapGestureRecognizer *_closeGesture;
    UIImageView *_flipImageView;
    UITapGestureRecognizer *_flipGesture;
    UITapGestureRecognizer *_tapGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *flipGesture; // @synthesize flipGesture=_flipGesture;
@property(retain, nonatomic) UIImageView *flipImageView; // @synthesize flipImageView=_flipImageView;
@property(retain, nonatomic) UITapGestureRecognizer *closeGesture; // @synthesize closeGesture=_closeGesture;
@property(retain, nonatomic) UIImageView *closeImageView; // @synthesize closeImageView=_closeImageView;
@property(retain, nonatomic) UIPanGestureRecognizer *rotateGesture; // @synthesize rotateGesture=_rotateGesture;
@property(retain, nonatomic) UIImageView *rotateImageView; // @synthesize rotateImageView=_rotateImageView;
@property(retain, nonatomic) UIPanGestureRecognizer *moveGesture; // @synthesize moveGesture=_moveGesture;
@property(retain, nonatomic) TBIWatermarkDO *markInfo; // @synthesize markInfo=_markInfo;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIColor *outlineBorderColor; // @synthesize outlineBorderColor=_outlineBorderColor;
@property(nonatomic) long long minimumSize; // @synthesize minimumSize=_minimumSize;
@property(nonatomic) _Bool showEditingHandlers; // @synthesize showEditingHandlers=_showEditingHandlers;
@property(nonatomic) _Bool enableFlip; // @synthesize enableFlip=_enableFlip;
@property(nonatomic) _Bool enableRotate; // @synthesize enableRotate=_enableRotate;
@property(nonatomic) _Bool enableClose; // @synthesize enableClose=_enableClose;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <TBIStickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)shotImage;
- (void)setHandlerSize:(long long)arg1;
- (void)setPosition:(long long)arg1 forHandler:(long long)arg2;
- (void)setImage:(id)arg1 forHandler:(long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)handleTapGesture:(id)arg1;
- (void)handleFlipGesture:(id)arg1;
- (void)handleCloseGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (void)handleMoveGesture:(id)arg1;
- (id)initWithContentView:(id)arg1;
- (void)_setEnableFlip:(_Bool)arg1;
- (void)_setEnableRotate:(_Bool)arg1;
- (void)_setEnableClose:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

