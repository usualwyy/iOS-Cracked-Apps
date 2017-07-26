//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VRGLProgram;

@interface DistortionProgram : NSObject
{
    int _positionLocation;
    int _vignetteLocation;
    int _redTextureCoordLocation;
    int _greenTextureCoordLocation;
    int _blueTextureCoordLocation;
    int _uTextureCoordScaleLocation;
    int _uTextureSamplerLocation;
    VRGLProgram *_glProgram;
}

@property int uTextureSamplerLocation; // @synthesize uTextureSamplerLocation=_uTextureSamplerLocation;
@property int uTextureCoordScaleLocation; // @synthesize uTextureCoordScaleLocation=_uTextureCoordScaleLocation;
@property int blueTextureCoordLocation; // @synthesize blueTextureCoordLocation=_blueTextureCoordLocation;
@property int greenTextureCoordLocation; // @synthesize greenTextureCoordLocation=_greenTextureCoordLocation;
@property int redTextureCoordLocation; // @synthesize redTextureCoordLocation=_redTextureCoordLocation;
@property int vignetteLocation; // @synthesize vignetteLocation=_vignetteLocation;
@property int positionLocation; // @synthesize positionLocation=_positionLocation;
@property(retain) VRGLProgram *glProgram; // @synthesize glProgram=_glProgram;
- (void).cxx_destruct;
- (void)dealloc;
- (void)createProgramWithAberration:(_Bool)arg1;
- (id)initWithAberration:(_Bool)arg1;

@end

