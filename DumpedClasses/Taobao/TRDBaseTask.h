//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface TRDBaseTask : NSObject
{
    NSString *_version;
    NSString *_appKey;
    NSString *_appVersion;
    NSDictionary *_data;
}

@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
- (void).cxx_destruct;
- (id)jsonPaser:(id)arg1;
- (id)initWithTaskJson:(id)arg1;

@end

