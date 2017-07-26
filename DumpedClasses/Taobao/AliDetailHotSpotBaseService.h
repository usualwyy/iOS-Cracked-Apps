//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableData, NSURLConnection;

@interface AliDetailHotSpotBaseService : NSObject
{
    CDUnknownBlockType _finishBlock;
    CDUnknownBlockType _errorBlock;
    NSURLConnection *_connection1;
    long long _httpStatusCode;
    NSMutableData *_receiveByteData;
}

+ (unsigned long long)hotSpotStatusWithHotSpotModel:(id)arg1;
+ (id)sharedIntance;
@property(retain, nonatomic) NSMutableData *receiveByteData; // @synthesize receiveByteData=_receiveByteData;
@property(nonatomic) long long httpStatusCode; // @synthesize httpStatusCode=_httpStatusCode;
@property(retain, nonatomic) NSURLConnection *connection1; // @synthesize connection1=_connection1;
@property(copy, nonatomic) CDUnknownBlockType errorBlock; // @synthesize errorBlock=_errorBlock;
@property(copy, nonatomic) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)requestWithUrl:(id)arg1 shouldRedirect:(_Bool)arg2 success:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)requestWithUrl:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;

@end

