//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMPNetPacket.h"

@class NSString;

@interface AMPGetGroupQRCodeInfoPacket : AMPNetPacket
{
    NSString *_ccode;
}

@property(retain, nonatomic) NSString *ccode; // @synthesize ccode=_ccode;
- (void).cxx_destruct;
- (id)initWithCcode:(id)arg1;
- (id)generateMtopBody;
- (id)generateMtopHeader;

@end

