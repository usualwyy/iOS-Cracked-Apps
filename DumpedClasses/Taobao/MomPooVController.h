//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MomRecordingVController.h"

#import "MomPooAttributeViewDelegate.h"

@class MomDateTimeBar, MomPooAttributeView, NSString, UILabel;

@interface MomPooVController : MomRecordingVController <MomPooAttributeViewDelegate>
{
    MomDateTimeBar *_dateTimeBar;
    UILabel *_pooIcon;
    MomPooAttributeView *_attributeView;
}

@property(retain, nonatomic) MomPooAttributeView *attributeView; // @synthesize attributeView=_attributeView;
@property(retain, nonatomic) UILabel *pooIcon; // @synthesize pooIcon=_pooIcon;
@property(retain, nonatomic) MomDateTimeBar *dateTimeBar; // @synthesize dateTimeBar=_dateTimeBar;
- (void).cxx_destruct;
- (id)newRecord;
- (void)pooColorDidChanged:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

