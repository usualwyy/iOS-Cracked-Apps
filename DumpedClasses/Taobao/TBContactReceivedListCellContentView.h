//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class TBArrowView, TBContactReceivedListCell, TBContactShareMessageModel, TBNewContactShareView, TBPriceTextView, TTTAttributedLabel, UIButton, UIImageView, UILabel;

@interface TBContactReceivedListCellContentView : UIView
{
    _Bool _isSent;
    TBContactReceivedListCell *_receivedListCell;
    id <TBContactReceivedListCellDelegate> _delegate;
    TBContactShareMessageModel *_messageModel;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UILabel *_nameTipLabel;
    UILabel *_timeLabel;
    TBArrowView *_arrowView;
    UILabel *_remarkLabel;
    UIView *_remarkLabeBgView;
    UIImageView *_itemImageView;
    TTTAttributedLabel *_itemTitleLabel;
    TBPriceTextView *_itemPriceLabel;
    UILabel *_otherSourceLabel;
    UILabel *_otherSourceLabelRight;
    UIButton *_rightButton;
    UIButton *_updateButton;
    UILabel *_tipLabel;
    TBNewContactShareView *_freshMessageLabel;
}

+ (long long)contactReceivedListCellHeightWithShareMessageModel:(id)arg1;
@property(retain, nonatomic) TBNewContactShareView *freshMessageLabel; // @synthesize freshMessageLabel=_freshMessageLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIButton *updateButton; // @synthesize updateButton=_updateButton;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *otherSourceLabelRight; // @synthesize otherSourceLabelRight=_otherSourceLabelRight;
@property(retain, nonatomic) UILabel *otherSourceLabel; // @synthesize otherSourceLabel=_otherSourceLabel;
@property(retain, nonatomic) TBPriceTextView *itemPriceLabel; // @synthesize itemPriceLabel=_itemPriceLabel;
@property(retain, nonatomic) TTTAttributedLabel *itemTitleLabel; // @synthesize itemTitleLabel=_itemTitleLabel;
@property(retain, nonatomic) UIImageView *itemImageView; // @synthesize itemImageView=_itemImageView;
@property(retain, nonatomic) UIView *remarkLabeBgView; // @synthesize remarkLabeBgView=_remarkLabeBgView;
@property(retain, nonatomic) UILabel *remarkLabel; // @synthesize remarkLabel=_remarkLabel;
@property(retain, nonatomic) TBArrowView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameTipLabel; // @synthesize nameTipLabel=_nameTipLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) TBContactShareMessageModel *messageModel; // @synthesize messageModel=_messageModel;
@property(nonatomic) __weak id <TBContactReceivedListCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak TBContactReceivedListCell *receivedListCell; // @synthesize receivedListCell=_receivedListCell;
@property(nonatomic) _Bool isSent; // @synthesize isSent=_isSent;
- (void).cxx_destruct;
- (void)tapToItemDetail:(id)arg1;
- (void)clickedUpdateButton:(id)arg1;
- (void)clean;
- (void)prepareForReuse;
- (void)updateContactReceivedListCellHeightWithShareMessageModel:(id)arg1;
- (void)updateWithShareMessageModel:(id)arg1 receivedListCell:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 receivedListCell:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

@end

