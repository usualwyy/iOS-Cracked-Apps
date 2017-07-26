//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBRatePublishBaseViewController.h"

#import "OrderRateCommitProtocol.h"
#import "TBModelStatusDelegate.h"
#import "TBRateBaseCellDelegate.h"
#import "UIActionSheetDelegate.h"

@class NSString, TBRateOrderRateInfoComponent, TBRateResult, TBRateStatusHandle;

@interface TBRatePublishViewController : TBRatePublishBaseViewController <TBModelStatusDelegate, OrderRateCommitProtocol, TBRateBaseCellDelegate, UIActionSheetDelegate>
{
    _Bool _hasError;
    _Bool _hasEdit;
    TBRateOrderRateInfoComponent *_orderRateInfoComponent;
    TBRateStatusHandle *_handler;
    NSString *_orderId;
    long long _editIndex;
    TBRateResult *_result;
}

+ (id)handleURLActionRequest:(id)arg1;
@property(retain, nonatomic) TBRateResult *result; // @synthesize result=_result;
@property(nonatomic) _Bool hasEdit; // @synthesize hasEdit=_hasEdit;
@property(nonatomic) long long editIndex; // @synthesize editIndex=_editIndex;
@property(nonatomic) _Bool hasError; // @synthesize hasError=_hasError;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(retain, nonatomic) TBRateStatusHandle *handler; // @synthesize handler=_handler;
@property(retain, nonatomic) TBRateOrderRateInfoComponent *orderRateInfoComponent; // @synthesize orderRateInfoComponent=_orderRateInfoComponent;
- (void).cxx_destruct;
- (void)editPhotoFinished:(id)arg1 index:(long long)arg2;
- (void)reloadDatas;
- (void)backItemClicked:(id)arg1;
- (void)buttonInput;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)submitDoRateItemRequest;
- (void)doRateItem;
- (void)uploadPicAction:(id)arg1 completion:(CDUnknownBlockType)arg2 progress:(CDUnknownBlockType)arg3;
- (void)addPhotoToUploadPhotos:(id)arg1 component:(id)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)addPhoto:(long long)arg1;
- (void)didReceiveMemoryWarning;
- (void)renderViewController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

