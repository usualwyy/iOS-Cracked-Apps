//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ONECommonAddressStoreDelegate.h"

@class NSMutableArray, NSString;

@interface OWKProductLineDataInterface : NSObject <ONECommonAddressStoreDelegate>
{
    NSMutableArray *_products;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *products; // @synthesize products=_products;
- (void).cxx_destruct;
- (void)poiModelDidChangeWithStore:(id)arg1;
- (void)didReceiveTravelEvent:(id)arg1;
- (void)sendToWatchTravelEvent:(id)arg1;
- (void)sendProductLinesData:(id)arg1;
- (_Bool)bind:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
