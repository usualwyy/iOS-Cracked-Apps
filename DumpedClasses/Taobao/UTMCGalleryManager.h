//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UTMCConfigInterfaceUpdate.h"

@class NSMutableArray, NSString;

@interface UTMCGalleryManager : NSObject <UTMCConfigInterfaceUpdate>
{
    struct _opaque_pthread_mutex_t gallery_lock;
    _Bool _isUploading;
    _Bool _isEnable;
    NSMutableArray *_galleryArray;
    struct dispatch_queue_s *_galleryQueue;
}

+ (_Bool)isEnable;
+ (void)appendUploader:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) struct dispatch_queue_s *galleryQueue; // @synthesize galleryQueue=_galleryQueue;
@property(retain, nonatomic) NSMutableArray *galleryArray; // @synthesize galleryArray=_galleryArray;
- (void).cxx_destruct;
@property(nonatomic) _Bool isEnable; // @synthesize isEnable=_isEnable;
@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
- (void)updateSysConfigValue:(id)arg1 sysKey:(id)arg2;
- (void)removeUploader:(id)arg1;
- (void)addUploader:(id)arg1;
- (void)_upload;
- (void)upload;
- (void)appendUploader:(id)arg1;
- (void)registerConfig;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

