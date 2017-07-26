//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class MCChatTimeView, TBMCDetailItem;

@interface TBOfficalAccountBaseTableViewCell : UITableViewCell
{
    _Bool _ishistoryMessage;
    CDUnknownBlockType _selectAction;
    CDUnknownBlockType _selectReCallAction;
    CDUnknownBlockType _deleteAction;
    TBMCDetailItem *_item;
    MCChatTimeView *_dateTimeLabel;
}

+ (double)heightForBottom:(id)arg1;
+ (double)heightForContent:(id)arg1;
@property(retain, nonatomic) MCChatTimeView *dateTimeLabel; // @synthesize dateTimeLabel=_dateTimeLabel;
@property(nonatomic) _Bool ishistoryMessage; // @synthesize ishistoryMessage=_ishistoryMessage;
@property(retain, nonatomic) TBMCDetailItem *item; // @synthesize item=_item;
@property(copy, nonatomic) CDUnknownBlockType deleteAction; // @synthesize deleteAction=_deleteAction;
@property(copy, nonatomic) CDUnknownBlockType selectReCallAction; // @synthesize selectReCallAction=_selectReCallAction;
@property(copy, nonatomic) CDUnknownBlockType selectAction; // @synthesize selectAction=_selectAction;
- (void).cxx_destruct;
- (void)longPress:(id)arg1;
- (id)displayDateTime:(id)arg1;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)deleteMessage:(id)arg1;
- (void)copyMessage:(id)arg1;
- (void)showLongTapMenuAt:(struct CGPoint)arg1;
- (void)configureWithItem:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

