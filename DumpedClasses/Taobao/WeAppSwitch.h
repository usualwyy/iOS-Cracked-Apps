//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeAppComponent.h"

@class TBSevenSwitch;

@interface WeAppSwitch : WeAppComponent
{
    TBSevenSwitch *_sevenSwitch;
}

@property(retain, nonatomic) TBSevenSwitch *sevenSwitch; // @synthesize sevenSwitch=_sevenSwitch;
- (void).cxx_destruct;
- (void)dealloc;
- (void)pushwButtonClicked:(id)arg1;
- (id)createView;
- (void)setupDataValueAndConditon;

@end

