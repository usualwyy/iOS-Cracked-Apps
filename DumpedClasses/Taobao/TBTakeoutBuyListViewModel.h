//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBTakeoutNewViewModel.h"

@class NSArray, TBLSPOIEntity;

@interface TBTakeoutBuyListViewModel : TBTakeoutNewViewModel
{
    TBLSPOIEntity *_poiEntity;
    NSArray *_listModels;
}

@property(readonly, nonatomic) NSArray *listModels; // @synthesize listModels=_listModels;
@property(retain, nonatomic) TBLSPOIEntity *poiEntity; // @synthesize poiEntity=_poiEntity;
- (void).cxx_destruct;
- (void)parseResult:(id)arg1;

@end

