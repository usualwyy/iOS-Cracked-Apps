//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NetErrorViewDelegate.h"

@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface NetErroViewBase : UIView <NetErrorViewDelegate>
{
    UIButton *errButton;
    UIImageView *errpic;
    UIImage *errimage;
    UILabel *RefreshTips;
    UILabel *errLabel;
    id <NetErrorViewDelegate> m_delegate;
}

@property(nonatomic) id <NetErrorViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UILabel *errLabel; // @synthesize errLabel;
@property(retain, nonatomic) UILabel *RefreshTips; // @synthesize RefreshTips;
@property(retain, nonatomic) UIImage *errimage; // @synthesize errimage;
@property(retain, nonatomic) UIImageView *errpic; // @synthesize errpic;
@property(retain, nonatomic) UIButton *errButton; // @synthesize errButton;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 errString:(id)arg2;
- (void)setTipText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

