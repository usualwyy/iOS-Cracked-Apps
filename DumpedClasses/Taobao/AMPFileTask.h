//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AMPFileTask : NSObject
{
    _Bool _bWifiOnly;
    NSString *_url;
    NSString *_localPath;
    NSString *_fileType;
    double _startTime;
    long long _priority;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) _Bool bWifiOnly; // @synthesize bWifiOnly=_bWifiOnly;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property(copy, nonatomic) NSString *localPath; // @synthesize localPath=_localPath;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

