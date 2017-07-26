//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ARUPConnectionDelegate.h"
#import "ARUPFrameDecoderDelegate.h"

@class ARUPFrameDecoder, ARUPRequest, NSMutableData, NSString;

@interface ARUPSession : NSObject <ARUPConnectionDelegate, ARUPFrameDecoderDelegate>
{
    NSMutableData *_inputBuffer;
    unsigned long long _bufferReadIndex;
    unsigned long long _bufferWriteIndex;
    ARUPFrameDecoder *_frameDecoder;
    id _delegate;
    ARUPRequest *_request;
}

@property(retain, nonatomic) ARUPRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)frameDecoder:(id)arg1 statusCode:(id)arg2 headers:(id)arg3;
- (void)frameDecoder:(id)arg1 didReceiveHeader:(id)arg2;
- (void)frameDecoder:(id)arg1 didReceiveStatusLine:(id)arg2;
- (void)connection:(id)arg1 close:(id)arg2;
- (void)connection:(id)arg1 sendDataError:(id)arg2;
- (void)connection:(id)arg1 connectFail:(id)arg2;
- (void)connection:(id)arg1 onWritable:(int)arg2;
- (void)connection:(id)arg1 receiveData:(id)arg2;
- (void)connection:(id)arg1 error:(id)arg2;
- (void)connection:(id)arg1 didConnect:(id)arg2;
- (void)startConnect:(id)arg1;
- (void)sendARUPRequest:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

