//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBOBaseTitleUGCComponent.h"

@class UISwitch;

@interface TBOUGCSwitchComponent : TBOBaseTitleUGCComponent
{
    UISwitch *_switchCtrl;
}

+ (id)componentName;
@property(retain, nonatomic) UISwitch *switchCtrl; // @synthesize switchCtrl=_switchCtrl;
- (void).cxx_destruct;
- (void)publish:(CDUnknownBlockType)arg1;
- (void)applyData:(id)arg1;
- (void)applyStyle:(id)arg1;
- (id)defaultStyle;
- (void)onClicked:(id)arg1;
- (id)initWithContext:(id)arg1 parent:(id)arg2;

@end

