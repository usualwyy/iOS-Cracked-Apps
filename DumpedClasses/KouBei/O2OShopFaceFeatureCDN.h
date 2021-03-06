//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURLSession;

@interface O2OShopFaceFeatureCDN : NSObject
{
    _Bool _isReady;
    NSMutableDictionary *_shop2FFCDNDic;
    NSURLSession *_downloadSession;
    NSString *_downloadURL;
    CDUnknownBlockType _ffCDNReadyBlock;
}

+ (id)sharedInstance;
@property(copy, nonatomic) CDUnknownBlockType ffCDNReadyBlock; // @synthesize ffCDNReadyBlock=_ffCDNReadyBlock;
@property(copy, nonatomic) NSString *downloadURL; // @synthesize downloadURL=_downloadURL;
@property(retain, nonatomic) NSURLSession *downloadSession; // @synthesize downloadSession=_downloadSession;
@property(retain, nonatomic) NSMutableDictionary *shop2FFCDNDic; // @synthesize shop2FFCDNDic=_shop2FFCDNDic;
@property(readonly, nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (_Bool)downLoadShopFaceFeatureDic:(id)arg1;
- (_Bool)confirm2DownLoadShopFaceFeatureDic:(id)arg1;
- (_Bool)unzipFeatureFile:(id)arg1 toPath:(id)arg2;
- (_Bool)loadLocalFFList;
- (id)shopFaceFeatureCDNPath;
- (void)checkConfig2LoadWithBlock:(CDUnknownBlockType)arg1;
- (id)cdnStrByShopID:(id)arg1;
- (void)dealloc;
- (id)init;

@end

