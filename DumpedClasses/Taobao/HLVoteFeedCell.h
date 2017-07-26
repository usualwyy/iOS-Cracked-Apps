//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HLFeedCell.h"

@class HLVoteCountLabel, HLVoteTopicModel, NSString, UIButton, UILabel, UIView;

@interface HLVoteFeedCell : HLFeedCell
{
    UILabel *_voteNumLabel;
    UIView *_voteView;
    UIButton *_prosBtn;
    UIButton *_consBtn;
    UIView *_resultView;
    UILabel *_prosLabel;
    UIView *_prosProgressView;
    HLVoteCountLabel *_prosCountLabel;
    UILabel *_consLabel;
    UIView *_consProgressView;
    HLVoteCountLabel *_consCountLabel;
    HLVoteTopicModel *_prosVoteModel;
    HLVoteTopicModel *_consVoteModel;
    long long _prosNum;
    long long _consNum;
    NSString *_feedDescription;
}

@property(retain, nonatomic) NSString *feedDescription; // @synthesize feedDescription=_feedDescription;
@property(nonatomic) long long consNum; // @synthesize consNum=_consNum;
@property(nonatomic) long long prosNum; // @synthesize prosNum=_prosNum;
@property(retain, nonatomic) HLVoteTopicModel *consVoteModel; // @synthesize consVoteModel=_consVoteModel;
@property(retain, nonatomic) HLVoteTopicModel *prosVoteModel; // @synthesize prosVoteModel=_prosVoteModel;
@property(retain, nonatomic) HLVoteCountLabel *consCountLabel; // @synthesize consCountLabel=_consCountLabel;
@property(retain, nonatomic) UIView *consProgressView; // @synthesize consProgressView=_consProgressView;
@property(retain, nonatomic) UILabel *consLabel; // @synthesize consLabel=_consLabel;
@property(retain, nonatomic) HLVoteCountLabel *prosCountLabel; // @synthesize prosCountLabel=_prosCountLabel;
@property(retain, nonatomic) UIView *prosProgressView; // @synthesize prosProgressView=_prosProgressView;
@property(retain, nonatomic) UILabel *prosLabel; // @synthesize prosLabel=_prosLabel;
@property(retain, nonatomic) UIView *resultView; // @synthesize resultView=_resultView;
@property(retain, nonatomic) UIButton *consBtn; // @synthesize consBtn=_consBtn;
@property(retain, nonatomic) UIButton *prosBtn; // @synthesize prosBtn=_prosBtn;
@property(retain, nonatomic) UIView *voteView; // @synthesize voteView=_voteView;
@property(retain, nonatomic) UILabel *voteNumLabel; // @synthesize voteNumLabel=_voteNumLabel;
- (void).cxx_destruct;
- (void)setRead:(_Bool)arg1;
- (void)voteRequest:(unsigned long long)arg1 voteId:(unsigned long long)arg2;
- (void)setHasVote;
- (void)showVoteView;
- (void)showResultView:(_Bool)arg1;
- (void)increaseConsNum;
- (void)increaseProsNum;
- (void)updateVoteWithOption:(unsigned long long)arg1;
- (void)updateCell:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

