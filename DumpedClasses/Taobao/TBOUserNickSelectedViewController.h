//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseViewController.h"

#import "TNodeMessageHandler.h"

@class NSString;

@interface TBOUserNickSelectedViewController : TBOBaseViewController <TNodeMessageHandler>
{
    id _data;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) id data; // @synthesize data=_data;
- (void).cxx_destruct;
- (_Bool)onHandlerTNodeMessage:(struct TNodeMsg *)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNavigatorActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

