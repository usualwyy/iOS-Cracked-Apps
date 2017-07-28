//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GTXUploadOperation.h"

@class GTXCrashReportFileMeta, NSString;

@interface GTXUploadCrashReportOperation : GTXUploadOperation
{
    GTXCrashReportFileMeta *_meta;
    NSString *_filePath;
}

+ (id)create:(id)arg1;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) GTXCrashReportFileMeta *meta; // @synthesize meta=_meta;
- (void).cxx_destruct;
- (void)failure;
- (void)success;
- (id)bodyStream;
- (id)url;
- (id)identifier;
- (id)initWithCrashReportFileMeta:(id)arg1;

@end
