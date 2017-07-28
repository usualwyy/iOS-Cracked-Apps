//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GPUImageOutput<GPUImageInput>, NSArray, NSString, TuSDKFilterOption, TuSDKFilterParameter;

@interface TuSDKFilterWrap : NSObject
{
    NSArray *_textures;
    _Bool _isProcessed;
    TuSDKFilterOption *_opt;
    GPUImageOutput<GPUImageInput> *_filter;
}

+ (id)initWithOpt:(id)arg1;
@property(readonly, nonatomic) GPUImageOutput<GPUImageInput> *filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) TuSDKFilterOption *opt; // @synthesize opt=_opt;
- (void).cxx_destruct;
- (id)clone;
- (void)submitParameter;
@property(retain, nonatomic) TuSDKFilterParameter *filterParameter;
- (void)destroy;
- (_Bool)isEqualCode:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)texturesKeepInputWithImage:(id)arg1;
- (id)processWithImage:(id)arg1 orientation:(long long)arg2;
- (id)processWithImage:(id)arg1;
- (void)rotationTextures:(long long)arg1;
- (void)processImage;
- (void)bindWithCameraView:(id)arg1;
@property(readonly, nonatomic) NSString *code;
- (void)initWrap;
- (id)initWithOpt:(id)arg1;

@end
