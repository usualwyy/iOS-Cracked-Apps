//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMCellComponent.h"

#import "FMCardParserProtocol.h"

@class FMPersonalListActionRateModel, NSString;

@interface FMPersonalListRateComponent : FMCellComponent <FMCardParserProtocol>
{
    FMPersonalListActionRateModel *_model;
}

@property(retain, nonatomic) FMPersonalListActionRateModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (_Bool)parseCardData:(id)arg1 withType:(id)arg2;
- (Class)viewClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
