//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface FXArtistsMvConcernListVm : NSObject
{
    long long _total;
    NSMutableDictionary *_filterPool;
}

@property(retain, nonatomic) NSMutableDictionary *filterPool; // @synthesize filterPool=_filterPool;
@property(nonatomic) long long total; // @synthesize total=_total;
- (void).cxx_destruct;
- (void)changeListToViewList:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (id)filterSameActor:(id)arg1 page:(long long)arg2;
- (id)filterVoidActor:(id)arg1;
- (void)finishLoadData:(id)arg1 page:(long long)arg2 success:(CDUnknownBlockType)arg3 failed:(CDUnknownBlockType)arg4;
- (void)requestListData:(id)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

