//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSCSBaseProducer.h"

#import "TNodeMessageHandler.h"

@class Error, NSMutableArray, NSString, TBSCSListViewAndPublishViewProducer;

@interface TBSCSDetailViewProducer : TBSCSBaseProducer <TNodeMessageHandler>
{
    CDUnknownBlockType _deleteSuccessUIHandler;
    TBSCSListViewAndPublishViewProducer *_lvapvProducer;
    Error *_error;
    NSMutableArray *_likeUsers;
}

@property(retain, nonatomic) NSMutableArray *likeUsers; // @synthesize likeUsers=_likeUsers;
@property(retain, nonatomic) Error *error; // @synthesize error=_error;
@property(nonatomic) __weak TBSCSListViewAndPublishViewProducer *lvapvProducer; // @synthesize lvapvProducer=_lvapvProducer;
@property(copy, nonatomic) CDUnknownBlockType deleteSuccessUIHandler; // @synthesize deleteSuccessUIHandler=_deleteSuccessUIHandler;
- (void).cxx_destruct;
- (void)onClickImageGrid:(struct UIView *)arg1;
- (void)onClickContentComment:(struct UIView *)arg1;
- (void)onClickTitle:(struct UIView *)arg1;
- (void)onClickLikedUserIcon:(struct UIView *)arg1;
- (void)onClickDetailLike:(struct UIView *)arg1;
- (_Bool)onHandlerTNodeMessage:(struct TNodeMsg *)arg1;
- (void)likeSuccessExtraHandle:(_Bool)arg1;
- (void)deleteSuccessUIHandle;
- (void)renderView;
- (void)afterViewCreateHandle;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

