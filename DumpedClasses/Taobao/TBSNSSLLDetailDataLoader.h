//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSNSBasicServiceDelegate.h"

@class NSString, TBSNSFeedCommentService, TBSNSSLLDetailBaseItem, TBSNSSLLDetailItemService;

@interface TBSNSSLLDetailDataLoader : NSObject <TBSNSBasicServiceDelegate>
{
    _Bool _isCache;
    TBSNSSLLDetailItemService *_extendInfoService;
    TBSNSSLLDetailItemService *_baseInfoService;
    TBSNSFeedCommentService *_commentService;
    CDUnknownBlockType _baseItemFinish;
    CDUnknownBlockType _extendItemFinish;
    CDUnknownBlockType _commentFinish;
    CDUnknownBlockType _newCommentFinish;
    TBSNSSLLDetailBaseItem *_baseItem;
}

@property(nonatomic) _Bool isCache; // @synthesize isCache=_isCache;
@property(retain, nonatomic) TBSNSSLLDetailBaseItem *baseItem; // @synthesize baseItem=_baseItem;
@property(copy, nonatomic) CDUnknownBlockType newCommentFinish; // @synthesize newCommentFinish=_newCommentFinish;
@property(copy, nonatomic) CDUnknownBlockType commentFinish; // @synthesize commentFinish=_commentFinish;
@property(copy, nonatomic) CDUnknownBlockType extendItemFinish; // @synthesize extendItemFinish=_extendItemFinish;
@property(copy, nonatomic) CDUnknownBlockType baseItemFinish; // @synthesize baseItemFinish=_baseItemFinish;
@property(retain, nonatomic) TBSNSFeedCommentService *commentService; // @synthesize commentService=_commentService;
@property(retain, nonatomic) TBSNSSLLDetailItemService *baseInfoService; // @synthesize baseInfoService=_baseInfoService;
@property(retain, nonatomic) TBSNSSLLDetailItemService *extendInfoService; // @synthesize extendInfoService=_extendInfoService;
- (void).cxx_destruct;
- (void)service:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)serviceDidFinishLoad:(id)arg1;
- (void)addSLLDetailNewCommentWithUserId:(unsigned long long)arg1 socialParam:(id)arg2 commentExtParam:(id)arg3 accountId:(unsigned long long)arg4 andUnRequiredArgsParentId:(unsigned long long)arg5 type:(int)arg6 content:(id)arg7 extSymbol:(id)arg8 finish:(CDUnknownBlockType)arg9;
- (void)loadSLLDetailCommentListWithFeedId:(unsigned long long)arg1 accountId:(unsigned long long)arg2 pageId:(unsigned long long)arg3 finish:(CDUnknownBlockType)arg4;
- (void)loadSLLDetailExtendItemWithBaseItem:(id)arg1 isCache:(_Bool)arg2 finish:(CDUnknownBlockType)arg3;
- (void)loadSLLDetailBaseItemWithSellerId:(unsigned long long)arg1 feedId:(unsigned long long)arg2 type:(id)arg3 finish:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

