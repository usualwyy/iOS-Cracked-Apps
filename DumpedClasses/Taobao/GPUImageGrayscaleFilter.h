//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageGrayscaleFilter : GPUImageFilter
{
}

- (id)init;
- (void)informTargetsAboutNewFrameAtTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)providesMonochromeOutput;
- (_Bool)wantsMonochromeInput;
- (unsigned int)textureForOutput;
- (void)setInputTexture:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2 sourceTexture:(unsigned int)arg3;

@end

