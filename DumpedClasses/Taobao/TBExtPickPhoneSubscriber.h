//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBExtBaseSubscriber.h"

#import "TBExtBuyContactPhonePickerDelegate.h"

@class NSString, TBExtBuyContactPhonePicker, TBTradeInputModel, UITextField;

@interface TBExtPickPhoneSubscriber : TBExtBaseSubscriber <TBExtBuyContactPhonePickerDelegate>
{
    UITextField *_textField;
    TBTradeInputModel *_model;
    TBExtBuyContactPhonePicker *_contactsPicker;
}

@property(retain, nonatomic) TBExtBuyContactPhonePicker *contactsPicker; // @synthesize contactsPicker=_contactsPicker;
@property(nonatomic) __weak TBTradeInputModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
- (void)selectPhonePickerOfNumber:(id)arg1;
- (id)handleEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

