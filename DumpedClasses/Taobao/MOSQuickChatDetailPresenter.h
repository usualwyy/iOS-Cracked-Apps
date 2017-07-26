//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MOSChatComponetPresenterDelegate.h"
#import "MOSPresenter.h"
#import "TBIMLoginerviceDelegate.h"
#import "TBIMSessionServiceDelegate.h"

@class MOSQuickChatNavigationPresenter, MUKTowLineTitleView, NSString, UIButton, UIView, UIViewController;

@interface MOSQuickChatDetailPresenter : NSObject <MOSChatComponetPresenterDelegate, TBIMSessionServiceDelegate, TBIMLoginerviceDelegate, MOSPresenter>
{
    _Bool _isDataPrepared;
    _Bool _isShowOnline;
    _Bool _isOnline;
    int _type;
    UIView *_view;
    MOSQuickChatNavigationPresenter *_navigation;
    id <MOSChatComponetPresenterProtocol> _chatComponetPresenter;
    id <MOSQuickChatDetailPresenterDelegate> _delegate;
    id <TBIMSessionServiceAdapter> _sessionSrv;
    id <TBIMSessionAdapter> _session;
    NSString *_sessionId;
    id <TBIMLoginServiceAdapter> _loginSvr;
    MUKTowLineTitleView *_titleView;
    NSString *_pageName;
    long long _pageSource;
    UIButton *_leftViewItem;
    UIButton *_rightViewItem;
}

@property(retain, nonatomic) UIButton *rightViewItem; // @synthesize rightViewItem=_rightViewItem;
@property(retain, nonatomic) UIButton *leftViewItem; // @synthesize leftViewItem=_leftViewItem;
@property(nonatomic) long long pageSource; // @synthesize pageSource=_pageSource;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) _Bool isOnline; // @synthesize isOnline=_isOnline;
@property(nonatomic) _Bool isShowOnline; // @synthesize isShowOnline=_isShowOnline;
@property(nonatomic) _Bool isDataPrepared; // @synthesize isDataPrepared=_isDataPrepared;
@property(retain, nonatomic) MUKTowLineTitleView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) id <TBIMLoginServiceAdapter> loginSvr; // @synthesize loginSvr=_loginSvr;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) id <TBIMSessionAdapter> session; // @synthesize session=_session;
@property(retain, nonatomic) id <TBIMSessionServiceAdapter> sessionSrv; // @synthesize sessionSrv=_sessionSrv;
@property(nonatomic) __weak id <MOSQuickChatDetailPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <MOSChatComponetPresenterProtocol> chatComponetPresenter; // @synthesize chatComponetPresenter=_chatComponetPresenter;
@property(retain, nonatomic) MOSQuickChatNavigationPresenter *navigation; // @synthesize navigation=_navigation;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void).cxx_destruct;
- (void)forceDisconnect;
- (void)loginFailed;
- (void)loginSuccess;
- (void)updateNaviTitle;
- (void)SessionChange:(id)arg1;
- (void)chatComponetPresenterSelectItem:(id)arg1;
- (void)chatComponetPresenter:(id)arg1 message:(id)arg2 jumpToUrl:(id)arg3;
- (void)leftItemClick:(id)arg1;
- (void)rightItemClick:(id)arg1;
- (void)initSession;
- (void)setupSesstion:(id)arg1;
- (void)prepareData;
@property(nonatomic) __weak UIViewController *baseViewController;
- (void)contentDidDisappear;
- (void)contentWillDisappear;
- (void)contentDidAppear;
- (void)contentWillAppear;
- (void)contentDidLoad;
- (void)unloadContent;
- (void)loadContent;
- (id)initWithSession:(id)arg1 sessionType:(int)arg2 cellConfig:(id)arg3 functionConfig:(unsigned long long)arg4 input:(unsigned long long)arg5 needQuickChatBoard:(_Bool)arg6 isShowOnline:(_Bool)arg7 isOnline:(_Bool)arg8 pageName:(id)arg9 defaultInputText:(id)arg10 moduleSPM:(id)arg11 source:(long long)arg12;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

