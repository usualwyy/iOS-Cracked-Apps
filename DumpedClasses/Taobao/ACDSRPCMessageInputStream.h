//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData;

@interface ACDSRPCMessageInputStream : NSObject
{
    NSMutableData *mBuffer;
    unsigned long long mOffset;
    unsigned long long totalSize;
}

- (void).cxx_destruct;
- (double)readDouble;
- (float)readFloat;
- (long long)readLong;
- (int)readInt;
- (short)readShort;
- (unsigned char)readByte;
- (unsigned int)readBytes:(char *)arg1 length:(unsigned int)arg2;
- (unsigned long long)totalSize;
- (_Bool)hasMore;
- (id)initWithData:(id)arg1;
- (id)init;

@end

