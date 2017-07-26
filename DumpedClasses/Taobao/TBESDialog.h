//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBDialog.h"

#import "TBESDialogEventDelegate.h"

@class NSString;

@interface TBESDialog : TBDialog <TBESDialogEventDelegate>
{
    id <TBESDialogOperationDelegate> _operationDelegate;
}

+ (id)sharedInstance;
+ (void)showDialogWithView:(id)arg1 forceShow:(_Bool)arg2;
+ (void)showEditionGuideDialogToExpectPositionInfo:(id)arg1;
+ (void)showEditionSelectDialog;
@property(nonatomic) __weak id <TBESDialogOperationDelegate> operationDelegate; // @synthesize operationDelegate=_operationDelegate;
- (void).cxx_destruct;
- (void)handleTapClose:(id)arg1;
- (void)hide;
- (void)onClickComfirmButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

