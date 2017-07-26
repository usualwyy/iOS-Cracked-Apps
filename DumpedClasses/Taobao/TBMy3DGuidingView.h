//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBMy3DSexSelectingViewDelegate.h"

@class NSDate, NSString, TBMy3DHomeDO, TBMy3DSexSelectingView, UIButton, UIColor, UIImageView, UILabel, UISwipeGestureRecognizer;

@interface TBMy3DGuidingView : UIView <TBMy3DSexSelectingViewDelegate>
{
    _Bool _inWhiteList;
    int _cityCode;
    int _totalDownload;
    int _taskCount;
    int _gender;
    id <TBMy3DGuidingViewDelegate> _delegate;
    NSDate *_startTime;
    NSDate *_finishTime;
    TBMy3DHomeDO *_homeData;
    UIColor *_themeColor;
    NSString *_iconUrl;
    NSString *_zoneTitle;
    NSString *_zoneDesc;
    UIView *_leftBG;
    UIView *_rightBG;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_loadingIcon;
    UILabel *_progressLabel;
    UILabel *_tipsLabel;
    UIImageView *_tipsImage;
    UIImageView *_popIcon;
    UISwipeGestureRecognizer *_exitSwip;
    TBMy3DSexSelectingView *_femaleView;
    UILabel *_femaleLabel;
    TBMy3DSexSelectingView *_maleView;
    UILabel *_maleLabel;
    UILabel *_sexSelectLabel;
    UILabel *_sexDescLabel;
    UIButton *_okButton;
}

+ (id)showInViewController:(id)arg1 query:(id)arg2;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(nonatomic) int taskCount; // @synthesize taskCount=_taskCount;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UILabel *sexDescLabel; // @synthesize sexDescLabel=_sexDescLabel;
@property(retain, nonatomic) UILabel *sexSelectLabel; // @synthesize sexSelectLabel=_sexSelectLabel;
@property(retain, nonatomic) UILabel *maleLabel; // @synthesize maleLabel=_maleLabel;
@property(retain, nonatomic) TBMy3DSexSelectingView *maleView; // @synthesize maleView=_maleView;
@property(retain, nonatomic) UILabel *femaleLabel; // @synthesize femaleLabel=_femaleLabel;
@property(retain, nonatomic) TBMy3DSexSelectingView *femaleView; // @synthesize femaleView=_femaleView;
@property(retain, nonatomic) UISwipeGestureRecognizer *exitSwip; // @synthesize exitSwip=_exitSwip;
@property(retain, nonatomic) UIImageView *popIcon; // @synthesize popIcon=_popIcon;
@property(retain, nonatomic) UIImageView *tipsImage; // @synthesize tipsImage=_tipsImage;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UILabel *loadingIcon; // @synthesize loadingIcon=_loadingIcon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *rightBG; // @synthesize rightBG=_rightBG;
@property(retain, nonatomic) UIView *leftBG; // @synthesize leftBG=_leftBG;
@property(retain, nonatomic) NSString *zoneDesc; // @synthesize zoneDesc=_zoneDesc;
@property(retain, nonatomic) NSString *zoneTitle; // @synthesize zoneTitle=_zoneTitle;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(retain, nonatomic) UIColor *themeColor; // @synthesize themeColor=_themeColor;
@property(nonatomic) int totalDownload; // @synthesize totalDownload=_totalDownload;
@property(retain, nonatomic) TBMy3DHomeDO *homeData; // @synthesize homeData=_homeData;
@property(nonatomic) _Bool inWhiteList; // @synthesize inWhiteList=_inWhiteList;
@property(nonatomic) int cityCode; // @synthesize cityCode=_cityCode;
@property(retain, nonatomic) NSDate *finishTime; // @synthesize finishTime=_finishTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) __weak id <TBMy3DGuidingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)addBubbleAnimation:(id)arg1;
- (void)addFlipAnimation:(id)arg1;
- (void)finishLoading;
- (void)startMy3DZone;
- (void)pullGenderInfoMyTaobao;
- (void)pullGenderInfoMyTaobao:(CDUnknownBlockType)arg1;
- (void)loadResource;
- (void)showFirstSight;
- (void)handleExitSwip:(id)arg1;
- (void)registerWithSex:(int)arg1;
- (void)setGenderToServer:(id)arg1;
- (void)handleOkButton;
- (void)dismiss;
- (void)viewDidSelected:(id)arg1;
- (void)getDefaultFace:(int)arg1;
- (void)loadHomeData;
- (void)startLoading;
- (void)updateHumanStatus;
- (void)pullMyTaobaoGenderInfo;
- (void)runAnimation;
- (void)setUpView;
- (id)initWithFrame:(struct CGRect)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

