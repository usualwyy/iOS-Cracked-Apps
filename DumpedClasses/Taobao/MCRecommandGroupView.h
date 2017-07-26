//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MCRecommandGroupViewProtocol.h"

@class NSString, UILabel;

@interface MCRecommandGroupView : UIView <MCRecommandGroupViewProtocol>
{
    id <MCRecommandGroupViewDelegate> _delegate;
    UILabel *_titleLabel;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <MCRecommandGroupViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)itemViewIconClick:(id)arg1;
- (void)itemViewSubscribeClick:(id)arg1;
- (void)setContentData:(id)arg1;
@property(copy, nonatomic) NSString *titleText; // @dynamic titleText;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

