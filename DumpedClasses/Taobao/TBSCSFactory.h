//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBSCSFactory : NSObject
{
}

+ (id)sharedInstance;
- (id)createViewWithProducer:(id)arg1 superView:(id)arg2;
- (id)producerOfPage:(int)arg1 namespace:(id)arg2 targetId:(id)arg3 options:(id)arg4 delegate:(id)arg5;
- (id)getBlockViewWithNamespace:(id)arg1 targetId:(id)arg2 messages:(id)arg3 options:(id)arg4 delegate:(id)arg5 superView:(id)arg6 blockViewType:(int)arg7;
- (id)getProducerOfView:(id)arg1;
- (void)refreshView:(id)arg1;
- (id)getHotViewInMixWithNamespace:(id)arg1 targetId:(id)arg2 messages:(id)arg3 options:(id)arg4 delegate:(id)arg5 superView:(id)arg6;
- (id)getHotOrLatestViewWithNamespace:(id)arg1 targetId:(id)arg2 messages:(id)arg3 options:(id)arg4 delegate:(id)arg5 superView:(id)arg6;
- (id)getLatestViewWithNamespace:(id)arg1 targetId:(id)arg2 messages:(id)arg3 options:(id)arg4 delegate:(id)arg5 superView:(id)arg6;
- (id)getHotViewWithNamespace:(id)arg1 targetId:(id)arg2 messages:(id)arg3 options:(id)arg4 delegate:(id)arg5 superView:(id)arg6;
- (id)getPublishViewWithNamespace:(id)arg1 targetId:(id)arg2 options:(id)arg3 superView:(id)arg4 upperPageName:(id)arg5;
- (id)getCommentDetailViewWithNamespace:(id)arg1 targetId:(id)arg2 options:(id)arg3 delegate:(id)arg4 superView:(id)arg5;
- (id)getCommentListViewWithPublishViewWithNamespace:(id)arg1 targetId:(id)arg2 messages:(id)arg3 options:(id)arg4 delegate:(id)arg5 superView:(id)arg6 page:(int)arg7;
- (id)getCommentListViewWithPublishViewWithNamespace:(id)arg1 targetId:(id)arg2 messages:(id)arg3 options:(id)arg4 delegate:(id)arg5 superView:(id)arg6;
- (id)getCommentListViewWithNamespace:(id)arg1 targetId:(id)arg2 options:(id)arg3 delegate:(id)arg4 superView:(id)arg5;

@end

