//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TBOrderGlobalParam : NSObject
{
    _Bool _isTemplateFileArchive;
    _Bool _isLoaded;
    NSString *_appName;
    NSString *_appVersion;
    NSString *_templateFilePath;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isLoaded; // @synthesize isLoaded=_isLoaded;
@property(nonatomic) _Bool isTemplateFileArchive; // @synthesize isTemplateFileArchive=_isTemplateFileArchive;
@property(retain, nonatomic) NSString *templateFilePath; // @synthesize templateFilePath=_templateFilePath;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *appName; // @synthesize appName=_appName;
- (void).cxx_destruct;

@end

