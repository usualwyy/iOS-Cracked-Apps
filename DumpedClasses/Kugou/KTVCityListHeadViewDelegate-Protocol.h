//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KTVCityListHeadView, NSArray, NSString;

@protocol KTVCityListHeadViewDelegate <NSObject>
- (void)headViewFrameHaveChanged:(KTVCityListHeadView *)arg1;
- (void)headView:(KTVCityListHeadView *)arg1 selectedLocationCityName:(NSString *)arg2;
- (void)headView:(KTVCityListHeadView *)arg1 selectedHotCityIndex:(long long)arg2;
- (void)headView:(KTVCityListHeadView *)arg1 selectedHistoryCityIndex:(long long)arg2;
- (NSArray *)historyCitysForCityListHeadView:(KTVCityListHeadView *)arg1;
- (NSArray *)hotCitysForCityListHeadView:(KTVCityListHeadView *)arg1;
@end
