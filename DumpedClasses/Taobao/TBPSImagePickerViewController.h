//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBPSAdapterNavigationController.h"

#import "TBPSImagePickerViewControllerDelegate.h"

@class NSString;

@interface TBPSImagePickerViewController : TBPSAdapterNavigationController <TBPSImagePickerViewControllerDelegate>
{
    id <TBPSImagePickerViewControllerDelegate> _delegateObj;
}

+ (void)showImagePickerWithViewController:(id)arg1;
@property(nonatomic) id <TBPSImagePickerViewControllerDelegate> delegateObj; // @synthesize delegateObj=_delegateObj;
- (void)dealloc;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

