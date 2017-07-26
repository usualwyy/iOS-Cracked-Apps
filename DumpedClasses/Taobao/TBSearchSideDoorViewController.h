//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBViewController.h"

#import "CAAnimationDelegate.h"
#import "TBSearchInputDelegate.h"
#import "TBSearchSideDoorViewModelDelegate.h"
#import "TBSearchVoiceViewDelegate.h"
#import "TBXSearchTabControlDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "magicDelegate.h"

@class NSMutableArray, NSString, TBBarButtonItem, TBPSCaptureScanManager, TBSearchAVCaptureTipView, TBSearchInput, TBSearchSideDoorViewModel, TBSearchVoiceView, TBXSearchTabControl, UIButton, UIScrollView, UITableView, UIView;

@interface TBSearchSideDoorViewController : TBViewController <UITextFieldDelegate, TBSearchInputDelegate, TBSearchVoiceViewDelegate, UITableViewDelegate, UITableViewDataSource, magicDelegate, UIAlertViewDelegate, TBSearchSideDoorViewModelDelegate, TBXSearchTabControlDelegate, CAAnimationDelegate>
{
    _Bool _xsearch;
    _Bool _searchTypeClicked;
    _Bool _fromsearch;
    _Bool _searchBarAnimationEnabled;
    _Bool _clipBoardTipEnabled;
    TBSearchSideDoorViewModel *_viewModel;
    NSString *_double11from;
    NSString *_q;
    NSString *_from;
    id _delegate;
    NSString *_searchTabType;
    NSString *_tab;
    NSString *_extraTab;
    TBSearchInput *_searchBar;
    UIButton *_cancelButton;
    UIView *_p_asr_entrance_view;
    TBSearchVoiceView *_voiceView;
    UIView *_bodyView;
    UIView *_photoSearchGuideView;
    TBPSCaptureScanManager *_psCaptureScanManager;
    TBSearchAVCaptureTipView *_captureTipView;
    UITableView *_suggestionTableView;
    UIScrollView *_sideDoor;
    UIView *_clipBoardTipContainer;
    UIView *_clipBoardTipMask;
    NSMutableArray *_allWidgets;
    UIView *_viewfor11;
    UIView *_statusView;
    UIButton *_closeButton;
    TBBarButtonItem *_sBar;
    TBXSearchTabControl *_tabControl;
    NSString *_shadeDisplayText;
    NSString *_shadeSearchText;
}

@property(nonatomic) _Bool clipBoardTipEnabled; // @synthesize clipBoardTipEnabled=_clipBoardTipEnabled;
@property(nonatomic) _Bool searchBarAnimationEnabled; // @synthesize searchBarAnimationEnabled=_searchBarAnimationEnabled;
@property(retain, nonatomic) NSString *shadeSearchText; // @synthesize shadeSearchText=_shadeSearchText;
@property(retain, nonatomic) NSString *shadeDisplayText; // @synthesize shadeDisplayText=_shadeDisplayText;
@property(retain, nonatomic) TBXSearchTabControl *tabControl; // @synthesize tabControl=_tabControl;
@property(retain, nonatomic) TBBarButtonItem *sBar; // @synthesize sBar=_sBar;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UIView *viewfor11; // @synthesize viewfor11=_viewfor11;
@property(retain, nonatomic) NSMutableArray *allWidgets; // @synthesize allWidgets=_allWidgets;
@property(retain, nonatomic) UIView *clipBoardTipMask; // @synthesize clipBoardTipMask=_clipBoardTipMask;
@property(retain, nonatomic) UIView *clipBoardTipContainer; // @synthesize clipBoardTipContainer=_clipBoardTipContainer;
@property(retain, nonatomic) UIScrollView *sideDoor; // @synthesize sideDoor=_sideDoor;
@property(retain, nonatomic) UITableView *suggestionTableView; // @synthesize suggestionTableView=_suggestionTableView;
@property(retain, nonatomic) TBSearchAVCaptureTipView *captureTipView; // @synthesize captureTipView=_captureTipView;
@property(retain, nonatomic) TBPSCaptureScanManager *psCaptureScanManager; // @synthesize psCaptureScanManager=_psCaptureScanManager;
@property(retain, nonatomic) UIView *photoSearchGuideView; // @synthesize photoSearchGuideView=_photoSearchGuideView;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(retain, nonatomic) TBSearchVoiceView *voiceView; // @synthesize voiceView=_voiceView;
@property(retain, nonatomic) UIView *p_asr_entrance_view; // @synthesize p_asr_entrance_view=_p_asr_entrance_view;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) TBSearchInput *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) NSString *extraTab; // @synthesize extraTab=_extraTab;
@property(retain, nonatomic) NSString *tab; // @synthesize tab=_tab;
@property(retain, nonatomic) NSString *searchTabType; // @synthesize searchTabType=_searchTabType;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *from; // @synthesize from=_from;
@property(retain, nonatomic) NSString *q; // @synthesize q=_q;
@property(retain, nonatomic) NSString *double11from; // @synthesize double11from=_double11from;
@property(nonatomic) _Bool fromsearch; // @synthesize fromsearch=_fromsearch;
@property(nonatomic) _Bool searchTypeClicked; // @synthesize searchTypeClicked=_searchTypeClicked;
@property(nonatomic) _Bool xsearch; // @synthesize xsearch=_xsearch;
@property(retain, nonatomic) TBSearchSideDoorViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)registryAppMonitor;
- (void)clickTabItem:(id)arg1;
- (void)startLocating;
- (void)triggerLocating;
- (void)shouldUpdateSearchDoor;
- (void)shouldUpdateSuggest;
- (void)dismissPhotoSearchGuideView;
- (void)dissmissCapture;
- (void)showPhotoSearchGuideView;
- (void)photoSearchGuide;
- (void)clickedCapture:(id)arg1;
- (void)removePhotoSearchtipAndGuideView;
- (void)showTipImageAsset:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)updateQuery:(id)arg1;
- (void)clickMagic:(id)arg1 IndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)getNowDate;
- (id)getHongbaoURL:(id)arg1;
- (id)getUrlWithKeyword:(id)arg1;
- (void)searchWithKeyWord:(id)arg1 AndType:(id)arg2 AndSearchParams:(id)arg3;
- (id)getSearchParams;
- (id)getShadeSuggestRn;
- (_Bool)placeholderShowedThisWeek;
- (long long)placeholderShowedTime;
- (_Bool)isPlaceHolderUser;
- (id)getShadeDisplayText;
- (id)getShadeSearchText;
- (id)getSearchBarPlaceHolder;
- (void)keyboardWillHide:(id)arg1;
- (void)searchByVoice:(id)arg1 Asrrn:(id)arg2;
- (id)getVoiceAreaView;
- (struct CGRect)getVoiceAreaFrame;
- (void)initTBASRModuleEntrance;
- (void)openURLAndPop:(id)arg1;
- (void)showPhotoSearch;
- (void)optionMenuButtonClicked:(id)arg1;
- (void)cancelButtonClick;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldEditingChanged:(id)arg1;
- (void)toggleSubmodule:(id)arg1;
- (void)cleanHistory;
- (void)deleteSearchHistory:(id)arg1;
- (void)longPress:(id)arg1;
- (void)clickOnWidget:(id)arg1;
- (void)loadDefaultSuggestion;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)tapClipBoardTip:(id)arg1;
- (void)hideClipBoardTip:(id)arg1;
- (void)showClipBoardTip:(id)arg1;
- (id)clipBoardTipPath:(struct CGSize)arg1;
- (void)clipBoardTip;
- (void)viewDidLoad;
- (_Bool)tbfestival_isFestivalEnable;
- (void)setFestivalNavibar;
- (void)configTab;
- (void)configNavBar;
- (void)dealloc;
- (id)init;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

