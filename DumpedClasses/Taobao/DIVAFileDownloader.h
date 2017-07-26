//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DIVAFileDownloadConnectionDelegate.h"

@class NSMutableArray, NSString;

@interface DIVAFileDownloader : NSObject <DIVAFileDownloadConnectionDelegate>
{
    NSMutableArray *_normalRequests;
    NSMutableArray *_normalRequesting;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *normalRequesting; // @synthesize normalRequesting=_normalRequesting;
@property(retain, nonatomic) NSMutableArray *normalRequests; // @synthesize normalRequests=_normalRequests;
- (void).cxx_destruct;
- (void)connectionDidFinish:(id)arg1;
- (void)downloadConnection:(id)arg1 failWithError:(id)arg2;
- (void)responseCompletion:(id)arg1;
- (void)responseDidFinish:(id)arg1;
- (void)startRequest;
- (void)resetMainData;
- (_Bool)sendURLRequest:(id)arg1 filePath:(id)arg2 progress:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

