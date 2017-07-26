//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NXViewModel.h"

#import "NXStoreProtocol.h"

@class NSMutableArray, NSString, TXDMemberModel;

@interface TXDPayCodeUserViewModel : NXViewModel <NXStoreProtocol>
{
    _Bool _hasMorePromotion;
    double _latitude;
    double _longitude;
    TXDMemberModel *_model;
    NSMutableArray *_heightsForCell;
}

@property(retain, nonatomic) NSMutableArray *heightsForCell; // @synthesize heightsForCell=_heightsForCell;
@property(nonatomic) _Bool hasMorePromotion; // @synthesize hasMorePromotion=_hasMorePromotion;
@property(retain, nonatomic) TXDMemberModel *model; // @synthesize model=_model;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
- (void).cxx_destruct;
- (double)heightForRightsCell:(unsigned long long)arg1;
- (double)heightForPromotionCell:(unsigned long long)arg1;
- (double)heightForCell:(unsigned long long)arg1 atSection:(unsigned long long)arg2;
- (_Bool)sectionIsPromotion:(unsigned long long)arg1;
- (id)titleForSection:(unsigned long long)arg1;
- (unsigned long long)numberOfPromotion;
- (unsigned long long)numberOfSectioin:(unsigned long long)arg1;
- (unsigned long long)sectionsOfUserData;
- (void)parse:(id)arg1;
- (Class)modelClass;
- (struct NSDictionary *)api;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

