//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface TBRDMyRateTagSwitchView : UIView
{
    CDUnknownBlockType _tagSwitchAction;
    UIButton *_btnAll;
    UIButton *_btnPic;
    UIView *_redLine;
    UIView *_seperatorLine;
    UIButton *_currentBtn;
}

@property(retain, nonatomic) UIButton *currentBtn; // @synthesize currentBtn=_currentBtn;
@property(retain, nonatomic) UIView *seperatorLine; // @synthesize seperatorLine=_seperatorLine;
@property(retain, nonatomic) UIView *redLine; // @synthesize redLine=_redLine;
@property(retain, nonatomic) UIButton *btnPic; // @synthesize btnPic=_btnPic;
@property(retain, nonatomic) UIButton *btnAll; // @synthesize btnAll=_btnAll;
@property(copy, nonatomic) CDUnknownBlockType tagSwitchAction; // @synthesize tagSwitchAction=_tagSwitchAction;
- (void).cxx_destruct;
- (void)btnAction:(id)arg1;
- (id)createBtn;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

