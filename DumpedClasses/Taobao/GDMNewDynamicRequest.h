//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GDMMtopRequest.h"

@class NSArray;

@interface GDMNewDynamicRequest : GDMMtopRequest
{
    _Bool _isEnd;
    NSArray *_feedModelArray;
}

@property(retain) NSArray *feedModelArray; // @synthesize feedModelArray=_feedModelArray;
@property _Bool isEnd; // @synthesize isEnd=_isEnd;
- (void).cxx_destruct;
- (void)bottomLoadWithHotType:(_Bool)arg1 model:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)topLoadWithHotType:(_Bool)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (_Bool)procResultDataFromJson:(id)arg1;
- (id)methodName;

@end

