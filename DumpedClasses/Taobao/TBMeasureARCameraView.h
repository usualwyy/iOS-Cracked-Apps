//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSTimer, TBMeasureAREditImageView, TBMeasureARMaskView, TBMeasureARResultView, TBMeasureCamera, TBMeasureCameraFocusView, TBMeasureFootModel, TBMeasureSizeChartViewModel, UIImageView, UILabel;

@interface TBMeasureARCameraView : UIView
{
    _Bool _cameraIsInit;
    _Bool _imageSaved;
    _Bool _needStop;
    _Bool _cameraStarted;
    TBMeasureSizeChartViewModel *_sizeCharModel;
    TBMeasureCamera *_camera;
    unsigned long long _state;
    CDUnknownBlockType _cameraInitFailed;
    CDUnknownBlockType _cameraInitSucceed;
    TBMeasureFootModel *_footModel;
    UIView *_cameraPreviewContainer;
    TBMeasureAREditImageView *_editView;
    TBMeasureARMaskView *_maskView;
    TBMeasureARResultView *_resultView;
    TBMeasureCameraFocusView *_focusView;
    UILabel *_hintLabel;
    UIImageView *_animImgView;
    NSTimer *_animationTimer;
    unsigned long long _animationCount;
    CDUnknownBlockType _animationStoped;
}

@property(copy, nonatomic) CDUnknownBlockType animationStoped; // @synthesize animationStoped=_animationStoped;
@property(nonatomic) unsigned long long animationCount; // @synthesize animationCount=_animationCount;
@property(nonatomic) _Bool cameraStarted; // @synthesize cameraStarted=_cameraStarted;
@property(nonatomic) _Bool needStop; // @synthesize needStop=_needStop;
@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) UIImageView *animImgView; // @synthesize animImgView=_animImgView;
@property(retain, nonatomic) UILabel *hintLabel; // @synthesize hintLabel=_hintLabel;
@property(retain, nonatomic) TBMeasureCameraFocusView *focusView; // @synthesize focusView=_focusView;
@property(retain, nonatomic) TBMeasureARResultView *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) TBMeasureARMaskView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) TBMeasureAREditImageView *editView; // @synthesize editView=_editView;
@property(retain, nonatomic) UIView *cameraPreviewContainer; // @synthesize cameraPreviewContainer=_cameraPreviewContainer;
@property(nonatomic) _Bool imageSaved; // @synthesize imageSaved=_imageSaved;
@property(nonatomic) _Bool cameraIsInit; // @synthesize cameraIsInit=_cameraIsInit;
@property(retain, nonatomic) TBMeasureFootModel *footModel; // @synthesize footModel=_footModel;
@property(copy, nonatomic) CDUnknownBlockType cameraInitSucceed; // @synthesize cameraInitSucceed=_cameraInitSucceed;
@property(copy, nonatomic) CDUnknownBlockType cameraInitFailed; // @synthesize cameraInitFailed=_cameraInitFailed;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) TBMeasureCamera *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) TBMeasureSizeChartViewModel *sizeCharModel; // @synthesize sizeCharModel=_sizeCharModel;
- (void).cxx_destruct;
- (void)cameraOutputHandler:(id)arg1 image:(id)arg2;
- (void)cameraErrorHandler:(id)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)saveImageToAlbum:(id)arg1;
- (void)saveEditResult:(_Bool)arg1;
- (_Bool)showEditView:(_Bool)arg1;
- (void)stopCamera;
- (void)startCamera;
- (void)clearState;
- (void)startTimer:(_Bool)arg1;
- (void)showFocusView;
- (void)focusToPoint;
- (void)showAnimation;
- (void)showResultView:(_Bool)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)copyFootModel:(id)arg1;
- (void)needStopWithCallback:(CDUnknownBlockType)arg1;

@end

