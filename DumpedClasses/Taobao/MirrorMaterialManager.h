//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MirrorMaterialManager : NSObject
{
    _Bool _useNewMtopApi;
    id <MirrorGetMaterialDelegate> _delegate;
}

@property(nonatomic) _Bool useNewMtopApi; // @synthesize useNewMtopApi=_useNewMtopApi;
@property(retain, nonatomic) id <MirrorGetMaterialDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clear;
- (void)resumeDownload;
- (void)pauseDownload;
- (void)cancelDownload;
- (void)getMaterialWithMakeUpModelArray:(id)arg1 osVersion:(id)arg2;
- (void)getMaterialWithMakeUpArrayData:(id)arg1 osVersion:(id)arg2;
- (id)initWithType:(int)arg1;

@end

