//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class MCChatPageConfig, MCOfficialContentFragment, NSString;

@interface TBIMOfficialHistoryMessageViewController : UIViewController
{
    MCOfficialContentFragment *_officialContentFragment;
    NSString *_msgTypeId;
    MCChatPageConfig *_config;
    id <TBIMSessionOfficialAdapter> _soa;
}

@property(retain, nonatomic) id <TBIMSessionOfficialAdapter> soa; // @synthesize soa=_soa;
@property(retain, nonatomic) MCChatPageConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *msgTypeId; // @synthesize msgTypeId=_msgTypeId;
@property(retain, nonatomic) MCOfficialContentFragment *officialContentFragment; // @synthesize officialContentFragment=_officialContentFragment;
- (void).cxx_destruct;
- (void)reflushStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

@end

