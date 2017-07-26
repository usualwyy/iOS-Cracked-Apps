//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NWCFDataDecompressor : NSObject
{
    _Bool streamReady;
    struct z_stream_s zStream;
}

+ (id)inflateErrorWithCode:(int)arg1;
+ (id)decompressor;
@property(readonly) _Bool streamReady; // @synthesize streamReady;
- (id)uncompressBytes:(char *)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
- (id)closeStream;
- (id)setupStream;
- (void)dealloc;

@end

