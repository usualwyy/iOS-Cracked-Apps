//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBSelectItemViewController.h"

#import "TBIMShareItemSearchDelegate.h"

@class NSString;

@interface TBIMShareItemViewController : TBSelectItemViewController <TBIMShareItemSearchDelegate>
{
    int _serviceType;
    NSString *_sessionId;
}

@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) int serviceType; // @synthesize serviceType=_serviceType;
- (void).cxx_destruct;
- (_Bool)shareItemSearch:(id)arg1 didSelectedItem:(id)arg2;
- (id)shareItemSearchSelectedItems:(id)arg1;
- (void)reflushStyle;
- (_Bool)tbfestival_isFestivalEnable;
- (void)tapToSearch:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSession:(id)arg1 sessionType:(int)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

