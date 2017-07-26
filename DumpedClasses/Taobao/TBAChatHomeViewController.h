//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MessageCellEditorProtocol.h"
#import "NlsRecognizerDelegate.h"

@class NSString, NlsRecognizer, SCSiriWaveformView, TBAConversationTableView, TBAGuideInfoView, TBATipListScrollview, UILabel, UIView;

@interface TBAChatHomeViewController : UIViewController <NlsRecognizerDelegate, MessageCellEditorProtocol>
{
    SCSiriWaveformView *_waveView;
    TBATipListScrollview *_tipsCardList;
    _Bool _isRecording;
    NlsRecognizer *_recognizer;
    UILabel *_titleLabel;
    UILabel *_voiceLabel;
    UIView *_guideContainer;
    TBAConversationTableView *_conversaitonTableView;
    TBAGuideInfoView *_guideView;
    NSString *_asrResult;
}

@property(retain, nonatomic) NSString *asrResult; // @synthesize asrResult=_asrResult;
@property(retain, nonatomic) TBAGuideInfoView *guideView; // @synthesize guideView=_guideView;
@property(retain, nonatomic) TBAConversationTableView *conversaitonTableView; // @synthesize conversaitonTableView=_conversaitonTableView;
@property(retain, nonatomic) UIView *guideContainer; // @synthesize guideContainer=_guideContainer;
@property(nonatomic) _Bool isRecording; // @synthesize isRecording=_isRecording;
@property(retain, nonatomic) UILabel *voiceLabel; // @synthesize voiceLabel=_voiceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NlsRecognizer *recognizer; // @synthesize recognizer=_recognizer;
- (void).cxx_destruct;
- (void)dialogTrackWith:(id)arg1 resultModel:(id)arg2;
- (void)showChatList:(_Bool)arg1;
- (void)messageCellEditor:(id)arg1 didEndEditing:(id)arg2;
- (void)recognizerDidStopRecording:(id)arg1 withRecorderData:(id)arg2;
- (void)recognizerDidStopRecording:(id)arg1;
- (void)recognizerDidStartRecording:(id)arg1;
- (void)recognizer:(id)arg1 recordingWithVoiceVolume:(unsigned long long)arg2;
- (void)recognizer:(id)arg1 didCompleteRecognizingWithResult:(id)arg2 error:(id)arg3;
- (void)asrStatusChanged:(id)arg1;
- (void)onBackButtonClick:(id)arg1;
- (void)onInfoButtonClick:(id)arg1;
- (void)dealConversationWithMessage:(id)arg1 messageId:(id)arg2 end:(_Bool)arg3;
- (void)dealConversationWithMessage:(id)arg1 end:(_Bool)arg2;
- (void)onStopAsrButtonClick:(id)arg1;
- (void)onStartAsrButtonClick:(id)arg1;
- (void)setUpBackgroundColor;
- (void)setupUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

