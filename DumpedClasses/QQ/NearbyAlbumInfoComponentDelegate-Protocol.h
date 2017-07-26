//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PluginDelegate.h"

@class NSArray, NearbyAlbumInfoComponent, UserSummaryModel;

@protocol NearbyAlbumInfoComponentDelegate <PluginDelegate>

@optional
- (void)enterEditStatus;
- (long long)getCurVCState;
- (void)movePhotoAlbumComponent:(NearbyAlbumInfoComponent *)arg1;
- (void)didDeletedPhotoAlbumComponent:(NearbyAlbumInfoComponent *)arg1;
- (void)albumComponent:(NearbyAlbumInfoComponent *)arg1 didFinishPickedPhotosFaceIDList:(NSArray *)arg2 faceURLList:(NSArray *)arg3;
- (void)albumComponent:(NearbyAlbumInfoComponent *)arg1 didFinishImportPhotos:(UserSummaryModel *)arg2 success:(_Bool)arg3;
@end
