//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

@class UIButton, UILabel, UIView;

@interface TBSettingScoreViewController : TBViewController
{
    UIView *_mainBgView;
    UIButton *_goAppBtn;
    UIButton *_goFeedBackBtn;
    UILabel *_goApplabel;
    UILabel *_goFeedBackLabel;
}

@property(retain, nonatomic) UILabel *goFeedBackLabel; // @synthesize goFeedBackLabel=_goFeedBackLabel;
@property(retain, nonatomic) UILabel *goApplabel; // @synthesize goApplabel=_goApplabel;
@property(retain, nonatomic) UIButton *goFeedBackBtn; // @synthesize goFeedBackBtn=_goFeedBackBtn;
@property(retain, nonatomic) UIButton *goAppBtn; // @synthesize goAppBtn=_goAppBtn;
@property(retain, nonatomic) UIView *mainBgView; // @synthesize mainBgView=_mainBgView;
- (void).cxx_destruct;
- (void)goFeedBackBtnClicked:(id)arg1;
- (void)goAppBtnClicked:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

