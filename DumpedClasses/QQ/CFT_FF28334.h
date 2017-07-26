//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CFT_UIBaseRichViewController.h"

#import "UIScrollViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CFT_TPIDKeyboardView, CFT_UICustomTextField, CFT_UIMoneyPickerView, NSArray, NSMutableArray, NSMutableDictionary, NSString, QQAvatarView, UIButton, UILabel;

@interface CFT_FF28334 : CFT_UIBaseRichViewController <UITextFieldDelegate, UIScrollViewDelegate>
{
    UIButton *_changeButton;
    QQAvatarView *_faceView;
    UILabel *_nameLabel;
    UILabel *_moneyLabel;
    UILabel *_yuanLabel;
    CFT_UICustomTextField *_moneyField;
    int _money_index;
    long long _totalAmount;
    CFT_UIMoneyPickerView *_moneyPicker;
    NSMutableDictionary *_RedGiftparam;
    NSString *_comefrom;
    NSString *_uin;
    NSString *_skey;
    NSString *_skey_type;
    NSString *_appinfo;
    NSString *_nick;
    NSString *_feedsid;
    NSString *_wishingText;
    NSMutableArray *_moneyArray;
    NSArray *_wishArray;
    NSString *_bgImgUrl;
    CFT_TPIDKeyboardView *_numKeyboard;
}

@property(retain, nonatomic) CFT_TPIDKeyboardView *numKeyboard; // @synthesize numKeyboard=_numKeyboard;
@property(copy, nonatomic) NSString *bgImgUrl; // @synthesize bgImgUrl=_bgImgUrl;
@property(retain, nonatomic) NSArray *wishArray; // @synthesize wishArray=_wishArray;
@property(retain, nonatomic) NSMutableArray *moneyArray; // @synthesize moneyArray=_moneyArray;
@property(retain, nonatomic) NSString *wishingText; // @synthesize wishingText=_wishingText;
@property(retain, nonatomic) NSString *feedsid; // @synthesize feedsid=_feedsid;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSString *appinfo; // @synthesize appinfo=_appinfo;
@property(retain, nonatomic) NSString *skey_type; // @synthesize skey_type=_skey_type;
@property(retain, nonatomic) NSString *skey; // @synthesize skey=_skey;
@property(retain, nonatomic) NSString *uin; // @synthesize uin=_uin;
@property(retain, nonatomic) NSString *comefrom; // @synthesize comefrom=_comefrom;
@property(copy, nonatomic) NSMutableDictionary *RedGiftparam; // @synthesize RedGiftparam=_RedGiftparam;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)onQQWalletImageDownloadFinishNotify:(id)arg1;
- (void)qpay_hb_zone_pack;
- (void)nextStep:(id)arg1;
- (void)onBackgroundTapped;
- (void)closeButtonClick:(id)arg1;
- (void)changeButtonClick:(id)arg1;
- (void)changePickerviewToLabel;
- (void)layoutSubviewsOnView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
