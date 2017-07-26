//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MCRecommandItemViewProtocol.h"

@class NSString, UIButton, UILabel;

@interface MCRecommandItemView : UIView <MCRecommandItemViewProtocol>
{
    _Bool subscribed;
    NSString *_subTitleText;
    NSString *_iconUrl;
    UIButton *_iconImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool subscribed; // @synthesize subscribed;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *subTitleText; // @synthesize subTitleText=_subTitleText;
- (void).cxx_destruct;
- (void)setLastItem:(_Bool)arg1;
- (void)setTag:(long long)arg1;
- (void)setItemTarget:(id)arg1 action:(SEL)arg2;
- (void)setSubscribeTarget:(id)arg1 action:(SEL)arg2;
@property(copy, nonatomic) NSString *titleText; // @dynamic titleText;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

