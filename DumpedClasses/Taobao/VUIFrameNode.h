//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUINode.h"

@class VUIFrameProgram;

@interface VUIFrameNode : VUINode
{
    CDUnknownBlockType _renderBlock;
    VUIFrameProgram *_mProgram;
}

@property(retain, nonatomic) VUIFrameProgram *mProgram; // @synthesize mProgram=_mProgram;
@property(copy, nonatomic) CDUnknownBlockType renderBlock; // @synthesize renderBlock=_renderBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onRenderMp:(id)arg1 mv:(id)arg2 mm:(id)arg3 mpv:(id)arg4 mpvp:(id)arg5 deltaTime:(double)arg6;
- (void)onReset;
- (void)onRelease;
- (void)rebindVAO;
- (void)releaseVAO;
- (void)createVAO;
- (void)initialize;
- (id)init;

@end
