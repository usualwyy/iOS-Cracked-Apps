//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXContextBindingObject.h"

@interface MsgBizHelper : WXContextBindingObject
{
    id <MsgBizNotifyPlayerProtocol> _externalPlayer;
    long long _wwMessageIndexBase;
}

+ (id)waveAudioDataCacheKeyForUrl:(id)arg1;
@property(nonatomic) long long wwMessageIndexBase; // @synthesize wwMessageIndexBase=_wwMessageIndexBase;
@property(retain, nonatomic) id <MsgBizNotifyPlayerProtocol> externalPlayer; // @synthesize externalPlayer=_externalPlayer;
- (void).cxx_destruct;
- (id)preprocessMessageExtData:(id)arg1;
- (void)resetWangWangMessageIndex;
- (id)getNextWangWangMessageIndex;
- (long long)makeWWMessageIndexBase;
- (long long)minValueOfMessageId;
- (id)createMessageId;
- (id)initWithContext:(id)arg1;

@end

