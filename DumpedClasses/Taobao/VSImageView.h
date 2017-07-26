//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GLKViewDelegate.h"

@class CIImage, GLKView, NSString, VSContext, VSPixelBufferHolder, VSSampleBufferHolder;

@interface VSImageView : UIView <GLKViewDelegate>
{
    _Bool _scaleAndResizeCIImageAutomatically;
    long long _contextType;
    VSContext *_context;
    GLKView *_GLKView;
    CIImage *_CIImage;
    double _CIImageTime;
    VSSampleBufferHolder *_sampleBufferHolder;
    VSPixelBufferHolder *_pixelBufferHolder;
    struct CGAffineTransform _preferredCIImageTransform;
}

+ (struct CGAffineTransform)preferredCIImageTransformFromUIImage:(id)arg1;
@property(retain, nonatomic) VSPixelBufferHolder *pixelBufferHolder; // @synthesize pixelBufferHolder=_pixelBufferHolder;
@property(retain, nonatomic) VSSampleBufferHolder *sampleBufferHolder; // @synthesize sampleBufferHolder=_sampleBufferHolder;
@property(nonatomic) _Bool scaleAndResizeCIImageAutomatically; // @synthesize scaleAndResizeCIImageAutomatically=_scaleAndResizeCIImageAutomatically;
@property(nonatomic) struct CGAffineTransform preferredCIImageTransform; // @synthesize preferredCIImageTransform=_preferredCIImageTransform;
@property(nonatomic) double CIImageTime; // @synthesize CIImageTime=_CIImageTime;
@property(retain, nonatomic) CIImage *CIImage; // @synthesize CIImage=_CIImage;
@property(retain, nonatomic) GLKView *GLKView; // @synthesize GLKView=_GLKView;
@property(retain, nonatomic) VSContext *context; // @synthesize context=_context;
@property(nonatomic) long long contextType; // @synthesize contextType=_contextType;
- (void).cxx_destruct;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)setImageByUIImage:(id)arg1;
- (void)setImageBySampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)setImageByPixelBuffer:(struct __CVBuffer *)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)scaleAndResizeCIImage:(id)arg1 forRect:(struct CGRect)arg2;
- (id)renderedUIImage;
- (id)renderedCIImage;
- (id)renderedCIImageInRect:(struct CGRect)arg1;
- (struct __CVBuffer *)renderedPixelBuffer;
- (id)renderedUIImageInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay;
- (void)unloadContext;
- (void)layoutSubviews;
- (_Bool)loadContextIfNeeded;
- (void)_imageViewCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

