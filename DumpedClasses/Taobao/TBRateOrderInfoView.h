//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "TBRateImageUploadProtocol.h"
#import "TBRateVoiceInputViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"

@class NSString, TBRateAuctionComponent, TBRateEditPhotoGuidView, TBRateImageUploadView, TBRateVoiceInputView, UIImageView, UITextView;

@interface TBRateOrderInfoView : UIView <UITextFieldDelegate, UITextViewDelegate, TBRateImageUploadProtocol, TBRateVoiceInputViewDelegate>
{
    TBRateAuctionComponent *_auctionComponent;
    NSString *_feedbackPlaceHolder;
    id <TBRateImageUploadProtocol> _delegate;
    UIImageView *_itemPictureView;
    UITextView *_feedBackTextView;
    TBRateImageUploadView *_imageUploadView;
    TBRateEditPhotoGuidView *_editPhotoGuidView;
    TBRateVoiceInputView *_voiceInputView;
}

@property(retain, nonatomic) TBRateVoiceInputView *voiceInputView; // @synthesize voiceInputView=_voiceInputView;
@property(retain, nonatomic) TBRateEditPhotoGuidView *editPhotoGuidView; // @synthesize editPhotoGuidView=_editPhotoGuidView;
@property(retain, nonatomic) TBRateImageUploadView *imageUploadView; // @synthesize imageUploadView=_imageUploadView;
@property(retain, nonatomic) UITextView *feedBackTextView; // @synthesize feedBackTextView=_feedBackTextView;
@property(retain, nonatomic) UIImageView *itemPictureView; // @synthesize itemPictureView=_itemPictureView;
@property(nonatomic) id <TBRateImageUploadProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *feedbackPlaceHolder; // @synthesize feedbackPlaceHolder=_feedbackPlaceHolder;
@property(retain, nonatomic) TBRateAuctionComponent *auctionComponent; // @synthesize auctionComponent=_auctionComponent;
- (void).cxx_destruct;
- (void)dealloc;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)showEditGuidView;
- (void)refreshPhotoArray:(id)arg1;
- (void)browsePics:(long long)arg1 tagIndex:(long long)arg2;
- (void)addPhoto:(long long)arg1;
- (void)tbRateVoiceInputViewVoiceRecognized:(id)arg1;
- (void)tbRateVoiceInputViewVoiceStarted;
- (void)uploadImageRefresh:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

