//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseCell.h"

@class TBOCommentView;

@interface TBOFeedCommentCell : TBOBaseCell
{
    TBOCommentView *_commentView;
}

@property(retain, nonatomic) TBOCommentView *commentView; // @synthesize commentView=_commentView;
- (void).cxx_destruct;
- (void)longPressBtn:(id)arg1;
- (void)onCommentComment;
- (void)onUserLogoClick;
- (void)onOpenUserHome:(id)arg1;
- (void)setModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

