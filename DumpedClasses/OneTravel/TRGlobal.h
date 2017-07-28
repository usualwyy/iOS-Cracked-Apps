//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSNumber, NSString, ONEAlertView, TRConfigModel, TRWanliuGetConfigModel, UINavigationController;

@interface TRGlobal : NSObject
{
    _Bool _changeToDefaultState;
    _Bool _isShowPhoneProtect;
    NSNumber *_flag_ProductChanged;
    UINavigationController *_topNavigationController;
    NSNumber *_flag_NeedLogin;
    NSNumber *_flag_ShowingLogin;
    NSNumber *_flag_ShowingRemark;
    NSString *_phone;
    double _recordTime;
    NSDate *_lastFetchConfigDate;
    NSDate *_lastFetchConfigDateWL;
    TRConfigModel *_configModel;
    TRWanliuGetConfigModel *_configModelWL;
    ONEAlertView *_wlRecoverAlertView;
}

+ (id)ONE_LocalizedStr:(id)arg1;
+ (id)URLEncodeWithString:(id)arg1;
+ (id)URLEncodeStringFromString:(id)arg1;
+ (void)playSoundWithFileIgnoreSwitch:(id)arg1;
+ (void)playSoundWithFile:(id)arg1;
+ (id)getAppUpdateUrl;
+ (id)encryptPhone:(id)arg1;
+ (void)telePhoneCall:(id)arg1 prompt:(_Bool)arg2;
+ (void)telePhoneCall:(id)arg1;
+ (id)errorMsgForError:(id)arg1;
+ (void)showType:(long long)arg1 title:(id)arg2 message:(id)arg3 errorStr:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)requestFailedWithType:(long long)arg1 title:(id)arg2 requestError:(id)arg3 message:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)requestFailedWithType:(long long)arg1 title:(id)arg2 requestError:(id)arg3 message:(id)arg4;
+ (void)requestFailedWithType:(long long)arg1 title:(id)arg2 baseModel:(id)arg3 defaultMsg:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)requestFailedWithType:(long long)arg1 title:(id)arg2 baseModel:(id)arg3 defaultMsg:(id)arg4;
+ (id)sharedInstance;
@property(nonatomic) __weak ONEAlertView *wlRecoverAlertView; // @synthesize wlRecoverAlertView=_wlRecoverAlertView;
@property(retain, nonatomic) TRWanliuGetConfigModel *configModelWL; // @synthesize configModelWL=_configModelWL;
@property(retain, nonatomic) TRConfigModel *configModel; // @synthesize configModel=_configModel;
@property(retain, nonatomic) NSDate *lastFetchConfigDateWL; // @synthesize lastFetchConfigDateWL=_lastFetchConfigDateWL;
@property(retain, nonatomic) NSDate *lastFetchConfigDate; // @synthesize lastFetchConfigDate=_lastFetchConfigDate;
@property(nonatomic) double recordTime; // @synthesize recordTime=_recordTime;
@property(nonatomic) _Bool isShowPhoneProtect; // @synthesize isShowPhoneProtect=_isShowPhoneProtect;
@property(nonatomic) _Bool changeToDefaultState; // @synthesize changeToDefaultState=_changeToDefaultState;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSNumber *flag_ShowingRemark; // @synthesize flag_ShowingRemark=_flag_ShowingRemark;
@property(retain, nonatomic) NSNumber *flag_ShowingLogin; // @synthesize flag_ShowingLogin=_flag_ShowingLogin;
@property(retain, nonatomic) NSNumber *flag_NeedLogin; // @synthesize flag_NeedLogin=_flag_NeedLogin;
@property(nonatomic) __weak UINavigationController *topNavigationController; // @synthesize topNavigationController=_topNavigationController;
@property(retain, nonatomic) NSNumber *flag_ProductChanged; // @synthesize flag_ProductChanged=_flag_ProductChanged;
- (void).cxx_destruct;
- (void)loginSucc:(id)arg1;
- (void)InvalidToken:(id)arg1;
@property(nonatomic) _Bool hasGuideToWaitMoreTime;
- (void)showAppStoreReviews;
- (void)reloadConfigModel;
- (void)fetchConfigModelWL;
@property(readonly, nonatomic) struct UIEdgeInsets rightBubbleEdge;
@property(readonly, nonatomic) struct UIEdgeInsets leftBubbleEdge;
@property(readonly, nonatomic) struct CGRect currentStatusBarFrame;
- (id)init;

@end
