//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TBIAlbumDO, TBICameraTakeController, UIImage;

@protocol TBICameraTakeControllerDelegate <NSObject>
- (void)cameraControllerShouldShouldExit:(TBICameraTakeController *)arg1;
- (void)cameraControllerShouldTakePhotoFinish:(TBICameraTakeController *)arg1 photo:(UIImage *)arg2;
- (void)cameraControllerShouldGoAlbum:(TBICameraTakeController *)arg1 album:(TBIAlbumDO *)arg2;
@end

