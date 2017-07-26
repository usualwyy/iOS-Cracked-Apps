//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WVDynamicHandler.h"

#import "TBARCameraCMSampleBufferDelegate.h"
#import "TBARCameraCaptureDelegate.h"

@class CMMotionManager, NSDictionary, NSString, TBARCameraViewController, TBARMarkerRecognitionManager, TBARSlamRecognitionManager, UIImageView, UIView;

@interface AR : WVDynamicHandler <TBARCameraCMSampleBufferDelegate, TBARCameraCaptureDelegate>
{
    float quaternion[7];
    _Bool _isARScaning;
    _Bool _bScanAnimateHidden;
    _Bool _hideFrame;
    float _timeout;
    TBARCameraViewController *_cameraVC;
    CDUnknownBlockType _callback;
    unsigned long long _captureType;
    NSDictionary *_scanParams;
    double _firstRequestTime;
    double _lastRequestTime;
    TBARSlamRecognitionManager *_recognitionManager;
    TBARMarkerRecognitionManager *_markerRecognitionManager;
    CMMotionManager *_motionManager;
    long long _trackState;
    NSString *_slam3DModelDirectory;
    float *_trackMatrix;
    float *_modelMatrix;
    NSString *_base64String;
    float *_markerTrackMatrix;
    NSString *_markerTrackName;
    UIView *_barCodeView;
    UIView *_barCodeAnimate;
    UIImageView *_barCodeNet;
    UIView *_barCodeShadow1;
    UIView *_barCodeShadow2;
    double _frameWidthRelativeToPreview;
    double _frameAspectRatio;
    struct CGRect _scanRect;
}

+ (id)getSafeImageForBase64:(id)arg1;
+ (id)getSafeImage:(id)arg1;
+ (unsigned char)boundImageData:(int)arg1;
+ (double)screenRelateScale;
+ (unsigned long long)instanceScope;
@property(nonatomic) double frameAspectRatio; // @synthesize frameAspectRatio=_frameAspectRatio;
@property(nonatomic) double frameWidthRelativeToPreview; // @synthesize frameWidthRelativeToPreview=_frameWidthRelativeToPreview;
@property(nonatomic) _Bool hideFrame; // @synthesize hideFrame=_hideFrame;
@property(retain, nonatomic) UIView *barCodeShadow2; // @synthesize barCodeShadow2=_barCodeShadow2;
@property(retain, nonatomic) UIView *barCodeShadow1; // @synthesize barCodeShadow1=_barCodeShadow1;
@property(retain, nonatomic) UIImageView *barCodeNet; // @synthesize barCodeNet=_barCodeNet;
@property(retain, nonatomic) UIView *barCodeAnimate; // @synthesize barCodeAnimate=_barCodeAnimate;
@property(retain, nonatomic) UIView *barCodeView; // @synthesize barCodeView=_barCodeView;
@property(nonatomic) _Bool bScanAnimateHidden; // @synthesize bScanAnimateHidden=_bScanAnimateHidden;
@property(nonatomic) struct CGRect scanRect; // @synthesize scanRect=_scanRect;
@property(copy, nonatomic) NSString *markerTrackName; // @synthesize markerTrackName=_markerTrackName;
@property(nonatomic) float *markerTrackMatrix; // @synthesize markerTrackMatrix=_markerTrackMatrix;
@property(copy, nonatomic) NSString *base64String; // @synthesize base64String=_base64String;
@property(nonatomic) float *modelMatrix; // @synthesize modelMatrix=_modelMatrix;
@property(nonatomic) float *trackMatrix; // @synthesize trackMatrix=_trackMatrix;
@property(copy, nonatomic) NSString *slam3DModelDirectory; // @synthesize slam3DModelDirectory=_slam3DModelDirectory;
@property(nonatomic) long long trackState; // @synthesize trackState=_trackState;
@property(retain, nonatomic) CMMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(retain, nonatomic) TBARMarkerRecognitionManager *markerRecognitionManager; // @synthesize markerRecognitionManager=_markerRecognitionManager;
@property(retain, nonatomic) TBARSlamRecognitionManager *recognitionManager; // @synthesize recognitionManager=_recognitionManager;
@property(nonatomic) float timeout; // @synthesize timeout=_timeout;
@property(nonatomic) double lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(nonatomic) double firstRequestTime; // @synthesize firstRequestTime=_firstRequestTime;
@property(nonatomic) _Bool isARScaning; // @synthesize isARScaning=_isARScaning;
@property(copy, nonatomic) NSDictionary *scanParams; // @synthesize scanParams=_scanParams;
@property(nonatomic) unsigned long long captureType; // @synthesize captureType=_captureType;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) TBARCameraViewController *cameraVC; // @synthesize cameraVC=_cameraVC;
- (void).cxx_destruct;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 base64String:(id *)arg2;
- (void)pauseWithContext:(id)arg1;
- (void)resetWithContext:(id)arg1 withNextRequest:(id)arg2;
- (void)arScanSucessWithResult:(id)arg1;
- (void)arScanFailedWithErrorCode:(id)arg1 errorMsg:(id)arg2;
- (void)handleScan:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureVideo:(char **)arg1 width:(int)arg2 height:(int)arg3;
- (void)captureCMSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)stopBarCodeAnimate;
- (void)startBarCodeAnimate;
- (void)hideScanView;
- (void)showScanView;
- (void)addCorner:(id)arg1;
- (void)addBarCodeView;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)stopDeviceMotionUpdate;
- (void)startDeviceMotionUpdate;
- (struct CGRect)modelTrackerViewport;
- (id)yamlPathForDevice;
- (void)stopARScan;
- (void)closeCamera;
- (void)startScanWithParams:(id)arg1;
- (void)openCameraWithResult:(CDUnknownBlockType)arg1;
- (id)screenshotPath;
- (void)cleanupCache;
- (id)cacheFolder;
- (id)saveScreenshotWithBGImage:(id)arg1;
- (void)getMarkerTrackingState:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)destroyMarkerTracker:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)stopMarkerTracking:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)startMarkerTracking:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)getModelTrackingState:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)destroyModelTracker:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)stopModelTracking:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)startModelTracking:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)load3DModelMatrixWithFile:(id)arg1;
- (void)initMarkerTracker:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)initModelTracker:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)screenshot:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)scanCloseCamera:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)stopScan:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)startScan:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)scanOpenCamera:(id)arg1 withCallback:(CDUnknownBlockType)arg2 withWebView:(id)arg3 withViewController:(id)arg4;
- (void)dealloc;
- (void)resetProperties;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

