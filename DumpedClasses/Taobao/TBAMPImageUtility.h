//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBAMPImageUtility : NSObject
{
}

+ (id)getLocalImage:(id)arg1;
+ (void)saveImageDataToAVFSCacheManagerWithImageData:(id)arg1 path:(id)arg2;
+ (id)headDirectoryForDownloadUser:(id)arg1 channel:(unsigned long long)arg2 imgUrl:(id)arg3;
+ (id)headDirectoryForUser:(id)arg1 channel:(unsigned long long)arg2 imgUrl:(id)arg3;
+ (_Bool)hasHeadDirectoryForUser:(id)arg1 channel:(unsigned long long)arg2 imgUrl:(id)arg3;
+ (void)clearOldHeadDirCache;
+ (id)imageDirectoryForDownloadMessage:(id)arg1 msgId:(id)arg2 isBig:(_Bool)arg3;
+ (id)imageDirectoryForMessage:(id)arg1 msgId:(id)arg2;
+ (_Bool)hasImageForPathKey:(id)arg1;
+ (void)clearOldImageDirCache;
+ (void)innerClearOldHeadDirCache;
+ (void)innerClearOldImageDirCache;
+ (id)filletMaskImagePathFromDirPath:(id)arg1;
+ (id)filletImagePathFromDirPath:(id)arg1;
+ (id)smallImagePathFromDirPath:(id)arg1;
+ (id)bigImagePathFromDirPath:(id)arg1;
+ (id)bigMaskImagePathFromDirPath:(id)arg1;
+ (id)smallMaskImagePathFromDirPath:(id)arg1;
+ (id)createFilletMaskImageFromLocalPath:(id)arg1 saveToPath:(id)arg2;
+ (id)createBubbleMaskImageFromImage:(id)arg1 isReceived:(_Bool)arg2 saveToPath:(id)arg3;
+ (id)createBubbleMaskImageFromLocalPath:(id)arg1 isReceived:(_Bool)arg2 saveToPath:(id)arg3;
+ (id)imageByScalingAndCroppingToSize:(struct CGSize)arg1 andSourceImage:(id)arg2;
+ (id)subImage:(struct CGRect)arg1 andSourceImage:(id)arg2;
+ (id)scaleAndSubHighImage:(id)arg1;
+ (struct CGSize)bubbleMaskSizeWithSourceImageSize:(struct CGSize)arg1;
+ (_Bool)savePngImageToPath:(id)arg1 path:(id)arg2;
+ (_Bool)saveJpgImageToPath:(id)arg1 path:(id)arg2;
+ (id)scalAndCropImage:(id)arg1 width:(float)arg2 hight:(float)arg3;

@end

