//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseCell.h"

#import "TBOFeedMoreCommentDelegate.h"

@class NSString, TBOAttributedLabel, TBOCoreFeedView, TBOFeedFooter, TBOFeedHeader, TBOFeedMoreComment, UIButton, UIImageView, UIView;

@interface TBOFeedCell : TBOBaseCell <TBOFeedMoreCommentDelegate>
{
    UIView *_defaultCellSeper;
    UIView *_lineCellSeper;
    TBOFeedHeader *_feedHeader;
    TBOAttributedLabel *_descLabel;
    TBOCoreFeedView *_coreFeedView;
    TBOFeedMoreComment *_feedMoreComment;
    TBOFeedFooter *_feedFooter;
    UIImageView *_jingHuaImageView;
    UIImageView *_rightUpSideCornerIcon;
    UIButton *_moreBtn;
    UIView *_contentSeperator;
}

+ (double)cellHeightForModel:(id)arg1 owner:(id)arg2;
@property(retain, nonatomic) UIView *contentSeperator; // @synthesize contentSeperator=_contentSeperator;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UIImageView *rightUpSideCornerIcon; // @synthesize rightUpSideCornerIcon=_rightUpSideCornerIcon;
@property(retain, nonatomic) UIImageView *jingHuaImageView; // @synthesize jingHuaImageView=_jingHuaImageView;
@property(retain, nonatomic) TBOFeedFooter *feedFooter; // @synthesize feedFooter=_feedFooter;
@property(retain, nonatomic) TBOFeedMoreComment *feedMoreComment; // @synthesize feedMoreComment=_feedMoreComment;
@property(retain, nonatomic) TBOCoreFeedView *coreFeedView; // @synthesize coreFeedView=_coreFeedView;
@property(retain, nonatomic) TBOAttributedLabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) TBOFeedHeader *feedHeader; // @synthesize feedHeader=_feedHeader;
@property(retain, nonatomic) UIView *lineCellSeper; // @synthesize lineCellSeper=_lineCellSeper;
@property(retain, nonatomic) UIView *defaultCellSeper; // @synthesize defaultCellSeper=_defaultCellSeper;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)gotoFeedDetail;
- (void)onClickTopicName;
- (void)onUserLogoClick;
- (void)FeedMoreShouldReply:(id)arg1;
- (void)onCommentFeed;
- (void)onLikeFeed;
- (void)onMore;
- (void)onCommentLongPressed:(id)arg1;
- (void)setModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 seperator:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

