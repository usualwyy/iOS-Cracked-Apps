//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface TBAddressShareByPushSuccessDialog : UIView
{
    CDUnknownBlockType _checkBlock;
    CDUnknownBlockType _closeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(copy, nonatomic) CDUnknownBlockType checkBlock; // @synthesize checkBlock=_checkBlock;
- (void).cxx_destruct;
- (void)hide;
- (void)checkSharingButtonClicked:(id)arg1;
- (void)closeButtonClicked:(id)arg1;
- (void)showWithCheckSharingBlock:(CDUnknownBlockType)arg1 closeBlock:(CDUnknownBlockType)arg2;
- (id)init;

@end

