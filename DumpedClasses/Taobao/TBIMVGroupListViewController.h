//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "TBIMGroupServiceDelegate.h"

@class MCVGroupSubGroupComponentFragment, NSString, TBIMPerformProxy;

@interface TBIMVGroupListViewController : UIViewController <TBIMGroupServiceDelegate>
{
    NSString *_groupId;
    TBIMPerformProxy *_performProxy;
    MCVGroupSubGroupComponentFragment *_subGroupComponentFragment;
    id <TBIMGroupServiceAdapter> _groupChatService;
}

@property(retain, nonatomic) id <TBIMGroupServiceAdapter> groupChatService; // @synthesize groupChatService=_groupChatService;
@property(retain, nonatomic) MCVGroupSubGroupComponentFragment *subGroupComponentFragment; // @synthesize subGroupComponentFragment=_subGroupComponentFragment;
@property(retain, nonatomic) TBIMPerformProxy *performProxy; // @synthesize performProxy=_performProxy;
@property(retain, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (void)groupUserUpdatedSuccess:(id)arg1;
- (void)groupInfoChange:(id)arg1 success:(unsigned long long)arg2;
- (void)clickVirtualGroupManage:(id)arg1;
- (void)setupNavigationBar;
- (void)reflushStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

