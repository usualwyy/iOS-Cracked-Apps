//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ABImageUtil : NSObject
{
}

+ (id)cropAndScaleImage:(id)arg1 withCropRect:(struct CGRect)arg2 withScale:(float)arg3;
+ (struct CGSize)getImageSize:(struct opaqueCMSampleBuffer *)arg1;
+ (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
+ (void)savePNGToSandbox:(id)arg1 withFilename:(id)arg2;

@end
