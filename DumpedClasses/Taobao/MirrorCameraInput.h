//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MirrorOpenGLNode.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, MirrorGLKProgram, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_dispatch_source>, NSString;

@interface MirrorCameraInput : MirrorOpenGLNode <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    NSObject<OS_dispatch_queue> *_cameraQueue;
    NSObject<OS_dispatch_semaphore> *_frameRenderingSemaphore;
    const float *_preferConver;
    id <MirrorCameraInputDelegate> _delegate;
    unsigned int _luminanceTexture;
    unsigned int _chrominanceTexture;
    int _outputRotation;
    int _internalRotation;
    _Bool _captureAsYUV;
    _Bool _waitForFocus;
    _Bool _updateSecondsPerFrame;
    _Bool _secondsPerFrameArrayDirty;
    _Bool _rendering;
    _Bool _capturing;
    _Bool _horizontallyMirrorFrontFacingCamera;
    _Bool _horizontallyMirrorRearFacingCamera;
    _Bool _hasStillImageOutput;
    _Bool _exposurePointSupported;
    _Bool _shouldStartCapturingWhenBecomesActive;
    _Bool _takeAPhotoAfterAdjustingFocus;
    AVCaptureSession *_captureSession;
    unsigned long long _videoWidth;
    unsigned long long _videoHeight;
    AVCaptureDevice *_device;
    AVCaptureDeviceInput *_input;
    NSString *_sessionPreset;
    long long _cameraPosition;
    long long _flashMode;
    long long _torchMode;
    double _secondsPerFrame;
    NSMutableArray *_secondsPerFrameArray;
    NSObject<OS_dispatch_source> *_timerSPF;
    AVCaptureVideoDataOutput *_videoDataOutput;
    AVCaptureStillImageOutput *_stillImageOutput;
    long long _cameraOrientation;
    MirrorGLKProgram *_program;
    CDUnknownBlockType _takeAPhotoCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType takeAPhotoCompletion; // @synthesize takeAPhotoCompletion=_takeAPhotoCompletion;
@property(nonatomic) _Bool takeAPhotoAfterAdjustingFocus; // @synthesize takeAPhotoAfterAdjustingFocus=_takeAPhotoAfterAdjustingFocus;
@property(nonatomic) _Bool shouldStartCapturingWhenBecomesActive; // @synthesize shouldStartCapturingWhenBecomesActive=_shouldStartCapturingWhenBecomesActive;
@property(readonly, nonatomic) _Bool exposurePointSupported; // @synthesize exposurePointSupported=_exposurePointSupported;
@property(nonatomic) _Bool captureAsYUV; // @synthesize captureAsYUV=_captureAsYUV;
@property(nonatomic) _Bool hasStillImageOutput; // @synthesize hasStillImageOutput=_hasStillImageOutput;
@property(retain, nonatomic) MirrorGLKProgram *program; // @synthesize program=_program;
@property(nonatomic) _Bool horizontallyMirrorRearFacingCamera; // @synthesize horizontallyMirrorRearFacingCamera=_horizontallyMirrorRearFacingCamera;
@property(nonatomic) _Bool horizontallyMirrorFrontFacingCamera; // @synthesize horizontallyMirrorFrontFacingCamera=_horizontallyMirrorFrontFacingCamera;
@property(nonatomic) long long cameraOrientation; // @synthesize cameraOrientation=_cameraOrientation;
@property(nonatomic) unsigned int chrominanceTexture; // @synthesize chrominanceTexture=_chrominanceTexture;
@property(nonatomic) unsigned int luminanceTexture; // @synthesize luminanceTexture=_luminanceTexture;
@property(nonatomic) __weak id <MirrorCameraInputDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput=_videoDataOutput;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSPF; // @synthesize timerSPF=_timerSPF;
@property(nonatomic, getter=isRendering) _Bool rendering; // @synthesize rendering=_rendering;
@property(nonatomic) _Bool secondsPerFrameArrayDirty; // @synthesize secondsPerFrameArrayDirty=_secondsPerFrameArrayDirty;
@property(retain, nonatomic) NSMutableArray *secondsPerFrameArray; // @synthesize secondsPerFrameArray=_secondsPerFrameArray;
@property(nonatomic) _Bool updateSecondsPerFrame; // @synthesize updateSecondsPerFrame=_updateSecondsPerFrame;
@property(nonatomic) _Bool waitForFocus; // @synthesize waitForFocus=_waitForFocus;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
@property(retain, nonatomic) NSString *sessionPreset; // @synthesize sessionPreset=_sessionPreset;
@property(retain, nonatomic) AVCaptureDeviceInput *input; // @synthesize input=_input;
@property(retain, nonatomic) AVCaptureDevice *device; // @synthesize device=_device;
@property(nonatomic) unsigned long long videoHeight; // @synthesize videoHeight=_videoHeight;
@property(nonatomic) unsigned long long videoWidth; // @synthesize videoWidth=_videoWidth;
@property(retain, nonatomic) AVCaptureSession *captureSession; // @synthesize captureSession=_captureSession;
- (void).cxx_destruct;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (long long)currentVideoOrientation;
- (void)takeAPhotoWithCompletion:(CDUnknownBlockType)arg1;
- (id)makeUIImage:(char *)arg1 bufferInfo:(struct CVPlanarPixelBufferInfo_YCbCrBiPlanar *)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4 bytesPerRow:(unsigned long long)arg5;
- (void)updateOrientationSendToTargets;
- (void)updateTargetsForVideoCameraUsingCacheTextureAtWidth:(int)arg1 height:(int)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)convertYUVToRGBOutput;
- (void)processOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)updateTargetsForSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)dealloc;
- (void)destroySPFTimer;
- (void)createSPFTimer;
@property(readonly, nonatomic) double secondsPerFrame; // @synthesize secondsPerFrame=_secondsPerFrame;
@property(nonatomic, getter=isCapturing) _Bool capturing; // @synthesize capturing=_capturing;
- (void)stopCapturing;
- (void)startCapturing;
@property(readonly, nonatomic) _Bool hasTorch;
@property(nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
- (void)setSessionPreset:(id)arg1 captureAsYUV:(_Bool)arg2;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(_Bool)arg1;
- (void)deviceSubjectAreaDidChange:(id)arg1;
@property(readonly, nonatomic, getter=isAdjustingFocus) _Bool adjustingFocus;
- (_Bool)automaticallyEnablesLowLightBoostWhenAvailable;
@property(readonly, nonatomic) _Bool lowLightBoostEnabled;
@property(readonly, nonatomic) _Bool lowLightBoostSupported;
- (void)setFocusPoint:(struct CGPoint)arg1;
- (struct CGPoint)focusPoint;
@property(readonly, nonatomic) _Bool focusPointSupported;
- (void)removeObservers;
- (void)setupOutputs;
- (void)initConverProgram;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(long long)arg2 captureAsYUV:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

