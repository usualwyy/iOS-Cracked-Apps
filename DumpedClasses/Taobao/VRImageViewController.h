//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VRViewController.h"

@class Cube, NSDate, NSMutableArray, Sphere, VRUIImage, VRUITexture;

@interface VRImageViewController : VRViewController
{
    VRUITexture *_texture;
    _Bool _lock;
    VRUIImage *_newImage;
    NSMutableArray *_newImageArray;
    VRUITexture *_oldTexture;
    NSDate *_lastFrameDate;
    float _alphaDuring;
    float _alpha;
    Sphere *_imageSphereRender;
    Cube *_imageCubeRender;
}

+ (int)supportedImageMaxSize;
- (void).cxx_destruct;
- (void)dealloc;
- (void)free;
- (void)setVRDistortionEnable:(_Bool)arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)update;
- (void)doAnimation;
- (void)refreshTextureIfNeeded;
- (void)refreshPanoTexture;
- (void)refreshCubeTexture;
- (double)getTimeElapseFromLastFrame;
- (void)loadCubeImages:(id)arg1 ofType:(int)arg2;
- (void)loadNextCubeImages:(id)arg1;
- (void)loadNextImage:(id)arg1;
- (void)unLock;
- (void)doLock;
- (void)loadImage:(id)arg1 ofType:(int)arg2;
- (void)viewDidLoad;
- (void)setupDistortion;
- (void)initParamWithRendType:(int)arg1;
- (id)initForCubemap;
- (id)init;

@end

