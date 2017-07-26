//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "EZStreamTextureProvider.h"

@class NSString;

@protocol EZVideoPlayerProtocol <EZStreamTextureProvider>
@property(nonatomic) _Bool loop;
@property(nonatomic) _Bool autoPlay;
@property(nonatomic) _Bool isReplay;
@property(nonatomic) _Bool muted;
@property(copy, nonatomic) CDUnknownBlockType playerEvent;
- (double)duration;
- (double)currentTime;
- (NSString *)currentURL;
- (void)refreshWithMediaURL:(NSString *)arg1;
- (void)pause;
- (void)play;
- (void)stop;
- (id)initWithUrl:(NSString *)arg1 autoPlay:(_Bool)arg2 isReplay:(_Bool)arg3;
@end

