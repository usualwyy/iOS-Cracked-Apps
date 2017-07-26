//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MCChatCellHandler.h"

#import "UIAlertViewDelegate.h"

@class MCChatPageTableViewCellObject, NSString;

@interface MCChatSendCellHandler : MCChatCellHandler <UIAlertViewDelegate>
{
    MCChatPageTableViewCellObject *_currentCellObject;
}

@property(retain, nonatomic) MCChatPageTableViewCellObject *currentCellObject; // @synthesize currentCellObject=_currentCellObject;
- (void).cxx_destruct;
- (void)reSendMessage:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionWithCellModel:(id)arg1 cell:(id)arg2 actionType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

