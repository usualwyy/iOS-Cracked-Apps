//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TBBootImageCacheManager : NSObject
{
    NSString *_bootImageInfoPath;
    NSString *_bootImageDataPath;
    NSString *_bootImagesDocFilePath;
    NSString *_bootImageHistoryDataPath;
    NSString *_bootImageMockDataPath;
    NSString *_bootImageMockTimePath;
    NSDictionary *_bootImageHistoryData;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSDictionary *bootImageHistoryData; // @synthesize bootImageHistoryData=_bootImageHistoryData;
@property(copy, nonatomic) NSString *bootImageMockTimePath; // @synthesize bootImageMockTimePath=_bootImageMockTimePath;
@property(copy, nonatomic) NSString *bootImageMockDataPath; // @synthesize bootImageMockDataPath=_bootImageMockDataPath;
@property(copy, nonatomic) NSString *bootImageHistoryDataPath; // @synthesize bootImageHistoryDataPath=_bootImageHistoryDataPath;
@property(retain, nonatomic) NSString *bootImagesDocFilePath; // @synthesize bootImagesDocFilePath=_bootImagesDocFilePath;
@property(copy, nonatomic) NSString *bootImageDataPath; // @synthesize bootImageDataPath=_bootImageDataPath;
@property(copy, nonatomic) NSString *bootImageInfoPath; // @synthesize bootImageInfoPath=_bootImageInfoPath;
- (void).cxx_destruct;
- (void)deleteMockData;
- (void)saveMockData:(id)arg1 mockExpireTimeMs:(double)arg2;
- (void)cleanAllBootImageData;
- (id)fixedTBDocumentPath;
- (id)realBootImageData;
- (void)setRealBootImageData:(id)arg1;
- (double)bootImageLastDisplayTime:(id)arg1;
- (long long)bootImageDisplayTimes:(id)arg1;
- (void)updateLastDisplayData:(id)arg1 updateDisplayTimes:(_Bool)arg2;
- (id)bootInfoFilePath;
- (void)cacheBootImageItems:(id)arg1;
- (id)cachedBootImageItems;

@end

