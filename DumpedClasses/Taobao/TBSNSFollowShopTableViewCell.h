//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSNSFollowBaseTableViewCell.h"

@class NSMutableArray, UIButton, UIImageView;

@interface TBSNSFollowShopTableViewCell : TBSNSFollowBaseTableViewCell
{
    id <TBSNSFollowShopTableViewCellDelegate> _followShopDelegate;
    UIImageView *_rankLevelImageView;
    UIImageView *_forbidImageView;
    UIButton *_shopBtn;
    UIButton *_moreBtn;
    unsigned long long _accountId;
    NSMutableArray *_buttonList;
    NSMutableArray *_iconList;
    UIImageView *_avatarBg;
}

@property(retain, nonatomic) UIImageView *avatarBg; // @synthesize avatarBg=_avatarBg;
@property(retain, nonatomic) NSMutableArray *iconList; // @synthesize iconList=_iconList;
@property(retain, nonatomic) NSMutableArray *buttonList; // @synthesize buttonList=_buttonList;
@property(nonatomic) unsigned long long accountId; // @synthesize accountId=_accountId;
@property(retain, nonatomic) UIButton *moreBtn; // @synthesize moreBtn=_moreBtn;
@property(retain, nonatomic) UIButton *shopBtn; // @synthesize shopBtn=_shopBtn;
@property(retain, nonatomic) UIImageView *forbidImageView; // @synthesize forbidImageView=_forbidImageView;
@property(retain, nonatomic) UIImageView *rankLevelImageView; // @synthesize rankLevelImageView=_rankLevelImageView;
@property(nonatomic) __weak id <TBSNSFollowShopTableViewCellDelegate> followShopDelegate; // @synthesize followShopDelegate=_followShopDelegate;
- (void).cxx_destruct;
- (void)clickButton:(id)arg1;
- (void)clickMore:(id)arg1;
- (void)layoutSubviews;
- (void)updateIcons;
- (void)updateButtons;
- (void)setModel:(id)arg1;
- (void)jumpTo;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithReuseIdentifier:(id)arg1;

@end

