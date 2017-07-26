//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutAlertControllerHelper.h"

#import "UIActionSheetDelegate.h"

@class NSString, UIActionSheet;

@interface TBTakeoutAlertControllerActionSheetHelper : TBTakeoutAlertControllerHelper <UIActionSheetDelegate>
{
    UIActionSheet *_actionSheet;
}

@property(retain, nonatomic) UIActionSheet *actionSheet; // @synthesize actionSheet=_actionSheet;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)addTextFieldWithConfigurationHandler:(CDUnknownBlockType)arg1;
- (void)addAction:(id)arg1;
- (id)control;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

