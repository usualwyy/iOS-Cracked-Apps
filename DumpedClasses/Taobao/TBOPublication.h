//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseViewController.h"

#import "TNodeMessageHandler.h"

@class NSArray<IUGCMiniComponent>, NSDictionary, NSString;

@interface TBOPublication : TBOBaseViewController <TNodeMessageHandler>
{
    _Bool _isModalViewController;
    _Bool _dimissedAnimated;
    NSArray<IUGCMiniComponent> *_handlers;
    NSDictionary *_data;
    NSString *_templateURL;
    CDUnknownBlockType _UGCPublishCallBack;
    id <TNode> _rootNode;
    NSString *_pageName;
}

+ (void)loadLocalDataWithOpenPage:(CDUnknownBlockType)arg1;
+ (id)handleURLActionRequest:(id)arg1;
+ (void)merge:(id)arg1 clientData:(id)arg2;
+ (id)getAllHandles:(id)arg1;
+ (id)getHandler:(id)arg1;
@property(copy, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(nonatomic) __weak id <TNode> rootNode; // @synthesize rootNode=_rootNode;
@property(nonatomic) _Bool dimissedAnimated; // @synthesize dimissedAnimated=_dimissedAnimated;
@property(copy, nonatomic) CDUnknownBlockType UGCPublishCallBack; // @synthesize UGCPublishCallBack=_UGCPublishCallBack;
@property(readonly, nonatomic) _Bool isModalViewController; // @synthesize isModalViewController=_isModalViewController;
@property(readonly, nonatomic) NSString *templateURL; // @synthesize templateURL=_templateURL;
@property(readonly, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSArray<IUGCMiniComponent> *handlers; // @synthesize handlers=_handlers;
- (void).cxx_destruct;
- (_Bool)onHandlerTNodeMessage:(struct TNodeMsg *)arg1;
- (id)findHandler:(id)arg1;
- (id)findHandlerWithType:(id)arg1;
- (id)getAllHandles;
- (void)onPublish:(id)arg1;
- (id)getSubmitString:(id)arg1;
- (_Bool)checkValid:(id)arg1;
- (void)onBack;
- (void)viewDidLoad;
- (id)initWithHandlers:(id)arg1 templatesURL:(id)arg2 data:(id)arg3 action:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

