//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class CALayer, MCRedMarkView, NSLayoutConstraint, UIImageView, UILabel;

@interface MCRecentContactTableViewCell : UITableViewCell
{
    _Bool _isLastCell;
    double _innerCellHeight;
    UIImageView *_headImageView;
    MCRedMarkView *_badgeView;
    UIImageView *_typeImageView;
    UILabel *_typeTextLabel;
    UILabel *_titleLabel;
    UILabel *_messageStatuesLabel;
    UILabel *_contentPrefixLabel;
    UILabel *_contentLabel;
    UILabel *_timeLabel;
    UILabel *_notifyIcon;
    CALayer *_dividerLine;
    NSLayoutConstraint *_notifyIconAloXForbadgeViewHidden;
    NSLayoutConstraint *_notifyIconAloXForbadgeViewShow;
    NSLayoutConstraint *_serviceTypeLabelWidthConstraint;
    UILabel *_serviceTypeLabel;
}

@property(retain, nonatomic) UILabel *serviceTypeLabel; // @synthesize serviceTypeLabel=_serviceTypeLabel;
@property(retain, nonatomic) NSLayoutConstraint *serviceTypeLabelWidthConstraint; // @synthesize serviceTypeLabelWidthConstraint=_serviceTypeLabelWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *notifyIconAloXForbadgeViewShow; // @synthesize notifyIconAloXForbadgeViewShow=_notifyIconAloXForbadgeViewShow;
@property(retain, nonatomic) NSLayoutConstraint *notifyIconAloXForbadgeViewHidden; // @synthesize notifyIconAloXForbadgeViewHidden=_notifyIconAloXForbadgeViewHidden;
@property(retain, nonatomic) CALayer *dividerLine; // @synthesize dividerLine=_dividerLine;
@property(retain, nonatomic) UILabel *notifyIcon; // @synthesize notifyIcon=_notifyIcon;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *contentPrefixLabel; // @synthesize contentPrefixLabel=_contentPrefixLabel;
@property(retain, nonatomic) UILabel *messageStatuesLabel; // @synthesize messageStatuesLabel=_messageStatuesLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *typeTextLabel; // @synthesize typeTextLabel=_typeTextLabel;
@property(retain, nonatomic) UIImageView *typeImageView; // @synthesize typeImageView=_typeImageView;
@property(retain, nonatomic) MCRedMarkView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
@property(nonatomic) double innerCellHeight; // @synthesize innerCellHeight=_innerCellHeight;
@property(nonatomic) _Bool isLastCell; // @synthesize isLastCell=_isLastCell;
- (void).cxx_destruct;
- (double)widthForText:(id)arg1 font:(id)arg2;
- (void)updateCellObject:(id)arg1;
- (void)prepareForReuse;
- (void)getServiceLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 cellHeight:(double)arg3;

@end

