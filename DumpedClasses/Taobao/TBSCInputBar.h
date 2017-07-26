//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "HPGrowingTextViewDelegate.h"
#import "TBEmoticonSelectionViewControllerDelegate.h"
#import "TBSCCommentSelectViewDelegate.h"
#import "TBSCMyPathSelectItemDelegate.h"
#import "UIActionSheetDelegate.h"

@class HPGrowingTextView, NSArray, NSString, NSTimer, TBEmoticonSelectionViewController, TBSCCommentCommodityItem, TBSCCommentSelectView, TBSCIKSelectPhoto, TBSCImageUploadService, UIActivityIndicatorView, UIButton, UIImageView;

@interface TBSCInputBar : UIView <HPGrowingTextViewDelegate, TBEmoticonSelectionViewControllerDelegate, TBSCCommentSelectViewDelegate, UIActionSheetDelegate, TBSCMyPathSelectItemDelegate>
{
    int _inputSwitchButtonType;
    int _emotionButtonType;
    int _keyboardStatus;
    int _currentAnimation;
    TBSCImageUploadService *_imgUpLoadService;
    _Bool _isViewDidUnload;
    _Bool _hideOnResign;
    _Bool _isPictureDisable;
    _Bool _isCommdityDisable;
    _Bool _isImageAndTextNeedSend;
    _Bool _needsImage;
    int _commentContentType;
    int _imageUploadStatus;
    int _commentScene;
    int _picShowStauts;
    int _sceneType;
    TBSCCommentCommodityItem *_commentCommodityItem;
    NSString *_text;
    NSString *_pageName;
    CDUnknownBlockType _keyBoardStatusBlock;
    HPGrowingTextView *_hpTextView;
    id <TBSCInputBarDeletage> _inputBarDelegate;
    NSString *_itemExtSymbol;
    NSString *_imageName;
    UIButton *_emotionButton;
    UIButton *_multiButton;
    TBSCCommentSelectView *_commentSelectView;
    UIImageView *_pictureImageView;
    UIImageView *_commdityImageView;
    UIButton *_imageButton;
    NSString *_emotionPicStr;
    NSString *_commentPicStr;
    NSString *_mutiliPicStr;
    TBEmoticonSelectionViewController *_emoticonSelectionViewController;
    TBSCIKSelectPhoto *_photo;
    UIView *_toolbarView;
    NSTimer *_levelTimer;
    UIActivityIndicatorView *_buttonLoadingIndicator;
    double _timeData;
    NSArray *_photos;
}

+ (id)inpuBarWithFrame:(struct CGRect)arg1 targetType:(int)arg2 needsImage:(_Bool)arg3;
+ (id)inpuBarWithFrame:(struct CGRect)arg1 targetType:(int)arg2;
@property(nonatomic) _Bool needsImage; // @synthesize needsImage=_needsImage;
@property(nonatomic) int sceneType; // @synthesize sceneType=_sceneType;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=_photos;
@property(nonatomic) double timeData; // @synthesize timeData=_timeData;
@property(nonatomic) int picShowStauts; // @synthesize picShowStauts=_picShowStauts;
@property(retain, nonatomic) UIActivityIndicatorView *buttonLoadingIndicator; // @synthesize buttonLoadingIndicator=_buttonLoadingIndicator;
@property(retain, nonatomic) NSTimer *levelTimer; // @synthesize levelTimer=_levelTimer;
@property(nonatomic) int commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) _Bool isImageAndTextNeedSend; // @synthesize isImageAndTextNeedSend=_isImageAndTextNeedSend;
@property(nonatomic) int imageUploadStatus; // @synthesize imageUploadStatus=_imageUploadStatus;
@property(retain, nonatomic) UIView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(retain, nonatomic) TBSCIKSelectPhoto *photo; // @synthesize photo=_photo;
@property(readonly, nonatomic) TBEmoticonSelectionViewController *emoticonSelectionViewController; // @synthesize emoticonSelectionViewController=_emoticonSelectionViewController;
@property(nonatomic) _Bool isCommdityDisable; // @synthesize isCommdityDisable=_isCommdityDisable;
@property(nonatomic) _Bool isPictureDisable; // @synthesize isPictureDisable=_isPictureDisable;
@property(nonatomic) _Bool hideOnResign; // @synthesize hideOnResign=_hideOnResign;
@property(retain, nonatomic) NSString *mutiliPicStr; // @synthesize mutiliPicStr=_mutiliPicStr;
@property(retain, nonatomic) NSString *commentPicStr; // @synthesize commentPicStr=_commentPicStr;
@property(retain, nonatomic) NSString *emotionPicStr; // @synthesize emotionPicStr=_emotionPicStr;
@property(retain, nonatomic) UIButton *imageButton; // @synthesize imageButton=_imageButton;
@property(retain, nonatomic) UIImageView *commdityImageView; // @synthesize commdityImageView=_commdityImageView;
@property(retain, nonatomic) UIImageView *pictureImageView; // @synthesize pictureImageView=_pictureImageView;
@property(retain, nonatomic) TBSCCommentSelectView *commentSelectView; // @synthesize commentSelectView=_commentSelectView;
@property(retain, nonatomic) UIButton *multiButton; // @synthesize multiButton=_multiButton;
@property(retain, nonatomic) UIButton *emotionButton; // @synthesize emotionButton=_emotionButton;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(retain, nonatomic) NSString *itemExtSymbol; // @synthesize itemExtSymbol=_itemExtSymbol;
@property(nonatomic) int commentContentType; // @synthesize commentContentType=_commentContentType;
@property(nonatomic) __weak id <TBSCInputBarDeletage> inputBarDelegate; // @synthesize inputBarDelegate=_inputBarDelegate;
@property(retain, nonatomic) HPGrowingTextView *hpTextView; // @synthesize hpTextView=_hpTextView;
@property(copy, nonatomic) CDUnknownBlockType keyBoardStatusBlock; // @synthesize keyBoardStatusBlock=_keyBoardStatusBlock;
@property(nonatomic) _Bool isViewDidUnload; // @synthesize isViewDidUnload=_isViewDidUnload;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) TBSCCommentCommodityItem *commentCommodityItem; // @synthesize commentCommodityItem=_commentCommodityItem;
- (void).cxx_destruct;
- (void)dealloc;
- (void)clearService;
- (void)destroy;
- (void)userLogEvent;
- (void)cancelLogin;
- (void)onUserLogIn;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAlert:(id)arg1;
- (void)changeShowStatus:(id)arg1;
- (void)deleteImageAtLocal:(id)arg1;
- (_Bool)isNetReachable;
- (void)uploadImageToRemote:(id)arg1;
- (void)upLoadImageAndText;
- (void)getItemExtSymbolFromImageName;
- (void)itemSelected:(id)arg1;
- (void)selectView:(id)arg1 didSelectMenuWithType:(int)arg2;
- (void)emoticonSelectionViewController:(id)arg1 didSelectEmoticon:(id)arg2;
- (void)growingTextViewDidChange:(id)arg1;
- (_Bool)growingTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
- (void)inputSwitchActionWithNoAnimaton;
- (void)forceCloseKeyboardWithNOAnimation;
- (void)closeKeyboardAreaWithNOAnimation;
- (void)closeKeyboardArea;
- (void)resignTextView;
- (void)hide;
- (void)show;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)showEmotionView:(_Bool)arg1;
- (void)resetData;
- (void)clearAllData;
- (void)clearImageView;
- (void)hideImageView;
- (void)showImageView;
- (void)setPictureImageViewShow:(_Bool)arg1;
- (void)imageButtonClicked:(id)arg1;
- (void)emotionBtnClick:(id)arg1;
- (void)multiBtnClick:(id)arg1;
- (void)keyboardSwitchAnimWithStatus:(int)arg1;
- (void)initSelectView;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)refreshEmotionButtonWithType:(int)arg1;
- (void)refreshMultiButtonWithType:(int)arg1;
- (void)hidden;
- (void)noHidden;
- (void)setNickName:(id)arg1;
- (void)setupViewWithTargetType;
- (void)setupScene:(int)arg1 needsImage:(_Bool)arg2;
- (void)setupScene:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

