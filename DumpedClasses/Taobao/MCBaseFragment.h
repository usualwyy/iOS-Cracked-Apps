//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MCBaseFragmentProtocol.h"
#import "MCStatusProtocol.h"

@class NSMutableArray<MCBasePresenterProtocol>, NSMutableArray<MCPluginBaseProtocol>, NSString, UIView, UIViewController;

@interface MCBaseFragment : NSObject <MCBaseFragmentProtocol, MCStatusProtocol>
{
    UIViewController *_baseVC;
    NSString *_pageName;
    NSString *_bizKey;
    NSMutableArray<MCBasePresenterProtocol> *_presenterArray;
    UIView *_fragementView;
    NSMutableArray<MCPluginBaseProtocol> *_pluginList;
}

@property(retain, nonatomic) NSMutableArray<MCPluginBaseProtocol> *pluginList; // @synthesize pluginList=_pluginList;
@property(retain, nonatomic) UIView *fragementView; // @synthesize fragementView=_fragementView;
@property(retain, nonatomic) NSMutableArray<MCBasePresenterProtocol> *presenterArray; // @synthesize presenterArray=_presenterArray;
- (void).cxx_destruct;
- (void)removePlugin:(id)arg1;
- (void)addPlugin:(id)arg1;
- (void)setViewLayout:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)getConponetViews;
- (void)runPlugin;
- (id)getContext;
- (void)setPageName:(id)arg1;
- (id)getPageName;
- (void)addPresenter:(id)arg1;
- (id)getBaseVC;
- (void)setBaseVC:(id)arg1;
- (void)loadDataAndRefreshUI;
- (id)getView;
- (void)unLoad:(id)arg1;
- (void)load:(id)arg1;
- (void)logout;
- (void)login;
- (id)initWithFrame:(struct CGRect)arg1 bizKey:(id)arg2 baseVC:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

