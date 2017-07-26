//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SRIOConsumer : NSObject
{
    CDUnknownBlockType _scanner;
    CDUnknownBlockType _handler;
    unsigned long long _bytesNeeded;
    _Bool _readToCurrentFrame;
    _Bool _unmaskBytes;
}

@property(readonly, nonatomic) _Bool unmaskBytes; // @synthesize unmaskBytes=_unmaskBytes;
@property(readonly, nonatomic) _Bool readToCurrentFrame; // @synthesize readToCurrentFrame=_readToCurrentFrame;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, copy, nonatomic) CDUnknownBlockType consumer; // @synthesize consumer=_scanner;
@property(nonatomic) unsigned long long bytesNeeded; // @synthesize bytesNeeded=_bytesNeeded;
- (void).cxx_destruct;
- (void)setupWithScanner:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2 bytesNeeded:(unsigned long long)arg3 readToCurrentFrame:(_Bool)arg4 unmaskBytes:(_Bool)arg5;

@end

