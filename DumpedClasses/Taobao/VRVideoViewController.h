//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VRViewController.h"

@class NSMutableArray;

@interface VRVideoViewController : VRViewController
{
    NSMutableArray *_videoArray;
    struct __CVBuffer *_lumaTexture;
    struct __CVBuffer *_chromaTexture;
    struct __CVOpenGLESTextureCache *_videoTextureCache;
    int _currentVideoAnimation;
    float _timeToAnimation;
    float _velocityToAnimation;
    id <VRMediaPlayerProtocol> _defaultPlayer;
}

+ (long long)isSupportedMaxBitrate;
@property(retain, nonatomic) id <VRMediaPlayerProtocol> defaultPlayer; // @synthesize defaultPlayer=_defaultPlayer;
- (void).cxx_destruct;
@property(readonly, nonatomic) double naturalHeightPixels;
@property(readonly, nonatomic) double naturalWidthPixels;
- (void)setMuted:(_Bool)arg1 player:(id)arg2;
- (_Bool)isMutedWithPlayer:(id)arg1;
- (void)setVolume:(float)arg1 player:(id)arg2;
- (float)volumeWithPlayer:(id)arg1;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) float volume;
@property(nonatomic) float rate;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 player:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stopWithPlayer:(id)arg1;
- (CDStruct_1b6d18a9)durationWithPlayer:(id)arg1;
- (double)bufferPercentWithPlayer:(id)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 player:(id)arg2;
- (CDStruct_1b6d18a9)currentTimeWithPlayer:(id)arg1;
- (void)pauseWithPlayer:(id)arg1;
- (void)playWithPlayer:(id)arg1;
- (int)registerPlayerArray:(id)arg1;
- (int)setURL:(id)arg1 ofType:(int)arg2 player:(id)arg3;
- (id)init;
- (long long)registerPlayer:(id)arg1;
- (void)dealloc;
- (void)free;
- (CDStruct_1b6d18a9)duration;
- (double)bufferPercent;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (void)stop;
- (void)pause;
- (void)play;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (void)uploadTexture:(struct __CVBuffer *)arg1;
- (void)update;
- (void)doVideoAnimation;
- (void)fadeOutWithinSeconds:(float)arg1;
- (void)fadeInWithinSeconds:(float)arg1;
- (void)cleanUpTextures;
- (void)setupVideoTextureCache;
- (void)viewDidLoad;
- (void)initRenderWithRendType:(int)arg1;
- (void)setVRVideo:(id)arg1 rendType:(int)arg2;
- (id)initVRVideo:(id)arg1 rendType:(int)arg2 player:(id)arg3;
- (id)initVRVideo:(id)arg1 rendType:(int)arg2;

@end

