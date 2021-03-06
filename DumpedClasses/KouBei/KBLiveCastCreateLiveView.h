//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HPGrowingTextViewDelegate-Protocol.h"

@class CAGradientLayer, HPGrowingTextView, UIButton, UIDatePicker, UIImage, UIView;

@interface KBLiveCastCreateLiveView : NSObject <HPGrowingTextViewDelegate>
{
    _Bool _keyboardShow;
    _Bool _landscapeVideo;
    CDUnknownBlockType _createBlock;
    UIView *_superView;
    UIView *_createLiveContainerView;
    UIButton *_createLiveBtn;
    UIButton *_selectLiveCoverBtn;
    CAGradientLayer *_maskLayer;
    double _startLocY;
    id _delegate;
    UIImage *_coverImage;
    HPGrowingTextView *_liveTitleText;
    UIDatePicker *_startTitleText;
}

+ (id)createLiveViewWithLocY:(double)arg1 landscapeVideo:(_Bool)arg2 sheetDelegate:(id)arg3 inSuperView:(id)arg4 createLiveBlock:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) UIDatePicker *startTitleText; // @synthesize startTitleText=_startTitleText;
@property(retain, nonatomic) HPGrowingTextView *liveTitleText; // @synthesize liveTitleText=_liveTitleText;
@property(nonatomic) _Bool landscapeVideo; // @synthesize landscapeVideo=_landscapeVideo;
@property(retain, nonatomic) UIImage *coverImage; // @synthesize coverImage=_coverImage;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool keyboardShow; // @synthesize keyboardShow=_keyboardShow;
@property(nonatomic) double startLocY; // @synthesize startLocY=_startLocY;
@property(retain, nonatomic) CAGradientLayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) UIButton *selectLiveCoverBtn; // @synthesize selectLiveCoverBtn=_selectLiveCoverBtn;
@property(retain, nonatomic) UIButton *createLiveBtn; // @synthesize createLiveBtn=_createLiveBtn;
@property(retain, nonatomic) UIView *createLiveContainerView; // @synthesize createLiveContainerView=_createLiveContainerView;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(copy, nonatomic) CDUnknownBlockType createBlock; // @synthesize createBlock=_createBlock;
- (void).cxx_destruct;
- (void)clearWidget;
- (void)createLive;
- (void)resignTextField;
- (void)doCreateLive:(id)arg1;
- (void)doSelectCover:(id)arg1;
- (id)mCreateLiveBtn;
- (id)mSelectLiveCoverBtn;
- (_Bool)inputShouldChangeNewString:(id)arg1 range:(struct _NSRange)arg2 originString:(id)arg3 maxLen:(long long)arg4;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)growingTextViewShouldReturn:(id)arg1;
- (void)growingTextViewDidChange:(id)arg1;
- (void)growingTextViewDidEndEditing:(id)arg1;
- (_Bool)growingTextViewDidBeginEditing:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)registerNotification;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)hideWithAnimated:(_Bool)arg1;
- (void)showWithAnimated:(_Bool)arg1;
- (void)setStartBtnTxt:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setSelectWebImage:(id)arg1;
- (void)setSelectImage:(id)arg1;
- (void)setStartLiveTime:(id)arg1;
- (void)buildCreateLiveWidget:(double)arg1;
@property(readonly, nonatomic) _Bool visibleState;
- (void)dealloc;

@end

